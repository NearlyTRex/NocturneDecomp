// Name: core_charactr.cpp_CCharacter_FUN_00428140
// Address: 00428140
// Address Range: [[00428140, 00428150]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428140(CCharacter * this_ptr)
// Cross-references:
//   core_enemy.cpp_CEnemy_FUN_004a9650 (004a9650) at 004a9655 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f2540 (004f2540) at 004f2555 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544870 (00544870) at 00544878 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_00428140(CCharacter *this_ptr)

{
  char cVar1;
  CDemonActor *this_ptr_00;
  undefined4 uVar2;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  uVar2 = _DAT_0065b834;
  this_ptr->cloth_data[0x35c] = '\0';
  this_ptr->cloth_data[0x35d] = '\0';
  this_ptr->cloth_data[0x35e] = '\0';
  this_ptr->cloth_data[0x35f] = '\0';
  *(undefined4 *)(this_ptr->field2_0x240c + 8) = uVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_00823a98,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_00823a98);
  pCVar4 = this_ptr;
  do {
    this_ptr_00 = pCVar4->carry_hands[0].carry_actor;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (this_ptr_00,"..\\core\\charactr.cpp",0x106);
      pCVar5 = (CCharacter *)(*((this_ptr_00->metadata).vtable)->getCarrier)(this_ptr_00);
      if (pCVar5 == (CCharacter *)0x0) {
        (*((this_ptr_00->metadata).vtable)->pickup)(this_ptr_00,&this_ptr->base_actor);
      }
      else if (pCVar5 != this_ptr) {
        g_CurrentFilename = "..\\core\\charactr.cpp";
        g_CurrentLineNumber = 0x10b;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("%s is carrying %s, but %s thinks it is being carried by %s",this_ptr,this_ptr_00);
      }
    }
    pCVar4 = (CCharacter *)&(pCVar4->base_actor).orient_matrix.m[0].z;
  } while (pCVar4 != (CCharacter *)((this_ptr->base_actor).create_event + 0x10));
  if ((this_ptr->model).padding_0x0[0x2260] != '\0') {
    *(float *)((this_ptr->model).padding_0x0 + 0x54) = this_ptr->size_scale;
    core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
    core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
    uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
    *(undefined4 *)(this_ptr->field11_0x25a0 + 0x44) = uVar2;
  }
  core_charactr_cpp_CCharacter_FUN_0042d530(this_ptr);
  if (*(int *)(this_ptr->field11_0x25a0 + 0x74) != 0) {
    iVar7 = 0;
    iVar3 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
    this_ptr->cloth_data[0x47c] = '\x04';
    this_ptr->cloth_data[0x47d] = '\0';
    this_ptr->cloth_data[0x47e] = '\0';
    this_ptr->cloth_data[0x47f] = '\0';
    if (0 < *(int *)(iVar3 + 0x28558)) {
      do {
        iVar7 = iVar7 + 1;
        core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
      } while (iVar7 < *(int *)(iVar3 + 0x28558));
    }
    iVar3 = 0;
    pCVar4 = this_ptr;
    pCVar5 = this_ptr;
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      do {
        pCVar5->cloth_data[0xadc] = '\x04';
        pCVar5->cloth_data[0xadd] = '\0';
        pCVar5->cloth_data[0xade] = '\0';
        pCVar5->cloth_data[0xadf] = '\0';
        pCVar4->cloth_data[0x498] = '\0';
        pCVar4->cloth_data[0x499] = '\0';
        pCVar4->cloth_data[0x49a] = '\0';
        pCVar4->cloth_data[0x49b] = '@';
        iVar3 = iVar3 + 1;
        pCVar4 = (CCharacter *)((pCVar4->base_actor).actor_name + 0x18);
        pCVar5 = (CCharacter *)((pCVar5->model).padding_0x0 + 0x14c);
      } while (iVar3 < *(int *)(this_ptr->cloth_data + 0x478));
    }
  }
  core_cloth_cpp_CClothList_load_FUN_0043bfa0((CClothList *)&this_ptr->cloth_count);
  core_cloth_cpp_FUN_0043c290();
  core_cloth_cpp_FUN_0043c2d0();
  core_charactr_cpp_CCharacter_FUN_0042e670();
  if (this_ptr->descriptive_name[0] != '\0') {
    this_ptr->cloth_data[0x8d3c] = '\0';
    this_ptr->cloth_data[0x8d3d] = '\0';
    this_ptr->cloth_data[0x8d3e] = '\0';
    this_ptr->cloth_data[0x8d3f] = '\0';
    return;
  }
  pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&this_ptr->base_actor);
  pcVar6 = pcVar6 + 1;
  pcVar8 = this_ptr->descriptive_name;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  this_ptr->cloth_data[0x8d3c] = '\0';
  this_ptr->cloth_data[0x8d3d] = '\0';
  this_ptr->cloth_data[0x8d3e] = '\0';
  this_ptr->cloth_data[0x8d3f] = '\0';
  return;
}


// Assembly code:
// 00428140: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00428140
// 00428141: PUSH ESI
// 00428142: PUSH EDI
// 00428143: PUSH EBP
// 00428144: SUB ESP,0x4
// 00428147: MOV EBP,dword ptr [ESP + 0x18]
// 0042814b: PUSH EBP
// 0042814c: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
