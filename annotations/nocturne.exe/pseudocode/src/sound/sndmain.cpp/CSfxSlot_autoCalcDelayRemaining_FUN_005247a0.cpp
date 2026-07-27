// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0
// Address: 005247a0
// Address Range: [[005247a0, 0052482d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x935;
    core_main_c_FUN_004c8440("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    *(uint *)(param_1 + 0x4c) = 0;
    *(uint *)(param_1 + 0x50) = 0;
    return;
  }
  dVar1 = *(double *)(param_1 + 4) - _DAT_02dc78e0;
  dVar3 = *(double *)(param_1 + 0xc) - _DAT_02dc78e8;
  dVar2 = *(double *)(param_1 + 0x14) - _DAT_02dc78f0;
  *(double *)(param_1 + 0x4c) =
       (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) * _DAT_005bea80) / _DAT_005a2150;
  return;
}
