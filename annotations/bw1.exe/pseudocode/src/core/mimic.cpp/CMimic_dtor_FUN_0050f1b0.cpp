// Name: core_mimic.cpp_CMimic_dtor_FUN_0050f1b0
// Address: 0050f1b0
// Address Range: [[0050f1b0, 0050f288]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0050f1b0(CMimic *this_ptr,uint flags)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0050f1b0(CMimic *this_ptr,uint flags)

{
  CDemonActor *this_ptr_00;
  CMorph *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CMimic *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMimicTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->morph_target_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CMimicVTable._ub;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->dtor)(this_ptr_00,2);
  }
  this_ptr->morph_target_actor = (CDemonActor *)0x0;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0(&this_ptr->morph,0);
  iVar2 = core_cloth_cpp_FUN_0043e620(pCVar1[-0x4e].models[1].textures[0xc].texture_name + 0x30,0);
  iVar2 = core_armour_cpp_FUN_0040ee30(iVar2 + -0x8d54,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar2 + -0x93c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[0] + 0x10),0);
  pCVar5 = (CMimic *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005c0344(pCVar5);
  return pCVar5;
}
