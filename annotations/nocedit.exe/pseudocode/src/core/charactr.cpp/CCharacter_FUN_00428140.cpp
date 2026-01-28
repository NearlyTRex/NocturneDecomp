// Name: core_charactr.cpp_CCharacter_FUN_00428140
// Address: 00428140
// Address Range: [[00428140, 00428150]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_00428140(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428140(CCharacter *this_ptr)

{
  char cVar1;
  CDemonActor *this_ptr_00;
  float fVar2;
  CSkeleton *pCVar3;
  int iVar4;
  CCharacter *pCVar5;
  CCharacter *pCVar6;
  char *pcVar7;
  char *pcVar8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  fVar2 = 9999.0f;
  this_ptr->cloth_data[0x35c] = '\0';
  this_ptr->cloth_data[0x35d] = '\0';
  this_ptr->cloth_data[0x35e] = '\0';
  this_ptr->cloth_data[0x35f] = '\0';
  *(float *)(this_ptr->unk1 + 8) = fVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_00823a98,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_00823a98);
  pCVar5 = this_ptr;
  do {
    this_ptr_00 = pCVar5->carry_hands[0].carry_actor;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (this_ptr_00,"..\\core\\charactr.cpp",0x106);
      pCVar6 = (CCharacter *)(*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
      if (pCVar6 == (CCharacter *)0x0) {
        (*((this_ptr_00->vtable)._ub)->pickup)(this_ptr_00,&this_ptr->base);
      }
      else if (pCVar6 != this_ptr) {
        g_CurrentFilename = "..\\core\\charactr.cpp";
        g_CurrentLineNumber = 0x10b;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("%s is carrying %s, but %s thinks it is being carried by %s",this_ptr,this_ptr_00,this_ptr_00,pCVar6);
      }
    }
    pCVar5 = (CCharacter *)&(pCVar5->base).orient_matrix.m[0].z;
  } while (pCVar5 != (CCharacter *)((this_ptr->base).create_event + 0x10));
  if ((this_ptr->model).model_name[0] != '\0') {
    (this_ptr->model).scale_factor = this_ptr->size_scale;
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&this_ptr->model);
    pcVar8 = "bip01 head";
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&this_ptr->model);
    iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar3,pcVar8);
    *(int *)(this_ptr->unk2 + 0x44) = iVar4;
  }
  core_charactr_cpp_CCharacter_FUN_0042d530(this_ptr);
  if (*(int *)(this_ptr->unk2 + 0x74) != 0) {
    iVar4 = 0;
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&this_ptr->model);
    this_ptr->cloth_data[0x47c] = '\x04';
    this_ptr->cloth_data[0x47d] = '\0';
    this_ptr->cloth_data[0x47e] = '\0';
    this_ptr->cloth_data[0x47f] = '\0';
    if (0 < pCVar3->bone_count) {
      do {
        iVar4 = iVar4 + 1;
        core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
      } while (iVar4 < pCVar3->bone_count);
    }
    iVar4 = 0;
    pCVar5 = this_ptr;
    pCVar6 = this_ptr;
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      do {
        pCVar6->cloth_data[0xadc] = '\x04';
        pCVar6->cloth_data[0xadd] = '\0';
        pCVar6->cloth_data[0xade] = '\0';
        pCVar6->cloth_data[0xadf] = '\0';
        pCVar5->cloth_data[0x498] = '\0';
        pCVar5->cloth_data[0x499] = '\0';
        pCVar5->cloth_data[0x49a] = '\0';
        pCVar5->cloth_data[0x49b] = '@';
        iVar4 = iVar4 + 1;
        pCVar5 = (CCharacter *)((pCVar5->base).actor_name + 0x18);
        pCVar6 = (CCharacter *)&(pCVar6->model).transformed_vertices[0x14].y;
      } while (iVar4 < *(int *)(this_ptr->cloth_data + 0x478));
    }
  }
  core_cloth_cpp_CClothList_load_FUN_0043bfa0((CClothList *)&this_ptr->cloth_count);
  core_cloth_cpp_FUN_0043c290();
  core_cloth_cpp_FUN_0043c2d0();
  core_charactr_cpp_CCharacter_FUN_0042e670(this_ptr);
  if (this_ptr->descriptive_name[0] != '\0') {
    this_ptr->cloth_data[0x8d3c] = '\0';
    this_ptr->cloth_data[0x8d3d] = '\0';
    this_ptr->cloth_data[0x8d3e] = '\0';
    this_ptr->cloth_data[0x8d3f] = '\0';
    return;
  }
  pcVar8 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&this_ptr->base);
  pcVar8 = pcVar8 + 1;
  pcVar7 = this_ptr->descriptive_name;
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  this_ptr->cloth_data[0x8d3c] = '\0';
  this_ptr->cloth_data[0x8d3d] = '\0';
  this_ptr->cloth_data[0x8d3e] = '\0';
  this_ptr->cloth_data[0x8d3f] = '\0';
  return;
}
