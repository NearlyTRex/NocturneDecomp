// Name: core_smiley.cpp_CSmiley_attractActorToward_FUN_0054a640
// Address: 0054a640
// Address Range: [[0054a640, 0054a70e]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_0054a640(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_0054a640(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  EDeathState EVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  uint *puVar3;
  CVector3f *new_orientation;
  float fStack_38;
  uint uStack_2c;
  CVector3f CStack_20;
  uint uStack_14;
  uint auStack_10 [2];
  
  bVar2 = 0;
  if (actor == (CDemonActor *)0x0) {
    return 0;
  }
  EVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar1 != DEATH_STATE_ALIVE) {
    (*(((actor->vtable)._uc)->_uc).releaseFromGrab)((CCharacter *)actor);
    return 1;
  }
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02628618);
  puVar3 = &stack0xffffffd4;
  uStack_2c = uStack_14;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * 0xfffffffe * 4) =
       auStack_10[(uint)bVar2 * -2];
  *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       auStack_10[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  core_actor_cpp_FUN_00408d70(this_ptr,puVar3);
  new_orientation = (CVector3f *)&actor->orient;
  CStack_20.x = fStack_38;
  *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4) =
       *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  CStack_20.y = CStack_20.y + _DAT_005e7805;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,&CStack_20,new_orientation);
  return 1;
}
