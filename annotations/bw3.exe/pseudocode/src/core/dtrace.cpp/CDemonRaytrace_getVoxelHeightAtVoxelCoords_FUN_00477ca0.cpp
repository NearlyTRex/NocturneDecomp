// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00477ca0
// Address: 00477ca0
// Address Range: [[00477ca0, 00477d8c]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00477ca0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00477ca0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  uint uVar1;
  uint uVar2;
  CDemonCube *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = *(int *)voxel_coords >> 0x1f;
  iVar4 = (int)((*(int *)voxel_coords + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar5 = *(int *)(voxel_coords + 4) >> 0x1f;
  iVar5 = (int)((*(int *)(voxel_coords + 4) + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
  iVar6 = *(int *)(voxel_coords + 8) >> 0x1f;
  iVar6 = (int)((*(int *)(voxel_coords + 8) + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3;
  if (((((-1 < iVar4) && (-1 < iVar5)) && (-1 < iVar6)) &&
      ((iVar4 < *(int *)&this_ptr->field_0x40 && (iVar5 < *(int *)&this_ptr->field_0x44)))) &&
     (iVar6 < *(int *)&this_ptr->field_0x48)) {
    uVar1 = *(uint *)voxel_coords;
    uVar2 = *(uint *)(voxel_coords + 8);
    uVar7 = *(uint *)(voxel_coords + 4) & 7;
    do {
      do {
        pCVar3 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(this_ptr,iVar4,iVar5,iVar6);
        if (pCVar3 == (CDemonCube *)0x0) {
          return -999;
        }
        if ((*(int *)pCVar3 != 0) &&
           ((*(byte *)(*(int *)pCVar3 + (uVar2 & 7) * 8 + uVar7) & (&DAT_005fb0e8)[uVar1 & 7]) != 0)
           ) {
          return uVar7 + iVar5 * 8;
        }
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
      iVar5 = iVar5 + -1;
      uVar7 = 7;
    } while (-1 < iVar5);
  }
  return -999;
}
