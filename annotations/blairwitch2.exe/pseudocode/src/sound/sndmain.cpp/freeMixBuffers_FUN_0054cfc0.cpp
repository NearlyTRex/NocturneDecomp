// Name: sound_sndmain.cpp_freeMixBuffers_FUN_0054cfc0
// Address: 0054cfc0
// Address Range: [[0054cfc0, 0054d058]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0054cfc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0054cfc0(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02648ec4 != 0) {
    FUN_005b86a0(_DAT_02648ec4);
    _DAT_02648ec4 = 0;
  }
  if (_DAT_02648ee8 != 0) {
    FUN_005b86a0(_DAT_02648ee8);
    _DAT_02648ee8 = 0;
  }
  if (_DAT_02648ea0 != 0) {
    FUN_005b86a0(_DAT_02648ea0);
    _DAT_02648ea0 = 0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2648ea4) = 0;
    *(uint *)(iVar2 + 0x2648eec) = 0;
    *(uint *)(iVar2 + 0x2648f0c) = 0;
    *(uint *)(iVar2 + 0x2648ec8) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  _DAT_02648e9c = 0;
  _DAT_02648e90 = 0;
  _DAT_02648e94 = 0;
  _DAT_02648e98 = 0;
  return;
}
