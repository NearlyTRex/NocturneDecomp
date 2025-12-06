// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
// Address Range: [[00499170, 00499329]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace * this_ptr, CVector3f * world_position)

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  int grid_x;
  int iVar1;
  uint in_EAX;
  CDemonCube *pCVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int unaff_retaddr;
  float local_14;
  
  fVar6 = ((float10)world_position->x - (float10)(this_ptr->bbox_min).x) /
          (float10)(this_ptr->cell_size).x;
  fVar7 = ((float10)world_position->y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->cell_size).y;
  fVar8 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(world_position,in_EAX));
  pfVar4 = (float *)((ulonglong)dVar11 >> 0x20);
  fVar9 = (float10)0.125f;
  fVar10 = ((float10)*pfVar4 -
           ((float10)(int)ROUND(fVar6) * (float10)(this_ptr->cell_size).x +
           (float10)(this_ptr->bbox_min).x)) / ((float10)(this_ptr->cell_size).x * fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pfVar4,(int)ROUND(fVar6)));
  iVar5 = (int)((ulonglong)dVar11 >> 0x20);
  grid_x = (int)ROUND(fVar7);
  fVar6 = ((float10)*(float *)(iVar5 + 4) -
          ((float10)grid_x * (float10)(this_ptr->cell_size).y + (float10)(this_ptr->bbox_min).y)) /
          ((float10)(this_ptr->cell_size).y * fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar5,grid_x));
  iVar3 = (int)((ulonglong)dVar11 >> 0x20);
  iVar5 = (int)ROUND(fVar8);
  fVar9 = ((float10)*(float *)(iVar3 + 8) -
          ((float10)iVar5 * (float10)(this_ptr->cell_size).z + (float10)(this_ptr->bbox_min).z)) /
          ((float10)(this_ptr->cell_size).z * fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar3,iVar5));
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)ROUND(fVar10),SUB84 /* extract 2-byte value */(dVar11,0)));
  iVar3 = (int)ROUND(fVar6);
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  iVar1 = (int)ROUND(fVar9);
  if ((((((longlong)dVar11 < 0) || (unaff_retaddr < 0)) || (iVar1 < 0)) ||
      ((7 < (int)((ulonglong)dVar11 >> 0x20) || (7 < unaff_retaddr)))) || (7 < iVar1)) {
    local_14 = -999.0;
  }
  else {
    while (pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,grid_x,iVar3,(int)ROUND(fVar10)),
          pCVar2 != (CDemonCube *)0x0) {
      if ((pCVar2->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar2->voxel_buffer1->voxels[iVar1][unaff_retaddr] & g_VoxelYBitMasks[iVar5]) != 0)) {
        return (float)unaff_retaddr * (this_ptr->cell_size).y * 0.125f +
               (float)iVar3 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      }
      unaff_retaddr = unaff_retaddr + -1;
      if (unaff_retaddr < 0) {
        iVar3 = iVar3 + -1;
        unaff_retaddr = 7;
      }
    }
    local_14 = -999.9;
  }
  return local_14;
}
