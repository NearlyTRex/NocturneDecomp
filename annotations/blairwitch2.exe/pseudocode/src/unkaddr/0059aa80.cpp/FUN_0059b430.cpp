// Name: unkaddr_0059aa80.cpp_FUN_0059b430
// Address: 0059b430
// Address Range: [[0059b430, 0059b59e]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059b430(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_0059aa80_cpp_FUN_0059b430(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  iVar2 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900((CAlphaBitmap *)(param_1 + 1),0,0,0xffff);
  piVar1 = param_1;
  if (0 < param_1[7]) {
    do {
      if (piVar1[0x1d] == 1) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
                  ((CAlphaBitmap *)(param_1 + iVar2 * 0xb + 0x13),piVar1[0x19],piVar1[0x1a],0xffff);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xb;
    } while (iVar2 < param_1[7]);
  }
  if (param_1[0xc] == 0) {
    param_1[0x12] =
         (int)((float)(param_1[0x10] + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005ef584 +
              (float)param_1[0x12]);
  }
  if (param_1[0xc] == 2) {
    param_1[0x12] =
         (int)((float)param_1[0x12] -
              (float)(param_1[0x10] + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005ef584);
  }
  iVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(param_1[0x12]);
  param_1[0x12] = iVar2;
  (**(code **)(*param_1 + 0x3c))(param_1,1,8,param_1[0x12],0);
  (**(code **)(*param_1 + 0x3c))(param_1,4,4,param_1[0x12],1);
  (**(code **)(*param_1 + 0x3c))(param_1,0x17d,8,param_1[0x12],0);
  (**(code **)(*param_1 + 0x3c))(param_1,0x181,4,param_1[0x12],1);
  iVar2 = param_1[6];
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (CAlphaBitmap_ARRAY_026677ec + iVar2,_DAT_01c2a37c - param_1[iVar2 + 0x21b],
             _DAT_01c2a380 - param_1[iVar2 + 0x21f],0xffff);
  return;
}
