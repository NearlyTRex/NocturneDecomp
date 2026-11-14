// Name: core_camview.cpp_CCameraView_ctor_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004254c8]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_004254b0(CCameraView *this_ptr)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_004254b0(CCameraView *this_ptr)

{
  this_ptr->focal_length = 28.0;
  this_ptr->fixed_point_scale = 256.0;
  this_ptr->vtable =
       (CCameraView_vtable *)&PTR_core_camview_cpp_CCameraView_dtor_FUN_004254d0_005dcef4;
  return this_ptr;
}
