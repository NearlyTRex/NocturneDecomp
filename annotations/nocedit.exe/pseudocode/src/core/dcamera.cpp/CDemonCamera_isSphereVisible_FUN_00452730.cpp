// Name: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
// Address: 00452730
// Address Range: [[00452730, 004528da]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730(CDemonCamera * this_ptr, CVector3f * position, float radius)

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00452730
          (CDemonCamera *this_ptr,CVector3f *position,float radius)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = (int)ROUND(256.0f * radius);
  iVar2 = (int)ROUND(256.0f * radius);
  uVar10 = (int)ROUND(position->x * 256.0f) - (this_ptr->camera_origin).x;
  uVar6 = (int)ROUND(position->y * 256.0f) - (this_ptr->camera_origin).y;
  uVar11 = (int)ROUND(position->z * 256.0f) - (this_ptr->camera_origin).z;
  if (((iVar1 <= (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) ||
      (iVar1 <= (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)))) ||
     (iVar1 <= (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)))) {
    lVar3 = (longlong)(int)uVar10 * (longlong)(this_ptr->source_matrix).m[0].x;
    lVar4 = (longlong)(int)uVar6 * (longlong)(this_ptr->source_matrix).m[1].x;
    lVar5 = (longlong)(int)uVar11 * (longlong)(this_ptr->source_matrix).m[2].x;
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)(this_ptr->source_matrix).m[0].y;
    lVar4 = (longlong)(int)uVar6 * (longlong)(this_ptr->source_matrix).m[1].y;
    lVar5 = (longlong)(int)uVar11 * (longlong)(this_ptr->source_matrix).m[2].y;
    iVar8 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)(this_ptr->source_matrix).m[0].z;
    lVar4 = (longlong)(int)uVar6 * (longlong)(this_ptr->source_matrix).m[1].z;
    lVar5 = (longlong)(int)uVar11 * (longlong)(this_ptr->source_matrix).m[2].z;
    iVar9 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    if (((iVar9 < iVar7 - iVar1) || (iVar7 + iVar1 < -iVar9)) ||
       ((iVar9 < iVar8 - iVar2 || (iVar8 + iVar2 < -iVar9)))) {
      return 0;
    }
  }
  return 1;
}
