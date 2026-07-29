// Name: core_stairs.cpp_CFlies_dtor_FUN_00534c10
// Address: 00534c10
// Address Range: [[00534c10, 00534c74]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_stairs_cpp_CFlies_dtor_FUN_00534c10(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_stairs_cpp_CFlies_dtor_FUN_00534c10(CFlies *this_ptr,uint flags)

{
  SFly *pSVar1;
  CFlies *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CStairsTypeInfo_005a2590);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pSVar1 = core_stairs_cpp_SFly_arrdtor_FUN_00534c80
                     ((SFly *)&this_ptr->flies[0].control_points[0].y,0);
  pCVar2 = (CFlies *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)pSVar1[-7].control_points,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
