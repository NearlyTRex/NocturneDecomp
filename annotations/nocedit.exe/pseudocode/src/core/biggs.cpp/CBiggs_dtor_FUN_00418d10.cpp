// Name: core_biggs.cpp_CBiggs_dtor_FUN_00418d10
// Address: 00418d10
// Address Range: [[00418d10, 00418dd8]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs *this_ptr,uint flags)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CBiggs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBiggsTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor_FUN_00412720
                     ((CFlame *)(pCVar1[-0xc].models[0].textures[0x12].unknown + 0xc),0);
  pSVar3 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar2[-2].base.create_event + 0x20),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)(pSVar3[-0x16].unk + 4),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar4 + -0xf,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar4 + -0x26),0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar5[-0x18].filenames[2] + 0x10),0);
  ptr = (CBiggs *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar6[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
