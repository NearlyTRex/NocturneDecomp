// Name: core_smiley.cpp_CSmiley_attractActorToward_FUN_005a3160
// Address: 005a3160
// Address Range: [[005a3160, 005a3212]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_005a3160(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_005a3160(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  EDeathState EVar1;
  CVector3f *input_local_point;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  if (actor == (CDemonActor *)0x0) {
    return 0;
  }
  EVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar1 != DEATH_STATE_ALIVE) {
    (*(((actor->vtable)._uc)->_uc).releaseFromGrab)((CCharacter *)actor);
    return 1;
  }
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_005f4dc0
                 (&CStack_14,&g_ZeroVector.f,
                  (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f48fa8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_20,input_local_point);
  CStack_20.y = CStack_20.y + -4.0f;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,&CStack_20,(CVector3f *)&actor->orient);
  return 1;
}
