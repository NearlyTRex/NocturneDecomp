// Name: core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10
// Address: 00499f10
// Address Range: [[00499f10, 0049a15f]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CVector3f *pCVar5;
  int iVar6;
  CMatrix3x3f local_8c;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float fVar1;
  float fVar3;
  float fVar2;
  float fVar4;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_8c,rotation);
  fVar5 = end->x - start->x;
  fVar6 = end->y - start->y;
  fVar7 = end->z - start->z;
  fVar8 = (float)2;
  iVar1 = (int)ROUND(ROUND((fVar5 / (this_ptr->adjusted_size).x) * fVar8 + 1.0));
  fVar1 = fVar5 / (float)iVar1;
  iVar2 = (int)ROUND(ROUND((fVar6 / (this_ptr->adjusted_size).y) * fVar8 + 1.0));
  fVar2 = fVar6 / (float)iVar2;
  iVar3 = (int)ROUND(ROUND((fVar7 / (this_ptr->adjusted_size).z) * fVar8 + 1.0));
  fVar3 = fVar7 / (float)iVar3;
  local_20 = 0;
  if (0 < iVar1) {
    do {
      local_18 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = 0;
          if (0 < iVar3) {
            do {
              fVar4 = (float)0.5;
              local_40.x = fVar1 * fVar4 + (float)local_20 * fVar1 + start->x;
              local_40.y = fVar2 * fVar4 + (float)local_18 * fVar2 + start->y;
              local_40.z = (float)iVar6 * fVar3 + start->z + fVar3 * fVar4;
              pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (&local_8c,&local_34,&local_40);
              local_64.x = pCVar5->x + offset->x;
              local_64.y = pCVar5->y + offset->y;
              local_64.z = pCVar5->z + offset->z;
              if (&local_4c != &local_64) {
                local_4c.x = local_64.x;
                local_4c.y = local_64.y;
                local_4c.z = local_64.z;
              }
              core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280
                        (this_ptr,&local_4c);
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar3);
          }
          local_18 = local_18 + 1;
        } while (local_18 < iVar2);
      }
      local_20 = local_20 + 1;
    } while (local_20 < iVar1);
  }
  return;
}
