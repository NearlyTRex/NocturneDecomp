// Name: core_demnfolk.cpp_CDemnfolk_setup_FUN_00458bc0
// Address: 00458bc0
// Address Range: [[00458bc0, 00459037]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_setup_FUN_00458bc0(CDemnfolk *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_demnfolk_cpp_CDemnfolk_setup_FUN_00458bc0(CDemnfolk *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  char cVar1;
  int iVar2;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(this_ptr->base).base.model);
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar2 == 0) {
    this_ptr->difficulty_speed_scale = 0.75;
  }
  else {
    this_ptr->difficulty_speed_scale = 1.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[0] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_01,"Bip01 L ForeArm",1);
  this_ptr->bone_indices[3] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_01,"Bip01 R ForeArm",1);
  this_ptr->bone_indices[4] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_01,"Bip01 L UpperArm",1);
  this_ptr->bone_indices[5] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_01,"Bip01 R UpperArm",1);
  this_ptr->bone_indices[6] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  this_ptr->bone_indices[7] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  this_ptr->bone_indices[8] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  this_ptr->bone_indices[1] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  this_ptr->bone_indices[2] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  this_ptr->bone_indices[9] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  this_ptr->bone_indices[10] = iVar2;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,&DAT_005d7e0e,1);
  this_ptr->part_indices[0] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"l4arm",1);
  this_ptr->part_indices[1] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,&DAT_005d7e19,1);
  this_ptr->part_indices[2] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"r4arm",0);
  this_ptr->part_indices[3] = iVar2;
  if (iVar2 < 0) {
    this_ptr->part_indices[3] = 0x3b;
  }
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"waist",0);
  this_ptr->part_indices[4] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"torso",1);
  this_ptr->part_indices[5] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,&DAT_005d7e30,1);
  (this_ptr->base).base.model.part_data.visibility_flags[0x3b] = 0;
  this_ptr->part_indices[6] = iVar2;
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->bone_indices[1];
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = this_ptr->part_indices[1];
  (this_ptr->base).base.carry_hands[1].bone_index = this_ptr->bone_indices[2];
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = this_ptr->part_indices[3];
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = (uint)(this_ptr->is_miner_zombie != 0);
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
  iVar2 = this_ptr->part_indices[4];
  this_ptr->rise_delay = fVar3;
  if ((-1 < iVar2) && ((this_ptr->base).base.collision_cylinder_top < 0.0)) {
    (this_ptr->base).base.collision_cylinder_top =
         (this_ptr->base).base.model.bounding_box.max.y + (float)_DAT_005d7ef3;
  }
  pcVar4 = (this_ptr->base).base.model.model_name;
  this_ptr->bleedout_timer = 0.0;
  iVar2 = _stricmp(pcVar4,"d_cooper.dfm");
  pcVar5 = this_ptr->voice_prefix;
  if (iVar2 == 0) {
    pcVar4 = &DAT_005d7e42;
  }
  else {
    iVar2 = _stricmp(pcVar4,"d_deputy.dfm");
    if (iVar2 == 0) {
      pcVar4 = &DAT_005d7e52;
    }
    else {
      iVar2 = _stricmp(pcVar4,"d_editor.dfm");
      if (iVar2 == 0) {
        pcVar4 = &DAT_005d7e62;
      }
      else {
        iVar2 = _stricmp(pcVar4,"d_gretchen.dfm");
        if (iVar2 == 0) {
          pcVar4 = &DAT_005d7e74;
        }
        else {
          iVar2 = _stricmp(pcVar4,"d_innkeeper.dfm");
          if (iVar2 == 0) {
            pcVar4 = &DAT_005d7e87;
          }
          else {
            iVar2 = _stricmp(pcVar4,"d_librarian.dfm");
            if (iVar2 == 0) {
              pcVar4 = &DAT_005d7e9a;
            }
            else {
              iVar2 = _stricmp(pcVar4,"d_marm.dfm");
              if (iVar2 == 0) {
                pcVar4 = &DAT_005d7ea8;
              }
              else {
                iVar2 = _stricmp(pcVar4,"d_mrsbrody.dfm");
                if (iVar2 == 0) {
                  pcVar4 = &DAT_005d7eba;
                }
                else {
                  iVar2 = _stricmp(pcVar4,"d_pastor.dfm");
                  if (iVar2 == 0) {
                    pcVar4 = &DAT_005d7eca;
                  }
                  else {
                    iVar2 = _stricmp(pcVar4,"d_sheriff.dfm");
                    if (iVar2 == 0) {
                      pcVar4 = &DAT_005d7edb;
                    }
                    else {
                      iVar2 = _stricmp(pcVar4,"d_shopkeep.dfm");
                      if (iVar2 == 0) {
                        pcVar4 = &DAT_005d7eed;
                      }
                      else {
                        pcVar4 = &DAT_005d7ef0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[2] = 0;
  this_ptr->sfx_handles[3] = 0;
  this_ptr->unknown_0xc364 = 0;
  this_ptr->sfx_handles[0] = 0;
  return;
}
