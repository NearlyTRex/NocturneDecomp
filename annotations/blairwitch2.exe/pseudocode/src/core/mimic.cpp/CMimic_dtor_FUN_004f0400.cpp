// Name: core_mimic.cpp_CMimic_dtor_FUN_004f0400
// Address: 004f0400
// Address Range: [[004f0400, 004f04e8]]
// Convention: unknown
// Signature: CMimic * core_mimic_cpp_CMimic_dtor_FUN_004f0400(CMimic *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMimic * core_mimic_cpp_CMimic_dtor_FUN_004f0400(CMimic *this_ptr,uint flags)

{
  CDemonActor *this_ptr_00;
  CMorph *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CMimic *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMimicTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->morph_target_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CMimicVTable._ub;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->dtor)(this_ptr_00,2);
  }
  this_ptr->morph_target_actor = (CDemonActor *)0x0;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  iVar2 = core_necklace_cpp_FUN_005ade00
                    (pCVar1[-0x4e].models[1].textures[0xc].texture_name + 0x30,0);
  iVar2 = core_armour_cpp_FUN_0040f2b0(iVar2 + -0xd1a0,0);
  iVar2 = core_muzzle_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CMimic *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
