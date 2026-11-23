// Name: core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90
// Address: 00531e90
// Address Range: [[00531e90, 00531f5a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

{
  SRenderVertex *output;
  int iVar1;
  int local_14;
  
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 3733;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d");
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(g_CDemonRenderer_PTR_0060b280,1);
  iVar1 = 0;
  local_14 = 0;
  output = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
  if (0 < vertex_count) {
    do {
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
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
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
              (g_CDemonRenderer_PTR_0060b280,0);
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0(this_ptr,vertex_count);
  return;
}
