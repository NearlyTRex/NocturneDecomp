// Name: core_tvbat.cpp_CTVBat_dtor_FUN_005a5080
// Address: 005a5080
// Address Range: [[005a5080, 005a5104]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_CTVBat_dtor_FUN_005a5080(CTVBat *this_ptr,uint flags)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_CTVBat_dtor_FUN_005a5080(CTVBat *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CTVBat *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTVBatTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040ee30((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  pCVar4 = (CTVBat *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
