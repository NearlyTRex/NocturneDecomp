// Name: engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0
// Address: 0040e8c0
// Address Range: [[0040e8c0, 0040e9d4]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7 ,undefined4 param_8)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7 ,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  
  iVar1 = (param_6 - param_4) + 1;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(param_1);
  iVar3 = (param_7 - param_5) + 1;
  param_4 = param_5 * param_1[3] + param_4;
  iVar4 = *param_1 + param_4;
  param_4 = param_4 + param_1[1];
  local_18 = param_3 * 4;
  iVar2 = iVar3 * 4 + local_18;
  if (DAT_005b7624 == 0x20) {
    if (0 < iVar3) {
      do {
        engine_special_cpp_renderAlphaRow32_FUN_0053055c
                  (*(int *)(&DAT_01bd2fa0 + local_18) + param_2 * 4,iVar4,param_4,param_8,iVar1);
        iVar4 = iVar4 + param_1[3];
        local_18 = local_18 + 4;
        param_4 = param_4 + param_1[3];
      } while (local_18 < iVar2);
    }
  }
  else if (0 < iVar3) {
    local_14 = local_18;
    do {
      engine_special_cpp_renderAlphaRow16_FUN_005305f7
                (*(int *)(&DAT_01bd2fa0 + local_14) + param_2 * 2,iVar4,param_4,param_8,iVar1);
      iVar4 = iVar4 + param_1[3];
      local_14 = local_14 + 4;
      param_4 = param_4 + param_1[3];
    } while (local_14 < iVar2);
    return;
  }
  return;
}
