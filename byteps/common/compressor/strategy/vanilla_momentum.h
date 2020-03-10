// Copyright 2020 Amazon Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// =============================================================================

#ifndef BYTEPS_COMPRESS_VANILLA_MOM_H
#define BYTEPS_COMPRESS_VANILLA_MOM_H

#include "../momentum.h"

namespace byteps {
namespace common {
namespace compressor {

class VanillaMomentumCompressor : public Momentum {
 public:
  VanillaMomentumCompressor(std::unique_ptr<BaseCompressor> compressor_ptr,
                            float mu);
  virtual ~VanillaMomentumCompressor();

 protected:
  void UpdateMom(ByteBuf grad, int dtype, ByteBuf& mom) override;
};

}  // namespace compressor
}  // namespace common
}  // namespace byteps

#endif