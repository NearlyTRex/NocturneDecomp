// Name: core_morph.cpp_CMorph_getReady_FUN_004fac10
// Address: 004fac10
// Address Range: [[004fac10, 004fb0d4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_getReady_FUN_004fac10(CMorph *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorph_getReady_FUN_004fac10(CMorph *this_ptr)

{
  float *pfVar1;
  SMorphPoint *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CBoundingBox3D *pCVar6;
  CMorph *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  byte bVar14;
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
  
  bVar14 = 0;
  if ((this_ptr->models[0].num_points < 3) || (this_ptr->models[1].num_points < 3)) {
    _DAT_01d71de0 = "..\\core\\morph.cpp";
    _DAT_01d71de4 = 799;
    core_main_c_FUN_004e4330("CMorph::getReady - can't do this unless we have setup both models!");
  }
  __arrinit(&local_118,2,&g_CBoundingBox3DTypeInfo);
  local_40 = this_ptr;
  local_38 = 0;
  local_28 = &local_118;
  do {
    pCVar6 = local_28;
    pSVar2 = local_40->models[0].points;
    pCVar8 = &pSVar2->position;
    if ((CBoundingBox3D *)pCVar8 != local_28) {
      (local_28->min).x = pCVar8->x;
      (pCVar6->min).y = (pSVar2->position).y;
      (pCVar6->min).z = (pSVar2->position).z;
    }
    if (&pCVar6->max != pCVar8) {
      (pCVar6->max).x = pCVar8->x;
      (pCVar6->max).y = (pSVar2->position).y;
      (pCVar6->max).z = (pSVar2->position).z;
    }
    pCVar6 = local_28;
    iVar10 = local_38;
    iVar12 = 0x10;
    for (iVar11 = 1;
        iVar11 < *(int *)(this_ptr->models[0].textures[0].texture_name + iVar10 + -0x1c);
        iVar11 = iVar11 + 1) {
      iVar9 = *(int *)(this_ptr->models[0].textures[0].texture_name + iVar10 + -0x18) + iVar12;
      iVar12 = iVar12 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar6,(CVector3f *)(iVar9 + 4));
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
    iVar10 = local_2c;
    iVar11 = 1 - local_2c;
    local_24 = local_3c;
    local_b8 = *local_30 - (&local_118)[iVar11].min.x;
    local_b4[0] = local_30[1] - (&local_118)[iVar11].min.y;
    local_b4[1] = local_30[2] - (&local_118)[iVar11].min.z;
    local_d0 = local_b8;
    local_e4[(uint)bVar14 * -2 + 6] = local_b4[(uint)bVar14 * -2];
    local_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         local_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    local_e8 = local_34->x - (&local_118)[iVar10].min.x;
    local_e4[0] = local_34->y - (&local_118)[iVar10].min.y;
    local_e4[1] = local_34->z - (&local_118)[iVar10].min.z;
    local_e4[2] = local_e8;
    local_e4[(uint)bVar14 * -2 + 3] = local_e4[(uint)bVar14 * -2];
    local_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         local_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    fVar4 = local_e8;
    fVar3 = local_d0 / local_e4[2];
    local_88 = local_b8;
    local_84 = local_b4[0];
    local_80 = local_b4[1];
    local_94 = local_b8;
    local_b4[(uint)bVar14 * -2 + 9] = local_b4[(uint)bVar14 * -2 + 0xc];
    local_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
         local_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
    local_54[2] = fVar4;
    local_54[3] = local_e4[0];
    local_44 = local_e4[1];
    local_58 = fVar4;
    local_54[(uint)bVar14 * -2] = local_54[(uint)bVar14 * -2 + 3];
    local_54[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_54[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    fVar5 = local_e8;
    fVar4 = local_90 / local_54[0];
    local_7c = local_b8;
    local_78 = local_b4[0];
    local_74 = local_b4[1];
    local_b4[2] = local_b8;
    local_b4[(uint)bVar14 * -2 + 3] = local_b4[(uint)bVar14 * -2 + 0xf];
    local_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         local_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
    local_a0 = fVar5;
    local_9c = local_e4[0];
    local_98 = local_e4[1];
    local_70 = fVar5;
    local_b4[(uint)bVar14 * -2 + 0x12] = local_b4[(uint)bVar14 * -2 + 6];
    pCVar7 = local_14;
    local_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
         local_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    local_c4 = fVar3;
    local_18 = 0;
    local_c0 = fVar4;
    local_bc = local_a4 / local_68;
    if (0 < local_14->models[0].num_points) {
      iVar12 = 0;
      local_20 = &local_118 + iVar11;
      local_1c = &local_118 + iVar10;
      do {
        pfVar1 = (float *)((int)&((pCVar7->models[0].points)->position).x + iVar12);
        pfVar13 = pfVar1 + (uint)bVar14 * -2 + 1;
        local_64.x = *pfVar1;
        *(float *)((int)&local_64 + (uint)bVar14 * -8 + 4) = *pfVar13;
        *(float *)((int)&local_64 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             pfVar13[(uint)bVar14 * -2 + 1];
        if (this_ptr->rescale_enabled != 0) {
          local_64.x = (local_64.x - (local_1c->min).x) * local_c4 + (local_20->min).x;
          local_64.y = (local_64.y - (local_1c->min).y) * local_c0 + (local_20->min).y;
          local_64.z = (local_64.z - (local_1c->min).z) * local_bc + (local_20->min).z;
        }
        iVar10 = core_morph_cpp_CMorphModel_findNearestPoint_FUN_004fa7f0
                           (local_24->models,&local_64);
        *(int *)((int)&(pCVar7->models[0].points)->vertex_index + iVar12) = iVar10;
        local_18 = local_18 + 1;
        iVar12 = iVar12 + 0x10;
      } while (local_18 < pCVar7->models[0].num_points);
    }
    local_2c = local_2c + 1;
    local_30 = local_30 + -6;
    local_3c = (CMorph *)((int)(local_3c + 0xffffffff) + 0x624);
    local_14 = (CMorph *)(local_14->models + 1);
    local_34 = local_34 + 2;
  } while (local_2c < 2);
  return;
}
