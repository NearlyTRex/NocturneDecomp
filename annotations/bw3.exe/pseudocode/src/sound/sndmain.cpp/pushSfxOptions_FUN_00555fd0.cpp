// Name: sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
// Address: 00555fd0
// Address Range: [[00555fd0, 00556041]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_02ceb91c = _DAT_02ceb91c + 1;
  if (7 < _DAT_02ceb91c) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xe9b;
    core_main_c_FUN_004e4330("pushSfxOptions - stack full");
  }
  puVar2 = (uint *)((_DAT_02ceb91c + -1) * 0x60 + 0x2ceb920);
  puVar3 = (uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb920);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
