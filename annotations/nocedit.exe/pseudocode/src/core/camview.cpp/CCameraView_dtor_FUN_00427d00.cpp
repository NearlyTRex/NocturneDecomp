// Name: core_camview.cpp_CCameraView_dtor_FUN_00427d00
// Address: 00427d00
// Address Range: [[00427d00, 00427d1f] [00427d21, 00427d48]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00427d00(CCameraView *this_ptr,uint flags)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00427d00(CCameraView *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCameraViewTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCameraViewVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}
