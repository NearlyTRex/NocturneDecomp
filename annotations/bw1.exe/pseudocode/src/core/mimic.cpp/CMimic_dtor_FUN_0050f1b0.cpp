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
  CCloth *pCVar2;
  CFlame *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CMimic *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMimicTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->morph_target_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CMimicVTable._ub;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->dtor)(this_ptr_00,2);
  }
  this_ptr->morph_target_actor = (CDemonActor *)0x0;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_0043e620
                     ((CCloth *)(pCVar1[-0x4e].models[1].textures[0xc].texture_name + 0x30),0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor50_FUN_0040ee30
                     ((CFlame *)pCVar2[-1].vertices[0x2cb].bone_weights,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)&pCVar3[-4].base.vtable,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[0] + 0x10),0);
  ptr = (CMimic *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730
                  ((CDemonActor *)(pCVar5[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
