// Name: engine_2d.c_drawCharacterMasked_FUN_0040190e
// Address: 0040190e
// Address Range: [[0040190e, 00401a1c]]
// Convention: unknown
// Signature: int engine_2d_c_drawCharacterMasked_FUN_0040190e(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_2d_c_drawCharacterMasked_FUN_0040190e(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  byte *puVar5;
  ushort uVar6;
  uint uVar7;
  
  iVar3 = (param_1 + -0x20) * 0x91;
  uVar7 = (uint)(byte)(&DAT_00608570)[iVar3];
  if ((((param_2 < _DAT_01c4f008) || (param_3 < _DAT_01c4f00c)) ||
      ((int)((_DAT_01c4f010 + 1) - uVar7) < param_2)) || (_DAT_01c4f014 + -10 < param_3)) {
    iVar3 = 0;
  }
  else {
    param_3 = param_3 * 4;
    pcVar1 = &DAT_00608571 + iVar3;
    iVar3 = param_3 + 0x2c;
    if (DAT_0061b4a0 == 8) {
      do {
        iVar2 = 0;
        puVar5 = (byte *)(*(int *)(&DAT_01c4354c + param_3) + param_2);
        if (uVar7 != 0) {
          do {
            if (*pcVar1 == '\0') {
              *puVar5 = 0;
            }
            else {
              *puVar5 = 2;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar2 < (int)uVar7);
        }
        param_3 = param_3 + 4;
        *puVar5 = 0;
      } while (param_3 != iVar3);
    }
    else {
      do {
        puVar4 = (ushort *)(*(int *)(&DAT_01c4354c + param_3) + param_2 * 2);
        iVar2 = 0;
        if (uVar7 != 0) {
          do {
            uVar6 = _DAT_01c4dad0;
            if (*pcVar1 != '\0') {
              uVar6 = _DAT_01c4dad4;
            }
            *puVar4 = uVar6;
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar7);
        }
        param_3 = param_3 + 4;
        *puVar4 = _DAT_01c4dad0;
      } while (param_3 != iVar3);
    }
    iVar3 = uVar7 + 1;
  }
  return iVar3;
}
