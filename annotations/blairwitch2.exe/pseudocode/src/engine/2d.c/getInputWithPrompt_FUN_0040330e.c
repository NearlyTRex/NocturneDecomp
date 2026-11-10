// Name: engine_2d.c_getInputWithPrompt_FUN_0040330e
// Address: 0040330e
// Address Range: [[0040330e, 004033e6]]
// Convention: unknown
// Signature: uint engine_2d_c_getInputWithPrompt_FUN_0040330e(undefined1 *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

uint engine_2d_c_getInputWithPrompt_FUN_0040330e(byte *param_1,int param_2,int param_3,int param_4)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  char acStack_114 [256];
  uint uStack_14;
  
  *param_1 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar3 = 0;
  do {
    _sprintf(acStack_114,(char *)0x5ca1ae);
    engine_2d_c_drawText_FUN_00401fe0(acStack_114,param_3,param_4);
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
      *param_1 = 0;
      goto LAB_004033cb;
    }
    if ((uStack_14 == 8) && (0 < iVar3)) {
      iVar3 = iVar3 + -1;
      param_1[iVar3] = 0;
    }
    if (((0x1f < uStack_14) && (uStack_14 < 0x80)) && (iVar3 < param_2)) {
      puVar1 = param_1 + iVar3;
      uStack_14._0_1_ = (byte)uVar2;
      iVar3 = iVar3 + 1;
      *puVar1 = (byte)uStack_14;
      param_1[iVar3] = 0;
    }
  } while( true );
}
