// Name: core_scat.cpp_CScat_ctor_FUN_00540ad0
// Address: 00540ad0
// Address Range: [[00540ad0, 00540b8e]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_00540ad0(CScat *this_ptr)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_00540ad0(CScat *this_ptr)

{
  CScat *this_ptr_00;
  
  this_ptr_00 = (CScat *)core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  *(byte ***)&this_ptr_00->field_0x154 = &g_CScatVTable;
  *(uint *)&this_ptr_00->field_0x1ffac = 0;
  core_skeleton_cpp_FUN_00569f50(&this_ptr_00->field_0x158,0x5edcc3);
  *(uint *)&this_ptr_00->field_0x1ffbc = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x1ffb8 = 0;
  *(uint *)&this_ptr_00->field_0x1ffb4 = *(uint *)&this_ptr_00->field_0x1ffb8;
  *(uint *)&this_ptr_00->field_0x1ffb0 = *(uint *)&this_ptr_00->field_0x1ffb4;
  core_scat_cpp_FUN_00540d50(this_ptr_00);
  *(uint *)&this_ptr_00->field_0x1ffc0 = 0;
  *(uint *)&this_ptr_00->field_0x1ffc8 = 0;
  *(uint *)&this_ptr_00->field_0x1ffd0 = 0;
  *(uint *)&this_ptr_00->field_0x1ffd4 = 0;
  *(uint *)&this_ptr_00->field_0x1ffc4 = *(uint *)&this_ptr_00->field_0x1ffc8;
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0,1,"draw_stand2coatPocket",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,1,2,"draw_coatPocket2aimPistols",0);
  return this_ptr_00;
}
