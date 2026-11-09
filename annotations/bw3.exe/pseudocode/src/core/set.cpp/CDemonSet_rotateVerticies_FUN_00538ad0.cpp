// Name: core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
// Address: 00538ad0
// Address Range: [[00538ad0, 00538b9a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)

{
  SProjectedVertex *output;
  int iVar1;
  int local_14;
  
  if (25000 < vertex_count) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0xea9;
    core_main_c_FUN_004e4330("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,25000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  iVar1 = 0;
  local_14 = 0;
  output = *(SProjectedVertex **)DAT_005f2afc;
  if (0 < vertex_count) {
    do {
      engine_special_cpp_FUN_005632a3(output,input_vertices);
      if (((byte)output[0x13] & 0x80) == 0) {
        local_14 = local_14 + 1;
      }
      output = output + 0x30;
      iVar1 = iVar1 + 1;
      input_vertices = input_vertices + 0xc;
    } while (iVar1 < vertex_count);
  }
  if (local_14 == vertex_count) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,0);
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_005388e0(this_ptr,vertex_count);
  return;
}
