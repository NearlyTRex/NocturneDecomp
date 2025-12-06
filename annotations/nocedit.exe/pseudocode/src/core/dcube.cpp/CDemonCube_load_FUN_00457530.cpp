// Name: core_dcube.cpp_CDemonCube_load_FUN_00457530
// Address: 00457530
// Address Range: [[00457530, 0045762d]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_load_FUN_00457530(CDemonCube * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_load_FUN_00457530(CDemonCube *this_ptr,FILE *file_handle)

{
  int iVar1;
  SVoxelGrid *pSVar2;
  int iVar3;
  SVoxelGrid *pSVar4;
  byte bVar5;
  
  bVar5 = 0;
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->min_bounds,1,0xc,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->max_bounds,1,0xc,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_count,1,4,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->triangle_count,1,4,file_handle);
  if (this_ptr->triangle_count != 0) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
  }
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_buffer,this_ptr->vertex_count,0xc,file_handle);
  iVar1 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar3 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
                ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar3),
                 file_handle,this_ptr->vertex_buffer);
      iVar3 = iVar3 + 0x20;
    } while (iVar1 < this_ptr->triangle_count);
  }
  if (this_ptr->triangle_count != 0) {
    crt_stdio_c_fread_FUN_005fd990
              (this_ptr->ground_type_memory,1,this_ptr->triangle_count,file_handle);
  }
  if (this_ptr->triangle_count != 0) {
    crt_stdio_c_fread_FUN_005fd990(this_ptr->voxel_buffer1,1,0x40,file_handle);
    pSVar2 = this_ptr->voxel_buffer1;
    pSVar4 = this_ptr->voxel_buffer2;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pSVar4->voxels[0] = *(uint *)pSVar2->voxels[0];
      pSVar2 = (SVoxelGrid *)((int)pSVar2 + (uint)bVar5 * -8 + 4);
      pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar4->voxels[0][0] = pSVar2->voxels[0][0];
      pSVar2 = (SVoxelGrid *)((int)pSVar2 + (uint)bVar5 * -2 + 1);
      pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar5 * -2 + 1);
    }
    return;
  }
  return;
}
