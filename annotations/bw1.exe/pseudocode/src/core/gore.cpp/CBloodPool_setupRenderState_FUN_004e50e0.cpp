// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0
// Address: 004e50e0
// Address Range: [[004e50e0, 004e517f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004e50e0(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004e50e0(CBloodPool *this_ptr)

{
  int iVar1;
  
  _DAT_01cd0e44 = 4;
  _DAT_01cd0e58 = 0;
  _DAT_01cd0e5c = 1;
  _DAT_01cd0e60 = 2;
  _DAT_01cd0e64 = 3;
  DAT_0062902c = 0x80000;
  _DAT_00629030 = 0xf80000;
  _DAT_0062905c = 0xf80000;
  _DAT_00629060 = 0xf80000;
  _DAT_0062908c = 0xf80000;
  DAT_00629090 = 0x80000;
  _DAT_006290bc = 0x80000;
  _DAT_006290c0 = 0x80000;
  _DAT_01cd0e48 = 0;
  _DAT_01cd0e50 = 0;
  _DAT_01cd0e54 = 0;
  _DAT_01cd0e4c = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  return iVar1;
}
