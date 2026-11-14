// Name: core_spike.cpp_CSpike_dtor_FUN_00583d10
// Address: 00583d10
// Address Range: [[00583d10, 00583d5d]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_00583d10(CSpike *this_ptr,uint flags)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_00583d10(CSpike *this_ptr,uint flags)

{
  CSpike *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSpikeTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CSpike *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
