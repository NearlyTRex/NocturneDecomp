// Name: core_minecar.cpp_CMineCar_dtor_FUN_00520f40
// Address: 00520f40
// Address Range: [[00520f40, 00520fa4]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_00520f40(CMineCar *this_ptr,uint flags)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_00520f40(CMineCar *this_ptr,uint flags)

{
  CMineCar_ptr_784 pCVar1;
  CMineCar *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMineCarTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0(&(this_ptr->base).course,0);
  ptr = (CMineCar *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar1),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
