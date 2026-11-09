// Name: sound_snddx.cpp_FUN_0055bbf0
// Address: 0055bbf0
// Address Range: [[0055bbf0, 0055bd41]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_0055bbf0(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_0055bbf0(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
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
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2cf49fc) < 1)) {
    return 0;
  }
  param_2 = param_2 * 0x18;
  if (*(int *)(param_2 + 0x2cf4a04) != 0) {
    pcStack_1ac = "DirectSoundDevice::lockSample - already locked!";
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x437;
    puStack_1b0 = (byte *)0x55bc6d;
    core_main_c_FUN_004e4330();
  }
  param_3 = param_3 * *(int *)(param_2 + 0x2cf49fc);
  iVar3 = param_3 >> 0x1f;
  iVar3 = (param_3 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0);
  uVar4 = CONCAT22((short)(char)((uint)iVar3 >> 0x18),(short)((uint)iVar3 >> 8)) & 0xffffffe0;
  uVar5 = param_4 + 0x1fU & 0xffffffe0;
  uVar1 = *(int *)(param_2 + 0x2cf4a00) - uVar4;
  if ((int)uVar1 < (int)uVar5) {
    uVar5 = uVar1;
  }
  pcStack_1ac = (char *)0x0;
  puStack_1b0 = auStack_14;
  puStack_1b4 = auStack_18;
  iStack_1b8 = param_2 + 0x2cf4a08;
  iStack_1bc = param_2 + 0x2cf4a04;
  piStack_1c8 = *(int **)(param_2 + 0x2cf49f4);
  uStack_1c4 = uVar4;
  uStack_1c0 = uVar5;
  uVar1 = (**(code **)(*piStack_1c8 + 0x2c))();
  if (uVar1 == 0) {
    if (*(int *)(param_2 + 0x2cf4a00) + -0x20 <= (int)(uVar5 + uVar4)) {
      memset
                ((void *)(((*(int *)(param_2 + 0x2cf4a04) + *(int *)(param_2 + 0x2cf4a00)) - uVar4)
                         + -0x20),0,0x20);
    }
    return (*(int *)(param_2 + 0x2cf4a04) + (iVar3 >> 8)) - uVar4;
  }
  pcVar2 = sound_snddx_cpp_FUN_0055a670(uVar1);
  FUN_005a28c0
            (&piStack_1c8,"DirectSux: Unable to %s.  (%s)","Lock hw sample buffer",pcVar2
            );
  sound_sndmain_cpp_FUN_0055a560(&piStack_1c8);
  return 0;
}
