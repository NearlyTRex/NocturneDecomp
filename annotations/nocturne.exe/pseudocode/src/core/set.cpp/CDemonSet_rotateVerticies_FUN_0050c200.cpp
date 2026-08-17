// Name: core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
// Address: 0050c200
// Address Range: [[0050c200, 0050c2ca]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

{
  SRenderVertex *output;
  int iVar1;
  int local_14;
  
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 3303;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(g_CDemonRenderer_PTR_005ae704,1);
  iVar1 = 0;
  local_14 = 0;
  output = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
  if (0 < vertex_count) {
    do {
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&output->projected_vertex,input_vertices);
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        local_14 = local_14 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      input_vertices = input_vertices + 1;
    } while (iVar1 < vertex_count);
  }
  if (local_14 == vertex_count) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
              (g_CDemonRenderer_PTR_005ae704,0);
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(this_ptr,vertex_count);
  return;
}
