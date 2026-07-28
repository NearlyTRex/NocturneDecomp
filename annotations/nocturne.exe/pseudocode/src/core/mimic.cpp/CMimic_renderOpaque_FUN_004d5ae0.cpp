// Name: core_mimic.cpp_CMimic_renderOpaque_FUN_004d5ae0
// Address: 004d5ae0
// Address Range: [[004d5ae0, 004d5af9]]
// Convention: unknown
// Signature: int core_mimic_cpp_CMimic_renderOpaque_FUN_004d5ae0(CMimic *param_1)

#include "nocturne.h"

int core_mimic_cpp_CMimic_renderOpaque_FUN_004d5ae0(CMimic *param_1)

{
  int iVar1;
  
  if ((param_1->base).base.base.is_transparent != 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(param_1);
  return iVar1;
}
