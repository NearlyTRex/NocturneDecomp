// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50
// Address: 005d9f50
// Address Range: [[005d9f50, 005d9fc4]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana *this_ptr,uint flags)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CSvetlana *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSvetlanaTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)(this_ptr->unk + 0x3fe78));
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)&pCVar1[-2].last_euler.y);
  core_hero_cpp_CHero_dtor_FUN_004f2470((CHero *)(pCVar1[-1].vertices[0x181].rest_lengths + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
