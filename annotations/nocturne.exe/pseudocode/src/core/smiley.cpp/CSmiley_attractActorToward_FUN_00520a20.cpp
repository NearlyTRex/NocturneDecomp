// Name: core_smiley.cpp_CSmiley_attractActorToward_FUN_00520a20
// Address: 00520a20
// Address Range: [[00520a20, 00520ad2]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

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
       core_xform_cpp_transformVector3x4_FUN_0055a8b0
                 (&CStack_14,(CVector3f *)&DAT_02dd1184,
                  (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_02da8a7c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&CStack_20,input_local_point);
  CStack_20.y = CStack_20.y + -4.0f;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,&CStack_20,(CVector3f *)&actor->orient);
  return 1;
}
