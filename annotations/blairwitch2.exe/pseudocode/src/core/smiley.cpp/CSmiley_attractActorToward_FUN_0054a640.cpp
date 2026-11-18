// Name: core_smiley.cpp_CSmiley_attractActorToward_FUN_0054a640
// Address: 0054a640
// Address Range: [[0054a640, 0054a70e]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_0054a640(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_0054a640(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  EDeathState EVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  CVector3f *pCVar3;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  bVar2 = 0;
  if (actor == (CDemonActor *)0x0) {
    return 0;
  }
  EVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar1 != DEATH_STATE_ALIVE) {
    (*(((actor->vtable)._uc)->_uc).releaseFromGrab)((CCharacter *)actor);
    return 1;
  }
  core_xform_cpp_transformVector3x4_FUN_00591530
            (&g_ZeroVector,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices +
             g_INT_ARRAY_02628610[2],&CStack_14);
  pCVar3 = &CStack_2c;
  CStack_2c.x = CStack_14.x;
  *(uint *)((int)&CStack_2c + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar3,&CStack_38);
  pCVar3 = (CVector3f *)&actor->orient;
  CStack_20.x = CStack_38.x;
  *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_38 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  CStack_20.y = CStack_20.y + -4.0f;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,&CStack_20,pCVar3);
  return 1;
}
