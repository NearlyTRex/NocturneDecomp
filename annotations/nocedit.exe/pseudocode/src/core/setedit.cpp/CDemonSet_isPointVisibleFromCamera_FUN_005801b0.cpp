// Name: core_setedit.cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0
// Address: 005801b0
// Address Range: [[005801b0, 00580309]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0(CDemonSet *this_ptr,CVector3i *point,int camera_index)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0(CDemonSet *this_ptr,CVector3i *point,int camera_index)

{
  int iVar2;
  int iVar7;
  int iVar1;
  int iVar8;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(this_ptr);
  piVar2 = (int *)(g_CameraDepthData + camera_index);
  iVar1 = point->y - piVar2[1];
  iVar3 = point->x - *piVar2;
  iVar6 = point->z - piVar2[2];
  iVar5 = ((uint)((longlong)piVar2[5] * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[5] * (longlong)iVar3) >> 0x20) << 0x10) +
          ((uint)((longlong)piVar2[8] * (longlong)iVar1) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[8] * (longlong)iVar1) >> 0x20) << 0x10) +
          ((uint)((longlong)piVar2[0xb] * (longlong)iVar6) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[0xb] * (longlong)iVar6) >> 0x20) << 0x10);
  if ((0 < iVar5) &&
     (iVar4 = ((uint)((longlong)piVar2[3] * (longlong)iVar3) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[3] * (longlong)iVar3) >> 0x20) << 0x10) +
              ((uint)((longlong)piVar2[6] * (longlong)iVar1) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[6] * (longlong)iVar1) >> 0x20) << 0x10) +
              ((uint)((longlong)piVar2[9] * (longlong)iVar6) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[9] * (longlong)iVar6) >> 0x20) << 0x10),
     iVar4 < iVar5)) {
    if ((-iVar5 < iVar4) &&
       ((iVar7 = ((uint)((longlong)piVar2[4] * (longlong)iVar3) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[4] * (longlong)iVar3) >> 0x20) << 0x10) +
                 ((uint)((longlong)piVar2[7] * (longlong)iVar1) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[7] * (longlong)iVar1) >> 0x20) << 0x10) +
                 ((uint)((longlong)piVar2[10] * (longlong)iVar6) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[10] * (longlong)iVar6) >> 0x20) << 0x10),
        iVar7 < iVar5 && (-iVar5 < iVar7)))) {
      iVar2 = (int)(((longlong)iVar4 * 0xa0) / (longlong)iVar5) + 0xa0;
      iVar8 = (int)(((longlong)iVar7 * 0x78) / (longlong)iVar5);
      iVar7 = iVar8 + 0x78;
      if ((0 < iVar2) && (((0 < iVar7 && (iVar2 < 0x13f)) && (iVar7 < 0xef)))) {
        return (uint)(iVar5 + -0x100 < piVar2[iVar2 * 0xf0 + iVar8 + 0x84]);
      }
    }
  }
  return 0;
}
