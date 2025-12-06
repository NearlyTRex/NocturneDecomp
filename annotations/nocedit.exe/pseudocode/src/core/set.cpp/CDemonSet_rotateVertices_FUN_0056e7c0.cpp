// Name: core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
// Address: 0056e7c0
// Address Range: [[0056e7c0, 0056e88a]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
          (CDemonSet *this_ptr,int vertex_count,int *input_vertices)

{
  CVector3i *input;
  SRenderVertex *output;
  int iVar1;
  int in_stack_00000010;
  int iVar2;
  
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xd94;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  iVar1 = 0;
  iVar2 = 0;
  output = g_CDemonRendererPtr->vertex_buffer_ptr;
  input = (CVector3i *)input_vertices;
  if (0 < in_stack_00000010) {
    do {
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < in_stack_00000010);
  }
  if (iVar2 == in_stack_00000010) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,0);
  }
  core_set_cpp_CDemonSet_FUN_0056e5d0((CDemonSet *)input_vertices);
  return;
}
