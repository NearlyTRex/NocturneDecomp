// Name: core_spike.cpp_CSpike_dtor_FUN_005b9050
// Address: 005b9050
// Address Range: [[005b9050, 005b909d]]
// Convention: __cdecl
// Signature: CSpike * core_spike.cpp_CSpike_dtor_FUN_005b9050(CSpike * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005b9050(CSpike *this_ptr,uint d1,uint d2)

{
  CSpike *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSpikeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CSpike *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
