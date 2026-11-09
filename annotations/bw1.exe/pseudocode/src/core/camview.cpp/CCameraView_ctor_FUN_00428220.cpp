// Name: core_camview.cpp_CCameraView_ctor_FUN_00428220
// Address: 00428220
// Address Range: [[00428220, 00428238]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00428220(CCameraView *this_ptr)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00428220(CCameraView *this_ptr)

{
  *(uint *)&this_ptr->field_0x38 = 0x41e00000;
  *(uint *)this_ptr = 0x43800000;
  *(byte ***)&this_ptr->field_0x3c =
       &PTR_core_camview_cpp_CCameraView_dtor_FUN_00428240_005fd414;
  return this_ptr;
}
