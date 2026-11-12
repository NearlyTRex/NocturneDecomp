// Name: engine_model.c_freeMRGLData_FUN_004f80f0
// Address: 004f80f0
// Address Range: [[004f80f0, 004f8169]]
// Convention: unknown
// Signature: void engine_model_c_freeMRGLData_FUN_004f80f0(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

void engine_model_c_freeMRGLData_FUN_004f80f0(SMRGLHeaderExtended *param_1)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (param_1 != (SMRGLHeaderExtended *)0x0) {
    iVar1 = (param_1->base).type;
    if (iVar1 == 0x20) {
      engine_model_c_freeMRGLData_FUN_004f80f0(param_1[1].child_count);
      iVar1 = 0;
      pSVar2 = param_1;
      if (0 < param_1->child_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_freeMRGLData_FUN_004f80f0(pSVar2[0x17].base.count);
          pSVar2 = (SMRGLHeaderExtended *)&(pSVar2->base).count;
        } while (iVar1 < param_1->child_count);
      }
      FUN_005a3770(param_1);
      return;
    }
    if (iVar1 != 0x26) {
      FUN_005a3770(param_1);
      return;
    }
    engine_boss_c_modelStructNotSupported3_FUN_0041ac90(param_1);
  }
  return;
}
