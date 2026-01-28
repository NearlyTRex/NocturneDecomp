// Name: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004d28a0
// Address: 004d28a0
// Address Range: [[004d28a0, 004d2904]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004d28a0 (CFrankenstienMachine *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CFrankenstienMachine * __cdecl
core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004d28a0
          (CFrankenstienMachine *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CFrankenstienMachine *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFrankenstienMachineTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)(this_ptr->unk + 0x1a0));
  ptr = (CFrankenstienMachine *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(pCVar1 + -0x40),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
