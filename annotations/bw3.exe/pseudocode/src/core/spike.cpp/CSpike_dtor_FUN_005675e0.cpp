// Name: core_spike.cpp_CSpike_dtor_FUN_005675e0
// Address: 005675e0
// Address Range: [[005675e0, 0056762d]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005675e0(CSpike *this_ptr,uint flags)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005675e0(CSpike *this_ptr,uint flags)

{
  CSpike *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSpikeTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CSpike *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
