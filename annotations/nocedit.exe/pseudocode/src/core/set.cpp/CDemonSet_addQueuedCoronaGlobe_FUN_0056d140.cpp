// Name: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140
// Address: 0056d140
// Address Range: [[0056d140, 0056d18b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = g_CDemonRendererPtr2;
  if ((g_CDemonMissionPtr->is_in_editor == 0) && (g_QueuedCoronaGlobeCount < 100)) {
    g_QueuedCoronaGlobes[g_QueuedCoronaGlobeCount] = globe;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(this_ptr_00);
    g_QueuedCoronaGlobeAlphaMasks[g_QueuedCoronaGlobeCount] = iVar1;
    g_QueuedCoronaGlobeCount = g_QueuedCoronaGlobeCount + 1;
    return;
  }
  return;
}
