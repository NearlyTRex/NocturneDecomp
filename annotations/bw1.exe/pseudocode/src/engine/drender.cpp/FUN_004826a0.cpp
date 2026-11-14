// Name: engine_drender.cpp_FUN_004826a0
// Address: 004826a0
// Address Range: [[004826a0, 0048270d] [0048274b, 00482774]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_004826a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_004826a0(void)

{
  CDemonRenderer *in_ECX;
  ushort *unaff_EBP;
  
  _DAT_01bc1240 = (uint)*unaff_EBP;
  _DAT_01bc1244 = (uint)unaff_EBP[1];
  _DAT_01bc1248 = (uint)unaff_EBP[2];
  if (in_ECX->shadow_pass_active == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d18 = 6;
    _DAT_01c51d14 = 0x2cd;
  }
  else {
    _DAT_01c51d14 = 0;
    _DAT_01c51d18 = 0;
    _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(in_ECX,3,(int *)&DAT_01bc1240);
  return;
}
