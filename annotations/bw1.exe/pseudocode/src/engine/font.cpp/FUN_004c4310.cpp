// Name: engine_font.cpp_FUN_004c4310
// Address: 004c4310
// Address Range: [[004c4310, 004c44d9]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004c4310(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_font_cpp_FUN_004c4310(void)

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
  CBitFont *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  char *pcStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar10 = 0;
  memset(in_stack_0000000c,0,in_stack_00000010 * in_stack_00000014);
  if (in_stack_00000008 == (char *)0x0) {
    return 0;
  }
  iStack_14 = 0;
  if (0 < in_stack_00000010) {
    pcStack_1c = in_stack_0000000c;
    do {
      for (; (((&DAT_00626114)[(byte)(*in_stack_00000008 + 1)] & 2) != 0 &&
             (*in_stack_00000008 != '\n')); in_stack_00000008 = in_stack_00000008 + 1) {
      }
      if (*in_stack_00000008 == '\0') {
        return iStack_14;
      }
      uVar8 = 0;
      uStack_18 = 0xffffffff;
      iStack_14 = iStack_14 + 1;
      pcVar4 = in_stack_00000008;
      while( true ) {
        cVar1 = *pcVar4;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_004c43c8;
        if (((&DAT_00626114)[(byte)(cVar1 + 1)] & 2) != 0) {
          uStack_18 = uVar8;
        }
        bVar3 = false;
        if ((int)uVar8 < in_stack_00000014 + -1) {
          *(byte *)(uVar8 + 0x1cc88d0) = 0;
          if ((iStack_14 < 2) && (in_stack_00000020 == 0)) {
            iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                              (in_stack_00000004,(char *)0x1cc88d0);
          }
          else {
            iVar2 = in_stack_00000004->char_widths[0x20];
            iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                              (in_stack_00000004,(char *)0x1cc88d0);
            iVar5 = iVar5 + iVar2 * in_stack_0000001c;
          }
          if (iVar5 <= in_stack_00000018) {
            bVar3 = true;
          }
        }
        *(char *)(uVar8 + 0x1cc88d0) = cVar1;
        if (!bVar3) break;
        uVar8 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
      if (-1 < (int)uStack_18) {
        uVar8 = uStack_18;
      }
LAB_004c43c8:
      uVar7 = uVar8;
      if (0 < (int)uVar8) {
        pcVar4 = in_stack_00000008 + uVar8;
        do {
          if (((&DAT_00626114)[(byte)(pcVar4[-1] + 1)] & 2) == 0) break;
          uVar7 = uVar7 - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)uVar7);
      }
      pcVar4 = in_stack_00000008;
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
      if (in_stack_00000008[uVar8] == '\n') {
        uVar8 = uVar8 + 1;
      }
      in_stack_00000008 = in_stack_00000008 + uVar8;
      pcStack_1c = pcStack_1c + in_stack_00000014;
    } while (iStack_14 < in_stack_00000010);
  }
  return iStack_14;
}
