// Name: engine_matrix.c_buildRotationMatrix_FUN_004e8a10
// Address: 004e8a10
// Address Range: [[004e8a10, 004e8d24]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004e8a10(int pitch,int yaw,int roll)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004e8a10(int pitch,int yaw,int roll)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = engine_matrix_c_FUN_004e86b0(pitch);
  iVar7 = engine_matrix_c_FUN_004e86f0(pitch);
  iVar8 = engine_matrix_c_FUN_004e86b0(yaw);
  iVar9 = engine_matrix_c_FUN_004e86f0(yaw);
  iVar10 = engine_matrix_c_FUN_004e86b0(roll);
  iVar11 = engine_matrix_c_FUN_004e86f0(roll);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  lVar2 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  _DAT_01c38ba4 =
       (uint)((longlong)iVar7 * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20) << 0x10;
  _DAT_01c38bb0 = -iVar6;
  lVar3 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  lVar4 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  _DAT_01c38bbc =
       (uint)((longlong)iVar7 * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20) << 0x10;
  if (199 < DAT_006141bc) {
    if (DAT_006141bc < 0xc9) {
      _DAT_01d05010 = 0x15555;
      goto LAB_004e8b8c;
    }
    if (DAT_006141bc == 400) {
      _DAT_01d05010 = 0xaaaa;
      goto LAB_004e8b8c;
    }
  }
  _DAT_01d05010 = 0x10000;
LAB_004e8b8c:
  iVar6 = (DAT_006141b8 * -(int)(((longlong)_DAT_01c35e3c * 0x10000) / (longlong)_DAT_01c35e38) * 3)
          / (int)(DAT_006141bc << 2);
  lVar1 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar9 * (longlong)iVar11) >> 0x10 |
                (int)((ulonglong)((longlong)iVar9 * (longlong)iVar11) >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
  lVar5 = (longlong)iVar6 *
          (longlong)
          (int)((uint)((longlong)iVar7 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar8) >> 0x20) << 0x10);
  lVar3 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar9 * (longlong)-iVar10) >> 0x10 |
                (int)((ulonglong)((longlong)iVar9 * (longlong)-iVar10) >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
  iVar6 = ((((_DAT_01c35e50 - _DAT_01c35e48) * 0x280) / DAT_006141b8) * 0x30000) /
          (((_DAT_01c35e54 - _DAT_01c35e4c) * 0x1e0) / (int)DAT_006141bc);
  iVar12 = iVar6 >> 0x1f;
  iVar6 = (int)((iVar6 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2;
  _DAT_01c38b9c =
       (uint)
       (((longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_006141e4);
  _DAT_01c38ba0 =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar8 * (longlong)-iVar11) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)-iVar11) >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_006141e4);
  _DAT_01c38ba8 =
       (uint)
       (((longlong)(int)((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_006141e4);
  _DAT_01c38bac =
       (uint)
       (((longlong)
         (int)((uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_006141e4);
  _DAT_01c38bb4 =
       (uint)
       (((longlong)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_006141e4);
  _DAT_01c38bb8 =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar10 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar10 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_006141e4);
  engine_matrix_c_invertTransformMatrix_FUN_004e8730();
  return;
}
