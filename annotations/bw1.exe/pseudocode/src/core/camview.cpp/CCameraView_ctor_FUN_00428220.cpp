// Name: core_camview.cpp_CCameraView_ctor_FUN_00428220
// Address: 00428220
// Address Range: [[00428220, 00428238]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00428220(CCameraView *this_ptr)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00428220(CCameraView *this_ptr)

{
  this_ptr->focal_length = 28.0;
  this_ptr->fixed_point_scale = 256.0;
  this_ptr->vtable =
       (CCameraView_vtable *)&PTR_core_camview_cpp_CCameraView_dtor_FUN_00428240_005fd414;
  return this_ptr;
}
