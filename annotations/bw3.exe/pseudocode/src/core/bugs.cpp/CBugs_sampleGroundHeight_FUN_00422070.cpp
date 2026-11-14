// Name: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00422070
// Address: 00422070
// Address Range: [[00422070, 004221bc]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00422070(CBugs *this_ptr,float x,float z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00422070(CBugs *this_ptr,float x,float z)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int local_10;
  
  fVar6 = ((float10)z - (float10)this_ptr->grid_origin_z) * ((float10)1 / (float10)_DAT_005dcbc8);
  fVar5 = (float10)(float)(((float10)x - (float10)this_ptr->grid_origin_x) *
                          ((float10)1 / (float10)_DAT_005dcbc8));
  round();
  round();
  local_10 = (int)ROUND(fVar5);
  iVar1 = (int)ROUND(fVar6);
  if (local_10 < 0) {
    iVar4 = 0;
    local_10 = 0;
  }
  else if (local_10 < 0xb) {
    iVar4 = local_10 + 1;
  }
  else {
    iVar4 = 0xb;
    local_10 = 0xb;
  }
  if (iVar1 < 0) {
    fVar2 = this_ptr->ground_heights[iVar4][0];
    fVar3 = this_ptr->ground_heights[local_10][0];
  }
  else {
    if (iVar1 < 0xb) {
      fVar2 = core_bugs_cpp_maxFloat_FUN_00424300
                        (this_ptr->ground_heights[local_10][iVar1],
                         this_ptr->ground_heights[iVar4][iVar1]);
      fVar3 = core_bugs_cpp_maxFloat_FUN_00424300
                        (this_ptr->ground_heights[local_10][iVar1 + 1],
                         this_ptr->ground_heights[iVar4][iVar1 + 1]);
      fVar2 = core_bugs_cpp_maxFloat_FUN_00424300(fVar2,fVar3);
      return fVar2;
    }
    fVar2 = this_ptr->ground_heights[iVar4][0xb];
    fVar3 = this_ptr->ground_heights[local_10][0xb];
  }
  fVar2 = core_bugs_cpp_maxFloat_FUN_00424300(fVar3,fVar2);
  return fVar2;
}
