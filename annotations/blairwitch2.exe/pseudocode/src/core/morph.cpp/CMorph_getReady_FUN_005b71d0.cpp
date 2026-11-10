// Name: core_morph.cpp_CMorph_getReady_FUN_005b71d0
// Address: 005b71d0
// Address Range: [[005b71d0, 005b7694]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_getReady_FUN_005b71d0(CMorph *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorph_getReady_FUN_005b71d0(CMorph *this_ptr)

{
  SMorphPoint *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CBoundingBox3D *pCVar5;
  CMorph *pCVar6;
  CBoundingBox3D *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  float afStackY_10d0 [1003];
  CBoundingBox3D local_118;
  float local_f4 [3];
  float local_e8;
  float local_e4 [5];
  float local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4 [4];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54 [4];
  float local_44;
  CMorph *local_40;
  CMorph *local_3c;
  int local_38;
  CVector3f *local_34;
  float *local_30;
  int local_2c;
  CBoundingBox3D *local_28;
  CMorph *local_24;
  CBoundingBox3D *local_20;
  CBoundingBox3D *local_1c;
  int local_18;
  CMorph *local_14;
  
  bVar12 = 0;
  if ((this_ptr->models[0].num_points < 3) || (this_ptr->models[1].num_points < 3)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 799;
    core_main_c_FUN_004e4500("CMorph::getReady - can't do this unless we have setup both models!");
  }
  __arrinit(&local_118,2,&g_CBoundingBox3DTypeInfo);
  local_40 = this_ptr;
  local_38 = 0;
  local_28 = &local_118;
  do {
    pCVar5 = local_28;
    pSVar1 = local_40->models[0].points;
    pCVar7 = (CBoundingBox3D *)(pSVar1 + 4);
    if (pCVar7 != local_28) {
      (local_28->min).x = (pCVar7->min).x;
      (pCVar5->min).y = *(float *)(pSVar1 + 8);
      (pCVar5->min).z = *(float *)(pSVar1 + 0xc);
    }
    if ((CBoundingBox3D *)&pCVar5->max != pCVar7) {
      (pCVar5->max).x = (pCVar7->min).x;
      (pCVar5->max).y = *(float *)(pSVar1 + 8);
      (pCVar5->max).z = *(float *)(pSVar1 + 0xc);
    }
    pCVar5 = local_28;
    iVar9 = local_38;
    iVar11 = 0x10;
    for (iVar10 = 1; iVar10 < *(int *)(this_ptr->models[0].textures[0].texture_name + iVar9 + -0x1c)
        ; iVar10 = iVar10 + 1) {
      iVar8 = *(int *)(this_ptr->models[0].textures[0].texture_name + iVar9 + -0x18) + iVar11;
      iVar11 = iVar11 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar5,(CVector3f *)(iVar8 + 4));
    }
    local_38 = local_38 + 0x608;
    local_28 = local_28 + 1;
    local_40 = (CMorph *)(local_40->models + 1);
  } while (local_38 != 0xc10);
  local_34 = &local_118.max;
  local_30 = local_f4;
  local_3c = (CMorph *)(this_ptr->models + 1);
  local_2c = 0;
  local_14 = this_ptr;
  do {
    iVar9 = local_2c;
    iVar10 = 1 - local_2c;
    local_24 = local_3c;
    local_b8 = *local_30 - (&local_118)[iVar10].min.x;
    local_b4[0] = local_30[1] - (&local_118)[iVar10].min.y;
    local_b4[1] = local_30[2] - (&local_118)[iVar10].min.z;
    local_d0 = local_b8;
    local_e4[(uint)bVar12 * -2 + 6] = local_b4[(uint)bVar12 * -2];
    local_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         local_b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_e8 = local_34->x - (&local_118)[iVar9].min.x;
    local_e4[0] = local_34->y - (&local_118)[iVar9].min.y;
    local_e4[1] = local_34->z - (&local_118)[iVar9].min.z;
    local_e4[2] = local_e8;
    local_e4[(uint)bVar12 * -2 + 3] = local_e4[(uint)bVar12 * -2];
    local_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         local_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    fVar3 = local_e8;
    fVar2 = local_d0 / local_e4[2];
    local_88 = local_b8;
    local_84 = local_b4[0];
    local_80 = local_b4[1];
    local_94 = local_b8;
    local_b4[(uint)bVar12 * -2 + 9] = local_b4[(uint)bVar12 * -2 + 0xc];
    local_b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
         local_b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    local_54[2] = fVar3;
    local_54[3] = local_e4[0];
    local_44 = local_e4[1];
    local_58 = fVar3;
    local_54[(uint)bVar12 * -2] = local_54[(uint)bVar12 * -2 + 3];
    local_54[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         local_54[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    fVar4 = local_e8;
    fVar3 = local_90 / local_54[0];
    local_7c = local_b8;
    local_78 = local_b4[0];
    local_74 = local_b4[1];
    local_b4[2] = local_b8;
    local_b4[(uint)bVar12 * -2 + 3] = local_b4[(uint)bVar12 * -2 + 0xf];
    local_b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         local_b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
    local_a0 = fVar4;
    local_9c = local_e4[0];
    local_98 = local_e4[1];
    local_70 = fVar4;
    local_b4[(uint)bVar12 * -2 + 0x12] = local_b4[(uint)bVar12 * -2 + 6];
    pCVar6 = local_14;
    local_b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
         local_b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    local_c4 = fVar2;
    local_18 = 0;
    local_c0 = fVar3;
    local_bc = local_a4 / local_68;
    if (0 < local_14->models[0].num_points) {
      iVar11 = 0;
      local_20 = &local_118 + iVar10;
      local_1c = &local_118 + iVar9;
      do {
        pSVar1 = pCVar6->models[0].points + iVar11 + 4;
        local_64.x = *(float *)pSVar1;
        *(uint *)((int)&local_64 + (uint)bVar12 * -8 + 4) =
             *(uint *)(pSVar1 + (uint)bVar12 * -8 + 4);
        *(uint *)((int)&local_64 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             *(uint *)(pSVar1 + (uint)bVar12 * -8 + 4 + (uint)bVar12 * -8 + 4);
        if (this_ptr->rescale_enabled != 0) {
          local_64.x = (local_64.x - (local_1c->min).x) * local_c4 + (local_20->min).x;
          local_64.y = (local_64.y - (local_1c->min).y) * local_c0 + (local_20->min).y;
          local_64.z = (local_64.z - (local_1c->min).z) * local_bc + (local_20->min).z;
        }
        iVar9 = core_morph_cpp_CMorphModel_findNearestPoint_FUN_005b6db0(local_24->models,&local_64)
        ;
        *(int *)(pCVar6->models[0].points + iVar11) = iVar9;
        local_18 = local_18 + 1;
        iVar11 = iVar11 + 0x10;
      } while (local_18 < pCVar6->models[0].num_points);
    }
    local_2c = local_2c + 1;
    local_30 = local_30 + -6;
    local_3c = (CMorph *)((int)(local_3c + 0xffffffff) + 0x624);
    local_14 = (CMorph *)(local_14->models + 1);
    local_34 = local_34 + 2;
  } while (local_2c < 2);
  return;
}
