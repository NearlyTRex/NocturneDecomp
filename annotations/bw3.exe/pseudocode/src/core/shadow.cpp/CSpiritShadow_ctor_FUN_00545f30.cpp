// Name: core_shadow.cpp_CSpiritShadow_ctor_FUN_00545f30
// Address: 00545f30
// Address Range: [[00545f30, 00545f85]]
// Convention: unknown
// Signature: CSpiritShadow * core_shadow_cpp_CSpiritShadow_ctor_FUN_00545f30(CSpiritShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritShadow * core_shadow_cpp_CSpiritShadow_ctor_FUN_00545f30(CSpiritShadow *this_ptr)

{
  CShadow *pCVar1;
  
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_00543500((CShadow *)this_ptr);
  *(CEnemy_full_vtable **)&pCVar1->field_0x154 = &g_CSpiritShadowVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar1->field_0x158,"shadowbeast.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x42200000;
  *(uint *)&pCVar1->field_0xce5c = 0x41c80000;
  *(uint *)&pCVar1->field_0xce60 = 0x41a00000;
  *(uint *)&pCVar1->field_0xd0a8 = 2;
  return (CSpiritShadow *)pCVar1;
}
