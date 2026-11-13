// Name: core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f2430
// Address: 004f2430
// Address Range: [[004f2430, 004f254a]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004f2430(CIcePick *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004f2430(CIcePick *this_ptr,int bone_index)

{
  CIcePick *this_ptr_00;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1030 [6];
  int aiStackY_1018 [993];
  float *pfVar5;
  SDamageInfo local_84;
  float local_48;
  float afStack_44 [2];
  CVector3f local_3c;
  CVector3f local_30;
  float local_24;
  int aiStack_20 [3];
  float local_14;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,bone_index,&local_3c);
  pfVar5 = &local_48;
  local_48 = local_3c.x;
  afStack_44[(uint)bVar4 * -2] = *(float *)((int)&local_3c + (uint)bVar4 * -8 + 4);
  afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar5);
  local_30.x = local_24;
  *(int *)((int)&local_30 + (uint)bVar4 * -8 + 4) = aiStack_20[(uint)bVar4 * -2];
  *(int *)((int)&local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       aiStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  aiStack_20[2] = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar3) {
        if (aiStack_20[2] == 0) {
          return;
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"icepick-punch?.wav");
        return;
      }
      this_ptr_00 = *(CIcePick **)((int)g_CDemonSetPtr->characters + iVar2);
      if (this_ptr_00 != this_ptr) break;
LAB_004f24a7:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&local_84);
    local_84.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(90.0,130.0);
    local_84.dismember_prob = 0.5;
    local_84.hit_part_index = -1;
    local_84.attacker = (CDemonActor *)this_ptr;
    local_84.wielder = (CDemonActor *)this_ptr;
    local_14 = local_84.damage_amount;
    iVar1 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                      ((CCharacter *)this_ptr_00,&local_30,1.0,&local_84);
    if (iVar1 == 0) goto LAB_004f24a7;
    aiStack_20[2] = 1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
