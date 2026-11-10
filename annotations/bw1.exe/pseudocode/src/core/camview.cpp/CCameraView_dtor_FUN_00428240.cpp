// Name: core_camview.cpp_CCameraView_dtor_FUN_00428240
// Address: 00428240
// Address Range: [[00428240, 00428288]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00428240(CCameraView *this_ptr,uint flags)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00428240(CCameraView *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCameraViewTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr->vtable =
       (CCameraView_vtable *)&PTR_core_camview_cpp_CCameraView_dtor_FUN_00428240_005fd414;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005c0344(this_ptr);
  return this_ptr;
}
