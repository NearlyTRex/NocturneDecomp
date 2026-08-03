// Name: core_sentinel.cpp_CSentinel_attractActorToward_FUN_005066e0
// Address: 005066e0
// Address Range: [[005066e0, 005067dd]]
// Convention: __cdecl
// Signature: int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_005066e0(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_005066e0(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (actor == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar1 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                     (&local_10,(CVector3f *)&DAT_02dd1184,
                      (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_01e5721c
                     );
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                     (&local_34,(CVector3f *)&DAT_02dd1184,
                      (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_01e57220
                     );
  local_1c.x = (pCVar2->x + pCVar1->x) * 0.5f;
  local_1c.y = (pCVar2->y + pCVar1->y) * 0.5f;
  local_1c.z = (pCVar2->z + pCVar1->z) * 0.5f + -0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&local_28,&local_1c);
  local_28.y = local_28.y + -4.0f;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,&local_28,(CVector3f *)&actor->orient);
  return 1;
}
