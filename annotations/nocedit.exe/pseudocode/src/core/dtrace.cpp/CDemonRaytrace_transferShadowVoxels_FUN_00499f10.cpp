// Name: core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10
// Address: 00499f10
// Address Range: [[00499f10, 0049a15f]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_8c,rotation);
  local_58 = end->x - start->x;
  local_54 = end->y - start->y;
  local_50 = end->z - start->z;
  fVar3 = (float)2;
  local_28 = (int)ROUND(ROUND((local_58 / (this_ptr->adjusted_size).x) * fVar3 + 1.0));
  fVar1 = local_58 / (float)local_28;
  local_24 = (int)ROUND(ROUND((local_54 / (this_ptr->adjusted_size).y) * fVar3 + 1.0));
  fVar2 = local_54 / (float)local_24;
  local_1c = (int)ROUND(ROUND((local_50 / (this_ptr->adjusted_size).z) * fVar3 + 1.0));
  fVar3 = local_50 / (float)local_1c;
  local_20 = 0;
  if (0 < local_28) {
    do {
      local_18 = 0;
      if (0 < local_24) {
        do {
          iVar6 = 0;
          if (0 < local_1c) {
            do {
              fVar4 = (float)0.5;
              local_40.x = fVar1 * fVar4 + (float)local_20 * fVar1 + start->x;
              local_40.y = fVar2 * fVar4 + (float)local_18 * fVar2 + start->y;
              local_40.z = (float)iVar6 * fVar3 + start->z + fVar3 * fVar4;
              local_14 = iVar6;
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
            } while (iVar6 < local_1c);
          }
          local_18 = local_18 + 1;
        } while (local_18 < local_24);
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_28);
  }
  return;
}
