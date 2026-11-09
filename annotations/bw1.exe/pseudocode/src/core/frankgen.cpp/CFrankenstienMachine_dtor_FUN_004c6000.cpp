// Name: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004c6000
// Address: 004c6000
// Address Range: [[004c6000, 004c6064]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004c6000(CFrankenstienMachine *this_ptr,uint flags)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004c6000(CFrankenstienMachine *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CFrankenstienMachine *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFrankenstienMachineTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30((CCourse *)&this_ptr->field_0x300,0);
  pCVar2 = (CFrankenstienMachine *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x300),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
