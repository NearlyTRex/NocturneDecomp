// Name: core_anvil.cpp_CAnvil_FUN_00411d70
// Address: 00411d70
// Address Range: [[00411d70, 00411d79]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_FUN_00411d70(CAnvil * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_FUN_00411d70(CAnvil *this_ptr)

{
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158));
  return;
}


// Assembly code:
// 00411d70: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_anvil.cpp_CAnvil_FUN_00411d70
// 00411d74: PUSH EDX
// 00411d75: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
