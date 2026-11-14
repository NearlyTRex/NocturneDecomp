// Name: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0
// Address: 004060e0
// Address Range: [[004060e0, 00406291]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iStack_c;
  
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(param_1 + 8));
  if (iVar1 != 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b4 = 0xc3;
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    _DAT_01c6e2b8 = 1;
    iVar1 = 0;
    iStack_c = 0;
    for (iVar5 = 0; iVar5 < *(int *)(param_1 + 4) * 3; iVar5 = iVar5 + 3) {
      *(int *)((int)&DAT_00730418 + iVar1) = *piVar4;
      iVar3 = piVar4[1];
      iVar2 = piVar4[2];
      if (DAT_005fba28 < 0x41) {
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (iVar2 < 0x40000) {
          iVar2 = 0x40000;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
        if (0xfbffff < iVar2) {
          iVar2 = 0xfbffff;
        }
      }
      else {
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (iVar2 < 0x10000) {
          iVar2 = 0x10000;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
        if (0xfeffff < iVar2) {
          iVar2 = 0xfeffff;
        }
      }
      (&DAT_0060b02c)[*piVar4 * 0xc] = iVar3;
      iVar1 = iVar1 + 4;
      *(int *)(&DAT_0060b030 + *piVar4 * 0x30) = iVar2;
      piVar4 = piVar4 + 3;
      iStack_c = iStack_c + 1;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(iStack_c,&DAT_00730418);
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
