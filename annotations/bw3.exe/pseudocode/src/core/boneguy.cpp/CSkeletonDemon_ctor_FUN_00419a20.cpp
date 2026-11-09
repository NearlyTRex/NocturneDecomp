// Name: core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20
// Address: 00419a20
// Address Range: [[00419a20, 00419a81]]
// Convention: unknown
// Signature: CSkeletonDemon * core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(CSkeletonDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeletonDemon * core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(CSkeletonDemon *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400((CBoneGuy *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CSkeleton_DemonVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,0x5b719a);
  *(uint *)&pCVar1->field_0x2538 = 0x42200000;
  *(uint *)&pCVar1->field_0xce5c = 0x41a00000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xd074 = 3;
  *(uint *)&pCVar1->field_0xd058 = *(uint *)&pCVar1->field_0x2538;
  return (CSkeletonDemon *)pCVar1;
}
