// Name: engine_font.cpp_FUN_004b0a20
// Address: 004b0a20
// Address Range: [[004b0a20, 004b0ca2]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004b0a20(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_FUN_004b0a20(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint extraout_ECX;
  byte *pbVar4;
  uint character_code;
  float10 fVar5;
  
  if ((*(int *)(param_1 + 0x420c) != 0) && (_DAT_01c6cee8 != 0)) {
    if (*(int *)(param_1 + 0x4210) == 0) {
      iVar1 = unkafter_font_cpp_FUN_004b33d0(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar1 = unkafter_palette_cpp_FUN_00509bc0
                        (*(uint *)(param_1 + 0x4214),param_2,param_3,param_4,param_5,param_6);
    }
    return iVar1;
  }
  pbVar3 = param_2;
  if (*(int *)(param_1 + 0x4210) == 0) {
    iVar1 = param_3;
    if (*(int *)(param_1 + 0x420c) != 0) {
      fVar5 = (float10)_DAT_01d76c40 * (float10)_DAT_005c2074;
      round();
      *(uint *)(param_1 + 0x1de0) = extraout_ECX | (int)ROUND(fVar5) << 0x18;
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
        iVar2 = engine_font_cpp_FUN_004b1460(param_1,character_code,iVar1,param_4,param_5,param_6);
        param_2 = param_2 + 1;
        iVar1 = iVar1 + iVar2;
      }
    }
    return iVar1 - param_3;
  }
  do {
    pbVar4 = param_2;
    if (*param_2 == 10) goto LAB_004b0ac4;
    if (*param_2 == 0) goto LAB_004b0ac2;
    pbVar4 = param_2 + 1;
    if (*pbVar4 == 10) goto LAB_004b0ac4;
    param_2 = param_2 + 2;
    if (*pbVar4 == 0) {
LAB_004b0ac2:
      pbVar4 = (byte *)0x0;
LAB_004b0ac4:
      if (pbVar4 != (byte *)0x0) {
        *pbVar4 = 0;
      }
      unkafter_palette_cpp_FUN_00509bc0
                (*(uint *)(param_1 + 0x4214),pbVar3,param_3,param_4,param_5,param_6);
      unkafter_palette_cpp_FUN_00509d90(*(uint *)(param_1 + 0x4214));
      if (pbVar4 == (byte *)0x0) {
        return 0;
      }
      *pbVar4 = 10;
      param_2 = pbVar4 + 1;
      param_4 = param_4 + *(int *)(param_1 + 0x41f0) + *(int *)(param_1 + 0x41f8);
      pbVar3 = param_2;
    }
  } while( true );
}
