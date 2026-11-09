// Name: core_xform.cpp_clipPolygonStage3_FUN_00594bb0
// Address: 00594bb0
// Address Range: [[00594bb0, 00594d0d]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage3_FUN_00594bb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_xform_cpp_clipPolygonStage3_FUN_00594bb0(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  int iStack_14;
  
  bVar10 = 0;
  iStack_14 = 0;
  if (0 < (int)_DAT_02665a64) {
    plVar6 = (longlong *)0x266666c;
    do {
      uVar3 = iStack_14 + 1;
      if (uVar3 == _DAT_02665a64) {
        uVar3 = uVar3 ^ _DAT_02665a64;
      }
      iVar4 = uVar3 * 0x30;
      bVar2 = (int)plVar6[1] <= *(int *)((int)plVar6 + 4);
      if (*(int *)(&DAT_02666674 + iVar4) <= *(int *)(&DAT_02666670 + iVar4)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        plVar8 = (longlong *)(&DAT_02666c6c + _DAT_02665a68 * 0x30);
        iVar4 = 0x30;
        plVar7 = plVar6;
        plVar9 = plVar8;
        if (((uint)plVar8 & 7) != 0) {
          plVar9 = (longlong *)(&DAT_02666c70 + (uint)bVar10 * -8 + _DAT_02665a68 * 0x30);
          plVar7 = (longlong *)((int)plVar6 + (uint)bVar10 * -8 + 4);
          *(int *)plVar8 = (int)*plVar6;
          iVar4 = 0x2c;
        }
        while (7 < iVar4) {
          lVar1 = *plVar7;
          plVar7 = plVar7 + 1;
          *plVar9 = (longlong)ROUND((float10)lVar1);
          plVar9 = plVar9 + 1;
          iVar4 = iVar4 + -8;
        }
        if (iVar4 != 0 && -9 < iVar4 + -8) {
          *(int *)plVar9 = (int)*plVar7;
          if (4 < iVar4) {
            *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)plVar7 + (uint)bVar10 * -8 + 4);
          }
        }
        _DAT_02665a68 = _DAT_02665a68 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateTopPlane_FUN_00594730
                  (iVar4 + 0x266666c,plVar6,&DAT_02666c6c + _DAT_02665a68 * 0x30);
        _DAT_02665a68 = _DAT_02665a68 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(&DAT_02666c6c + _DAT_02665a68 * 0x30);
        iVar5 = 0x30;
        plVar7 = plVar6;
        plVar9 = plVar8;
        if (((uint)plVar8 & 7) != 0) {
          plVar9 = (longlong *)(&DAT_02666c70 + (uint)bVar10 * -8 + _DAT_02665a68 * 0x30);
          plVar7 = (longlong *)((int)plVar6 + (uint)bVar10 * -8 + 4);
          *(int *)plVar8 = (int)*plVar6;
          iVar5 = 0x2c;
        }
        while (7 < iVar5) {
          lVar1 = *plVar7;
          plVar7 = plVar7 + 1;
          *plVar9 = (longlong)ROUND((float10)lVar1);
          plVar9 = plVar9 + 1;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          *(int *)plVar9 = (int)*plVar7;
          if (4 < iVar5) {
            *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)plVar7 + (uint)bVar10 * -8 + 4);
          }
        }
        _DAT_02665a68 = _DAT_02665a68 + 1;
        core_xform_cpp_clipInterpolateTopPlane_FUN_00594730
                  (plVar6,iVar4 + 0x266666c,&DAT_02666c6c + _DAT_02665a68 * 0x30);
        _DAT_02665a68 = _DAT_02665a68 + 1;
      }
      iStack_14 = iStack_14 + 1;
      plVar6 = plVar6 + 6;
    } while (iStack_14 < (int)_DAT_02665a64);
  }
  return;
}
