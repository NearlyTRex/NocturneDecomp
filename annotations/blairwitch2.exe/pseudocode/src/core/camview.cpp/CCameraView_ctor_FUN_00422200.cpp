// Name: core_camview.cpp_CCameraView_ctor_FUN_00422200
// Address: 00422200
// Address Range: [[00422200, 00422218]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00422200(CCameraView *this_ptr)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00422200(CCameraView *this_ptr)

{
  this_ptr->focal_length = 28.0;
  this_ptr->fixed_point_scale = 256.0;
  this_ptr->vtable =
       (CCameraView_vtable *)&PTR_core_camview_cpp_CCameraView_dtor_FUN_00422220_005f4024;
  return this_ptr;
}
