// Name: core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
// Address: 00553140
// Address Range: [[00553140, 0055320a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

{
  SRenderVertex *output;
  int iVar1;
  int local_14;
  
  if (20000 < vertex_count) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0xe91;
    core_main_c_FUN_005030e0("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  iVar1 = 0;
  local_14 = 0;
  output = DAT_00612560->vertex_buffer_ptr;
  if (0 < vertex_count) {
    do {
      engine_special_cpp_FUN_00580173((SProjectedVertex *)output,input_vertices);
      if (((byte)*(SProjectedVertex *)(output + 0x13) & 0x80) == 0) {
        local_14 = local_14 + 1;
      }
      output = output + 0x30;
      iVar1 = iVar1 + 1;
      input_vertices = input_vertices + 1;
    } while (iVar1 < vertex_count);
  }
  if (local_14 == vertex_count) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,0);
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50(this_ptr,vertex_count);
  return;
}
