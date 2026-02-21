// Name: shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
// Address: 00518300
// Address Range: [[00518300, 005183d2]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh *this_ptr,int sample_point_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh *this_ptr,int sample_point_index)

{
  SLodSamplePoint *sample_point;
  CLodMesh *this_ptr_00;
  CLodFace *pCVar1;
  double dVar2;
  CLodFace *face;
  double local_28;
  SMRGLTextureLod *pSStack_24;
  int local_18;
  
  this_ptr_00 = (CLodMesh *)(this_ptr->sample_points_ptr + sample_point_index);
  this_ptr_00->lod_texture_count = 0x39a08ce9;
  this_ptr_00->lod_textures = (SMRGLTextureLod *)0x46293e59;
  this_ptr_00->tri_data = (CLodFace *)0xffffffff;
  pCVar1 = (CLodFace *)0x0;
  if (0 < this_ptr->tri_count) {
    local_18 = 0;
    do {
      sample_point = (SLodSamplePoint *)((int)this_ptr->tri_data->attribute_indices + local_18);
      if (sample_point[2].position.z == 0.0) {
        dVar2 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                          (this_ptr_00,sample_point,face);
        local_28 = dVar2;
        if (dVar2 < *(double *)&this_ptr_00->lod_texture_count) {
          face = SUB84(dVar2,0);
          this_ptr_00->tri_data = pCVar1;
          this_ptr_00->lod_texture_count = (int)face;
          pSStack_24 = (SMRGLTextureLod *)((ulonglong)dVar2 >> 0x20);
          this_ptr_00->lod_textures = pSStack_24;
        }
      }
      pCVar1 = (CLodFace *)((int)pCVar1->attribute_indices + 1);
      local_18 = local_18 + 0x8c;
    } while ((int)pCVar1 < this_ptr->tri_count);
  }
  if (-1 < (int)this_ptr_00->tri_data) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0xa30;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find closest face!");
  return;
}
