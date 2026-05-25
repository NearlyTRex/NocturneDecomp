// Name: core_dcube.cpp_CDemonCube_save_FUN_00457430
// Address: 00457430
// MANUAL RECONSTRUCTION
// Address Range: [[00457430, 00457521]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_save_FUN_00457430(CDemonCube *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_save_FUN_00457430(CDemonCube *this_ptr,_FILE *file_handle)

{
  int iVar1;

  _fwrite(&this_ptr->min_bounds,1,0xc,file_handle);
  _fwrite(&this_ptr->max_bounds,1,0xc,file_handle);
  _fwrite(&this_ptr->vertex_count,1,4,file_handle);
  _fwrite(&this_ptr->triangle_count,1,4,file_handle);
  for (iVar1 = 0; iVar1 < this_ptr->vertex_count; iVar1 = iVar1 + 1) {
    _fwrite(&this_ptr->vertex_buffer[iVar1],1,0xc,file_handle);
  }
  for (iVar1 = 0; iVar1 < this_ptr->triangle_count; iVar1 = iVar1 + 1) {
    core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
              (&this_ptr->triangle_buffer[iVar1],file_handle,this_ptr->vertex_buffer);
  }
  if (this_ptr->triangle_count != 0) {
    _fwrite(this_ptr->ground_type_memory,1,this_ptr->triangle_count,file_handle);
    _fwrite(this_ptr->voxel_buffer1,1,0x40,file_handle);
  }
  return;
}
