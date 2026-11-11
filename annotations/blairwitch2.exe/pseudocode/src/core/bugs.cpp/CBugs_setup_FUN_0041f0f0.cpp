// Name: core_bugs.cpp_CBugs_setup_FUN_0041f0f0
// Address: 0041f0f0
// Address Range: [[0041f0f0, 0041f372]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setup_FUN_0041f0f0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_setup_FUN_0041f0f0(CBugs *this_ptr)

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
  CVector3f *pCStack_2c;
  int iStack_28;
  CKeyFramedModelInstance *pCStack_20;
  char *pcStack_1c;
  
  (this_ptr->base).base.base.orient.vec.z = 0.0;
  (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.z;
  (this_ptr->base).base.base.orient.vec.x = (this_ptr->base).base.base.orient.vec.y;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr->model_count = 4;
  iVar6 = 0;
  if (0 < this_ptr->model_count) {
    pcVar9 = this_ptr->models[0].model_name;
    do {
      if (*pcVar9 == '\0') {
        iVar5 = this_ptr->model_count + -1;
        this_ptr->model_count = iVar5;
        if (iVar6 < iVar5) {
          pCStack_20 = this_ptr->models + iVar6;
          pcStack_1c = this_ptr->models[iVar6 + 1].model_name;
          iVar5 = iVar6;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(pCStack_20,pcStack_1c)
            ;
            iVar5 = iVar5 + 1;
            pCStack_20 = pCStack_20 + 1;
            pcStack_1c = pcStack_1c + 0x17c;
          } while (iVar5 < this_ptr->model_count);
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr->models + iVar6);
        pcVar9 = pcVar9 + 0x17c;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < this_ptr->model_count);
  }
  iStack_28 = 0;
  if (0 < this_ptr->count) {
    fVar1 = _DAT_005f3e28 * _DAT_005cc949;
    fVar2 = _DAT_005f3e28 * _DAT_005cc94d;
    pCVar10 = &this_ptr->bugs[0].dest_position;
    pCVar7 = &this_ptr->bugs[0].orientation;
    pCStack_2c = &this_ptr->bugs[0].position;
    do {
      pSVar8 = this_ptr->bugs + iStack_28;
      pSVar8->state = 0;
      iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,this_ptr->model_count + -1);
      fVar4 = fVar1 * (float)_DAT_005cc951;
      min_value = fVar2 * (float)_DAT_005cc951;
      pSVar8->model_index = iVar6;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(min_value,fVar4);
      (pSVar8->position).y = 0.0;
      (pSVar8->position).x = fVar3;
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(min_value,fVar4);
      (pSVar8->position).z = fVar4;
      pCVar7->z = 0.0;
      pCVar7->y = pCVar7->z;
      pCVar7->x = pCVar7->y;
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-3.1415927,3.1415927);
      (pSVar8->orientation).y = fVar4;
      if (pCVar10 != pCStack_2c) {
        pCVar10->x = pCVar7[-1].x;
        pCVar10->y = pCVar7[-1].y;
        pCVar10->z = pCVar7[-1].z;
      }
      pCVar10 = (CVector3f *)((int)(pCVar10 + 5) + 4);
      pCVar7 = (CVector3f *)((int)(pCVar7 + 5) + 4);
      pCStack_2c = (CVector3f *)((int)(pCStack_2c + 5) + 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00421a00(this_ptr);
  this_ptr->grid_cell_x = -9999;
  this_ptr->grid_cell_z = -9999;
  (this_ptr->base).base.base.collision_disabled = 1;
  this_ptr->damage_timer = 0.0;
  return;
}
