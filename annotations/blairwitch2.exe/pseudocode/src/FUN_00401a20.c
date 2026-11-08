// Name: FUN_00401a20
// Address: 00401a20
// Address Range: [[00401a20, 00401b76]]
// Convention: unknown
// Signature: int FUN_00401a20(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00401a20(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  byte *puVar6;
  ushort *puVar7;
  
  iVar3 = (param_1 + -0x20) * 0x91;
  uVar5 = (uint)(byte)(&DAT_00601440)[iVar3];
  if ((((param_2 < _DAT_01c35e48) || (param_3 < _DAT_01c35e4c)) ||
      ((int)((_DAT_01c35e50 + 1) - uVar5) < param_2)) || (_DAT_01c35e54 + -10 < param_3)) {
    iVar3 = 0;
  }
  else {
    param_3 = param_3 * 4;
    pcVar1 = &DAT_00601441 + iVar3;
    iVar3 = param_3 + 0x2c;
    if (DAT_006141c0 == 8) {
      do {
        puVar6 = (byte *)(*(int *)(&DAT_01c2a38c + param_3) + param_2);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar6 = (byte)param_4;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar2 < (int)uVar5);
        }
        param_3 = param_3 + 4;
      } while (param_3 != iVar3);
    }
    else if (DAT_006141c0 == 0x10) {
      do {
        puVar7 = (ushort *)(*(int *)(&DAT_01c2a38c + param_3) + param_2 * 2);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar7 = *(ushort *)(param_4 * 2 + 0x1c34910);
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar2 < (int)uVar5);
        }
        param_3 = param_3 + 4;
      } while (param_3 != iVar3);
    }
    else {
      do {
        iVar2 = 0;
        puVar4 = (uint *)(*(int *)(&DAT_01c2a38c + param_3) + param_2 * 4);
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = *(uint *)(param_4 * 4 + 0x1c34b10);
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar5);
        }
        param_3 = param_3 + 4;
      } while (param_3 != iVar3);
    }
    iVar3 = uVar5 + 1;
  }
  return iVar3;
}
