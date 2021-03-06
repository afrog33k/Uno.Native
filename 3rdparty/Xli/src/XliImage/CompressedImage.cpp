//
// Copyright (C) 2010-2014 Outracks Technologies
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
// associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or substantial
// portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
// NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
// OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#include <XliImage/CompressedImage.h>

namespace Xli
{
    CompressedImage::CompressedImage(int width, int height, int depth, Format format, DataAccessor* data)
    {
        this->w = width;
        this->h = height;
        this->d = depth;
        this->format = format;
        this->data = data;
    }

    int CompressedImage::GetWidth() const
    {
        return w;
    }

    int CompressedImage::GetHeight() const
    {
        return h;
    }

    int CompressedImage::GetDepth() const
    {
        return d;
    }

    Format CompressedImage::GetFormat() const
    {
        return format;
    }

    Bitmap* CompressedImage::ToBitmap()
    {
        XLI_THROW("Unable to convert compressed image with format '" + FormatInfo::ToString(format) + "' to bitmap");
    }

    int CompressedImage::GetSizeInBytes() const
    {
        return data->GetSizeInBytes();
    }

    const UInt8* CompressedImage::GetPtr() const
    {
        return data->GetPtr();
    }
}
