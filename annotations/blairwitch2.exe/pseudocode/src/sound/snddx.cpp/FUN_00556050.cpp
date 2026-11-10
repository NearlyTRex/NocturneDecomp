// Name: sound_snddx.cpp_FUN_00556050
// Address: 00556050
// Address Range: [[00556050, 005561a1]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_00556050(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_00556050(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  byte *puStack_1b4;
  byte *puStack_1b0;
  char *pcStack_1ac;
  byte auStack_18 [4];
  byte auStack_14 [4];
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x264a5f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x264a5fc) < 1)) {
    return 0;
  }
  param_2 = param_2 * 0x18;
  if (*(int *)(param_2 + 0x264a604) != 0) {
    pcStack_1ac = "DirectSoundDevice::lockSample - already locked!";
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x440;
    puStack_1b0 = (byte *)0x5560cd;
    core_main_c_FUN_004e4500();
  }
  param_3 = param_3 * *(int *)(param_2 + 0x264a5fc);
  iVar2 = param_3 >> 0x1f;
  iVar2 = (param_3 + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0);
  uVar3 = CONCAT22((short)(char)((uint)iVar2 >> 0x18),(short)((uint)iVar2 >> 8)) & 0xffffffe0;
  uVar4 = param_4 + 0x1fU & 0xffffffe0;
  uVar1 = *(int *)(param_2 + 0x264a600) - uVar3;
  if ((int)uVar1 < (int)uVar4) {
    uVar4 = uVar1;
  }
  pcStack_1ac = (char *)0x0;
  puStack_1b0 = auStack_14;
  puStack_1b4 = auStack_18;
  iStack_1b8 = param_2 + 0x264a608;
  iStack_1bc = param_2 + 0x264a604;
  piStack_1c8 = *(int **)(param_2 + 0x264a5f4);
  uStack_1c4 = uVar3;
  uStack_1c0 = uVar4;
  uVar1 = (**(code **)(*piStack_1c8 + 0x2c))();
  if (uVar1 == 0) {
    if (*(int *)(param_2 + 0x264a600) + -0x20 <= (int)(uVar4 + uVar3)) {
      memset
                ((void *)(((*(int *)(param_2 + 0x264a604) + *(int *)(param_2 + 0x264a600)) - uVar3)
                         + -0x20),0,0x20);
    }
    return (*(int *)(param_2 + 0x264a604) + (iVar2 >> 8)) - uVar3;
  }
  sound_snddx_cpp_FUN_00554ad0(uVar1);
  _sprintf((char *)&piStack_1c8,"DirectSux: Unable to %s.  (%s)");
  sound_sndmain_cpp_FUN_005549c0(&piStack_1c8);
  return 0;
}
