// Name: core_dcube.cpp_CDemonCube_save_FUN_00457430
// Address: 00457430
// Address Range: [[00457430, 00457521]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_save_FUN_00457430(CDemonCube *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_save_FUN_00457430(CDemonCube *this_ptr,_FILE *file_handle)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  _fwrite(&this_ptr->min_bounds,1,0xc,file_handle);
  _fwrite(&this_ptr->max_bounds,1,0xc,file_handle);
  _fwrite(&this_ptr->vertex_count,1,4,file_handle);
  iVar1 = 0;
  _fwrite(&this_ptr->triangle_count,1,4,file_handle);
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    do {
      ptr = (void *)((int)&this_ptr->vertex_buffer->x + iVar2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
      _fwrite(ptr,1,0xc,file_handle);
    } while (iVar1 < this_ptr->vertex_count);
  }
  iVar1 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
                ((CDemonCubeTriangle *)((int)(this_ptr->triangle_buffer->triangle).vertices + iVar2)
                 ,file_handle,this_ptr->vertex_buffer);
      iVar2 = iVar2 + 0x20;
    } while (iVar1 < this_ptr->triangle_count);
  }
  if (this_ptr->triangle_count == 0) {
    if (this_ptr->triangle_count == 0) {
      return;
    }
  }
  else {
    _fwrite(this_ptr->ground_type_memory,1,this_ptr->triangle_count,file_handle);
    if (this_ptr->triangle_count == 0) {
      return;
    }
  }
  _fwrite(this_ptr->voxel_buffer1,1,0x40,file_handle);
  return;
}
