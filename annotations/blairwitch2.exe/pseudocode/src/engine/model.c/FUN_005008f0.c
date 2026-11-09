// Name: engine_model.c_FUN_005008f0
// Address: 005008f0
// Address Range: [[005008f0, 00500969]]
// Convention: unknown
// Signature: void engine_model_c_FUN_005008f0(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

void engine_model_c_FUN_005008f0(SMRGLHeaderExtended *param_1)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (param_1 != (SMRGLHeaderExtended *)0x0) {
    if (*(int *)param_1 == 0x20) {
      engine_model_c_FUN_005008f0(*(uint *)(param_1 + 0x14));
      iVar1 = 0;
      pSVar2 = param_1;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_FUN_005008f0(*(uint *)(pSVar2 + 0x118));
          pSVar2 = pSVar2 + 4;
        } while (iVar1 < *(int *)(param_1 + 8));
      }
      FUN_005b86a0(param_1);
      return;
    }
    if (*(int *)param_1 != 0x26) {
      FUN_005b86a0(param_1);
      return;
    }
    engine_boss_c_modelStructNotSupported3_FUN_0041a4e0(param_1);
  }
  return;
}
