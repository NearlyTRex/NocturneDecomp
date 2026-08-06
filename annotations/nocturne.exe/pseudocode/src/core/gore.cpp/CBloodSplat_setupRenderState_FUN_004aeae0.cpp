// Name: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0
// Address: 004aeae0
// Address Range: [[004aeae0, 004aeb65]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(CBloodSplat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(CBloodSplat *this_ptr)

{
  _DAT_01c78c84 = 4;
  _DAT_01c78c98 = 0;
  _DAT_01c78c9c = 1;
  _DAT_01c78ca0 = 2;
  _DAT_01c78ca4 = 3;
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0x80000;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  return;
}
