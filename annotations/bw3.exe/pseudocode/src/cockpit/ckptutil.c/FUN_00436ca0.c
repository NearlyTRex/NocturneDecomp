// Name: cockpit_ckptutil.c_FUN_00436ca0
// Address: 00436ca0
// Address Range: [[00436ca0, 00436dd7]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_00436ca0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_FUN_00436ca0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  char acStack_114 [256];
  uint uStack_14;
  
  if (in_stack_00000004 != 0) {
    iVar3 = 0;
    uStack_14 = 0xfb;
    if (0 < in_stack_0000000c) {
      iVar2 = in_stack_00000010 * in_stack_00000014 + -1;
      do {
        iVar1 = (int)*in_stack_00000008 + in_stack_00000008[1] * in_stack_00000010;
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(acStack_114,"Edge out of range: edge %d");
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x54a;
          core_main_c_FUN_004e4330(acStack_114);
        }
        *(byte *)(iVar1 + in_stack_00000004) = (byte)uStack_14;
        iVar1 = (int)in_stack_00000008[2] +
                in_stack_00000010 * ((short)(in_stack_00000008[3] * 2) >> 1);
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(acStack_114,"Edge out of range: edge %d");
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x553;
          core_main_c_FUN_004e4330(acStack_114);
        }
        in_stack_00000008 = in_stack_00000008 + 4;
        iVar3 = iVar3 + 1;
        *(byte *)(iVar1 + in_stack_00000004) = (byte)uStack_14;
      } while (iVar3 < in_stack_0000000c);
    }
  }
  return;
}
