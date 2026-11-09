// Name: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0
// Address: 00477bc0
// Address Range: [[00477bc0, 00477c96]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)voxel_coords;
  if ((((-1 < iVar1) && (-1 < *(int *)(voxel_coords + 4))) && (-1 < *(int *)(voxel_coords + 8))) &&
     ((iVar1 = (int)((iVar1 + (iVar1 >> 0x1f) * -8) - (uint)((iVar1 >> 0x1f) << 2 < 0)) >> 3,
      iVar1 < *(int *)&this_ptr->field_0x40 &&
      (iVar3 = *(int *)(voxel_coords + 4) >> 0x1f,
      iVar3 = (int)((*(int *)(voxel_coords + 4) + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3,
      iVar3 < *(int *)&this_ptr->field_0x44)))) {
    iVar4 = *(int *)(voxel_coords + 8) >> 0x1f;
    iVar2 = (int)((*(int *)(voxel_coords + 8) + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
    iVar4 = *(int *)&this_ptr->field_0x48;
    if (iVar2 < iVar4) {
      iVar1 = *(int *)((iVar1 * *(int *)&this_ptr->field_0x44 * iVar4 + iVar2 + iVar3 * iVar4) *
                       0x34 + *(int *)&this_ptr->field_0x50);
      if (iVar1 != 0) {
        return (uint)((*(byte *)((*(uint *)(voxel_coords + 8) & 7) * 8 +
                                 (*(uint *)(voxel_coords + 4) & 7) + iVar1) &
                      (&DAT_005fb0e8)[*(uint *)voxel_coords & 7]) != 0);
      }
    }
  }
  return 0;
}
