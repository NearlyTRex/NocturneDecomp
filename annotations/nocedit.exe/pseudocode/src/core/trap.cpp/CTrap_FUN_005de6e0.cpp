// Name: core_trap.cpp_CTrap_FUN_005de6e0
// Address: 005de6e0
// Address Range: [[005de6e0, 005de6ea]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_FUN_005de6e0(CTrap * this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_FUN_005de6e0(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&this_ptr->model_name);
  this_ptr->field2_0x15c[0x178] = '\0';
  this_ptr->field2_0x15c[0x179] = '\0';
  this_ptr->field2_0x15c[0x17a] = '\0';
  this_ptr->field2_0x15c[0x17b] = '\0';
  return;
}
