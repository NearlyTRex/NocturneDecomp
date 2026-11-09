// Name: core_conveyor.cpp_CPlatform_dtor_FUN_00447be0
// Address: 00447be0
// Address Range: [[00447be0, 00447c44]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00447be0(CPlatform *this_ptr,uint flags)

#include "nocturne.h"

CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00447be0(CPlatform *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CPlatform *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPlatformTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30((CCourse *)&this_ptr->field_0x310,0);
  pCVar2 = (CPlatform *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x310),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
