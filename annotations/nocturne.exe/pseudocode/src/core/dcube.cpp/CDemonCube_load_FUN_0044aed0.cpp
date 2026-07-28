// Name: core_dcube.cpp_CDemonCube_load_FUN_0044aed0
// Address: 0044aed0
// Address Range: [[0044aed0, 0044afcd]]
// Convention: unknown
// Signature: SIZE_T core_dcube_cpp_CDemonCube_load_FUN_0044aed0(CDemonCube *param_1,_FILE *param_2)

#include "nocturne.h"

SIZE_T core_dcube_cpp_CDemonCube_load_FUN_0044aed0(CDemonCube *param_1,_FILE *param_2)

{
  SIZE_T SVar1;
  int iVar2;
  SVoxelGrid *pSVar3;
  int iVar4;
  SVoxelGrid *pSVar5;
  byte bVar6;
  
  bVar6 = 0;
  _fread(&param_1->min_bounds,1,0xc,param_2);
  _fread(&param_1->max_bounds,1,0xc,param_2);
  _fread(&param_1->vertex_count,1,4,param_2);
  _fread(&param_1->triangle_count,1,4,param_2);
  if (param_1->triangle_count != 0) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0(param_1);
  }
  SVar1 = _fread(param_1->vertex_buffer,param_1->vertex_count,0xc,param_2);
  iVar2 = 0;
  if (0 < param_1->triangle_count) {
    iVar4 = 0;
    do {
      iVar2 = iVar2 + 1;
      SVar1 = core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0
                        ((int)(param_1->triangle_buffer->triangle).vertices + iVar4,param_2,
                         param_1->vertex_buffer);
      iVar4 = iVar4 + 0x20;
    } while (iVar2 < param_1->triangle_count);
  }
  if (param_1->triangle_count != 0) {
    SVar1 = _fread(param_1->ground_type_memory,1,param_1->triangle_count,param_2);
  }
  if (param_1->triangle_count != 0) {
    _fread(param_1->voxel_buffer1,1,0x40,param_2);
    pSVar3 = param_1->voxel_buffer1;
    pSVar5 = param_1->voxel_buffer2;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pSVar5->voxels[0] = *(uint *)pSVar3->voxels[0];
      pSVar3 = (SVoxelGrid *)((int)pSVar3 + (uint)bVar6 * -8 + 4);
      pSVar5 = (SVoxelGrid *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      pSVar5->voxels[0][0] = pSVar3->voxels[0][0];
      pSVar3 = (SVoxelGrid *)((int)pSVar3 + (uint)bVar6 * -2 + 1);
      pSVar5 = (SVoxelGrid *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
    }
    return 0x40;
  }
  return SVar1;
}
