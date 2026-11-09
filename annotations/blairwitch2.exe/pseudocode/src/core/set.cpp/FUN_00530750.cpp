// Name: core_set.cpp_FUN_00530750
// Address: 00530750
// Address Range: [[00530750, 0053079e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00530750(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00530750(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = DAT_0060b280;
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) && (_DAT_01fc97b0 < 100)) {
    *(CDemonGlobe **)(_DAT_01fc97b0 * 4 + 0x1fc97b4) = globe;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(this_ptr_00);
    *(int *)(_DAT_01fc97b0 * 4 + 0x1fc9944) = iVar1;
    _DAT_01fc97b0 = _DAT_01fc97b0 + 1;
    return;
  }
  return;
}
