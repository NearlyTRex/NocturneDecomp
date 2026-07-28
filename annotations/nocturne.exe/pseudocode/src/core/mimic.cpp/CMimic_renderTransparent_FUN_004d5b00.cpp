// Name: core_mimic.cpp_CMimic_renderTransparent_FUN_004d5b00
// Address: 004d5b00
// Address Range: [[004d5b00, 004d5b0f]]
// Convention: unknown
// Signature: int core_mimic_cpp_CMimic_renderTransparent_FUN_004d5b00(CMimic *param_1)

#include "nocturne.h"

int core_mimic_cpp_CMimic_renderTransparent_FUN_004d5b00(CMimic *param_1)

{
  int iVar1;
  
  if ((param_1->base).base.base.is_transparent == 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(param_1);
  return iVar1;
}
