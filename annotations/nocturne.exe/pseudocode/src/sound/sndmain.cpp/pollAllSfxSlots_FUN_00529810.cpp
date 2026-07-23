// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810
// Address: 00529810
// Address Range: [[00529810, 005298e1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  float fVar4;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x148c;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10();
  iVar2 = _DAT_02dc84c0;
  _DAT_02dc84c0 = wincore_winrun_cpp_getTime_FUN_00558a30();
  fVar4 = 0.0;
  iVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0(0);
  if (iVar1 != 0) {
    fVar4 = (float)(_DAT_02dc84c0 - iVar2) * (float)8.4771050347222196e-07;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    if ((float)0.25 < fVar4) {
      fVar4 = 0.25;
    }
  }
  puVar3 = (byte *)0x2dbd374;
  do {
    iVar2 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(puVar3,fVar4);
    if (iVar2 != 0) {
      sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005256f0(puVar3);
    }
    puVar3 = puVar3 + 0x120;
  } while (puVar3 != &DAT_02dc1b74);
  return;
}
