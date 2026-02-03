// Name: core_fire.cpp_freeStakes_FUN_004c99d0
// Address: 004c99d0
// Address Range: [[004c99d0, 004c99e7]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_freeStakes_FUN_004c99d0(CStake *objs)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_freeStakes_FUN_004c99d0(CStake *objs)

{
  CStake *pCVar1;
  
  pCVar1 = __arrfini(objs,0x100,&g_CStakeTypeInfo);
  return pCVar1;
}
