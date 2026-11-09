// Name: sound_sndmain.cpp_FUN_0054dbf0
// Address: 0054dbf0
// Address Range: [[0054dbf0, 0054dc47]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_0054dbf0(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_0054dbf0(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x1a8 != 0) {
    if ((*(int *)&this_ptr->field_0x158 != 0) && (_DAT_02648e80 != (int *)0x0)) {
      (**(code **)(*_DAT_02648e80 + 0x3c))
                (_DAT_02648e80,*(int *)&this_ptr->field_0x158,*(uint *)&this_ptr->field_0x1a4,
                 *(uint *)&this_ptr->field_0x1a8);
    }
    *(uint *)&this_ptr->field_0x1a8 = 0;
    *(uint *)&this_ptr->field_0x1a4 = 0;
  }
  return;
}
