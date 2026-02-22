// Name: core_morph.cpp_CMorph_getReady_FUN_0052b680
// Address: 0052b680
// Address Range: [[0052b680, 0052bad7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)

{
  SMorphPoint *pSVar1;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CBoundingBox3D *pCVar9;
  CBoundingBox3D local_c8;
  float local_a4 [3];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  CMorph *local_38;
  CMorph *local_34;
  CMorph *local_30;
  int local_2c;
  int local_28;
  CBoundingBox3D *local_24;
  CVector3f *local_20;
  float *local_1c;
  CMorph *local_18;
  CMorph *local_14;
  
  if ((this_ptr->models[0].num_points < 3) || (this_ptr->models[1].num_points < 3)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorph::getReady - can't do this unless we have setup both models!");
  }
  __arrinit(&local_c8,2,&g_CBoundingBox3DTypeInfo);
  local_38 = this_ptr;
  local_2c = 0;
  local_24 = &local_c8;
  do {
    pCVar5 = local_24;
    pSVar1 = local_38->models[0].points;
    pCVar3 = &pSVar1->position;
    if ((CBoundingBox3D *)pCVar3 != local_24) {
      (local_24->min).x = pCVar3->x;
      (pCVar5->min).y = (pSVar1->position).y;
      (pCVar5->min).z = (pSVar1->position).z;
    }
    if (&pCVar5->max != pCVar3) {
      (pCVar5->max).x = pCVar3->x;
      (pCVar5->max).y = (pSVar1->position).y;
      (pCVar5->max).z = (pSVar1->position).z;
    }
    pCVar5 = local_24;
    iVar2 = local_2c;
    iVar7 = 0x10;
    for (iVar8 = 1;
        iVar8 < *(int *)(this_ptr->models[0].textures[0].textures[0].texture_name + iVar2 + -0x1c);
        iVar8 = iVar8 + 1) {
      iVar4 = *(int *)(this_ptr->models[0].textures[0].textures[0].texture_name + iVar2 + -0x18) +
              iVar7;
      iVar7 = iVar7 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar5,(CVector3f *)(iVar4 + 4));
    }
    local_2c = local_2c + 0x608;
    local_24 = local_24 + 1;
    local_38 = (CMorph *)(local_38->models + 1);
  } while (local_2c != 0xc10);
  local_20 = &local_c8.max;
  local_1c = local_a4;
  local_34 = (CMorph *)(this_ptr->models + 1);
  local_28 = 0;
  local_30 = this_ptr;
  do {
    iVar2 = local_28;
    local_14 = local_30;
    iVar7 = 1 - local_28;
    local_18 = local_34;
    pCVar9 = &local_c8 + iVar7;
    local_8c = *local_1c - (pCVar9->min).x;
    local_88 = local_1c[1] - (&local_c8)[iVar7].min.y;
    pCVar5 = &local_c8 + local_28;
    local_84 = local_1c[2] - (&local_c8)[iVar7].min.z;
    local_5c = local_20->x - (pCVar5->min).x;
    local_58 = local_20->y - (&local_c8)[local_28].min.y;
    local_54 = local_20->z - (&local_c8)[local_28].min.z;
    local_68 = local_8c / local_5c;
    local_44 = *local_1c - (pCVar9->min).x;
    local_40 = local_1c[1] - (&local_c8)[iVar7].min.y;
    local_3c = local_1c[2] - (&local_c8)[iVar7].min.z;
    local_74 = local_20->x - (pCVar5->min).x;
    local_70 = local_20->y - (&local_c8)[local_28].min.y;
    local_6c = local_20->z - (&local_c8)[local_28].min.z;
    local_64 = local_40 / local_70;
    local_98 = *local_1c - (pCVar9->min).x;
    local_94 = local_1c[1] - (&local_c8)[iVar7].min.y;
    local_90 = local_1c[2] - (&local_c8)[iVar7].min.z;
    local_80 = local_20->x - (pCVar5->min).x;
    local_7c = local_20->y - (&local_c8)[local_28].min.y;
    local_78 = local_20->z - (&local_c8)[local_28].min.z;
    local_60 = local_90 / local_78;
    iVar8 = 0;
    if (0 < local_30->models[0].num_points) {
      iVar4 = 0;
      do {
        pSVar1 = local_14->models[0].points;
        local_50.x = *(float *)((int)&(pSVar1->position).x + iVar4);
        local_50.y = *(float *)((int)&(pSVar1->position).y + iVar4);
        local_50.z = *(float *)((int)&(pSVar1->position).z + iVar4);
        if (this_ptr->rescale_enabled != 0) {
          local_50.x = local_50.x - (pCVar5->min).x;
          local_50.x = local_50.x * local_68;
          local_50.y = local_50.y - (&local_c8)[iVar2].min.y;
          local_50.y = local_50.y * local_64;
          local_50.z = (local_50.z - (&local_c8)[iVar2].min.z) * local_60;
          local_50.x = local_50.x + (pCVar9->min).x;
          local_50.y = local_50.y + (&local_c8)[iVar7].min.y;
          local_50.z = local_50.z + (&local_c8)[iVar7].min.z;
        }
        iVar6 = core_morph_cpp_CMorphModel_findNearestPoint_FUN_0052b280(local_18->models,&local_50)
        ;
        *(int *)((int)&(local_14->models[0].points)->vertex_index + iVar4) = iVar6;
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar8 < local_14->models[0].num_points);
    }
    local_28 = local_28 + 1;
    local_1c = local_1c + -6;
    local_34 = (CMorph *)((int)(local_34 + 0xffffffff) + 0x624);
    local_30 = (CMorph *)(local_30->models + 1);
    local_20 = local_20 + 2;
  } while (local_28 < 2);
  return;
}
