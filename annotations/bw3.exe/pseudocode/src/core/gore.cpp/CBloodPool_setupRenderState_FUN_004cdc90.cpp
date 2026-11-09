// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004cdc90
// Address: 004cdc90
// Address Range: [[004cdc90, 004cdd2f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90(CBloodPool *this_ptr)

{
  int iVar1;
  
  _DAT_01d22e4c = 4;
  _DAT_01d22e60 = 0;
  _DAT_01d22e64 = 1;
  _DAT_01d22e68 = 2;
  _DAT_01d22e6c = 3;
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
  _DAT_01d22e50 = 0;
  _DAT_01d22e58 = 0;
  _DAT_01d22e5c = 0;
  _DAT_01d22e54 = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  return iVar1;
}
