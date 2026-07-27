// Name: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
// Address: 0040e710
// Address Range: [[0040e710, 0040e8b8]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(int *param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((((-1 < param_1[3] + param_2) && (param_2 < DAT_005b761c)) && (-1 < param_3 + param_1[4])) &&
     (param_3 < DAT_005b7620)) {
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(param_1);
    local_14 = *param_1;
    iVar4 = param_1[1];
    if (DAT_005b7624 == 0x20) {
      local_24 = 0;
      if (0 < param_1[4]) {
        local_18 = param_3;
        do {
          if ((-1 < local_18) && (local_18 < DAT_005b7620)) {
            iVar2 = *(int *)(&DAT_01bd2fa0 + local_18 * 4);
            iVar1 = param_1[3];
            iVar3 = 0;
            if (param_2 < 0) {
              iVar3 = -param_2;
              iVar1 = iVar1 + param_2;
            }
            else {
              iVar2 = iVar2 + param_2 * 4;
            }
            if (DAT_005b761c < param_2 + iVar1) {
              iVar1 = DAT_005b761c - param_2;
            }
            engine_special_cpp_renderAlphaRow32_FUN_0053055c
                      (iVar2,iVar3 + local_14,iVar3 + iVar4,param_4,iVar1);
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + param_1[3];
          iVar4 = iVar4 + param_1[3];
          local_24 = local_24 + 1;
        } while (local_24 < param_1[4]);
      }
    }
    else {
      local_20 = 0;
      if (0 < param_1[4]) {
        local_1c = param_3;
        do {
          if ((-1 < local_1c) && (local_1c < DAT_005b7620)) {
            iVar2 = *(int *)(&DAT_01bd2fa0 + local_1c * 4);
            iVar1 = param_1[3];
            iVar3 = 0;
            if (param_2 < 0) {
              iVar3 = -param_2;
              iVar1 = iVar1 + param_2;
            }
            else {
              iVar2 = iVar2 + param_2 * 2;
            }
            if (DAT_005b761c < param_2 + iVar1) {
              iVar1 = DAT_005b761c - param_2;
            }
            engine_special_cpp_renderAlphaRow16_FUN_005305f7
                      (iVar2,iVar3 + local_14,iVar3 + iVar4,param_4,iVar1);
          }
          local_1c = local_1c + 1;
          local_14 = local_14 + param_1[3];
          iVar4 = iVar4 + param_1[3];
          local_20 = local_20 + 1;
        } while (local_20 < param_1[4]);
      }
    }
  }
  return;
}
