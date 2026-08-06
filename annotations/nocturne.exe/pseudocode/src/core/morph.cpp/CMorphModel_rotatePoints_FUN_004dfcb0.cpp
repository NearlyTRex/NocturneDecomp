// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0
// Address: 004dfcb0
// Address Range: [[004dfcb0, 004dfe93]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  SMorphPoint *pSVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  CVector3i *input;
  int iVar10;
  int local_20;
  int local_18;
  uint local_14;
  
  if (2000 < this_ptr->num_points) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 504;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMorphModel::rotatePoints - too many points!");
  }
  local_20 = 0;
  local_14 = 0xff;
  local_18 = 0;
  fVar8 = 1.0 - blend_factor;
  if (0 < this_ptr->num_points) {
    input = (CVector3i *)&DAT_01cce554;
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
                            ref_points[iVar5].position.x * fVar8) * _DAT_005a0cc0);
      input->y = (int)ROUND((fVar3 * blend_factor + fVar1 * fVar8) * _DAT_005a0cc0);
      input->z = (int)ROUND((blend_factor * fVar4 + fVar8 * fVar2) * _DAT_005a0cc0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                        transformed_x + iVar10),input);
      uVar7 = *(uint *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                              screen_x + iVar10);
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
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010
            (g_CDemonSet_PTR_005be368,this_ptr->num_points);
  core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
            (g_CDemonSet_PTR_005be368,this_ptr->num_points,this_ptr->num_faces,this_ptr->faces,
             (CVector3i *)&DAT_01cce554,3,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
            (g_CDemonRenderer_PTR_005ae704,local_20);
  return;
}
