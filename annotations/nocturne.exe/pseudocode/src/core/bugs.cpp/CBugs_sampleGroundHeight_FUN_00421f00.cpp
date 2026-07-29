// Name: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00
// Address: 00421f00
// Address Range: [[00421f00, 0042204c]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(CBugs *this_ptr,float x,float z)

#include "nocturne.h"

float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(CBugs *this_ptr,float x,float z)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  int local_18;
  
  fVar3 = 1.0 / 0.5f;
  fVar2 = this_ptr->grid_origin_z;
  dVar5 = round((double)((x - this_ptr->grid_origin_x) * fVar3));
  dVar6 = round((double)((z - fVar2) * fVar3));
  local_18 = (int)ROUND(dVar5);
  iVar1 = (int)ROUND(dVar6);
  if (local_18 < 0) {
    iVar4 = 0;
    local_18 = 0;
  }
  else if (local_18 < 0xb) {
    iVar4 = local_18 + 1;
  }
  else {
    iVar4 = 0xb;
    local_18 = 0xb;
  }
  if (iVar1 < 0) {
    fVar2 = this_ptr->ground_heights[iVar4][0];
    fVar3 = this_ptr->ground_heights[local_18][0];
  }
  else {
    if (iVar1 < 0xb) {
      fVar2 = core_bugs_cpp_maxFloat_FUN_00423d60
                        (this_ptr->ground_heights[local_18][iVar1],
                         this_ptr->ground_heights[iVar4][iVar1]);
      fVar3 = core_bugs_cpp_maxFloat_FUN_00423d60
                        (this_ptr->ground_heights[local_18][iVar1 + 1],
                         this_ptr->ground_heights[iVar4][iVar1 + 1]);
      fVar2 = core_bugs_cpp_maxFloat_FUN_00423d60(fVar2,fVar3);
      return fVar2;
    }
    fVar2 = this_ptr->ground_heights[iVar4][0xb];
    fVar3 = this_ptr->ground_heights[local_18][0xb];
  }
  fVar2 = core_bugs_cpp_maxFloat_FUN_00423d60(fVar3,fVar2);
  return fVar2;
}
