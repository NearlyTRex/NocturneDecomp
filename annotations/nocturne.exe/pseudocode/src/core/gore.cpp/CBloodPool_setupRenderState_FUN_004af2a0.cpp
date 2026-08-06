// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0
// Address: 004af2a0
// Address Range: [[004af2a0, 004af33f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(CBloodPool *this_ptr)

{
  int iVar1;
  
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
  _DAT_01c78c88 = 0;
  _DAT_01c78c90 = 0;
  _DAT_01c78c94 = 0;
  _DAT_01c78c8c = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                    (g_CDemonRenderer_PTR_005ae704,0xffff);
  return iVar1;
}
