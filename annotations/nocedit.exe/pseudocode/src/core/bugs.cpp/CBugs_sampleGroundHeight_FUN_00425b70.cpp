// Name: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425b70
// Address: 00425b70
// Address Range: [[00425b70, 00425cbc]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425b70(CBugs *this_ptr,float x,float z)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425b70(CBugs *this_ptr,float x,float z)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int local_10;
  
  local_10 = (int)ROUND(ROUND((x - this_ptr->grid_origin_x) * (1.0 / 0.5f)));
  iVar1 = (int)ROUND(ROUND((z - this_ptr->grid_origin_z) * (1.0 / 0.5f)));
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
      fVar2 = core_bugs_cpp_maxFloat_FUN_00427ba0
                        (this_ptr->ground_heights[local_10][iVar1],
                         this_ptr->ground_heights[iVar4][iVar1]);
      fVar3 = core_bugs_cpp_maxFloat_FUN_00427ba0
                        (this_ptr->ground_heights[local_10][iVar1 + 1],
                         this_ptr->ground_heights[iVar4][iVar1 + 1]);
      fVar2 = core_bugs_cpp_maxFloat_FUN_00427ba0(fVar2,fVar3);
      return fVar2;
    }
    fVar2 = this_ptr->ground_heights[iVar4][0xb];
    fVar3 = this_ptr->ground_heights[local_10][0xb];
  }
  fVar2 = core_bugs_cpp_maxFloat_FUN_00427ba0(fVar3,fVar2);
  return fVar2;
}
