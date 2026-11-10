// Name: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0
// Address: 0041feb0
// Address Range: [[0041feb0, 0041fffc]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_0041feb0(CBugs *this_ptr,float x,float z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_0041feb0(CBugs *this_ptr,float x,float z)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  int local_10;
  
  fVar7 = ((float10)z - (float10)this_ptr->grid_origin_z) * ((float10)1 / (float10)_DAT_005f3e28);
  fVar6 = (float10)(float)(((float10)x - (float10)this_ptr->grid_origin_x) *
                          ((float10)1 / (float10)_DAT_005f3e28));
  round();
  round();
  local_10 = (int)ROUND(fVar6);
  iVar1 = (int)ROUND(fVar7);
  if (local_10 < 0) {
    iVar5 = 0;
    local_10 = 0;
  }
  else if (local_10 < 0xb) {
    iVar5 = local_10 + 1;
  }
  else {
    iVar5 = 0xb;
    local_10 = 0xb;
  }
  if (iVar1 < 0) {
    fVar2 = this_ptr->ground_heights[iVar5][0];
    fVar8 = this_ptr->ground_heights[local_10][0];
  }
  else {
    if (iVar1 < 0xb) {
      uVar3 = core_bugs_cpp_maxFloat_FUN_00422120
                        (this_ptr->ground_heights[local_10][iVar1],
                         this_ptr->ground_heights[iVar5][iVar1]);
      uVar4 = core_bugs_cpp_maxFloat_FUN_00422120
                        (this_ptr->ground_heights[local_10][iVar1 + 1],
                         this_ptr->ground_heights[iVar5][iVar1 + 1]);
      fVar2 = (float)core_bugs_cpp_maxFloat_FUN_00422120(uVar3,uVar4);
      return fVar2;
    }
    fVar2 = this_ptr->ground_heights[iVar5][0xb];
    fVar8 = this_ptr->ground_heights[local_10][0xb];
  }
  fVar2 = (float)core_bugs_cpp_maxFloat_FUN_00422120(fVar8,fVar2);
  return fVar2;
}
