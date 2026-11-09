// Name: sound_sndmain.cpp_FUN_00555d90
// Address: 00555d90
// Address Range: [[00555d90, 00555db6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00555d90(CVector3f *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00555d90(CVector3f *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb954) = 1;
  *(CVector3f **)(iVar1 + 0x2ceb950) = velocity_source_ptr;
  return;
}
