// Name: engine_matrix.c_buildRotationMatrix_FUN_004e50f0
// Address: 004e50f0
// Address Range: [[004e50f0, 004e5404]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004e50f0(int pitch,int yaw,int roll)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004e50f0(int pitch,int yaw,int roll)

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
  
  iVar6 = engine_matrix_c_FUN_004e4d90(pitch);
  iVar7 = engine_matrix_c_FUN_004e4dd0(pitch);
  iVar8 = engine_matrix_c_FUN_004e4d90(yaw);
  iVar9 = engine_matrix_c_FUN_004e4dd0(yaw);
  iVar10 = engine_matrix_c_FUN_004e4d90(roll);
  iVar11 = engine_matrix_c_FUN_004e4dd0(roll);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  lVar2 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  _DAT_01c6e304 =
       (uint)((longlong)iVar7 * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20) << 0x10;
  _DAT_01c6e310 = -iVar6;
  lVar3 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  lVar4 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  _DAT_01c6e31c =
       (uint)((longlong)iVar7 * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20) << 0x10;
  if (199 < DAT_005fba1c) {
    if (DAT_005fba1c < 0xc9) {
      _DAT_01d7269c = 0x15555;
      goto LAB_004e526c;
    }
    if (DAT_005fba1c == 400) {
      _DAT_01d7269c = 0xaaaa;
      goto LAB_004e526c;
    }
  }
  _DAT_01d7269c = 0x10000;
LAB_004e526c:
  iVar6 = (DAT_005fba18 * -(int)(((longlong)_DAT_01c6b59c * 0x10000) / (longlong)_DAT_01c6b598) * 3)
          / (int)(DAT_005fba1c << 2);
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
  iVar6 = ((((_DAT_01c6b5b0 - _DAT_01c6b5a8) * 0x280) / DAT_005fba18) * 0x30000) /
          (((_DAT_01c6b5b4 - _DAT_01c6b5ac) * 0x1e0) / (int)DAT_005fba1c);
  iVar12 = iVar6 >> 0x1f;
  iVar6 = (int)((iVar6 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2;
  _DAT_01c6e2fc =
       (uint)
       (((longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005fba44);
  _DAT_01c6e300 =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar8 * (longlong)-iVar11) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)-iVar11) >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_005fba44);
  _DAT_01c6e308 =
       (uint)
       (((longlong)(int)((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005fba44);
  _DAT_01c6e30c =
       (uint)
       (((longlong)
         (int)((uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005fba44);
  _DAT_01c6e314 =
       (uint)
       (((longlong)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005fba44);
  _DAT_01c6e318 =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar10 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar10 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_005fba44);
  engine_matrix_c_invertTransformMatrix_FUN_004e4e10();
  return;
}
