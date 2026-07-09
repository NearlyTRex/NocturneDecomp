// Name: core_bugs.cpp_CBugs_setup_FUN_00424e50
// Address: 00424e50
// MANUAL RECONSTRUCTION
// Address Range: [[00424e50, 004250d2]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setup_FUN_00424e50(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_setup_FUN_00424e50(CBugs *this_ptr)

{
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar5;
  int iVar6;
  SBug *pSVar8;
  char *pcVar9;
  int iVar7;
  int local_28;
  CKeyFramedModelInstance *local_20;
  char *local_1c;
  float fVar2;
  float min_value;
  float fVar1;
  
  (this_ptr->base).base.base.orient.vec.x = 0.0f;
  (this_ptr->base).base.base.orient.vec.y = 0.0f;
  (this_ptr->base).base.base.orient.vec.z = 0.0f;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
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
          iVar7 = iVar6;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(local_20,local_1c);
            iVar7 = iVar7 + 1;
            local_20 = local_20 + 1;
            local_1c = local_1c + sizeof(CKeyFramedModelInstance);
          } while (iVar7 < this_ptr->model_count);
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr->models + iVar6);
        pcVar9 = pcVar9 + sizeof(CKeyFramedModelInstance);
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < this_ptr->model_count);
  }
  local_28 = 0;
  if (0 < this_ptr->count) {
    fVar1 = 0.5f * 12.0f;
    fVar2 = 0.5f * -12.0f;
    do {
      pSVar8 = this_ptr->bugs + local_28;
      pSVar8->state = 0;
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,this_ptr->model_count + -1);
      fVar5 = fVar1 * (float)0.5;
      min_value = fVar2 * (float)0.5;
      pSVar8->model_index = iVar7;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(min_value,fVar5);
      (pSVar8->position).y = 0.0;
      (pSVar8->position).x = fVar3;
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(min_value,fVar5);
      (pSVar8->position).z = fVar4;
      (pSVar8->orientation).x = 0.0f;
      (pSVar8->orientation).y = 0.0f;
      (pSVar8->orientation).z = 0.0f;
      fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-3.1415927,3.1415927);
      (pSVar8->orientation).y = fVar5;
      pSVar8->dest_position = pSVar8->position;
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_004272f0(this_ptr);
  this_ptr->grid_cell_x = -9999;
  this_ptr->grid_cell_z = -9999;
  (this_ptr->base).base.base.collision_disabled = 1;
  this_ptr->damage_timer = 0.0;
  return;
}
