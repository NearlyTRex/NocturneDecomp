// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60
// Address: 005ebc60
// Address Range: [[005ebc60, 005ebcc4]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CWaterActor * __cdecl
core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CWaterActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWaterActorTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_wateract_cpp_FUN_005ebcf0();
  ptr = (CWaterActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x29c),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
