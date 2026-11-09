// Name: sound_sndmain.cpp_FUN_00553760
// Address: 00553760
// Address Range: [[00553760, 005537b7]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00553760(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00553760(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x1ac != 0) {
    if ((*(int *)&this_ptr->field_0x158 != 0) && (_DAT_02cf3280 != (int *)0x0)) {
      (**(code **)(*_DAT_02cf3280 + 0x3c))
                (_DAT_02cf3280,*(int *)&this_ptr->field_0x158,*(uint *)&this_ptr->field_0x1a8,
                 *(uint *)&this_ptr->field_0x1ac);
    }
    *(uint *)&this_ptr->field_0x1ac = 0;
    *(uint *)&this_ptr->field_0x1a8 = 0;
  }
  return;
}
