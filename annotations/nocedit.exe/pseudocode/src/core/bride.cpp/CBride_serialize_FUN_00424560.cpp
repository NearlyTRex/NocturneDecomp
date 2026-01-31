// Name: core_bride.cpp_CBride_serialize_FUN_00424560
// Address: 00424560
// Address Range: [[00424560, 004245e7]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_serialize_FUN_00424560(CBride *this_ptr)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_serialize_FUN_00424560(CBride *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base);
  if (g_CBrideClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  }
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < g_CBrideClassVersion) && (g_CBrideClassVersion < 4)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (g_CBrideClassVersion < 3) {
    return;
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(this_ptr->base).base.model.motion_controller,"state");
  return;
}
