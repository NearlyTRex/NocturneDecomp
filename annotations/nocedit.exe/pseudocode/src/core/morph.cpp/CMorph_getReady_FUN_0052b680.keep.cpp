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
  CBoundingBox3D *pCVar5;
  int iVar8;
  int iVar15;
  CBoundingBox3D *pCVar9;
  int iVar16;
  CBoundingBox3D local_c8[2];
  CVector3f local_50;
  int local_2c;
  int local_28;
  SMorphPoint *pSVar1;


  if ((this_ptr->models[0].num_points < 3) || (this_ptr->models[1].num_points < 3)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorph::getReady - can't do this unless we have setup both models!");
  }
  __arrinit(local_c8,2,&g_CBoundingBox3DTypeInfo);
  for (local_2c = 0; local_2c < 2; local_2c = local_2c + 1) {
    pSVar1 = this_ptr->models[local_2c].points;
    local_c8[local_2c].min = pSVar1[0].position;
    local_c8[local_2c].max = pSVar1[0].position;
    for (iVar8 = 1; iVar8 < this_ptr->models[local_2c].num_points; iVar8 = iVar8 + 1) {
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_c8[local_2c],&pSVar1[iVar8].position);
    }
  }
  for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
    iVar15 = 1 - local_28;
    pCVar9 = &local_c8[iVar15];
    pCVar5 = &local_c8[local_28];
    fVar1 = pCVar9->max.x;
    fVar2 = pCVar9->min.x;
    fVar3 = pCVar5->max.x;
    fVar4 = pCVar5->min.x;
    fVar5 = pCVar9->max.y;
    fVar6 = pCVar9->min.y;
    fVar7 = pCVar5->max.y;
    fVar8 = pCVar5->min.y;
    fVar9 = pCVar9->max.z;
    fVar10 = pCVar9->min.z;
    fVar11 = pCVar5->max.z;
    fVar12 = pCVar5->min.z;
    pSVar13 = this_ptr->models[local_28].points;
    for (iVar16 = 0; iVar16 < this_ptr->models[local_28].num_points; iVar16 = iVar16 + 1) {
      local_50 = pSVar13[iVar16].position;
      if (this_ptr->rescale_enabled != 0) {
        local_50.x = (local_50.x - fVar4) * ((fVar1 - fVar2) / (fVar3 - fVar4)) + fVar2;
        local_50.y = (local_50.y - fVar8) * ((fVar5 - fVar6) / (fVar7 - fVar8)) + fVar6;
        local_50.z = (local_50.z - fVar12) * ((fVar9 - fVar10) / (fVar11 - fVar12)) + fVar10;
      }
      pSVar13[iVar16].vertex_index = core_morph_cpp_CMorphModel_findNearestPoint_FUN_0052b280
                                              (&this_ptr->models[iVar15],&local_50);
    }
  }
  return;
}
