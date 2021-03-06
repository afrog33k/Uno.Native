/* * Copyright (C) 2010-2014 Outracks Technologies
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
 * NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __XLI_MEDIA_IMAGE_READER_H__
#define __XLI_MEDIA_IMAGE_READER_H__

#include <XliImage/Format.h>
#include <XliImage/ProgressCallback.h>
#include <XliImage/Bitmap.h>

namespace Xli
{
    /**
        \ingroup XliImage
    */
    class ImageReader: public Object
    {
    public:
        virtual ~ImageReader() {}

        virtual int GetWidth() = 0;
        virtual int GetHeight() = 0;
        virtual int GetDepth() = 0;
        virtual int GetBufferSize() = 0;
        virtual Format GetFormat() = 0;

        virtual void Read(void* targetBuffer, ProgressCallback* callback = 0) = 0;

        virtual Buffer* ReadBuffer(ProgressCallback* callback = 0);
        virtual Bitmap* ReadBitmap(ProgressCallback* callback = 0);
    };
}

#endif
