// Name: core_spike.cpp_CSpike_dtor_FUN_005612c0
// Address: 005612c0
// Address Range: [[005612c0, 0056130d]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005612c0(CSpike *this_ptr,uint flags)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005612c0(CSpike *this_ptr,uint flags)

{
  CSpike *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSpikeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CSpike *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
