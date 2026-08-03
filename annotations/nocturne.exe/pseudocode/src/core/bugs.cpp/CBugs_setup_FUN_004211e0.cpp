// Name: core_bugs.cpp_CBugs_setup_FUN_004211e0
// Address: 004211e0
// Address Range: [[004211e0, 00421462]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setup_FUN_004211e0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_setup_FUN_004211e0(CBugs *this_ptr)

{
  float fVar1;
  float fVar2;
  float min_value;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CVector3f *pCVar7;
  SBug *pSVar8;
  char *pcVar9;
  CVector3f *pCVar10;
  CVector3f *local_2c;
  int local_28;
  CKeyFramedModelInstance *local_20;
  char *local_1c;
  
  (this_ptr->base).base.base.orient.vec.z = 0.0;
  (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.z;
  (this_ptr->base).base.base.orient.vec.x = (this_ptr->base).base.base.orient.vec.y;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr->model_count = 4;
  iVar6 = 0;
  if (0 < this_ptr->model_count) {
    pcVar9 = this_ptr->models[0].model_name;
    do {
      if (*pcVar9 == '\0') {
        iVar5 = this_ptr->model_count + -1;
        this_ptr->model_count = iVar5;
        if (iVar6 < iVar5) {
          local_20 = this_ptr->models + iVar6;
          local_1c = this_ptr->models[iVar6 + 1].model_name;
          iVar5 = iVar6;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(local_20,local_1c);
            iVar5 = iVar5 + 1;
            local_20 = local_20 + 1;
            local_1c = local_1c + 0x17c;
          } while (iVar5 < this_ptr->model_count);
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(this_ptr->models + iVar6);
        pcVar9 = pcVar9 + 0x17c;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < this_ptr->model_count);
  }
  local_28 = 0;
  if (0 < this_ptr->count) {
    fVar1 = 0.5f * 12.0f;
    fVar2 = 0.5f * -12.0f;
    pCVar10 = &this_ptr->bugs[0].dest_position;
    pCVar7 = &this_ptr->bugs[0].orientation;
    local_2c = &this_ptr->bugs[0].position;
    do {
      pSVar8 = this_ptr->bugs + local_28;
      pSVar8->state = 0;
      iVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(0,this_ptr->model_count + -1);
      fVar4 = fVar1 * (float)0.5;
      min_value = fVar2 * (float)0.5;
      pSVar8->model_index = iVar6;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(min_value,fVar4);
      (pSVar8->position).y = 0.0;
      (pSVar8->position).x = fVar3;
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(min_value,fVar4);
      (pSVar8->position).z = fVar4;
      pCVar7->z = 0.0;
      pCVar7->y = pCVar7->z;
      pCVar7->x = pCVar7->y;
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-3.1415927,3.1415927);
      (pSVar8->orientation).y = fVar4;
      if (pCVar10 != local_2c) {
        pCVar10->x = pCVar7[-1].x;
        pCVar10->y = pCVar7[-1].y;
        pCVar10->z = pCVar7[-1].z;
      }
      pCVar10 = (CVector3f *)((int)(pCVar10 + 5) + 4);
      pCVar7 = (CVector3f *)((int)(pCVar7 + 5) + 4);
      local_2c = (CVector3f *)((int)(local_2c + 5) + 4);
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(this_ptr);
  this_ptr->grid_cell_x = -9999;
  this_ptr->grid_cell_z = -9999;
  (this_ptr->base).base.base.collision_disabled = 1;
  this_ptr->damage_timer = 0.0;
  return;
}
