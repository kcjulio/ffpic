/* 
    src/lib/button.h

    MIT License

    Copyright (c) 2021 Julio Cesar Kochhann

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
 */
#ifndef BUTTON_H
#define BUTTON_H

#define Button_Debounce( delay )  pause( delay );

enum _Button_Active_State {
    ACTIVE_LOW = 0,
    ACTIVE_HIGH
};

typedef struct {
    volatile uint8_t* tris;
    volatile uint8_t* port;
    uint8_t pin;
    uint8_t active_state;
} Button_t;

/* Function Prototypes */
inline void Button_Init(Button_t* btn);
inline bool Button_Press(Button_t* btn);

#endif