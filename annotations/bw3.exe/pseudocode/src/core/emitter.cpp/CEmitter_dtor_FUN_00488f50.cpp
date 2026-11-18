// Name: core_emitter.cpp_CEmitter_dtor_FUN_00488f50
// Address: 00488f50
// Address Range: [[00488f50, 00488f9d]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00488f50(CEmitter *this_ptr,uint flags)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00488f50(CEmitter *this_ptr,uint flags)

{
  CEmitter *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CEmitterTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CEmitter *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
