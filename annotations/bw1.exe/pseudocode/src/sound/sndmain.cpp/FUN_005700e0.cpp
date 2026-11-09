// Name: sound_sndmain.cpp_FUN_005700e0
// Address: 005700e0
// Address Range: [[005700e0, 00570121]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_005700e0(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_005700e0(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x158 != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      (**(code **)(*_DAT_02c80650 + 0x34))(_DAT_02c80650,*(uint *)&this_ptr->field_0x158);
      *(uint *)&this_ptr->field_0x158 = 0;
      return;
    }
    *(uint *)&this_ptr->field_0x158 = 0;
  }
  return;
}
