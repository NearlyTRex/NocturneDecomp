// Name: FUN_004012d0
// Address: 004012d0
// Address Range: [[004012d0, 004013cb]]
// Convention: unknown
// Signature: void FUN_004012d0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004012d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  byte *puVar5;
  int iVar6;
  char *pcVar7;
  int iStack_14;
  
  if ((((0 < param_3) && (param_3 + 0x18 < DAT_005b7620)) && (0 < param_2)) &&
     (((param_2 + 0x17 < DAT_005b761c && (0x1f < param_1)) && (param_1 < 0x80)))) {
    iStack_14 = param_3 * 4;
    iVar1 = *(int *)(&DAT_006afa3c + param_1 * 4);
    iVar2 = iStack_14 + 0x5c;
    pcVar7 = *(char **)(param_1 * 4 + 0x6afe3c);
    do {
      puVar4 = (byte *)(*(int *)(&DAT_01bd2fa0 + iStack_14) + param_2 + -1);
      puVar3 = (byte *)(*(int *)(&DAT_01bd2fa4 + iStack_14) + param_2 + -1);
      puVar5 = (byte *)(*(int *)(iStack_14 + 0x1bd2f9c) + param_2 + -1);
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          if (*pcVar7 != '\0') {
            puVar4[1] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
          }
          pcVar7 = pcVar7 + 1;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar6 < iVar1);
      }
      iStack_14 = iStack_14 + 4;
    } while (iStack_14 != iVar2);
  }
  return;
}
