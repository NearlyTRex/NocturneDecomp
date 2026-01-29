// Name: core_gabriela.cpp_freeMaybe_FUN_004d7660
// Address: 004d7660
// Address Range: [[004d7660, 004d76c4]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_freeMaybe_FUN_004d7660(CGabriella *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CGabriella * __cdecl
core_gabriela_cpp_freeMaybe_FUN_004d7660(CGabriella *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CGabriella *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGabriellaTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_hero_cpp_CHero_dtor_FUN_004f2470
            ((CHero *)(iVar1 + -0x1fc14),1,unaff_EBX,unaff_retaddr,(uint)this_ptr,d1,d2,d3,
             in_stack_00000014);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
