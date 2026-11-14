// Name: engine_2d.c_wrapTextToWidth_FUN_00401d90
// Address: 00401d90
// Address Range: [[00401d90, 00401eb0]]
// Convention: unknown
// Signature: void engine_2d_c_wrapTextToWidth_FUN_00401d90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_2d_c_wrapTextToWidth_FUN_00401d90(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char *in_stack_00000004;
  int in_stack_00000008;
  char *in_stack_0000000c;
  char acStack_114 [256];
  int iStack_14;
  
  bVar8 = 0;
  iStack_14 = 1;
  pcVar5 = in_stack_0000000c;
  if (*in_stack_00000004 == '\0') {
    *in_stack_0000000c = '\0';
  }
  else {
    do {
      cVar1 = *in_stack_00000004;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000004[1];
      in_stack_00000004 = in_stack_00000004 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar2 = engine_2d_c_getStringWidth_FUN_004018b0(in_stack_0000000c);
    pcVar5 = in_stack_0000000c;
    if (in_stack_00000008 < iVar2) {
      do {
        cVar1 = *in_stack_0000000c;
        if (((cVar1 == '\0') || (((&DAT_006074b8)[(byte)(cVar1 + 1)] & 2) != 0)) || (cVar1 == '\n'))
        {
          uVar4 = (int)in_stack_0000000c - (int)pcVar5;
          pcVar6 = pcVar5;
          pcVar7 = acStack_114;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(uint *)pcVar7 = *(uint *)pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
            pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
            pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
          }
          acStack_114[uVar4] = '\0';
          iVar2 = engine_2d_c_getStringWidth_FUN_004018b0(acStack_114);
          if (in_stack_00000008 < iVar2) {
            cVar1 = in_stack_0000000c[-1];
            pcVar6 = in_stack_0000000c;
            while ((in_stack_0000000c = pcVar6 + -1, cVar1 != '\n' && (*in_stack_0000000c != ' ')))
            {
              cVar1 = pcVar6[-2];
              pcVar6 = in_stack_0000000c;
            }
            *in_stack_0000000c = '\n';
          }
          if (*in_stack_0000000c == '\n') {
            pcVar5 = in_stack_0000000c + 1;
          }
          if (*in_stack_0000000c == '\0') {
            iStack_14 = 0;
          }
        }
        in_stack_0000000c = in_stack_0000000c + 1;
      } while (iStack_14 != 0);
      return;
    }
  }
  return;
}
