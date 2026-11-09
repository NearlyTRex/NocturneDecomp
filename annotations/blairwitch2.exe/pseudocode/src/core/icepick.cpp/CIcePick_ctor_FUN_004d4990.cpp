// Name: core_icepick.cpp_CIcePick_ctor_FUN_004d4990
// Address: 004d4990
// Address Range: [[004d4990, 004d49bb]]
// Convention: unknown
// Signature: CIcePick * core_icepick_cpp_CIcePick_ctor_FUN_004d4990(CIcePick *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CIcePick * core_icepick_cpp_CIcePick_ctor_FUN_004d4990(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CIcePickVTable;
  *(uint *)&pCVar1->field_0x25640 = 0;
  *(uint *)&pCVar1->field_0x25644 = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"icepick.dfm");
  *(uint *)&pCVar1->field_0x2565c = 0x3f800000;
  *(uint *)&pCVar1->field_0x25658 = 0;
  *(uint *)&pCVar1->field_0x25654 = *(uint *)&pCVar1->field_0x25658;
  *(uint *)&pCVar1->field_0x25650 = *(uint *)&pCVar1->field_0x25654;
  *(uint *)&pCVar1->field_0x25660 = 0;
  *(uint *)&pCVar1->field_0x25664 = 0;
  *(uint *)&pCVar1->field_0x25a8 = 0x43960000;
  return pCVar1;
}
