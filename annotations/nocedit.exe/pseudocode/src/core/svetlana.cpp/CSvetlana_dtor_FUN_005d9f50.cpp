// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50
// Address: 005d9f50
// Address Range: [[005d9f50, 005d9fc4]]
// Convention: __cdecl
// Signature: CSvetlana * core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana * this_ptr, uint d1, uint d2, uint d3, uint d4)

#include "nocturne.h"

CSvetlana * __cdecl
core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int iVar1;
  CSvetlana *ptr;
  void *ptr_00;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSvetlanaTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  iVar1 = core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_hero_cpp_CHero_dtor_FUN_004f2470
            ((CHero *)(iVar1 + -0x1fbdc),1,(uint)this_ptr,d1,d2,d3,d4,in_stack_00000018,
             in_stack_0000001c);
  if ((d4 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
