// Name: core_dlight.cpp_CDemonLight_dtor_FUN_00472760
// Address: 00472760
// Address Range: [[00472760, 004727bd]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00472760(CDemonLight *this_ptr,uint flags)

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00472760(CDemonLight *this_ptr,uint flags)

{
  CDemonLight *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonLight);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.vtable = &g_CDemonLightVTable;
  core_dlight_cpp_CDemonLight_free_FUN_004728b0(this_ptr);
  ptr = (CDemonLight *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
