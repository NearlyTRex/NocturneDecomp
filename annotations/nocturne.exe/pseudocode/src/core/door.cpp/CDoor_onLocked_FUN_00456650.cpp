// Name: core_door.cpp_CDoor_onLocked_FUN_00456650
// Address: 00456650
// Address Range: [[00456650, 00456684]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_onLocked_FUN_00456650(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_door_cpp_CDoor_onLocked_FUN_00456650(int param_1)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(_DAT_01af4e98);
  if (iVar1 != 0) {
    return;
  }
  _DAT_01af4e98 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x924);
  return;
}
