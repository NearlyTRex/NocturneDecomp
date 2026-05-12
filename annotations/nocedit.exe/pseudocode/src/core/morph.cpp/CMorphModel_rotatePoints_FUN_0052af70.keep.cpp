// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
// Address: 0052af70
// MANUAL RECONSTRUCTION
// Address Range: [[0052af70, 0052b153]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

{
  CVector3i *input;
  int local_20;
  int local_18;
  uint local_14;
  float fVar2;
  int iVar5;
  float fVar1;
  uint uVar7;
  float fVar8;
  float fVar4;
  SMorphPoint *pSVar6;
  float fVar3;
  
  if (2000 < this_ptr->num_points) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x1f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::rotatePoints - too many points!");
  }
  local_20 = 0;
  local_14 = 0xff;
  local_18 = 0;
  fVar8 = 1.0 - blend_factor;
  for (local_18 = 0; local_18 < this_ptr->num_points; local_18 = local_18 + 1) {
    pSVar6 = &this_ptr->points[local_18];
    iVar5 = pSVar6->vertex_index;
    fVar1 = ref_points[iVar5].position.y;
    fVar2 = ref_points[iVar5].position.z;
    fVar3 = pSVar6->position.y;
    fVar4 = pSVar6->position.z;
    input = &g_MorphVertexBuffer[local_18];
    input->x = (int)ROUND((pSVar6->position.x * blend_factor +
                          ref_points[iVar5].position.x * fVar8) * 256.0f);
    input->y = (int)ROUND((fVar3 * blend_factor + fVar1 * fVar8) * 256.0f);
    input->z = (int)ROUND((blend_factor * fVar4 + fVar8 * fVar2) * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[local_18].projected_vertex,input);
    uVar7 = (uint)g_CDemonRendererPtr2->vertex_buffer_ptr[local_18].projected_vertex.screen_x;
    if ((uVar7 & 0x80000000) == 0) {
      local_14 = 0;
    }
    else {
      local_14 = local_14 & uVar7;
      local_20 = 1;
    }
  }
  if (local_14 != 0) {
    return;
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0(g_CDemonSetPtr,this_ptr->num_points);
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,this_ptr->num_points,this_ptr->num_faces,this_ptr->faces,
             g_MorphVertexBuffer,3,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,local_20);
  return;
}
