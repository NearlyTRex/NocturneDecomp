// Name: core_spike.cpp_CSpike_dtor_FUN_00533c90
// Address: 00533c90
// Address Range: [[00533c90, 00533cdd]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_00533c90(CSpike *this_ptr,uint flags)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_00533c90(CSpike *this_ptr,uint flags)

{
  CSpike *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSpikeTypeInfo_005a2410);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CSpike *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
