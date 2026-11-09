// Name: engine_model.c_FUN_0051f8a0
// Address: 0051f8a0
// Address Range: [[0051f8a0, 0051f919]]
// Convention: unknown
// Signature: void engine_model_c_FUN_0051f8a0(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

void engine_model_c_FUN_0051f8a0(SMRGLHeaderExtended *param_1)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (param_1 != (SMRGLHeaderExtended *)0x0) {
    if (*(int *)param_1 == 0x20) {
      engine_model_c_FUN_0051f8a0(*(uint *)(param_1 + 0x14));
      iVar1 = 0;
      pSVar2 = param_1;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_FUN_0051f8a0(*(uint *)(pSVar2 + 0x118));
          pSVar2 = pSVar2 + 4;
        } while (iVar1 < *(int *)(param_1 + 8));
      }
      FUN_005c09f0(param_1);
      return;
    }
    if (*(int *)param_1 != 0x26) {
      FUN_005c09f0(param_1);
      return;
    }
    engine_boss_c_modelStructNotSupported3_FUN_0041d950(param_1);
  }
  return;
}
