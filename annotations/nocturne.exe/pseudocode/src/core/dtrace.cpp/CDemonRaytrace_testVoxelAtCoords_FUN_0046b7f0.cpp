// Name: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0
// Address: 0046b7f0
// Address Range: [[0046b7f0, 0046b8c6]]
// Convention: __cdecl
// Signature: bool __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0(int param_1,uint *param_2)

#include "nocturne.h"

bool __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *param_2;
  if ((((-1 < (int)uVar1) && (-1 < (int)param_2[1])) && (-1 < (int)param_2[2])) &&
     ((iVar2 = (int)((uVar1 + ((int)uVar1 >> 0x1f) * -8) - (uint)(((int)uVar1 >> 0x1f) << 2 < 0)) >>
               3, iVar2 < *(int *)(param_1 + 0x40) &&
      (iVar4 = (int)param_2[1] >> 0x1f,
      iVar4 = (int)((param_2[1] + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3,
      iVar4 < *(int *)(param_1 + 0x44))))) {
    iVar5 = (int)param_2[2] >> 0x1f;
    iVar3 = (int)((param_2[2] + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar5 = *(int *)(param_1 + 0x48);
    if (iVar3 < iVar5) {
      iVar2 = *(int *)((iVar2 * *(int *)(param_1 + 0x44) * iVar5 + iVar3 + iVar4 * iVar5) * 0x34 +
                      *(int *)(param_1 + 0x50));
      if (iVar2 != 0) {
        return (*(byte *)((param_2[2] & 7) * 8 + (param_2[1] & 7) + iVar2) &
               (&DAT_005b6d08)[*param_2 & 7]) != 0;
      }
    }
  }
  return false;
}
