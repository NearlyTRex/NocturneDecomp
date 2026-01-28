// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
// Address: 0052af70
// Address Range: [[0052af70, 0052b153]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  CVector3i *input;
  int iVar10;
  float in_stack_00000008;
  int in_stack_0000000c;
  int local_20;
  int local_18;
  uint local_14;
  
  if (2000 < this_ptr->num_points) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x1f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::rotatePoints - too many points!");
  }
  local_20 = 0;
  local_14 = 0xff;
  local_18 = 0;
  fVar7 = 1.0 - in_stack_00000008;
  if (0 < this_ptr->num_points) {
    input = (CVector3i *)&DAT_02f3dbb4;
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar8 = *(int *)(*(int *)this_ptr->unk2 + iVar9) * 0x10 + in_stack_0000000c;
      fVar1 = *(float *)(iVar8 + 8);
      fVar2 = *(float *)(iVar8 + 0xc);
      iVar5 = *(int *)this_ptr->unk2;
      fVar3 = *(float *)(iVar5 + 8 + iVar9);
      fVar4 = *(float *)(iVar5 + 0xc + iVar9);
      input->x = (int)ROUND((*(float *)(iVar5 + 4 + iVar9) * in_stack_00000008 +
                            *(float *)(iVar8 + 4) * fVar7) * 256.0f);
      input->y = (int)ROUND((fVar3 * in_stack_00000008 + fVar1 * fVar7) * 256.0f);
      input->z = (int)ROUND((in_stack_00000008 * fVar4 + fVar7 * fVar2) * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar10),input);
      uVar6 = *(uint *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x +
                       iVar10);
      if ((uVar6 & 0x80000000) == 0) {
        local_14 = 0;
      }
      else {
        local_14 = local_14 & uVar6;
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
  core_set_cpp_CDemonSet_FUN_0056e5d0(g_CDemonSetPtr);
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,this_ptr->num_points,*(int *)(this_ptr->unk2 + 4),
             *(SInputFace **)(this_ptr->unk2 + 8),0x2f3dbb4,3,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,local_20);
  return;
}
