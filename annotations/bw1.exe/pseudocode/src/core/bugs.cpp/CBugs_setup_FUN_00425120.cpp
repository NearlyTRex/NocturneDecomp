// Name: core_bugs.cpp_CBugs_setup_FUN_00425120
// Address: 00425120
// Address Range: [[00425120, 004253a2]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setup_FUN_00425120(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_setup_FUN_00425120(CBugs *this_ptr)

{
  float fVar1;
  float fVar2;
  float min_value;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  SBug *pSVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puStack_2c;
  int iStack_28;
  CKeyFramedModelInstance *pCStack_20;
  char *pcStack_1c;
  
  (this_ptr->base).base.base.orient.vec.z = 0.0;
  (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.z;
  (this_ptr->base).base.base.orient.vec.x = (this_ptr->base).base.base.orient.vec.y;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
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
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(pCStack_20,pcStack_1c)
            ;
            iVar5 = iVar5 + 1;
            pCStack_20 = pCStack_20 + 1;
            pcStack_1c = pcStack_1c + 0x17c;
          } while (iVar5 < this_ptr->model_count);
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(this_ptr->models + iVar6);
        pcVar9 = pcVar9 + 0x17c;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < this_ptr->model_count);
  }
  iStack_28 = 0;
  if (0 < this_ptr->count) {
    fVar1 = _DAT_005fd228 * _DAT_005d5038;
    fVar2 = _DAT_005fd228 * _DAT_005d503c;
    puVar10 = (uint *)&this_ptr->bugs[0].field_0x20;
    puVar7 = (uint *)&this_ptr->bugs[0].field_0x14;
    puStack_2c = (uint *)&this_ptr->bugs[0].field_0x8;
    do {
      pSVar8 = this_ptr->bugs + iStack_28;
      *(uint *)pSVar8 = 0;
      iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,this_ptr->model_count + -1);
      fVar4 = fVar1 * (float)_DAT_005d5040;
      min_value = fVar2 * (float)_DAT_005d5040;
      *(int *)&pSVar8->field_0x4 = iVar6;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(min_value,fVar4);
      *(uint *)&pSVar8->field_0xc = 0;
      *(float *)&pSVar8->field_0x8 = fVar3;
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(min_value,fVar4);
      *(float *)&pSVar8->field_0x10 = fVar4;
      puVar7[2] = 0;
      puVar7[1] = puVar7[2];
      *puVar7 = puVar7[1];
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.1415927,3.1415927);
      *(float *)&pSVar8->field_0x18 = fVar4;
      if (puVar10 != puStack_2c) {
        *puVar10 = puVar7[-3];
        puVar10[1] = puVar7[-2];
        puVar10[2] = puVar7[-1];
      }
      puVar10 = puVar10 + 0x10;
      puVar7 = puVar7 + 0x10;
      puStack_2c = puStack_2c + 0x10;
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00427a30(this_ptr);
  this_ptr->grid_cell_x = -9999;
  this_ptr->grid_cell_z = -9999;
  (this_ptr->base).base.base.collision_disabled = 1;
  this_ptr->damage_timer = 0.0;
  return;
}
