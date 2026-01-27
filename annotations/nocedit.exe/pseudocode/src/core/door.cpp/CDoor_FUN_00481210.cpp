// Name: core_door.cpp_CDoor_FUN_00481210
// Address: 00481210
// Address Range: [[00481210, 00481244]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_FUN_00481210(CDoor * this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_FUN_00481210(CDoor *this_ptr)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(DAT_02c14cd8);
  if (iVar1 != 0) {
    return;
  }
  DAT_02c14cd8 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->unk2 + 0x4b0)
  ;
  return;
}
