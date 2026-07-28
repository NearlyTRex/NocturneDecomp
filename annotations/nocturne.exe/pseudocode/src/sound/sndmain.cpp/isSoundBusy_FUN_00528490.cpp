// Name: sound_sndmain.cpp_isSoundBusy_FUN_00528490
// Address: 00528490
// Address Range: [[00528490, 0052849e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_00528490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_00528490(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00528480();
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = _DAT_02dc831c;
  }
  return iVar2;
}
