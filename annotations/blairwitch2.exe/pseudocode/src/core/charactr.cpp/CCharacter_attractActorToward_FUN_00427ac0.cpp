// Name: core_charactr.cpp_CCharacter_attractActorToward_FUN_00427ac0
// Address: 00427ac0
// Address Range: [[00427ac0, 00427be8]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_attractActorToward_FUN_00427ac0(CCharacter *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_attractActorToward_FUN_00427ac0(CCharacter *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  CDemonActor_vtable *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_104c [1012];
  CVector3f *new_position;
  CVector3f *new_orientation;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  byte auStack_40 [8];
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar3 = 0;
  if (actor != (CDemonActor *)0x0) {
    iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).canBeAttracted)
                      (this_ptr,(CDemonActor *)&stack0xffffff90);
    if (iVar2 != 0) {
      core_actor_cpp_FUN_00408d70(actor,target_local_point);
      afStack_54[2] = (float)auStack_40._0_4_;
      afStack_54[(uint)bVar3 * -2 + 3] = *(float *)(auStack_40 + (uint)bVar3 * -8 + 4);
      afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           *(float *)(auStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      afStack_38[1] = fStack_70 - afStack_54[2];
      afStack_38[2] = fStack_6c - afStack_54[3];
      afStack_38[3] = fStack_68 - fStack_44;
      fStack_28 = fStack_70 - afStack_54[2];
      afStack_38[(uint)bVar3 * -2 + 5] = afStack_38[(uint)bVar3 * 0xfffffffe + 2];
      afStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 6] =
           afStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 3];
      fStack_1c = SQRT(fStack_20 * fStack_20 + fStack_28 * fStack_28);
      fStack_18 = g_CGamePtr->delta_time_float * (float)_DAT_005ccdd6;
      fStack_24 = 0.0;
      if (fStack_18 < fStack_1c) {
        fStack_14 = fStack_18 / fStack_1c;
        fStack_28 = fStack_28 * fStack_14;
        fStack_24 = fStack_14 * 0.0;
        fStack_20 = fStack_20 * fStack_14;
      }
      new_orientation = (CVector3f *)&actor->orient;
      pCVar1 = (actor->vtable)._ub;
      new_position = &CStack_64;
      fStack_58 = (actor->location).position.x + fStack_28;
      afStack_54[0] = (actor->location).position.y + fStack_24;
      afStack_54[1] = (actor->location).position.z + fStack_20;
      CStack_64.x = fStack_58;
      *(float *)((int)&CStack_64 + (uint)bVar3 * -8 + 4) = afStack_54[(uint)bVar3 * -2];
      *(float *)((int)&CStack_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      (*pCVar1->setPositionAndOrientation)(actor,new_position,new_orientation);
      return 1;
    }
  }
  return 0;
}
