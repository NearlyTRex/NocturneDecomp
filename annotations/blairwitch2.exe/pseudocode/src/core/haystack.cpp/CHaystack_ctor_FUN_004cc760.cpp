// Name: core_haystack.cpp_CHaystack_ctor_FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc78b]]
// Convention: unknown
// Signature: CHaystack * core_haystack_cpp_CHaystack_ctor_FUN_004cc760(CHaystack *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHaystack * core_haystack_cpp_CHaystack_ctor_FUN_004cc760(CHaystack *this_ptr)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CHaystackVTable;
  *(uint *)&pCVar1->field_0x25640 = 0;
  *(uint *)&pCVar1->field_0x25644 = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"haystack.dfm");
  *(uint *)&pCVar1->field_0x25654 = 0x3f800000;
  *(uint *)&pCVar1->field_0x25650 = 0;
  *(uint *)&pCVar1->field_0x2564c = *(uint *)&pCVar1->field_0x25650;
  *(uint *)&pCVar1->field_0x25648 = *(uint *)&pCVar1->field_0x2564c;
  return pCVar1;
}
