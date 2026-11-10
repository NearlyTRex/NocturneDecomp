// Name: core_conveyor.cpp_CConveyor_dtor_FUN_00447b70
// Address: 00447b70
// Address Range: [[00447b70, 00447bd4]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_00447b70(CConveyor *this_ptr,uint flags)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_00447b70(CConveyor *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CConveyor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CConveyorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30(&(this_ptr->base).course,0);
  pCVar2 = (CConveyor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
