// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_005407e0
// Address: 005407e0
// Address Range: [[005407e0, 00540830]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_005407e0(CSkeleton *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_005407e0(CSkeleton *this_ptr)

{
  CSkeleton *pCVar1;
  uint unaff_retaddr;
  
  FUN_005badc7(8);
  pCVar1 = (CSkeleton *)core_moon_cpp_FUN_00502760(unaff_retaddr);
  *(uint *)&pCVar1->field_0x1d1f8 = 0;
  *(uint *)&pCVar1->field_0x1e00c = 0;
  *(uint *)&pCVar1->field_0x1e010 = 0;
  *(uint *)&pCVar1->field_0x1e014 = 0;
  *(uint *)&pCVar1->field_0x1e018 = 0;
  pCVar1->field_0x1d1a8 = 0;
  return pCVar1;
}
