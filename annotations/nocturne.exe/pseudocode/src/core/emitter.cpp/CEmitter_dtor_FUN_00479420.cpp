// Name: core_emitter.cpp_CEmitter_dtor_FUN_00479420
// Address: 00479420
// Address Range: [[00479420, 0047946d]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00479420(CEmitter *this_ptr,uint flags)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00479420(CEmitter *this_ptr,uint flags)

{
  CEmitter *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CEmitterTypeInfo_0059cd70);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CEmitter *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
