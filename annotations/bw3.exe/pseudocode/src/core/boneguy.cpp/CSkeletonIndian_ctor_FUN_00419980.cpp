// Name: core_boneguy.cpp_CSkeletonIndian_ctor_FUN_00419980
// Address: 00419980
// Address Range: [[00419980, 004199e1]]
// Convention: unknown
// Signature: CSkeletonIndian * core_boneguy_cpp_CSkeletonIndian_ctor_FUN_00419980(CSkeletonIndian *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeletonIndian * core_boneguy_cpp_CSkeletonIndian_ctor_FUN_00419980(CSkeletonIndian *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400((CBoneGuy *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CSkeleton_IndianVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,0x5b718e);
  *(uint *)&pCVar1->field_0x2538 = 0x41f00000;
  *(uint *)&pCVar1->field_0xce5c = 0x41400000;
  *(uint *)&pCVar1->field_0xce60 = 0x41000000;
  *(uint *)&pCVar1->field_0xd074 = 2;
  *(uint *)&pCVar1->field_0xd058 = *(uint *)&pCVar1->field_0x2538;
  return (CSkeletonIndian *)pCVar1;
}
