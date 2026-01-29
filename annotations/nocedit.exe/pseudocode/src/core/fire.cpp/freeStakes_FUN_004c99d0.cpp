// Name: core_fire.cpp_freeStakes_FUN_004c99d0
// Address: 004c99d0
// Address Range: [[004c99d0, 004c99e7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeStakes_FUN_004c99d0(CStake **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeStakes_FUN_004c99d0(CStake **array)

{
  __arrfini(array,0x100,&g_CStakeTypeInfo);
  return;
}
