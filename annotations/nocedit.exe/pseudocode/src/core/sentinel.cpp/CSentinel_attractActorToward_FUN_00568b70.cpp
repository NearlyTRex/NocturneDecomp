// Name: core_sentinel.cpp_CSentinel_attractActorToward_FUN_00568b70
// Address: 00568b70
// Address Range: [[00568b70, 00568c6d]]
// Convention: __cdecl
// Signature: int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_00568b70(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_00568b70(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

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
  pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_10,&g_ZeroVector,
                      (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03114210)
  ;
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_34,&g_ZeroVector,
                      (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03114214)
  ;
  local_1c.x = (pCVar2->x + pCVar1->x) * 0.5f;
  local_1c.y = (pCVar2->y + pCVar1->y) * 0.5f;
  local_1c.z = (pCVar2->z + pCVar1->z) * 0.5f + -0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_28,&local_1c);
  local_28.y = local_28.y + -4.0f;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,&local_28,(CVector3f *)&actor->orient);
  return 1;
}
