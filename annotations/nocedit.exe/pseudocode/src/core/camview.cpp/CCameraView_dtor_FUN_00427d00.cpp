// Name: core_camview.cpp_CCameraView_dtor_FUN_00427d00
// Address: 00427d00
// Address Range: [[00427d00, 00427d1f] [00427d21, 00427d48]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00427d00(CCameraView *this_ptr,uint d1)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00427d00(CCameraView *this_ptr,uint d1)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCameraViewTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCameraViewVTable;
  if ((d1 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}
