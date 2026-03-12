// Name: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_005d9a10
// Address: 005d9a10
// Address Range: [[005d9a10, 005d9ba2]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_005d9a10(CSvetlana *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_005d9a10(CSvetlana *this_ptr,int bone_index)

{
  bool bVar1;
  CSkeleton *pCVar1;
  CVector3f *pCVar2;
  CVector3f *input_local_point;
  int iVar3;
  int iVar4;
  CSkeleton *pCVar5;
  int iVar6;
  int iVar2;
  SDamageInfo local_84;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  int local_14;
  char *sound_name;
  CDeformableModelInstance *this_ptr_00;
  CSvetlana *this_ptr_01;
  
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&(this_ptr->base).base.model);
  local_18 = -1;
  pCVar5 = pCVar1;
  iVar2 = local_18;
  if (0 < pCVar1->bone_count) {
    do {
      iVar2 = iVar4;
      if (bone_index == pCVar5->bone_list[0].parent_index) break;
      iVar4 = iVar4 + 1;
      pCVar5 = (CSkeleton *)((pCVar5->motion_list).state_names[1] + 2);
      iVar2 = local_18;
    } while (iVar4 < pCVar1->bone_count);
  }
  local_18 = iVar2;
  if (local_18 == -1) {
    g_CurrentFilename = "..\\core\\svetlana.cpp";
    g_CurrentLineNumber = 0x2f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find svetlana's parent bone");
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_30,bone_index);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_24,pCVar2);
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                 (this_ptr_00,&local_48,local_18);
  iVar6 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_3c,input_local_point);
  iVar2 = 0;
  bVar1 = false;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar2) {
        if (bVar1) {
          sound_name = "svetlana-attack?.wav";
        }
        else {
          sound_name = "svetlana-miss?.wav";
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
        return;
      }
      this_ptr_01 = *(CSvetlana **)((int)g_CDemonSetPtr->characters + iVar6);
      if (this_ptr_01 != this_ptr) break;
LAB_005d9adc:
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_84);
    local_84.damage_amount = 15.0;
    local_84.ammo_type = AMMO_TYPE_SILVER;
    local_84.dismember_prob = 0.7;
    local_84.damage_type = DAMAGE_TYPE_MELEE;
    iVar3 = (*(((this_ptr_01->base).base.base.vtable._uc)->_uc).testDamageLine)
                      ((CCharacter *)this_ptr_01,&local_24,&local_3c,&local_84,(CVector3f *)0x0);
    if (iVar3 == 0) goto LAB_005d9adc;
    bVar1 = true;
    iVar2 = iVar2 + 1;
    iVar6 = iVar6 + 4;
  } while( true );
}
