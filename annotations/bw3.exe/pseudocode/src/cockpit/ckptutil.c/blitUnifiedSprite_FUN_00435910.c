// Name: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00435910
// Address: 00435910
// Address Range: [[00435910, 00435b40]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_blitUnifiedSprite_FUN_00435910(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_blitUnifiedSprite_FUN_00435910(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
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
  int iStack_2c;
  int iStack_28;
  int iStack_1c;
  int iStack_18;
  
  iVar6 = _DAT_01c6b5b0 - in_stack_0000000c;
  iVar1 = _DAT_01c5faf0 - _DAT_01c5faec;
  iVar8 = _DAT_01c6b5a8 - in_stack_0000000c;
  if (in_stack_00000004 != 0) {
    pcVar2 = (code *)cockpit_ckptutil_c_FUN_00434e80();
    if (DAT_005fba20 == 8) {
      iStack_18 = in_stack_0000000c + *(int *)(&DAT_01c5faec + in_stack_00000010 * 4);
      if (0 < in_stack_00000018) {
        iStack_28 = 0;
        do {
          if (in_stack_00000008 == 0) {
            (*pcVar2)(iStack_18,in_stack_00000004,in_stack_00000014);
          }
          else {
            iVar7 = 0;
            iVar9 = 0;
            while (piVar4 = (int *)(in_stack_00000008 + iStack_28), iVar9 < *piVar4) {
              iVar3 = *(int *)((int)piVar4 + iVar7 + 4);
              iVar5 = *(int *)((int)piVar4 + iVar7 + 0x44) + iVar3 + -1;
              if (((iVar3 < iVar8) && (iVar3 = iVar8, iVar5 < iVar8)) ||
                 ((iVar6 < iVar5 && (iVar5 = iVar6, iVar6 < iVar3)))) {
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
              else {
                (*pcVar2)(iVar3 + iStack_18,in_stack_00000004 + iVar3,(iVar5 - iVar3) + 1);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
            }
          }
          iStack_28 = iStack_28 + 0x84;
          iStack_18 = iStack_18 + iVar1;
          in_stack_00000004 = in_stack_00000004 + in_stack_00000014;
        } while (iStack_28 < in_stack_00000018 * 0x84);
      }
    }
    else {
      iStack_1c = *(int *)(&DAT_01c5faec + in_stack_00000010 * 4) + in_stack_0000000c * 2;
      if (0 < in_stack_00000018) {
        iStack_2c = 0;
        do {
          if (in_stack_00000008 == 0) {
            (*pcVar2)(iStack_1c,in_stack_00000004,in_stack_00000014);
          }
          else {
            iVar7 = 0;
            iVar9 = 0;
            while (piVar4 = (int *)(in_stack_00000008 + iStack_2c), iVar9 < *piVar4) {
              iVar3 = *(int *)((int)piVar4 + iVar7 + 4);
              iVar5 = *(int *)((int)piVar4 + iVar7 + 0x44) + iVar3 + -1;
              if (((iVar3 < iVar8) && (iVar3 = iVar8, iVar5 < iVar8)) ||
                 ((iVar6 < iVar5 && (iVar5 = iVar6, iVar6 < iVar3)))) {
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
              else {
                (*pcVar2)(iVar3 * 2 + iStack_1c,in_stack_00000004 + iVar3,(iVar5 - iVar3) + 1);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
            }
          }
          iStack_2c = iStack_2c + 0x84;
          iStack_1c = iStack_1c + (iVar1 / 2) * 2;
          in_stack_00000004 = in_stack_00000004 + in_stack_00000014;
        } while (iStack_2c < in_stack_00000018 * 0x84);
      }
    }
  }
  return;
}
