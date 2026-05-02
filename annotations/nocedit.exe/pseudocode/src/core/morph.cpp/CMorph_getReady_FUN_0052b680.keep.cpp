// Name: core_morph.cpp_CMorph_getReady_FUN_0052b680
// Address: 0052b680
// MANUAL RECONSTRUCTION
// Address Range: [[0052b680, 0052bad7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  SMorphPoint *pSVar13;
  CVector3f *pCVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  int iVar7;
  int iVar14;
  int iVar8;
  int iVar15;
  CBoundingBox3D *pCVar9;
  int iVar16;
  CBoundingBox3D local_c8[2];
  CVector3f local_50;
  CMorph *local_38;
  CMorph *local_34;
  CMorph *local_30;
  int local_2c;
  int local_28;
  CBoundingBox3D *local_24;
  CVector3f *local_20;
  float *local_1c;
  SMorphPoint *pSVar1;
  
  if ((this_ptr->models[0].num_points < 3) || (this_ptr->models[1].num_points < 3)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorph::getReady - can't do this unless we have setup both models!");
  }
  local_24 = local_c8;
  __arrinit(local_c8,2,&g_CBoundingBox3DTypeInfo);
  local_38 = this_ptr;
  local_2c = 0;
  do {
    pSVar1 = local_38->models[0].points;
    pCVar3 = &pSVar1->position;
    if ((CBoundingBox3D *)pCVar3 != local_24) {
      (local_24->min).x = pCVar3->x;
      (local_24->min).y = (pSVar1->position).y;
      (local_24->min).z = (pSVar1->position).z;
    }
    if (&local_24->max != pCVar3) {
      (local_24->max).x = pCVar3->x;
      (local_24->max).y = (pSVar1->position).y;
      (local_24->max).z = (pSVar1->position).z;
    }
    iVar7 = 0x10;
    for (iVar8 = 1;
        iVar8 < *(int *)(this_ptr->models[0].textures[0].textures[0].texture_name + local_2c + -0x1c
                        ); iVar8 = iVar8 + 1) {
      iVar4 = *(int *)(this_ptr->models[0].textures[0].textures[0].texture_name + local_2c + -0x18)
              + iVar7;
      iVar7 = iVar7 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(local_24,(CVector3f *)(iVar4 + 4));
    }
    local_2c = local_2c + 0x608;
    local_24 = local_24 + 1;
    local_38 = (CMorph *)(local_38->models + 1);
  } while (local_2c != 0xc10);
  local_20 = &local_c8[0].max;
  local_1c = (float *)&local_c8[1].max;
  local_34 = (CMorph *)(this_ptr->models + 1);
  local_28 = 0;
  local_30 = this_ptr;
  do {
    iVar15 = 1 - local_28;
    pCVar9 = &local_c8[iVar15];
    fVar1 = *local_1c;
    fVar2 = (pCVar9->min).x;
    pCVar5 = &local_c8[local_28];
    fVar3 = local_20->x;
    fVar4 = (pCVar5->min).x;
    fVar5 = local_1c[1];
    fVar6 = local_c8[iVar15].min.y;
    fVar7 = local_20->y;
    fVar8 = local_c8[local_28].min.y;
    fVar9 = local_1c[2];
    fVar10 = local_c8[iVar15].min.z;
    fVar11 = local_20->z;
    fVar12 = local_c8[local_28].min.z;
    iVar16 = 0;
    if (0 < local_30->models[0].num_points) {
      iVar14 = 0;
      do {
        pSVar13 = local_30->models[0].points;
        local_50.x = *(float *)((int)&(pSVar13->position).x + iVar14);
        local_50.y = *(float *)((int)&(pSVar13->position).y + iVar14);
        local_50.z = *(float *)((int)&(pSVar13->position).z + iVar14);
        if (this_ptr->rescale_enabled != 0) {
          local_50.x = local_50.x - (pCVar5->min).x;
          local_50.x = local_50.x * ((fVar1 - fVar2) / (fVar3 - fVar4));
          local_50.y = local_50.y - local_c8[local_28].min.y;
          local_50.y = local_50.y * ((fVar5 - fVar6) / (fVar7 - fVar8));
          local_50.z = (local_50.z - local_c8[local_28].min.z) *
                       ((fVar9 - fVar10) / (fVar11 - fVar12));
          local_50.x = local_50.x + (pCVar9->min).x;
          local_50.y = local_50.y + local_c8[iVar15].min.y;
          local_50.z = local_50.z + local_c8[iVar15].min.z;
        }
        iVar6 = core_morph_cpp_CMorphModel_findNearestPoint_FUN_0052b280(local_34->models,&local_50)
        ;
        *(int *)((int)&(local_30->models[0].points)->vertex_index + iVar14) = iVar6;
        iVar16 = iVar16 + 1;
        iVar14 = iVar14 + 0x10;
      } while (iVar16 < local_30->models[0].num_points);
    }
    local_1c = local_1c + -6;
    local_34 = (CMorph *)&local_34[-1].models[1].parts[1].start_vertex;
    local_30 = (CMorph *)(local_30->models + 1);
    local_28 = local_28 + 1;
    local_20 = local_20 + 2;
  } while (local_28 < 2);
  return;
}
