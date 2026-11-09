// Name: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960
// Address: 00551960
// Address Range: [[00551960, 0055198d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  if ((0xff < *(int *)(globe + 0xc)) && (_DAT_01fe55d0 < 100)) {
    *(CDemonGlobe **)(&DAT_01fe55d0 + (_DAT_01fe55d0 + 1) * 4) = globe;
    _DAT_01fe55d0 = _DAT_01fe55d0 + 1;
    return;
  }
  return;
}
