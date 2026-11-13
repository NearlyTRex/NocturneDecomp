// Name: core_moocow.cpp_CMooCow_dtor_FUN_00521ad0
// Address: 00521ad0
// Address Range: [[00521ad0, 00521b54]]
// Convention: __cdecl
// Signature: CMooCow * __cdecl core_moocow_cpp_CMooCow_dtor_FUN_00521ad0(CMooCow *this_ptr,uint flags)

#include "nocturne.h"

CMooCow * __cdecl core_moocow_cpp_CMooCow_dtor_FUN_00521ad0(CMooCow *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CMooCow *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMooCowTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040ee30((this_ptr->base).flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  pCVar4 = (CMooCow *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
