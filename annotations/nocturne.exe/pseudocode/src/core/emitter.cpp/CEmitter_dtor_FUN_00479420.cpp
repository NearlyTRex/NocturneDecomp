// Name: core_emitter.cpp_CEmitter_dtor_FUN_00479420
// Address: 00479420
// Address Range: [[00479420, 0047946d]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00479420(CEmitter *this_ptr,uint flags)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00479420(CEmitter *this_ptr,uint flags)

{
  CEmitter *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CEmitterTypeInfo_0059cd70);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CEmitter *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
