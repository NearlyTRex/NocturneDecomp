// Name: sound_sndmain.cpp_FUN_0056f630
// Address: 0056f630
// Address Range: [[0056f630, 0056f6c8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_0056f630(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_0056f630(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02c80694 != 0) {
    FUN_005c09f0(_DAT_02c80694);
    _DAT_02c80694 = 0;
  }
  if (_DAT_02c806b8 != 0) {
    FUN_005c09f0(_DAT_02c806b8);
    _DAT_02c806b8 = 0;
  }
  if (_DAT_02c80670 != 0) {
    FUN_005c09f0(_DAT_02c80670);
    _DAT_02c80670 = 0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2c80674) = 0;
    *(uint *)(iVar2 + 0x2c806bc) = 0;
    *(uint *)(iVar2 + 0x2c806dc) = 0;
    *(uint *)(iVar2 + 0x2c80698) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  _DAT_02c8066c = 0;
  _DAT_02c80660 = 0;
  _DAT_02c80664 = 0;
  _DAT_02c80668 = 0;
  return;
}
