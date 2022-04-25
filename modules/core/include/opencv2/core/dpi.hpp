// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
//
//                          License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2020, Huawei Technologies Co., Ltd. All rights reserved.
// Third party copyrights are property of their respective owners.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef OPENCV_CORE_DPI_HPP
#define OPENCV_CORE_DPI_HPP

#ifndef __cplusplus
#error dpi.hpp header must be compiled as C++
#endif

#include <vector>
#include "opencv2/core/cvdef.h"

namespace cv
{
    struct CV_EXPORTS Dpi
    {
        Dpi()
            : x_pixels_per_unit(0),
              y_pixels_per_unit(0),
              phys_unit_type(0),
              X_density(1),
              Y_density(1),
              density_unit(0),
              X_resolution(-1.0),
              Y_resolution(-1.0),
              resolution_unit(-1)
        {
        }

        Dpi(uint32_t _x_pixels_per_unit, uint32_t _y_pixels_per_unit, uint8_t _phys_unit_type, uint16_t _X_density, uint16_t _Y_density, uint8_t _density_unit, float _X_resolution, float _Y_resolution, uint16_t _resolution_unit)
            : x_pixels_per_unit(_x_pixels_per_unit),
              y_pixels_per_unit(_y_pixels_per_unit),
              phys_unit_type(_phys_unit_type),
              X_density(_X_density),
              Y_density(_Y_density),
              density_unit(_density_unit),
              X_resolution(_X_resolution),
              Y_resolution(_Y_resolution),
              resolution_unit(_resolution_unit)
        {
        }

        // PNG
        uint32_t x_pixels_per_unit; /* horizontal pixel density */
        uint32_t y_pixels_per_unit; /* vertical pixel density */
        //! physical resolution unit. '0' pixels/unknown unit (aspect ratio), '1' pixels/meter, '2' Not a valid value
        uint8_t phys_unit_type;

        // JPEG
        uint16_t X_density;   /* Horizontal pixel density */
        uint16_t Y_density;   /* Vertical pixel density */
        uint8_t density_unit; /* JFIF code for pixel size units */

        // TIFF
        float X_resolution; /* pixels/resolution in x */
        float Y_resolution; /* pixels/resolution in y */
        int16_t resolution_unit;
    };
}
#endif /* OPENCV_CORE_DPI_HPP */