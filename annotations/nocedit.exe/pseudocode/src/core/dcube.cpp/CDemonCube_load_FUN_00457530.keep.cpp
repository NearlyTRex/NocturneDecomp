// Name: core_dcube.cpp_CDemonCube_load_FUN_00457530
// Address: 00457530
// MANUAL RECONSTRUCTION
// Address Range: [[00457530, 0045762d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_load_FUN_00457530(CDemonCube *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_load_FUN_00457530(CDemonCube *this_ptr,_FILE *file_handle)

{
  int iVar1;

  _fread(&this_ptr->min_bounds,1,0xc,file_handle);
  _fread(&this_ptr->max_bounds,1,0xc,file_handle);
  _fread(&this_ptr->vertex_count,1,4,file_handle);
  _fread(&this_ptr->triangle_count,1,4,file_handle);
  if (this_ptr->triangle_count != 0) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
  }
  _fread(this_ptr->vertex_buffer,this_ptr->vertex_count,0xc,file_handle);
  for (iVar1 = 0; iVar1 < this_ptr->triangle_count; iVar1 = iVar1 + 1) {
    core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
              (&this_ptr->triangle_buffer[iVar1],file_handle,this_ptr->vertex_buffer);
  }
  if (this_ptr->triangle_count != 0) {
    _fread(this_ptr->ground_type_memory,1,this_ptr->triangle_count,file_handle);
  }
  if (this_ptr->triangle_count != 0) {
    _fread(this_ptr->voxel_buffer1,1,0x40,file_handle);
    *this_ptr->voxel_buffer2 = *this_ptr->voxel_buffer1;
    return;
  }
  return;
}
