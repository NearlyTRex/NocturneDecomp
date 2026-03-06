// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60
// Address: 005ebc60
// Address Range: [[005ebc60, 005ebcc4]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor *this_ptr,uint flags)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor *this_ptr,uint flags)

{
  CWaterActor_ptr_668 pSVar1;
  CWaterActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWaterActorTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = (CWaterActor_ptr_668)
           core_wateract_cpp_SWaterVertex_arrdtor_FUN_005ebcf0(this_ptr->vertices,0);
  ptr = (CWaterActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pSVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
