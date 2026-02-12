// Name: core_camview.cpp_CCameraView_ctor_FUN_00427ce0
// Address: 00427ce0
// Address Range: [[00427ce0, 00427cf8]]
// Convention: __cdecl
// Signature: CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00427ce0(CCameraView *this_ptr)

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00427ce0(CCameraView *this_ptr)

{
  this_ptr->projection_scale = 28.0;
  this_ptr->unk1 = 256.0;
  this_ptr->vtable = &g_CCameraViewVTable;
  return this_ptr;
}
