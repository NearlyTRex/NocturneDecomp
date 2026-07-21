// Name: sound_sndmain.cpp_isSoundBusy_FUN_00528490
// Address: 00528490
// Address Range: [[00528490, 0052849e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_isSoundBusy_FUN_00528490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_isSoundBusy_FUN_00528490(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00528480();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _DAT_02dc831c;
  }
  return uVar2;
}
