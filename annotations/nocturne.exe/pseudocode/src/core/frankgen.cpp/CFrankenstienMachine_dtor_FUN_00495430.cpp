// Name: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_00495430
// Address: 00495430
// Address Range: [[00495430, 00495494]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_00495430(CFrankenstienMachine *this_ptr,uint flags)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_00495430(CFrankenstienMachine *this_ptr,uint flags)

{
  CDemonTriangle *pCVar1;
  CFrankenstienMachine *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFrankenstienMachineTypeInfo_0059dc60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
                     ((CDemonTriangle *)&this_ptr->course,0);
  pCVar2 = (CFrankenstienMachine *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-0xe].vertex3,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
