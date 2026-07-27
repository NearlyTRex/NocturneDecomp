// Name: engine_model.c_FUN_004dcee0
// Address: 004dcee0
// Address Range: [[004dcee0, 004dcf59]]
// Convention: unknown
// Signature: void engine_model_c_FUN_004dcee0(int *param_1)

#include "nocturne.h"

void engine_model_c_FUN_004dcee0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0x20) {
      engine_model_c_FUN_004dcee0(param_1[5]);
      iVar1 = 0;
      piVar2 = param_1;
      if (0 < param_1[2]) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_FUN_004dcee0(piVar2[0x46]);
          piVar2 = piVar2 + 1;
        } while (iVar1 < param_1[2]);
      }
      FUN_005638d0(param_1);
      return;
    }
    if (*param_1 != 0x26) {
      FUN_005638d0(param_1);
      return;
    }
    engine_boss_c_FUN_0041a570(param_1);
  }
  return;
}
