// Name: core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
// Address: 0050c200
// Address Range: [[0050c200, 0050c2ca]]
// Convention: unknown
// Signature: void core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet *param_1,int param_2,CVector3i *param_3)

#include "nocturne.h"

void core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet *param_1,int param_2,CVector3i *param_3)

{
  SRenderVertex *output;
  int iVar1;
  int local_14;
  
  if (20000 < param_2) {
    PTR_01cc4800 = "..\\core\\set.cpp";
    INT_01cc4804 = 0xce7;
    core_main_c_FUN_004c8440("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",param_2,20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  iVar1 = 0;
  local_14 = 0;
  output = DAT_005ae704->vertex_buffer_ptr;
  if (0 < param_2) {
    do {
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c(&output->projected_vertex,param_3);
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        local_14 = local_14 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + 1;
    } while (iVar1 < param_2);
  }
  if (local_14 == param_2) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,0);
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(param_1,param_2);
  return;
}
