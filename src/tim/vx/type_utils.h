/****************************************************************************
*
*    Copyright (c) 2020-2023 Vivante Corporation
*
*    Permission is hereby granted, free of charge, to any person obtaining a
*    copy of this software and associated documentation files (the "Software"),
*    to deal in the Software without restriction, including without limitation
*    the rights to use, copy, modify, merge, publish, distribute, sublicense,
*    and/or sell copies of the Software, and to permit persons to whom the
*    Software is furnished to do so, subject to the following conditions:
*
*    The above copyright notice and this permission notice shall be included in
*    all copies or substantial portions of the Software.
*
*    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
*    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
*    DEALINGS IN THE SOFTWARE.
*
*****************************************************************************/
#ifndef TIM_VX_TYPE_UTILS_H_
#define TIM_VX_TYPE_UTILS_H_

#include "tim/vx/types.h"
#include "vsi_nn_pub.h"

namespace tim {
namespace vx {
vsi_nn_type_e TranslateDataType(DataType dtype);
vsi_nn_qnt_type_e TranslateQuantType(QuantType qtype);
vsi_nn_pad_e TranslatePadType(PadType pad);
vsi_enum TranslatePoolType(PoolType type);
vsi_nn_round_type_e TranslateRoundType(RoundType type);
vsi_enum TranslateOverflowPolicy(OverflowPolicy type);
vsi_enum TranslateRoundingPolicy(RoundingPolicy type);
vsi_enum TranslateDownScaleSizeRounding(RoundType type);
vsi_enum TranslateResizeType(ResizeType type);
vx_bool_e ToVxBool(bool val);
vsi_bool TranslateToVsibool(bool val);
}  // namespace vx
}  // namespace tim

#endif /* TIM_VX_TYPE_UTILS_H_ */
