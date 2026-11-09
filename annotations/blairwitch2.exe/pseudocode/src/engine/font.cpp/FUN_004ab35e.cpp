// Name: engine_font.cpp_FUN_004ab35e
// Address: 004ab35e
// Address Range: [[004ab35e, 004ab529]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004ab35e(int param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

int engine_font_cpp_FUN_004ab35e(int param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  char *pcStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar10 = 0;
  memset(param_3,0,param_4 * param_5);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iStack_14 = 0;
  if (0 < param_4) {
    pcStack_1c = param_3;
    do {
      for (; (((&DAT_0061ed94)[(byte)(*param_2 + 1)] & 2) != 0 && (*param_2 != '\n'));
          param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return iStack_14;
      }
      uVar8 = 0;
      uStack_18 = 0xffffffff;
      iStack_14 = iStack_14 + 1;
      pcVar4 = param_2;
      while( true ) {
        cVar1 = *pcVar4;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_004ab418;
        if (((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 2) != 0) {
          uStack_18 = uVar8;
        }
        bVar3 = false;
        if ((int)uVar8 < param_5 + -1) {
          *(byte *)(uVar8 + 0x1cafe40) = 0;
          if ((iStack_14 < 2) && (param_8 == 0)) {
            iVar5 = engine_font_cpp_FUN_004aaf00(param_1,0x1cafe40);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x3668);
            iVar5 = engine_font_cpp_FUN_004aaf00(param_1,0x1cafe40);
            iVar5 = iVar5 + iVar2 * param_7;
          }
          if (iVar5 <= param_6) {
            bVar3 = true;
          }
        }
        *(char *)(uVar8 + 0x1cafe40) = cVar1;
        if (!bVar3) break;
        uVar8 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
      if (-1 < (int)uStack_18) {
        uVar8 = uStack_18;
      }
LAB_004ab418:
      uVar7 = uVar8;
      if (0 < (int)uVar8) {
        pcVar4 = param_2 + uVar8;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
          uVar7 = uVar7 - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)uVar7);
      }
      pcVar4 = param_2;
      pcVar9 = pcStack_1c;
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar10 * -8 + 4;
      }
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      }
      pcStack_1c[uVar7] = '\0';
      if (param_2[uVar8] == '\n') {
        uVar8 = uVar8 + 1;
      }
      param_2 = param_2 + uVar8;
      pcStack_1c = pcStack_1c + param_5;
    } while (iStack_14 < param_4);
  }
  return iStack_14;
}
