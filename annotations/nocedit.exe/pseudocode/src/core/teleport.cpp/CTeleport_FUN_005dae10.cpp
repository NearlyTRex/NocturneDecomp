// Name: core_teleport.cpp_CTeleport_FUN_005dae10
// Address: 005dae10
// Address Range: [[005dae10, 005dae47]]
// Convention: __cdecl
// Signature: int core_teleport.cpp_CTeleport_FUN_005dae10(CTeleport * this_ptr)

#include "nocturne.h"

int __cdecl core_teleport_cpp_CTeleport_FUN_005dae10(CTeleport *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000008,0xfb);
      return 0;
    }
  }
  return 0;
}
