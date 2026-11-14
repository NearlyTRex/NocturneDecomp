// Name: core_minecar.cpp_CMineCar_dtor_FUN_004f2120
// Address: 004f2120
// Address Range: [[004f2120, 004f2184]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_004f2120(CMineCar *this_ptr,uint flags)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_004f2120(CMineCar *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CMineCar *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMineCarTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00438a70(&(this_ptr->base).course,0);
  pCVar2 = (CMineCar *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar1[-0x5f].loop,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
