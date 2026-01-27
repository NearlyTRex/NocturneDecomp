// Name: core_wateract.cpp_CWaterActor_FUN_005eb910
// Address: 005eb910
// Address Range: [[005eb910, 005eb932]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005eb910(CWaterActor * this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb910(CWaterActor *this_ptr)

{
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(&this_ptr->base,in_stack_00000008);
  in_stack_00000008->alpha_or_wetness = 0.3;
  in_stack_00000008->reflectivity = 0.8;
  return;
}
