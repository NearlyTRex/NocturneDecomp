// Name: core_anvil.cpp_CAnvil_FUN_00411d70
// Address: 00411d70
// Address Range: [[00411d70, 00411d79]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_FUN_00411d70(CAnvil * this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_FUN_00411d70(CAnvil *this_ptr)

{
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158));
  return;
}
