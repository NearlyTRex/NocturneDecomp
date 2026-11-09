// Name: core_grandma.cpp_CGrandma_ctor_FUN_005a7b10
// Address: 005a7b10
// Address Range: [[005a7b10, 005a7bd1]]
// Convention: unknown
// Signature: CGrandma * core_grandma_cpp_CGrandma_ctor_FUN_005a7b10(CGrandma *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGrandma * core_grandma_cpp_CGrandma_ctor_FUN_005a7b10(CGrandma *this_ptr)

{
  CGrandma *pCVar1;
  
  pCVar1 = (CGrandma *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0((CBasicNPC *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CGrandmaVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"Grandma.dfm");
  *(uint *)&pCVar1->field_0x3434 = 0x3f800000;
  *(uint *)&pCVar1->field_0x1134c = 0x3fc00000;
  *(uint *)&pCVar1->field_0x11380 = 0;
  *(uint *)&pCVar1->field_0x11384 = 0;
  *(uint *)&pCVar1->field_0x11388 = 1;
  *(uint *)&pCVar1->field_0x1138c = 1;
  *(uint *)&pCVar1->field_0x11390 = 0;
  *(uint *)&pCVar1->field_0x11394 = 0;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            ((CClothList *)&pCVar1->field_0x2d0c,"Grandmadress.cth");
  core_grandma_cpp_FUN_005a7c20(pCVar1,0,0);
  unkaddr_0059d350_cpp_FUN_0059d990(&pCVar1->field_0x10af8,"Animation");
  unkaddr_0059d350_cpp_FUN_0059dc80(&pCVar1->field_0x10af8);
  return pCVar1;
}
