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
    ptr = (void *)__vec_delete(this_ptr,&g_CCameraViewTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x3c =
       &PTR_core_camview_cpp_CCameraView_dtor_FUN_00422220_005f4024;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005b7fdc(this_ptr);
  return this_ptr;
}
