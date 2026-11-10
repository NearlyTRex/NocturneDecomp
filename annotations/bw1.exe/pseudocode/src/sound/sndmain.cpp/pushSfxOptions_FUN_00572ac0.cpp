// Name: sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
// Address: 00572ac0
// Address Range: [[00572ac0, 00572b31]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_02c78cec = _DAT_02c78cec + 1;
  if (7 < _DAT_02c78cec) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xe98;
    core_main_c_FUN_005030e0("pushSfxOptions - stack full");
  }
  puVar2 = (uint *)((_DAT_02c78cec + -1) * 0x60 + 0x2c78cf0);
  puVar3 = (uint *)(_DAT_02c78cec * 0x60 + 0x2c78cf0);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
