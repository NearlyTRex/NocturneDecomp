// Name: core_shadow.cpp_CShadowForest_ctor_FUN_00545ea0
// Address: 00545ea0
// Address Range: [[00545ea0, 00545ef5]]
// Convention: unknown
// Signature: CShadowForest * core_shadow_cpp_CShadowForest_ctor_FUN_00545ea0(CShadowForest *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadowForest * core_shadow_cpp_CShadowForest_ctor_FUN_00545ea0(CShadowForest *this_ptr)

{
  CShadow *pCVar1;
  
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_00543500((CShadow *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CShadow_ForestVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"@shadowbeast.dfm" + 1);
  *(uint *)&pCVar1->field_0x2538 = 0x42200000;
  *(uint *)&pCVar1->field_0xce5c = 0x41700000;
  *(uint *)&pCVar1->field_0xce60 = 0x41a00000;
  *(uint *)&pCVar1->field_0xd0a8 = 1;
  return (CShadowForest *)pCVar1;
}
