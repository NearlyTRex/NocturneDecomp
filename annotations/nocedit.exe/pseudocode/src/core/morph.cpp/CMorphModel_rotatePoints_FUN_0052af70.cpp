// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
// Address: 0052af70
// Address Range: [[0052af70, 0052b153]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

{
  int iVar9;
  CVector3i *input;
  int iVar10;
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
  if (0 < this_ptr->num_points) {
    input = g_MorphVertexBuffer;
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar5 = *(int *)((int)&this_ptr->points->vertex_index + iVar9);
      fVar1 = ref_points[iVar5].position.y;
      fVar2 = ref_points[iVar5].position.z;
      pSVar6 = this_ptr->points;
      fVar3 = *(float *)((int)&(pSVar6->position).y + iVar9);
      fVar4 = *(float *)((int)&(pSVar6->position).z + iVar9);
      input->x = (int)ROUND((*(float *)((int)&(pSVar6->position).x + iVar9) * blend_factor +
                            ref_points[iVar5].position.x * fVar8) * 256.0f);
      input->y = (int)ROUND((fVar3 * blend_factor + fVar1 * fVar8) * 256.0f);
      input->z = (int)ROUND((blend_factor * fVar4 + fVar8 * fVar2) * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar10),input);
      uVar7 = *(uint *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x +
                       iVar10);
      if ((uVar7 & 0x80000000) == 0) {
        local_14 = 0;
      }
      else {
        local_14 = local_14 & uVar7;
        local_20 = 1;
      }
      iVar10 = iVar10 + 0x30;
      input = input + 1;
      iVar9 = iVar9 + 0x10;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->num_points);
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
