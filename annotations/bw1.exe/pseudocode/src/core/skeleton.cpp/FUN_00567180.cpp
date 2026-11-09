// Name: core_skeleton.cpp_FUN_00567180
// Address: 00567180
// Address Range: [[00567180, 0056724a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00567180(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00567180(CDeformableModel *this_ptr)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar3;
  float *pfVar4;
  CSkeleton *pCVar5;
  int iVar6;
  CDeformableModel *local_24;
  float local_1c;
  
  pCVar2 = core_skeleton_cpp_FUN_00563c40(this_ptr);
  iVar6 = 0;
  if (0 < *(int *)&pCVar2->field_0x1de78) {
    local_24 = this_ptr;
    do {
      iVar3 = 0;
      *(uint *)&local_24->field_0x33cc = 0xffffffff;
      local_1c = 0.0;
      pfVar4 = (float *)&this_ptr->field_0x2290;
      pCVar5 = pCVar2;
      if (0 < *(int *)&pCVar2->field_0x1de78) {
        do {
          if ((iVar6 == *(int *)&pCVar5->field_0x1de9c) &&
             (fVar1 = SQRT(pfVar4[2] * pfVar4[2] + *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]),
             local_1c < fVar1)) {
            *(int *)&local_24->field_0x33cc = iVar3;
            local_1c = fVar1;
          }
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 3;
          pCVar5 = (CSkeleton *)&pCVar5->field_0x24;
        } while (iVar3 < *(int *)&pCVar2->field_0x1de78);
      }
      iVar6 = iVar6 + 1;
      local_24 = (CDeformableModel *)&local_24->field_0x4;
    } while (iVar6 < *(int *)&pCVar2->field_0x1de78);
  }
  return;
}
