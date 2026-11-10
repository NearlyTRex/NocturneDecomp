// Name: engine_drender.cpp_FUN_0046bd7e
// Address: 0046bd7e
// Address Range: [[0046bd7e, 0046bded] [0046be2b, 0046be54]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046bd7e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046bd7e(void)

{
  CDemonRenderer *in_ECX;
  ushort *unaff_EBP;
  
  _DAT_01bdd818 = (uint)*unaff_EBP;
  _DAT_01bdd81c = (uint)unaff_EBP[1];
  _DAT_01bdd820 = (uint)unaff_EBP[2];
  if (in_ECX->shadow_pass_active == 0) {
    if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b8 = 6;
    _DAT_01c6e2b4 = 0x2cd;
  }
  else {
    _DAT_01c6e2b4 = 0;
    _DAT_01c6e2b8 = 0;
    _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(in_ECX,3,(int *)&DAT_01bdd818);
  return;
}
