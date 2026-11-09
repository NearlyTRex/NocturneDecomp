// Name: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00453390
// Address: 00453390
// Address Range: [[00453390, 0045353a]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00453390(CDemonCamera *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00453390(CDemonCamera *this_ptr,CVector3f *position,float radius)

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
  
  iVar1 = (int)ROUND(_DAT_005fe5fc * radius);
  iVar2 = (int)ROUND(_DAT_005fe5fc * radius);
  uVar10 = (int)ROUND(*(float *)position * _DAT_005fe5fc) - *(int *)&this_ptr->field_0x16c;
  uVar6 = (int)ROUND(*(float *)&position->field_0x4 * _DAT_005fe5fc) -
          *(int *)&this_ptr->field_0x170;
  uVar11 = (int)ROUND(*(float *)&position->field_0x8 * _DAT_005fe5fc) -
           *(int *)&this_ptr->field_0x174;
  if (((iVar1 <= (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) ||
      (iVar1 <= (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)))) ||
     (iVar1 <= (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)))) {
    lVar3 = (longlong)(int)uVar10 * (longlong)*(int *)&this_ptr->field_0x178;
    lVar4 = (longlong)(int)uVar6 * (longlong)*(int *)&this_ptr->field_0x184;
    lVar5 = (longlong)(int)uVar11 * (longlong)*(int *)&this_ptr->field_0x190;
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)*(int *)&this_ptr->field_0x17c;
    lVar4 = (longlong)(int)uVar6 * (longlong)*(int *)&this_ptr->field_0x188;
    lVar5 = (longlong)(int)uVar11 * (longlong)*(int *)&this_ptr->field_0x194;
    iVar8 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)*(int *)&this_ptr->field_0x180;
    lVar4 = (longlong)(int)uVar6 * (longlong)*(int *)&this_ptr->field_0x18c;
    lVar5 = (longlong)(int)uVar11 * (longlong)*(int *)&this_ptr->field_0x198;
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
