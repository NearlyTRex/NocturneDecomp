// Name: core_camview.cpp_CCameraView_dtor_FUN_004254d0
// Address: 004254d0
// Address Range: [[004254d0, 00425518]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_004254d0(CCameraView *this_ptr,uint flags)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_004254d0(CCameraView *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCameraViewTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable =
       (CCameraView_vtable *)&PTR_core_camview_cpp_CCameraView_dtor_FUN_004254d0_005dcef4;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005a30c4(this_ptr);
  return this_ptr;
}
