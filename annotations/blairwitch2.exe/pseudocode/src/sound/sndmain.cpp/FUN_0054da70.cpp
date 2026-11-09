// Name: sound_sndmain.cpp_FUN_0054da70
// Address: 0054da70
// Address Range: [[0054da70, 0054dab1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_0054da70(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_0054da70(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x158 != 0) {
    if (_DAT_02648e80 != (int *)0x0) {
      (**(code **)(*_DAT_02648e80 + 0x34))(_DAT_02648e80,*(uint *)&this_ptr->field_0x158);
      *(uint *)&this_ptr->field_0x158 = 0;
      return;
    }
    *(uint *)&this_ptr->field_0x158 = 0;
  }
  return;
}
