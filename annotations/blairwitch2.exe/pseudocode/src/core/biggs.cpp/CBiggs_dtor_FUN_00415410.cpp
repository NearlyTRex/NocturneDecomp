// Name: core_biggs.cpp_CBiggs_dtor_FUN_00415410
// Address: 00415410
// Address Range: [[00415410, 004154b4]]
// Convention: unknown
// Signature: CBiggs * core_biggs_cpp_CBiggs_dtor_FUN_00415410(CBiggs *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBiggs * core_biggs_cpp_CBiggs_dtor_FUN_00415410(CBiggs *this_ptr,uint flags)

{
  CMorph *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CBiggs *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBiggsTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  iVar2 = core_armour_cpp_FUN_0040f2b0(pCVar1[-0x12].models[1].textures[8].texture_name + 4,0);
  iVar2 = core_muzzle_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CBiggs *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
