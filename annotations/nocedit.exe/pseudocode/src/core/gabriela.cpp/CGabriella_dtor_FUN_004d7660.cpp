// Name: core_gabriela.cpp_CGabriella_dtor_FUN_004d7660
// Address: 004d7660
// Address Range: [[004d7660, 004d76c4]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004d7660(CGabriella *this_ptr,uint flags)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004d7660(CGabriella *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CGabriella *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGabriellaTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00438c00(&this_ptr->coat);
  ptr = (CGabriella *)
        core_hero_cpp_CHero_dtor_FUN_004f2470
                  ((CHero *)(pCVar1[-1].vertices[0x181].connected_indices + 10),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
