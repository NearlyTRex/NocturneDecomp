// Name: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042cc30
// Address: 0042cc30
// Address Range: [[0042cc30, 0042ce75]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_0042cc30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_0042cc30(void)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int iStack_30;
  int iStack_2c;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = _DAT_01c2a390 - _DAT_01c2a38c;
  iVar8 = in_stack_00000014 + _DAT_01c35e50;
  iVar7 = in_stack_00000014 + _DAT_01c35e48;
  if (in_stack_00000004 != 0) {
    in_stack_00000004 =
         in_stack_00000004 + in_stack_0000001c * in_stack_00000010 + in_stack_0000000c;
    pcVar2 = (code *)cockpit_ckptutil_c_FUN_0042c410();
    iVar5 = (in_stack_00000018 + in_stack_00000010) * 4;
    iStack_30 = in_stack_00000010 * 0x84;
    if (DAT_006141c0 == 8) {
      iStack_18 = in_stack_0000000c + *(int *)(&DAT_01c2a38c + iVar5);
      if (in_stack_00000010 < in_stack_00000020) {
        do {
          iVar5 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)(in_stack_00000008 + iStack_30), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar5 + 4);
            iVar6 = *(int *)((int)piVar3 + iVar5 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar7) && (iVar4 = iVar7, iVar6 < iVar7)) ||
               ((iVar8 < iVar6 && (iVar6 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              (*pcVar2)((iVar4 + iStack_18) - in_stack_00000014,in_stack_00000004 + iVar4,
                        (iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iStack_30 = iStack_30 + 0x84;
          iStack_18 = iStack_18 + iVar1;
          in_stack_00000004 = in_stack_00000004 + in_stack_0000001c;
        } while (iStack_30 < in_stack_00000020 * 0x84);
      }
    }
    else {
      iStack_1c = *(int *)(&DAT_01c2a38c + iVar5) + in_stack_0000000c * 2;
      if (in_stack_00000010 < in_stack_00000020) {
        iStack_2c = iStack_30;
        do {
          iVar5 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)(in_stack_00000008 + iStack_2c), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar5 + 4);
            iVar6 = *(int *)((int)piVar3 + iVar5 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar7) && (iVar4 = iVar7, iVar6 < iVar7)) ||
               ((iVar8 < iVar6 && (iVar6 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              (*pcVar2)(iVar4 * 2 + iStack_1c + in_stack_00000014 * -2,in_stack_00000004 + iVar4,
                        (iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iStack_2c = iStack_2c + 0x84;
          iStack_1c = iStack_1c + (iVar1 / 2) * 2;
          in_stack_00000004 = in_stack_00000004 + in_stack_0000001c;
        } while (iStack_2c < in_stack_00000020 * 0x84);
      }
    }
  }
  return;
}
