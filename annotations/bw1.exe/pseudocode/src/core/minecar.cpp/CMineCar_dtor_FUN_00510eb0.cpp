// Name: core_minecar.cpp_CMineCar_dtor_FUN_00510eb0
// Address: 00510eb0
// Address Range: [[00510eb0, 00510f14]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_00510eb0(CMineCar *this_ptr,uint flags)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_00510eb0(CMineCar *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CMineCar *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMineCarTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30(&(this_ptr->base).course,0);
  pCVar2 = (CMineCar *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
