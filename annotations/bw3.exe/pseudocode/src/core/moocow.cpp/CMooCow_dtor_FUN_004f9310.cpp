// Name: core_moocow.cpp_CMooCow_dtor_FUN_004f9310
// Address: 004f9310
// Address Range: [[004f9310, 004f9394]]
// Convention: __cdecl
// Signature: CMooCow * __cdecl core_moocow_cpp_CMooCow_dtor_FUN_004f9310(CMooCow *this_ptr,uint flags)

#include "nocturne.h"

CMooCow * __cdecl core_moocow_cpp_CMooCow_dtor_FUN_004f9310(CMooCow *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CMooCow *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMooCowTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_00410370((this_ptr->base).flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  pCVar4 = (CMooCow *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005a30c4(pCVar4);
  return pCVar4;
}
