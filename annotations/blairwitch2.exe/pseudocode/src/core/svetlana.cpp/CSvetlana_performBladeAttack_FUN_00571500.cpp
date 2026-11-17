// Name: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00571500
// Address: 00571500
// Address Range: [[00571500, 005716eb]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00571500(CSvetlana *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00571500(CSvetlana *this_ptr,int bone_index)

{
  CDeformableModelInstance *this_ptr_00;
  CSvetlana *this_ptr_01;
  CSkeleton *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint auStackY_1060 [998];
  CVector3f *pCVar7;
  char *sound_name;
  SDamageInfo local_b4;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     (&(this_ptr->base).base.model);
  local_18 = -1;
  pCVar2 = pCVar1;
  iVar5 = local_18;
  if (0 < pCVar1->bone_count) {
    do {
      iVar5 = iVar4;
      if (bone_index == pCVar2->bone_list[0].parent_index) break;
      iVar4 = iVar4 + 1;
      pCVar2 = (CSkeleton *)((pCVar2->motion_list).state_names[1] + 2);
      iVar5 = local_18;
    } while (iVar4 < pCVar1->bone_count);
  }
  local_18 = iVar5;
  if (local_18 == -1) {
    g_CHAR_PTR_01d046a0 = "..\\core\\svetlana.cpp";
    g_INT_01d046a4 = 0x2ef;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't find svetlana's parent bone");
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (this_ptr_00,bone_index,&local_6c);
  pCVar7 = &local_30;
  local_30.x = local_6c.x;
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar7,&local_24);
  local_48.x = local_24.x;
  *(uint *)((int)&local_48 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_24 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (this_ptr_00,local_18,&local_78);
  pCVar7 = &local_3c;
  local_3c.x = local_78.x;
  *(uint *)((int)&local_3c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_78 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar7,&local_60);
  local_54.x = local_60.x;
  *(uint *)((int)&local_54 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_60 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  iVar4 = 0;
  iVar5 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar5) {
        if (local_14 == 0) {
          sound_name = "svetlana-miss?.wav";
        }
        else {
          sound_name = "svetlana-attack?.wav";
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
        return;
      }
      this_ptr_01 = *(CSvetlana **)((int)g_CDemonSetPtr->characters + iVar4);
      if (this_ptr_01 != this_ptr) break;
LAB_00571618:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_b4);
    local_b4.damage_amount = 15.0;
    local_b4.ammo_type = AMMO_TYPE_SILVER;
    local_b4.dismember_prob = 0.7;
    local_b4.damage_type = DAMAGE_TYPE_ATTACK_BLADE;
    iVar3 = (*(((this_ptr_01->base).base.base.vtable._uc)->_uc).testDamageLine)
                      ((CCharacter *)this_ptr_01,&local_48,&local_54,&local_b4,(CVector3f *)0x0);
    if (iVar3 == 0) goto LAB_00571618;
    local_14 = 1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
