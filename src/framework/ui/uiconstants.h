/* The MIT License
 *
 * Copyright (c) 2010 OTClient, https://github.com/edubart/otclient
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#ifndef UICONSTANTS_H
#define UICONSTANTS_H

namespace UI {
    enum EButtonState
    {
        ButtonUp,
        ButtonDown,
        ButtonMouseOver
    };

    enum EButtonEvent
    {
        ButtonPressUp,
        ButtonPressDown,
        ButtonEnterMouseOver,
        ButtonLeaveMouseOver
    };

    enum EMessageBoxFlags
    {
        MessageBoxOk = 1 << 0,
        MessageBoxCancel = 1 << 1,
        MessageBoxYes = 1 << 2,
        MessageBoxNo = 1 << 3,
        MessageBoxOkCancel = MessageBoxOk | MessageBoxCancel,
        MessageBoxYesNo = MessageBoxYes | MessageBoxNo
    };

    enum EElementType
    {
        Element,
        Container,
        Panel,
        Window,
        Label,
        TextBox,
        Button,
        CheckBox
    };
}

#endif  // UICONSTANTS_H
