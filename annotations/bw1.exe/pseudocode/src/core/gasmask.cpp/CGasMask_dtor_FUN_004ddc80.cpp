// Name: core_gasmask.cpp_CGasMask_dtor_FUN_004ddc80
// Address: 004ddc80
// Address Range: [[004ddc80, 004ddccd]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004ddc80(CGasMask *this_ptr,uint flags)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004ddc80(CGasMask *this_ptr,uint flags)

{
  CGasMask *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CGasMaskTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CGasMask *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
