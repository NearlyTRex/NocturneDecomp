// Name: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390
// Address: 00537390
// Address Range: [[00537390, 005373de]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = g_CDemonRenderer_PTR_005f2afc;
  if ((g_CDemonMission_PTR_00600530->is_in_editor == 0) && (g_QueuedCoronaGlobeCount < 100)) {
    g_QueuedCoronaGlobes[g_QueuedCoronaGlobeCount] = globe;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(this_ptr_00);
    g_QueuedCoronaGlobeAlphaMasks[g_QueuedCoronaGlobeCount] = iVar1;
    g_QueuedCoronaGlobeCount = g_QueuedCoronaGlobeCount + 1;
    return;
  }
  return;
}
