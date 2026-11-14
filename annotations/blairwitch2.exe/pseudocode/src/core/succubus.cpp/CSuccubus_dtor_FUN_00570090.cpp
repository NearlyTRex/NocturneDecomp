// Name: core_succubus.cpp_CSuccubus_dtor_FUN_00570090
// Address: 00570090
// Address Range: [[00570090, 00570158]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_00570090(CSuccubus *this_ptr,uint flags)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_00570090(CSuccubus *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  int iVar4;
  CSuccubus *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSuccubusTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)(pCVar1[-1].models[1].textures + 0xe),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar2[-0x15].cloths + 9),0);
  iVar4 = core_armour_cpp_FUN_0040f2b0(pCVar3[-7].part_data.texture_set_indices + 0x17,0);
  iVar4 = core_muzzle_cpp_FUN_0059df70(iVar4 + -0x9c8,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar4 + -0x34c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CSuccubus *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar3[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
