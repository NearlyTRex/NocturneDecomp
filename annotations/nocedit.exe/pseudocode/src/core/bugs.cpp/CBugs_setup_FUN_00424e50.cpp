// Name: core_bugs.cpp_CBugs_setup_FUN_00424e50
// Address: 00424e50
// Address Range: [[00424e50, 00424fdf] [00425083, 004250d2]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setup_FUN_00424e50(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_setup_FUN_00424e50(CBugs *this_ptr)

{
  float fVar1;
  float fVar2;
  float min_value;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  SBug *pSVar8;
  char *pcVar9;
  char *local_2c;
  int local_28;
  CKeyFramedModelInstance *local_20;
  char *local_1c;
  
  (this_ptr->base).base.base.orient.heading = 0.0;
  (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.heading;
  (this_ptr->base).base.base.orient.pitch = (this_ptr->base).base.base.orient.bank;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr->model_count = 4;
  iVar6 = 0;
  if (0 < this_ptr->model_count) {
    pcVar7 = this_ptr->unk3 + 0x78;
    do {
      if (*pcVar7 == '\0') {
        iVar5 = this_ptr->model_count + -1;
        this_ptr->model_count = iVar5;
        if (iVar6 < iVar5) {
          local_20 = (CKeyFramedModelInstance *)(this_ptr->unk3 + iVar6 * 0x17c);
          local_1c = this_ptr->unk3 + iVar6 * 0x17c + 500;
          iVar5 = iVar6;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(local_20,local_1c);
            iVar5 = iVar5 + 1;
            local_20 = local_20 + 1;
            local_1c = local_1c + 0x17c;
          } while (iVar5 < this_ptr->model_count);
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                  ((CKeyFramedModelInstance *)(this_ptr->unk3 + iVar6 * 0x17c));
        pcVar7 = pcVar7 + 0x17c;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < this_ptr->model_count);
  }
  local_28 = 0;
  if (0 < this_ptr->count) {
    fVar1 = 0.5f * 12.0f;
    fVar2 = 0.5f * -12.0f;
    pcVar9 = this_ptr->bugs[0].unk + 0x20;
    pcVar7 = this_ptr->bugs[0].unk + 0x14;
    local_2c = this_ptr->bugs[0].unk + 8;
    do {
      pSVar8 = this_ptr->bugs + local_28;
      pSVar8->unk[0] = '\0';
      pSVar8->unk[1] = '\0';
      pSVar8->unk[2] = '\0';
      pSVar8->unk[3] = '\0';
      iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,this_ptr->model_count + -1);
      fVar4 = fVar1 * (float)0.5;
      min_value = fVar2 * (float)0.5;
      *(int *)(pSVar8->unk + 4) = iVar6;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar4);
      pSVar8->unk[0xc] = '\0';
      pSVar8->unk[0xd] = '\0';
      pSVar8->unk[0xe] = '\0';
      pSVar8->unk[0xf] = '\0';
      *(float *)(pSVar8->unk + 8) = fVar3;
      fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar4);
      *(float *)(pSVar8->unk + 0x10) = fVar4;
      pcVar7[8] = '\0';
      pcVar7[9] = '\0';
      pcVar7[10] = '\0';
      pcVar7[0xb] = '\0';
      *(uint *)(pcVar7 + 4) = *(uint *)(pcVar7 + 8);
      *(uint *)pcVar7 = *(uint *)(pcVar7 + 4);
      fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
      *(float *)(pSVar8->unk + 0x18) = fVar4;
      if (pcVar9 != local_2c) {
        *(uint *)pcVar9 = *(uint *)(pcVar7 + -0xc);
        *(uint *)(pcVar9 + 4) = *(uint *)(pcVar7 + -8);
        *(uint *)(pcVar9 + 8) = *(uint *)(pcVar7 + -4);
      }
      pcVar9 = pcVar9 + 0x40;
      pcVar7 = pcVar7 + 0x40;
      local_2c = local_2c + 0x40;
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_FUN_004272f0(this_ptr);
  this_ptr->unk5[0x18] = -0xf;
  this_ptr->unk5[0x19] = -0x28;
  this_ptr->unk5[0x1a] = -1;
  this_ptr->unk5[0x1b] = -1;
  this_ptr->unk5[0x1c] = -0xf;
  this_ptr->unk5[0x1d] = -0x28;
  this_ptr->unk5[0x1e] = -1;
  this_ptr->unk5[0x1f] = -1;
  (this_ptr->base).base.base.unk6 = 1;
  this_ptr->unk5[0x28] = '\0';
  this_ptr->unk5[0x29] = '\0';
  this_ptr->unk5[0x2a] = '\0';
  this_ptr->unk5[0x2b] = '\0';
  return;
}
