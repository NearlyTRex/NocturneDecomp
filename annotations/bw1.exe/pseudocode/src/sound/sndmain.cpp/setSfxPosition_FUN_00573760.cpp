// Name: sound_sndmain.cpp_setSfxPosition_FUN_00573760
// Address: 00573760
// Address Range: [[00573760, 005737c5]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00573760(uint sfx_handle,double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00573760(uint sfx_handle,double pos_x,double pos_y,double pos_z)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(sfx_handle,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar2->options).position_source_ptr = (void *)0x0;
  (pCVar2->options).position.x = pos_x;
  (pCVar2->options).position.y = pos_y;
  (pCVar2->options).position.z = pos_z;
  uVar1 = pCVar2->changed_flags;
  (pCVar2->options).position_format = 0;
  *(byte *)&pCVar2->changed_flags = (byte)uVar1 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 1;
}
