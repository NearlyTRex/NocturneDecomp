// Name: core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0
// Address: 004781d0
// Address Range: [[004781d0, 0047849a]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  double dVar5;
  float afStackY_1068 [997];
  float fStack_cc;
  float fVar6;
  float fVar7;
  byte local_c0 [40];
  CVector3f aCStack_98 [2];
  CVector3f local_80;
  CVector3f local_74;
  float fStack_60;
  float local_5c;
  float local_58 [4];
  float local_48;
  CVector3f local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar4 = 0;
  fStack_cc = 6.566944e-39;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            ((CMatrix3x3f *)(local_c0 + 0xc),rotation);
  local_80.x = end->x - start->x;
  local_80.y = end->y - start->y;
  local_80.z = end->z - start->z;
  local_5c = local_80.x;
  local_58[(uint)bVar4 * -2] = *(float *)((int)&local_80 + (uint)bVar4 * -8 + 4);
  local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&local_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  fVar6 = local_58[0] / (this_ptr->adjusted_size).y;
  fVar2 = local_58[1] / (this_ptr->adjusted_size).z;
  fVar7 = (float)2;
  dVar5 = round
                    ((double)((local_5c / (this_ptr->adjusted_size).x) * fVar7 + 1.0));
  local_30 = (int)ROUND(dVar5);
  fVar1 = fStack_60 / (float)local_30;
  local_1c = local_30;
  dVar5 = round((double)(fVar6 * fVar7 + 1.0));
  local_30 = (int)ROUND(dVar5);
  fVar6 = fStack_60 / (float)local_30;
  fStack_cc = 6.567199e-39;
  local_20 = local_30;
  dVar5 = round((double)(fVar2 * fVar7 + 1.0));
  local_2c = (int)ROUND(dVar5);
  fVar7 = fStack_60 / (float)local_2c;
  local_30 = 0;
  fStack_cc = fVar1;
  if (0 < local_38) {
    do {
      local_28 = 0;
      if (0 < local_34) {
        do {
          iVar3 = 0;
          if (0 < local_2c) {
            do {
              fVar1 = (float)0.5;
              aCStack_98[0].x = fStack_cc * fVar1 + (float)local_30 * fStack_cc + start->x;
              aCStack_98[0].y = fVar6 * fVar1 + (float)local_28 * fVar6 + start->y;
              aCStack_98[0].z = fVar7 * fVar1 + (float)iVar3 * fVar7 + start->z;
              local_24 = iVar3;
              core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                        ((CMatrix3x3f *)local_c0,aCStack_98,&local_74);
              local_58[2] = local_74.x;
              local_58[(uint)bVar4 * -2 + 3] = *(float *)((int)&local_74 + (uint)bVar4 * -8 + 4);
              local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                   *(float *)((int)&local_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
              local_5c = local_58[2] + offset->x;
              local_58[0] = local_58[3] + offset->y;
              local_58[1] = local_48 + offset->z;
              local_80.x = local_5c;
              *(float *)((int)&local_80 + (uint)bVar4 * -8 + 4) = local_58[(uint)bVar4 * -2];
              *(float *)((int)&local_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                   local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              if (&local_44 != &local_80) {
                local_44.x = local_80.x;
                local_44.y = local_80.y;
                local_44.z = local_80.z;
              }
              core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0
                        (this_ptr,&local_44);
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_2c);
          }
          local_28 = local_28 + 1;
        } while (local_28 < local_34);
      }
      local_30 = local_30 + 1;
    } while (local_30 < local_38);
  }
  return;
}
