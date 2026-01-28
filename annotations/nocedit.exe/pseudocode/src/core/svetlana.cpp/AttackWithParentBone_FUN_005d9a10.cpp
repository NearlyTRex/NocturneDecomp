// Name: core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10
// Address: 005d9a10
// Address Range: [[005d9a10, 005d9ba2]]
// Convention: unknown
// Signature: void core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10(void)

#include "nocturne.h"

/* Signature: byte actors_hero_svetlana.cpp_AttackWithParentBone(uint param_1,
   uint param_2) */

void core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10(void)

{
  CDemonActor *pCVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  CSkeleton *pCVar6;
  int iVar7;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  char *sound_name;
  SDamageInfo local_84;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  iVar5 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  local_18 = -1;
  pCVar6 = pCVar2;
  iVar7 = local_18;
  if (0 < pCVar2->bone_count) {
    do {
      iVar7 = iVar5;
      if (in_stack_00000008 == pCVar6->bone_list[0].parent_index) break;
      iVar5 = iVar5 + 1;
      pCVar6 = (CSkeleton *)((pCVar6->motion_list).state_names[1] + 2);
      iVar7 = local_18;
    } while (iVar5 < pCVar2->bone_count);
  }
  local_18 = iVar7;
  if (local_18 == -1) {
    g_CurrentFilename = "..\\core\\svetlana.cpp";
    g_CurrentLineNumber = 0x2f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find svetlana's parent bone");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_30,
                      in_stack_00000008);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_24,pCVar3);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_48,local_18);
  iVar7 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_3c,pCVar3);
  iVar5 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar5) {
        if (local_14 == 0) {
          sound_name = "svetlana-miss?.wav";
        }
        else {
          sound_name = "svetlana-attack?.wav";
        }
        (*((in_stack_00000004->vtable)._ub)->playSound)(in_stack_00000004,sound_name);
        return;
      }
      pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar7 + -4);
      if (pCVar1 != in_stack_00000004) break;
LAB_005d9adc:
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_84);
    local_84.damage_amount = 15.0;
    local_84.ammo_type = 3;
    local_84.weapon_damage_modifier = 0.7;
    local_84.damage_type = 0x67;
    iVar4 = (*(((pCVar1->vtable)._uc)->_uc).cfunc12)();
    if (iVar4 == 0) goto LAB_005d9adc;
    local_14 = 1;
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 4;
  } while( true );
}
