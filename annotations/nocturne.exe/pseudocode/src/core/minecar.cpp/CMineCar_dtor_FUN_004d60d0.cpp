// Name: core_minecar.cpp_CMineCar_dtor_FUN_004d60d0
// Address: 004d60d0
// Address Range: [[004d60d0, 004d6134]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_004d60d0(CMineCar *this_ptr,uint flags)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_004d60d0(CMineCar *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CMineCar *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMineCarTypeInfo_005a0860);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_0043b5f0(&(this_ptr->base).course,0);
  pCVar2 = (CMineCar *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-0x41].frames,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
