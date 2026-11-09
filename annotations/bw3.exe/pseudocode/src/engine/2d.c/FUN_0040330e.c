// Name: engine_2d.c_FUN_0040330e
// Address: 0040330e
// Address Range: [[0040330e, 004033e6]]
// Convention: unknown
// Signature: uint engine_2d_c_FUN_0040330e(undefined1 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

uint engine_2d_c_FUN_0040330e(byte *param_1,int param_2,int param_3,int param_4,uint param_5)

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
    FUN_005a28c0(acStack_114,0x5b51e6,param_5,param_1);
    engine_2d_c_drawText_FUN_00401fe0(acStack_114,param_3,param_4);
    wincore_wddvmem_cpp_FUN_0057a8a0();
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    uStack_14 = uVar2 & 0xff;
    if (uStack_14 == 0xd) {
LAB_004033cb:
      wincore_wddvmem_cpp_FUN_0057a8a0();
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
