// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800
// Address: 004c8800
// Address Range: [[004c8800, 004c889f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)

{
  int iVar1;
  
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
  _DAT_01cb8290 = 0;
  _DAT_01cb8298 = 0;
  _DAT_01cb829c = 0;
  _DAT_01cb8294 = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  return iVar1;
}
