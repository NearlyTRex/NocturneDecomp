// Name: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00
// Address: 00551a00
// Address Range: [[00551a00, 00551a4e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = g_CDemonRenderer_PTR_00612560;
  if ((g_CDemonMission_PTR_0061f650->is_in_editor == 0) && (g_QueuedCoronaGlobeCount < 100)) {
    g_QueuedCoronaGlobes[g_QueuedCoronaGlobeCount] = globe;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(this_ptr_00);
    g_QueuedCoronaGlobeAlphaMasks[g_QueuedCoronaGlobeCount] = iVar1;
    g_QueuedCoronaGlobeCount = g_QueuedCoronaGlobeCount + 1;
    return;
  }
  return;
}
