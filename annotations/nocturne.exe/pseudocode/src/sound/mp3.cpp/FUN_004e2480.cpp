// Name: sound_mp3.cpp_FUN_004e2480
// Address: 004e2480
// Address Range: [[004e2480, 004e25bd]]
// Convention: unknown
// Signature: int sound_mp3_cpp_FUN_004e2480(int *param_1)

#include "nocturne.h"

int sound_mp3_cpp_FUN_004e2480(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint uVar7;
  
  piVar2 = (int *)*param_1;
  iVar3 = *piVar2;
  iVar5 = *(int *)(&DAT_005bbc88 + piVar2[3] * 4 + iVar3 * 0xb4 + (piVar2[1] + -1) * 0x3c) /
          param_1[4];
  iVar4 = param_1[6];
  uVar7 = 0x4e24ed;
  dVar6 = round(*(double *)(&DAT_005bbc48 + piVar2[4] * 8 + iVar3 * 0x20));
  iVar1 = (int)ROUND(dVar6);
  if (iVar3 == 1) {
    if (((iVar1 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
      if (param_1[3] == 0) {
        return iVar4;
      }
    }
    else if ((iVar1 == 0x30) || (iVar5 < 0x60)) {
      if ((iVar1 == 0x20) || (0x30 < iVar5)) {
        if (param_1[3] == 3) {
          return iVar4;
        }
      }
      else if (param_1[3] == 2) {
        return iVar4;
      }
    }
    else if (param_1[3] == 1) {
      return iVar4;
    }
  }
  else if (param_1[3] == 4) {
    return iVar4;
  }
  g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
  g_INT_01cc4804 = 0x1a1;
  core_main_c_FUN_004c8440("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01cd8b28,uVar7);
  return iVar4;
}
