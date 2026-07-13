// Name: FUN_004021a0
// Address: 004021a0
// Address Range: [[004021a0, 0040228a]]
// Convention: unknown
// Signature: int FUN_004021a0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004021a0(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  byte *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (param_1 + -0x20) * 0x91;
  uVar6 = (uint)(byte)(&DAT_005a4b80)[iVar5];
  if ((((param_2 < _DAT_01c00c58) || (param_3 < _DAT_01c00c5c)) ||
      ((int)((_DAT_01c00c60 + 1) - uVar6) < param_2)) || (_DAT_01c00c64 + -10 < param_3)) {
    iVar5 = 0;
  }
  else {
    param_3 = param_3 * 4;
    pcVar1 = &DAT_005a4b81 + iVar5;
    iVar5 = param_3 + 0x2c;
    if (DAT_005b7624 == 8) {
      do {
        iVar2 = 0;
        puVar3 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_3) + param_2);
        if (uVar6 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar3 = 0xff;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar2 < (int)uVar6);
        }
        param_3 = param_3 + 4;
      } while (param_3 != iVar5);
    }
    else {
      do {
        iVar2 = 0;
        puVar4 = (ushort *)(*(int *)(&DAT_01bd2fa0 + param_3) + param_2 * 2);
        if (uVar6 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = _DAT_01bff91e;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar6);
        }
        param_3 = param_3 + 4;
      } while (param_3 != iVar5);
    }
    iVar5 = uVar6 + 1;
  }
  return iVar5;
}
