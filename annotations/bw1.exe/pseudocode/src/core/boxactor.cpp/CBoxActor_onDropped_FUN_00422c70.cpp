// Name: core_boxactor.cpp_CBoxActor_onDropped_FUN_00422c70
// Address: 00422c70
// Address Range: [[00422c70, 00422cc6]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_00422c70(CBoxActor *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_00422c70(CBoxActor *this_ptr,CVector3f *drop_position)

{
  CVector3f CStack_10;
  
  *(uint *)&this_ptr->field_0x318 = 0;
  core_boxactor_cpp_FUN_00421e80(this_ptr);
  if (drop_position == (CVector3f *)0x0) {
    return;
  }
  CStack_10._8_4_ = 0;
  CStack_10._4_4_ = 0;
  CStack_10._0_4_ = 0x4116cbe4;
  core_box_cpp_CBox_setupVelocities_FUN_00420450
            ((CBox *)&this_ptr->field_0x394,drop_position,&CStack_10);
  return;
}
