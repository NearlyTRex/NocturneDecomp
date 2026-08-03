// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0
// Address: 005247a0
// Address Range: [[005247a0, 0052482d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(CSfxSlot *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (_DAT_02dc84bc < 1) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x935;
    core_main_c_FUN_004c8440("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).flags & 1) != 0) {
    *(uint *)&(this_ptr->options).delay_remaining = 0;
    *(uint *)((int)&(this_ptr->options).delay_remaining + 4) = 0;
    return;
  }
  dVar1 = (this_ptr->options).position.x - _DAT_02dc78e0;
  dVar3 = (this_ptr->options).position.y - _DAT_02dc78e8;
  dVar2 = (this_ptr->options).position.z - _DAT_02dc78f0;
  (this_ptr->options).delay_remaining =
       (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) * _DAT_005bea80) / _DAT_005a2150;
  return;
}
