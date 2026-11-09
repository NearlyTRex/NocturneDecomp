// Name: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004c7f80
// Address: 004c7f80
// Address Range: [[004c7f80, 004c8005]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80(CBloodSplat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80(CBloodSplat *this_ptr)

{
  _DAT_01cb828c = 4;
  _DAT_01cb82a0 = 0;
  _DAT_01cb82a4 = 1;
  _DAT_01cb82a8 = 2;
  _DAT_01cb82ac = 3;
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  _DAT_006220c0 = 0x80000;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0x8000);
  return;
}
