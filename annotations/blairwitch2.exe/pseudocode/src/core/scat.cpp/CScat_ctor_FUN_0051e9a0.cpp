// Name: core_scat.cpp_CScat_ctor_FUN_0051e9a0
// Address: 0051e9a0
// Address Range: [[0051e9a0, 0051ea5e]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_0051e9a0(CScat *this_ptr)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_0051e9a0(CScat *this_ptr)

{
  CScat *this_ptr_00;
  
  this_ptr_00 = (CScat *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(byte **)&this_ptr_00->field_0x2b0 = &g_CScatVTable;
  *(uint *)&this_ptr_00->field_0x25640 = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5e29b7);
  *(uint *)&this_ptr_00->field_0x25650 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x2564c = 0;
  *(uint *)&this_ptr_00->field_0x25648 = *(uint *)&this_ptr_00->field_0x2564c;
  *(uint *)&this_ptr_00->field_0x25644 = *(uint *)&this_ptr_00->field_0x25648;
  core_scat_cpp_FUN_0051ec20(this_ptr_00);
  *(uint *)&this_ptr_00->field_0x25654 = 0;
  *(uint *)&this_ptr_00->field_0x2565c = 0;
  *(uint *)&this_ptr_00->field_0x25664 = 0;
  *(uint *)&this_ptr_00->field_0x25668 = 0;
  *(uint *)&this_ptr_00->field_0x25658 = *(uint *)&this_ptr_00->field_0x2565c;
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,1,"draw_stand2coatPocket",0);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,2,"draw_coatPocket2aimPistols",0);
  return this_ptr_00;
}
