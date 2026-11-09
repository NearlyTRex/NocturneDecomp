// Name: engine_font.cpp_FUN_004a8df0
// Address: 004a8df0
// Address Range: [[004a8df0, 004a90a3]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004a8df0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_FUN_004a8df0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint character_code;
  int iVar2;
  uint extraout_ECX;
  byte *pbVar3;
  float10 fVar4;
  byte *local_14;
  
  if ((*(int *)(param_1 + 0x420c) != 0) && (_DAT_01c37788 != 0)) {
    if (*(int *)(param_1 + 0x4210) == 0) {
      iVar1 = unkafter_font_cpp_FUN_004ab840(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar1 = unkafter_palette_cpp_FUN_00510cd0
                        (*(uint *)(param_1 + 0x4214),param_2,param_3,param_4,param_5,param_6);
    }
    return iVar1;
  }
  if (*(int *)(param_1 + 0x4210) == 0) {
    iVar1 = param_3;
    if (*(int *)(param_1 + 0x420c) != 0) {
      fVar4 = (float10)_DAT_01d09860 * (float10)_DAT_005d69dd;
      round();
      *(uint *)(param_1 + 0x1de0) = extraout_ECX | (int)ROUND(fVar4) << 0x18;
    }
    while (character_code = (uint)*param_2, character_code != 0) {
      if (character_code == 0xd) {
        param_2 = param_2 + 1;
      }
      else if (character_code == 10) {
        param_4 = param_4 + *(int *)(param_1 + 0x41f0) + *(int *)(param_1 + 0x41f8);
        param_2 = param_2 + 1;
        iVar1 = param_3;
      }
      else {
        iVar2 = engine_font_cpp_FUN_004a9870(param_1,character_code,iVar1,param_4,param_5,param_6);
        param_2 = param_2 + 1;
        iVar1 = iVar1 + iVar2;
      }
    }
    return iVar1 - param_3;
  }
  local_14 = param_2;
  do {
    pbVar3 = param_2;
    if (*param_2 == 10) goto LAB_004a8e88;
    if (*param_2 == 0) goto LAB_004a8e86;
    pbVar3 = param_2 + 1;
    if (*pbVar3 == 10) goto LAB_004a8e88;
    param_2 = param_2 + 2;
    if (*pbVar3 == 0) {
LAB_004a8e86:
      pbVar3 = (byte *)0x0;
LAB_004a8e88:
      if (pbVar3 != (byte *)0x0) {
        *pbVar3 = 0;
      }
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4214) + 0x6a44) + 4))
                        (*(int *)(param_1 + 0x4214),local_14,param_3,param_4,param_5,param_6);
      if (iVar1 == -1) {
        *(uint *)(param_1 + 0x4210) = 0;
        iVar1 = engine_font_cpp_FUN_004a8df0(param_1,local_14,param_3,param_4,param_5,param_6);
        *(uint *)(param_1 + 0x4210) = 1;
      }
      if (pbVar3 == (byte *)0x0) {
        return iVar1;
      }
      param_2 = pbVar3 + 1;
      *pbVar3 = 10;
      param_4 = param_4 + *(int *)(param_1 + 0x41f0) + *(int *)(param_1 + 0x41f8);
      local_14 = param_2;
    }
  } while( true );
}
