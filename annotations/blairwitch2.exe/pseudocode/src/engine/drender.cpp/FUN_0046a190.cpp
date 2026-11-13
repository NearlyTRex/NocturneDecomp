// Name: engine_drender.cpp_FUN_0046a190
// Address: 0046a190
// Address Range: [[0046a190, 0046a1fd] [0046a23b, 0046a264]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046a190(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_0046a190(void)

{
  CDemonRenderer *in_ECX;
  ushort *unaff_EBP;
  
  _DAT_01ba5c84 = (uint)*unaff_EBP;
  _DAT_01ba5c88 = (uint)unaff_EBP[1];
  _DAT_01ba5c8c = (uint)unaff_EBP[2];
  if (in_ECX->shadow_pass_active == 0) {
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
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(in_ECX,3,(int *)&DAT_01ba5c84);
  return;
}
