// Name: core_sentinel.cpp_CSentinel_dtor_FUN_00532520
// Address: 00532520
// Address Range: [[00532520, 005325a4]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_dtor_FUN_00532520(CSentinel *this_ptr,uint flags)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_CSentinel_dtor_FUN_00532520(CSentinel *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CSentinel *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSentinelTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_00410370((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  pCVar4 = (CSentinel *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005a30c4(pCVar4);
  return pCVar4;
}
