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
#ifndef TIM_VX_OPS_SCATTERND_ONNX_V16_H_
#define TIM_VX_OPS_SCATTERND_ONNX_V16_H_
#include "tim/vx/builtin_op.h"

namespace tim {
namespace vx {
namespace ops {

/**
 * ## ScatterND_ONNX_V16
 *
 * Scatter updates into a new tensor according to indices.
 *
 * - reduction: Type of reduction to apply: none (default), add, mul, max, min.
 */

class ScatterND_ONNX_V16 : public BuiltinOp {
 public:
  enum ReductionType {
    REDUCTION_NONE,
    REDUCTION_ADD,
    REDUCTION_MUL,
    REDUCTION_MAX,
    REDUCTION_MIN
  };
  ScatterND_ONNX_V16(Graph* graph, ReductionType reduction = ReductionType::REDUCTION_NONE);

  std::shared_ptr<Operation> Clone(std::shared_ptr<Graph>& graph) const override;
 protected:
  ReductionType reduction_;
};

}  // namespace ops
}  // namespace vx
}  // namespace tim

#endif /* TIM_VX_OPS_SCATTERND_ONNX_V16_H_ */
