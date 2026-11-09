// Name: sound_sndmain.cpp_FUN_00550450
// Address: 00550450
// Address Range: [[00550450, 005504c1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00550450(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00550450(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_0264161c = _DAT_0264161c + 1;
  if (7 < _DAT_0264161c) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xe98;
    core_main_c_FUN_004e4500("pushSfxOptions - stack full");
  }
  puVar2 = (uint *)((_DAT_0264161c + -1) * 0x60 + 0x2641620);
  puVar3 = (uint *)(_DAT_0264161c * 0x60 + 0x2641620);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
