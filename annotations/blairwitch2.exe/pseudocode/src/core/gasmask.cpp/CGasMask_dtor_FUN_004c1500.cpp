// Name: core_gasmask.cpp_CGasMask_dtor_FUN_004c1500
// Address: 004c1500
// Address Range: [[004c1500, 004c154d]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004c1500(CGasMask *this_ptr,uint flags)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004c1500(CGasMask *this_ptr,uint flags)

{
  CGasMask *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGasMaskTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CGasMask *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
