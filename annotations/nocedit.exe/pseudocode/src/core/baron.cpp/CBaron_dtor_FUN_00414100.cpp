// Name: core_baron.cpp_CBaron_dtor_FUN_00414100
// Address: 00414100
// Address Range: [[00414100, 0041414d]]
// Convention: __cdecl
// Signature: CBaron * core_baron.cpp_CBaron_dtor_FUN_00414100(CBaron * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00414100(CBaron *this_ptr,uint d1,uint d2)

{
  CBaron *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBaronTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_hero_cpp_CHero_dtor_FUN_004f2470
            (&this_ptr->field0_0x0,1,unaff_EBX,unaff_retaddr,(uint)this_ptr,d1,d2,in_stack_00000010,
             in_stack_00000014);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
