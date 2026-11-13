// Name: engine_2d.c_getInputWithPrompt_FUN_00403310
// Address: 00403310
// Address Range: [[00403310, 004033e6]]
// Convention: unknown
// Signature: uint engine_2d_c_getInputWithPrompt_FUN_00403310(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_2d_c_getInputWithPrompt_FUN_00403310(void)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  byte *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  char acStack_114 [256];
  uint uStack_14;
  
  *in_stack_00000004 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar3 = 0;
  do {
    _sprintf(acStack_114,(char *)0x5ca1ae);
    engine_2d_c_drawText_FUN_00401fe0(acStack_114,in_stack_0000000c,in_stack_00000010);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
    uStack_14 = uVar2 & 0xff;
    if (uStack_14 == 0xd) {
LAB_004033cb:
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      return uStack_14;
    }
    if (uStack_14 == 0x1b) {
      *in_stack_00000004 = 0;
      goto LAB_004033cb;
    }
    if ((uStack_14 == 8) && (0 < iVar3)) {
      iVar3 = iVar3 + -1;
      in_stack_00000004[iVar3] = 0;
    }
    if (((0x1f < uStack_14) && (uStack_14 < 0x80)) && (iVar3 < in_stack_00000008)) {
      puVar1 = in_stack_00000004 + iVar3;
      uStack_14._0_1_ = (byte)uVar2;
      iVar3 = iVar3 + 1;
      *puVar1 = (byte)uStack_14;
      in_stack_00000004[iVar3] = 0;
    }
  } while( true );
}
