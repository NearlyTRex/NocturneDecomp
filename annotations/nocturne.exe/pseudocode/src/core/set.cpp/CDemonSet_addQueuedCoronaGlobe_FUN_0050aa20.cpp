// Name: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20
// Address: 0050aa20
// Address Range: [[0050aa20, 0050aa6b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
  if ((g_CDemonMission_PTR_005baf90->is_in_editor == 0) && (_DAT_01fba480 < 100)) {
    *(CDemonGlobe **)(_DAT_01fba480 * 4 + 0x1fba484) = globe;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(this_ptr_00);
    *(int *)(_DAT_01fba480 * 4 + 0x1fba614) = iVar1;
    _DAT_01fba480 = _DAT_01fba480 + 1;
    return;
  }
  return;
}
