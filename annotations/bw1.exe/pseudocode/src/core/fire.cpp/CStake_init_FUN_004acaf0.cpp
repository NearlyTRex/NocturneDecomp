// Name: core_fire.cpp_CStake_init_FUN_004acaf0
// Address: 004acaf0
// Address Range: [[004acaf0, 004acb50]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_init_FUN_004acaf0(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_init_FUN_004acaf0(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

{
  if ((CVector3f *)&this_ptr->field_0x4 != position) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0x10 != orientation) {
    *(uint *)&this_ptr->field_0x10 = *(uint *)orientation;
    *(uint *)&this_ptr->field_0x14 = *(uint *)&orientation->field_0x4;
    *(uint *)&this_ptr->field_0x18 = *(uint *)&orientation->field_0x8;
  }
  core_dirmat_cpp_FUN_0045f3e0
            ((CMatrix3x3f *)&this_ptr->field_0x1c,(CVector3f *)&this_ptr->field_0x10);
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x258 = 0;
  return;
}
