// Name: core_shadow.cpp_CDemonShadow_ctor_FUN_00545fc0
// Address: 00545fc0
// Address Range: [[00545fc0, 00546015]]
// Convention: unknown
// Signature: CDemonShadow * core_shadow_cpp_CDemonShadow_ctor_FUN_00545fc0(CDemonShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonShadow * core_shadow_cpp_CDemonShadow_ctor_FUN_00545fc0(CDemonShadow *this_ptr)

{
  CShadow *pCVar1;
  
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_00543500((CShadow *)this_ptr);
  *(CEnemy_full_vtable **)&pCVar1->field_0x154 = &g_CDemonShadowVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar1->field_0x158,"shadowbeast.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x42700000;
  *(uint *)&pCVar1->field_0xce5c = 0x41f00000;
  *(uint *)&pCVar1->field_0xce60 = 0x41a00000;
  *(uint *)&pCVar1->field_0xd0a8 = 3;
  return (CDemonShadow *)pCVar1;
}
