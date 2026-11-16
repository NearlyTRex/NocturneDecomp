// Name: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004c6000
// Address: 004c6000
// Address Range: [[004c6000, 004c6064]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004c6000(CFrankenstienMachine *this_ptr,uint flags)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004c6000(CFrankenstienMachine *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CFrankenstienMachine *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFrankenstienMachineTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30(&this_ptr->course,0);
  ptr = (CFrankenstienMachine *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x40),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
