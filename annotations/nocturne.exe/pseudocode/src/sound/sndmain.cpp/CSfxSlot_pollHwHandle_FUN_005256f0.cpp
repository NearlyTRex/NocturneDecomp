// Name: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005256f0
// Address: 005256f0
// Address Range: [[005256f0, 005257d9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005256f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005256f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return;
  }
  if (_DAT_02dc8318 == (int *)0x0) {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xb63;
    FUN_004c8440("SfxSlot::pollHwHandle - no sample?");
  }
  iVar1 = (**(code **)(*_DAT_02dc8318 + 0x50))(_DAT_02dc8318,param_1);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x74) + 0x124) != 0) {
      FUN_00529980("Killing looped sfx %s, which died??\n",*(int *)(param_1 + 0x74));
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(param_1);
    return;
  }
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar2 = 2;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar2 = uVar2 | 4;
      if (uVar2 == 0) {
        return;
      }
      goto LAB_005257a3;
    }
  }
  if (uVar2 == 0) {
    return;
  }
LAB_005257a3:
  iVar1 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,param_1,uVar2);
  if (iVar1 != 0) {
    return;
  }
  FUN_00529980("Error setting hw sfx %d options (sample %s), killing.\n",*(uint *)(param_1 + 0x6c),
               *(uint *)(param_1 + 0x74));
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(param_1);
  return;
}
