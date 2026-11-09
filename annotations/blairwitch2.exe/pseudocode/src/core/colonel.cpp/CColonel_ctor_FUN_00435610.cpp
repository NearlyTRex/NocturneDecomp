// Name: core_colonel.cpp_CColonel_ctor_FUN_00435610
// Address: 00435610
// Address Range: [[00435610, 0043563b]]
// Convention: unknown
// Signature: CColonel * core_colonel_cpp_CColonel_ctor_FUN_00435610(CColonel *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CColonel * core_colonel_cpp_CColonel_ctor_FUN_00435610(CColonel *this_ptr)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(byte ***)&pCVar1->field_0x2b0 = &g_CColonelVTable;
  *(uint *)&pCVar1->field_0x25640 = 0;
  *(uint *)&pCVar1->field_0x25644 = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"colonel.dfm");
  *(uint *)&pCVar1->field_0x25654 = 0x3f800000;
  *(uint *)&pCVar1->field_0x25650 = 0;
  *(uint *)&pCVar1->field_0x2564c = *(uint *)&pCVar1->field_0x25650;
  *(uint *)&pCVar1->field_0x25648 = *(uint *)&pCVar1->field_0x2564c;
  return pCVar1;
}
