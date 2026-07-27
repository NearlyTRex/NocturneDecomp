// Name: engine_2d.c_FUN_004013d0
// Address: 004013d0
// Address Range: [[004013d0, 00401492]]
// Convention: unknown
// Signature: int engine_2d_c_FUN_004013d0(int param_1,int param_2,int param_3,byte param_4)

#include "nocturne.h"

int engine_2d_c_FUN_004013d0(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  byte *pbVar5;
  int iStack_10;
  
  engine_2d_c_FUN_004012d0(param_1,param_2,param_3);
  if ((0x1f < param_1) && (param_1 < 0x80)) {
    iStack_10 = param_3 * 4;
    iVar1 = *(int *)(&DAT_006afa3c + param_1 * 4);
    iVar2 = iStack_10 + 0x5c;
    pbVar5 = *(byte **)(param_1 * 4 + 0x6afe3c);
    do {
      iVar4 = 0;
      puVar3 = (byte *)(*(int *)(&DAT_01bd2fa0 + iStack_10) + param_2);
      if (0 < iVar1) {
        do {
          if (*pbVar5 != 0) {
            *puVar3 = (&DAT_01bf7720)[((int)(uint)*pbVar5 >> (param_4 & 0x1f) & 0xffU) * 0x421];
          }
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar4 < iVar1);
      }
      iStack_10 = iStack_10 + 4;
    } while (iStack_10 != iVar2);
    return iVar1;
  }
  return 0;
}
