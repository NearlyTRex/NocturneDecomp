// Name: core_camview.cpp_CCameraView_ctor_FUN_00422200
// Address: 00422200
// Address Range: [[00422200, 00422218]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00422200(CCameraView *this_ptr)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00422200(CCameraView *this_ptr)

{
  *(uint *)&this_ptr->field_0x38 = 0x41e00000;
  *(uint *)this_ptr = 0x43800000;
  *(byte ***)&this_ptr->field_0x3c =
       &PTR_core_camview_cpp_CCameraView_dtor_FUN_00422220_005f4024;
  return this_ptr;
}
