// Name: core_camview.cpp_CCameraView_dtor_FUN_00422220
// Address: 00422220
// Address Range: [[00422220, 00422268]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00422220(CCameraView *this_ptr,uint flags)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00422220(CCameraView *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCameraViewTypeInfo);
    free(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCameraView_vtable_005f4024;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  debugFreeChecked(this_ptr);
  return this_ptr;
}
