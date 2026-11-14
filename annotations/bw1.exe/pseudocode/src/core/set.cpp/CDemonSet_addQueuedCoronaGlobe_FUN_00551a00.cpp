// Name: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00
// Address: 00551a00
// Address Range: [[00551a00, 00551a4e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = DAT_00612560;
  if ((*(int *)(0x01D2C900 + 0x1008) == 0) && (_DAT_01fe5764 < 100)) {
    *(CDemonGlobe **)(_DAT_01fe5764 * 4 + 0x1fe5768) = globe;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(this_ptr_00);
    *(int *)(_DAT_01fe5764 * 4 + 0x1fe58f8) = iVar1;
    _DAT_01fe5764 = _DAT_01fe5764 + 1;
    return;
  }
  return;
}
