// Name: engine_2d.c_drawCharacterMasked_FUN_00401910
// Address: 00401910
// Address Range: [[00401910, 00401a1c]]
// Convention: unknown
// Signature: int engine_2d_c_drawCharacterMasked_FUN_00401910(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_2d_c_drawCharacterMasked_FUN_00401910(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  byte *puVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar3 = (in_stack_00000004 + -0x20) * 0x91;
  uVar7 = (uint)(byte)(&DAT_005e8840)[iVar3];
  if ((((in_stack_00000008 < _DAT_01c6b5a8) || (in_stack_0000000c < _DAT_01c6b5ac)) ||
      ((int)((_DAT_01c6b5b0 + 1) - uVar7) < in_stack_00000008)) ||
     (_DAT_01c6b5b4 + -10 < in_stack_0000000c)) {
    iVar3 = 0;
  }
  else {
    iVar8 = in_stack_0000000c * 4;
    pcVar1 = &DAT_005e8841 + iVar3;
    iVar3 = iVar8 + 0x2c;
    if (DAT_005fba20 == 8) {
      do {
        iVar2 = 0;
        puVar5 = (byte *)(*(int *)(&DAT_01c5faec + iVar8) + in_stack_00000008);
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
        iVar8 = iVar8 + 4;
        *puVar5 = 0;
      } while (iVar8 != iVar3);
    }
    else {
      do {
        puVar4 = (ushort *)(*(int *)(&DAT_01c5faec + iVar8) + in_stack_00000008 * 2);
        iVar2 = 0;
        if (uVar7 != 0) {
          do {
            uVar6 = _DAT_01c6a070;
            if (*pcVar1 != '\0') {
              uVar6 = _DAT_01c6a074;
            }
            *puVar4 = uVar6;
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar7);
        }
        iVar8 = iVar8 + 4;
        *puVar4 = _DAT_01c6a070;
      } while (iVar8 != iVar3);
    }
    iVar3 = uVar7 + 1;
  }
  return iVar3;
}
