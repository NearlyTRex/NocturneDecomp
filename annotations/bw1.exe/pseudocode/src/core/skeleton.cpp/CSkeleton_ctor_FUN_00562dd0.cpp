// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_00562dd0
// Address: 00562dd0
// Address Range: [[00562dd0, 00562e20]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_00562dd0(CSkeleton *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_00562dd0(CSkeleton *this_ptr)

{
  CSkeleton *pCVar1;
  uint unaff_retaddr;
  
  FUN_005c3187(8);
  pCVar1 = (CSkeleton *)unkafter_box_cpp_FUN_005238c0(unaff_retaddr);
  *(uint *)&pCVar1->field_0x1de78 = 0;
  *(uint *)&pCVar1->field_0x1ec8c = 0;
  *(uint *)&pCVar1->field_0x1ec90 = 0;
  *(uint *)&pCVar1->field_0x1ec94 = 0;
  *(uint *)&pCVar1->field_0x1ec98 = 0;
  pCVar1->field_0x1de28 = 0;
  return pCVar1;
}
