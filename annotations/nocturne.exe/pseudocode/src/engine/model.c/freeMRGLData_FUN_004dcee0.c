// Name: engine_model.c_freeMRGLData_FUN_004dcee0
// Address: 004dcee0
// Address Range: [[004dcee0, 004dcf59]]
// Convention: unknown
// Signature: void engine_model_c_freeMRGLData_FUN_004dcee0(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

void engine_model_c_freeMRGLData_FUN_004dcee0(SMRGLHeaderExtended *param_1)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (param_1 != (SMRGLHeaderExtended *)0x0) {
    iVar1 = (param_1->base).type;
    if (iVar1 == 0x20) {
      engine_model_c_freeMRGLData_FUN_004dcee0(param_1[1].child_count);
      iVar1 = 0;
      pSVar2 = param_1;
      if (0 < param_1->child_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_freeMRGLData_FUN_004dcee0(pSVar2[0x17].base.count);
          pSVar2 = (SMRGLHeaderExtended *)&(pSVar2->base).count;
        } while (iVar1 < param_1->child_count);
      }
      FUN_005638d0(param_1);
      return;
    }
    if (iVar1 != 0x26) {
      FUN_005638d0(param_1);
      return;
    }
    engine_boss_c_modelStructNotSupported3_FUN_0041a570(param_1);
  }
  return;
}
