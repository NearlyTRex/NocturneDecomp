// Name: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_00495430
// Address: 00495430
// Address Range: [[00495430, 00495494]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_00495430(CFrankenstienMachine *this_ptr,uint flags)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_00495430(CFrankenstienMachine *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CFrankenstienMachine *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete
                       (this_ptr,&g_CFrankenstienMachineTypeInfo_0059dc60);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_0043b5f0(&this_ptr->course,0);
  ptr = (CFrankenstienMachine *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-0x40].loop,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
