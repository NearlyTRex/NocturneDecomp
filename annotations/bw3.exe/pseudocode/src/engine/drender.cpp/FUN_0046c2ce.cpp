// Name: engine_drender.cpp_FUN_0046c2ce
// Address: 0046c2ce
// Address Range: [[0046c2ce, 0046c3a1]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046c2ce(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046c2ce(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(param_2 + 8), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & *(uint *)(*(int *)param_1 + 0x10 + *(int *)(iVar1 + 0x18) * 0x30);
        iVar1 = iVar1 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (*(int *)(param_1 + 4) == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b8 = 6;
        _DAT_01c6e2b4 = 0x2e7;
      }
      else {
        _DAT_01c6e2b4 = 1;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
    }
  }
  return;
}
