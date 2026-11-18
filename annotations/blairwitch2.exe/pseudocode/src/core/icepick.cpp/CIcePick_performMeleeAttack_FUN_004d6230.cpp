// Name: core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004d6230
// Address: 004d6230
// Address Range: [[004d6230, 004d634a]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004d6230(CIcePick *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004d6230(CIcePick *this_ptr,int bone_index)

{
  CIcePick *this_ptr_00;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_1030 [999];
  CVector3f *input_local_point;
  SDamageInfo local_84;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  float local_14;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,bone_index,&local_3c);
  input_local_point = &local_48;
  local_48.x = local_3c.x;
  *(uint *)((int)&local_48 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_3c + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_48 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,input_local_point,&local_24);
  local_30.x = local_24.x;
  *(uint *)((int)&local_30 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_24 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  local_18 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar3) {
        if (local_18 == 0) {
          return;
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"icepick-punch?.wav");
        return;
      }
      this_ptr_00 = *(CIcePick **)((int)g_CDemonSetPtr->characters + iVar2);
      if (this_ptr_00 != this_ptr) break;
LAB_004d62a7:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_84);
    local_84.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(90.0,130.0);
    local_84.dismember_prob = 0.5;
    local_84.hit_part_index = -1;
    local_84.attacker = (CDemonActor *)this_ptr;
    local_84.wielder = (CDemonActor *)this_ptr;
    local_14 = local_84.damage_amount;
    iVar1 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                      ((CCharacter *)this_ptr_00,&local_30,1.0,&local_84);
    if (iVar1 == 0) goto LAB_004d62a7;
    local_18 = 1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
