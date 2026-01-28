// Name: core_trigger.cpp_CTrigger_FUN_005e0a50
// Address: 005e0a50
// Address Range: [[005e0a50, 005e0a9c]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005e0a50(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0a50(CTrigger *this_ptr)

{
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(&this_ptr->base,in_stack_00000008);
  if ((*(int *)(this_ptr->unk + 0x1c) == 5) &&
     (*(int *)(this_ptr->unk + 0x19c) == in_stack_00000008->unk2)) {
    this_ptr->unk[0x198] = '\x01';
    this_ptr->unk[0x199] = '\0';
    this_ptr->unk[0x19a] = '\0';
    this_ptr->unk[0x19b] = '\0';
  }
  in_stack_00000008->alpha_or_wetness = 0.0;
  in_stack_00000008->reflectivity = 1.0;
  in_stack_00000008->angle_copy = in_stack_00000008->angle_or_rotation;
  return;
}
