// Name: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004ad050
// Address: 004ad050
// Address Range: [[004ad050, 004ad0b4]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004ad050(CFrankenstienMachine *this_ptr,uint flags)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004ad050(CFrankenstienMachine *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CFrankenstienMachine *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFrankenstienMachineTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00438a70(&this_ptr->course,0);
  pCVar2 = (CFrankenstienMachine *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(pCVar1 + -0x5d),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
