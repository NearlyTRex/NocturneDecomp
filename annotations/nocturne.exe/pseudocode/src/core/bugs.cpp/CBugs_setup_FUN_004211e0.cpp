// Name: core_bugs.cpp_CBugs_setup_FUN_004211e0
// Address: 004211e0
// Address Range: [[004211e0, 00421462]]
// Convention: unknown
// Signature: void core_bugs_cpp_CBugs_setup_FUN_004211e0(CBugs *param_1)

#include "nocturne.h"

void core_bugs_cpp_CBugs_setup_FUN_004211e0(CBugs *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  CVector3f *pCVar8;
  SBug *pSVar9;
  char *pcVar10;
  CVector3f *pCVar11;
  CVector3f *local_2c;
  int local_28;
  CKeyFramedModelInstance *local_20;
  char *local_1c;
  
  (param_1->base).base.base.orient.vec.z = 0.0;
  (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.z;
  (param_1->base).base.base.orient.vec.x = (param_1->base).base.base.orient.vec.y;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&param_1->base);
  param_1->model_count = 4;
  iVar7 = 0;
  if (0 < param_1->model_count) {
    pcVar10 = param_1->models[0].model_name;
    do {
      if (*pcVar10 == '\0') {
        iVar6 = param_1->model_count + -1;
        param_1->model_count = iVar6;
        if (iVar7 < iVar6) {
          local_20 = param_1->models + iVar7;
          local_1c = param_1->models[iVar7 + 1].model_name;
          iVar6 = iVar7;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(local_20,local_1c);
            iVar6 = iVar6 + 1;
            local_20 = local_20 + 1;
            local_1c = local_1c + 0x17c;
          } while (iVar6 < param_1->model_count);
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1->models + iVar7);
        pcVar10 = pcVar10 + 0x17c;
        iVar7 = iVar7 + 1;
      }
    } while (iVar7 < param_1->model_count);
  }
  local_28 = 0;
  if (0 < param_1->count) {
    fVar1 = 0.5f * 12.0f;
    fVar2 = 0.5f * -12.0f;
    pCVar11 = &param_1->bugs[0].dest_position;
    pCVar8 = &param_1->bugs[0].orientation;
    local_2c = &param_1->bugs[0].position;
    do {
      pSVar9 = param_1->bugs + local_28;
      pSVar9->state = 0;
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040de00(0,param_1->model_count + -1);
      fVar5 = fVar1 * (float)0.5;
      fVar3 = fVar2 * (float)0.5;
      pSVar9->model_index = iVar7;
      fVar4 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(fVar3,fVar5);
      (pSVar9->position).y = 0.0;
      (pSVar9->position).x = fVar4;
      fVar5 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(fVar3,fVar5);
      (pSVar9->position).z = fVar5;
      pCVar8->z = 0.0;
      pCVar8->y = pCVar8->z;
      pCVar8->x = pCVar8->y;
      fVar5 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0490fdb,0x40490fdb);
      (pSVar9->orientation).y = fVar5;
      if (pCVar11 != local_2c) {
        pCVar11->x = pCVar8[-1].x;
        pCVar11->y = pCVar8[-1].y;
        pCVar11->z = pCVar8[-1].z;
      }
      pCVar11 = (CVector3f *)((int)(pCVar11 + 5) + 4);
      pCVar8 = (CVector3f *)((int)(pCVar8 + 5) + 4);
      local_2c = (CVector3f *)((int)(local_2c + 5) + 4);
      local_28 = local_28 + 1;
    } while (local_28 < param_1->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(param_1);
  param_1->grid_cell_x = -9999;
  param_1->grid_cell_z = -9999;
  (param_1->base).base.base.collision_disabled = 1;
  param_1->damage_timer = 0.0;
  return;
}
