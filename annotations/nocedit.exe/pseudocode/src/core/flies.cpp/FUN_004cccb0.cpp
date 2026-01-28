// Name: core_flies.cpp_FUN_004cccb0
// Address: 004cccb0
// Address Range: [[004cccb0, 004ccd14]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_FUN_004cccb0(CFlies *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_FUN_004cccb0(CFlies *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CFlies *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFliesTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_flies_cpp_FUN_004ccd60();
  ptr = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x168),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
