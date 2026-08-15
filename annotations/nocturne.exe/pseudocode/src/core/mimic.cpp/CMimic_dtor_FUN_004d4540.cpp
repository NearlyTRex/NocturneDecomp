// Name: core_mimic.cpp_CMimic_dtor_FUN_004d4540
// Address: 004d4540
// Address Range: [[004d4540, 004d4648]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_004d4540(CMimic *this_ptr,uint flags)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_004d4540(CMimic *this_ptr,uint flags)

{
  CDemonActor *this_ptr_00;
  CMorph *pCVar1;
  CCloth *pCVar2;
  CFlame *pCVar3;
  SFire *pSVar4;
  CVector3f *pCVar5;
  CClothList *pCVar6;
  CDeformableModelInstance *pCVar7;
  CMimic *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMimicTypeInfo_005a0740);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->morph_target_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CMimicVTable._ub;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->dtor)(this_ptr_00,2);
  }
  this_ptr->morph_target_actor = (CDemonActor *)0x0;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004e0070(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)pCVar1[-0x4e].models[1].textures[0xc].textures[2].texture_name,0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor50_FUN_0040fe50
                     ((CFlame *)(pCVar2[-1].vertices[0x2ce].bone_index + 2),0);
  pSVar4 = core_armour_cpp_SFire_arrdtor50_FUN_0040fe30
                     ((SFire *)(pCVar3[-2].base.create_event + 0x10),0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor15_FUN_0040fe10
                     ((CVector3f *)&pSVar4[-0x16].bone_index,0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor15_FUN_0040fe10(pCVar5 + -0xf,0);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar5 + -0x26),0);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar6[-0x18].filenames[2] + 0x10),0);
  ptr = (CMimic *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)(pCVar7[-1].part_data.visibility_flags + 9),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
