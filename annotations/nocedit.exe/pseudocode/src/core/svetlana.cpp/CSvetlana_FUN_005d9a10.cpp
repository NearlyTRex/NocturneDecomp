// Name: core_svetlana.cpp_CSvetlana_FUN_005d9a10
// Address: 005d9a10
// Address Range: [[005d9a10, 005d9ba2]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9a10(CSvetlana *this_ptr)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9a10(CSvetlana *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSvetlana *this_ptr_01;
  CSkeleton *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  CSkeleton *pCVar5;
  int iVar6;
  int in_stack_00000008;
  char *sound_name;
  SDamageInfo local_84;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&(this_ptr->base).base.model);
  local_18 = -1;
  pCVar5 = pCVar1;
  iVar6 = local_18;
  if (0 < pCVar1->bone_count) {
    do {
      iVar6 = iVar4;
      if (in_stack_00000008 == pCVar5->bone_list[0].parent_index) break;
      iVar4 = iVar4 + 1;
      pCVar5 = (CSkeleton *)((pCVar5->motion_list).state_names[1] + 2);
      iVar6 = local_18;
    } while (iVar4 < pCVar1->bone_count);
  }
  local_18 = iVar6;
  if (local_18 == -1) {
    g_CurrentFilename = "..\\core\\svetlana.cpp";
    g_CurrentLineNumber = 0x2f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find svetlana's parent bone");
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_30,in_stack_00000008);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_24,pCVar2);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_48,local_18);
  iVar6 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_3c,pCVar2);
  iVar4 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar4) {
        if (local_14 == 0) {
          sound_name = "svetlana-miss?.wav";
        }
        else {
          sound_name = "svetlana-attack?.wav";
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
        return;
      }
      this_ptr_01 = *(CSvetlana **)(g_CDemonSetPtr->unk4 + iVar6 + -4);
      if (this_ptr_01 != this_ptr) break;
LAB_005d9adc:
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_84);
    local_84.damage_amount = 15.0;
    local_84.ammo_type = 3;
    local_84.weapon_damage_modifier = 0.7;
    local_84.damage_type = 0x67;
    iVar3 = (*(((this_ptr_01->base).base.base.vtable._uc)->_uc).testDamageLine)
                      ((CCharacter *)this_ptr_01,&local_24,&local_3c,&local_84,(CVector3f *)0x0);
    if (iVar3 == 0) goto LAB_005d9adc;
    local_14 = 1;
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 4;
  } while( true );
}
