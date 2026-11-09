// Name: engine_matrix.c_buildRotationMatrix_FUN_005076b0
// Address: 005076b0
// Address Range: [[005076b0, 005079c4]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_buildRotationMatrix_FUN_005076b0(int pitch,int yaw,int roll)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_buildRotationMatrix_FUN_005076b0(int pitch,int yaw,int roll)

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
  
  iVar6 = engine_matrix_c_FUN_00507350(pitch);
  iVar7 = engine_matrix_c_FUN_00507390(pitch);
  iVar8 = engine_matrix_c_FUN_00507350(yaw);
  iVar9 = engine_matrix_c_FUN_00507390(yaw);
  iVar10 = engine_matrix_c_FUN_00507350(roll);
  iVar11 = engine_matrix_c_FUN_00507390(roll);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  lVar2 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  _DAT_01c51d64 =
       (uint)((longlong)iVar7 * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20) << 0x10;
  _DAT_01c51d70 = -iVar6;
  lVar3 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  lVar4 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  _DAT_01c51d7c =
       (uint)((longlong)iVar7 * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20) << 0x10;
  if (199 < DAT_0061b49c) {
    if (DAT_0061b49c < 0xc9) {
      _DAT_01d1dd70 = 0x15555;
      goto LAB_0050782c;
    }
    if (DAT_0061b49c == 400) {
      _DAT_01d1dd70 = 0xaaaa;
      goto LAB_0050782c;
    }
  }
  _DAT_01d1dd70 = 0x10000;
LAB_0050782c:
  iVar6 = (DAT_0061b498 * -(int)(((longlong)_DAT_01c4effc * 0x10000) / (longlong)_DAT_01c4eff8) * 3)
          / (int)(DAT_0061b49c << 2);
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
  iVar6 = ((((_DAT_01c4f010 - _DAT_01c4f008) * 0x280) / DAT_0061b498) * 0x30000) /
          (((_DAT_01c4f014 - _DAT_01c4f00c) * 0x1e0) / (int)DAT_0061b49c);
  iVar12 = iVar6 >> 0x1f;
  iVar6 = (int)((iVar6 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2;
  _DAT_01c51d5c =
       (uint)
       (((longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_0061b4c4);
  _DAT_01c51d60 =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar8 * (longlong)-iVar11) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)-iVar11) >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_0061b4c4);
  _DAT_01c51d68 =
       (uint)
       (((longlong)(int)((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_0061b4c4);
  _DAT_01c51d6c =
       (uint)
       (((longlong)
         (int)((uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_0061b4c4);
  _DAT_01c51d74 =
       (uint)
       (((longlong)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_0061b4c4);
  _DAT_01c51d78 =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar10 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar10 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_0061b4c4);
  engine_matrix_c_invertTransformMatrix_FUN_005073d0();
  return;
}
