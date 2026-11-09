// Name: engine_drender.cpp_FUN_00469f9c
// Address: 00469f9c
// Address Range: [[00469f9c, 0046a02f]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00469f9c(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_00469f9c(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      _DAT_01c38b58 = 6;
      _DAT_01c38b54 = 0x2cd;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}
