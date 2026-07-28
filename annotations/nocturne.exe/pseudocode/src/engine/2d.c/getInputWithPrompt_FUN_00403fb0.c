// Name: engine_2d.c_getInputWithPrompt_FUN_00403fb0
// Address: 00403fb0
// Address Range: [[00403fb0, 00404086]]
// Convention: unknown
// Signature: uint engine_2d_c_getInputWithPrompt_FUN_00403fb0(undefined1 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

uint engine_2d_c_getInputWithPrompt_FUN_00403fb0(byte *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  char local_114 [256];
  uint local_14;
  
  *param_1 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  iVar3 = 0;
  do {
    _sprintf(local_114,"%s%s_    ",param_5,param_1);
    engine_2d_c_drawText_FUN_00402600(local_114,param_3,param_4);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    local_14 = uVar2 & 0xff;
    if (local_14 == 0xd) {
LAB_0040406b:
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      return local_14;
    }
    if (local_14 == 0x1b) {
      *param_1 = 0;
      goto LAB_0040406b;
    }
    if ((local_14 == 8) && (0 < iVar3)) {
      iVar3 = iVar3 + -1;
      param_1[iVar3] = 0;
    }
    if (((0x1f < local_14) && (local_14 < 0x80)) && (iVar3 < param_2)) {
      puVar1 = param_1 + iVar3;
      local_14._0_1_ = (byte)uVar2;
      iVar3 = iVar3 + 1;
      *puVar1 = (byte)local_14;
      param_1[iVar3] = 0;
    }
  } while( true );
}
