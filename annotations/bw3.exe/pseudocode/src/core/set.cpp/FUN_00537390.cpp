// Name: core_set.cpp_FUN_00537390
// Address: 00537390
// Address Range: [[00537390, 005373de]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00537390(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00537390(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = DAT_005f2afc;
  if ((*(int *)(0x01D81080 + 0x1008) == 0) && (_DAT_0203aec4 < 100)) {
    *(CDemonGlobe **)(_DAT_0203aec4 * 4 + 0x203aec8) = globe;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(this_ptr_00);
    *(int *)(_DAT_0203aec4 * 4 + 0x203b058) = iVar1;
    _DAT_0203aec4 = _DAT_0203aec4 + 1;
    return;
  }
  return;
}
