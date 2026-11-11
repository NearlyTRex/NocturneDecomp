// Name: core_conveyor.cpp_CConveyor_dtor_FUN_004388b0
// Address: 004388b0
// Address Range: [[004388b0, 00438914]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_004388b0(CConveyor *this_ptr,uint flags)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_004388b0(CConveyor *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CConveyor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CConveyorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00438a70(&(this_ptr->base).course,0);
  pCVar2 = (CConveyor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar1[-0x5f].loop,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
