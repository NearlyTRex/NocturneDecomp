// Name: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
// Address: 005c7820
// Address Range: [[005c7820, 005c7908]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus *this_ptr,uint flags)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CSuccubus *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSuccubusTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330((CMorph *)(this_ptr->unk + 0x2480),0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80
                     ((CClothList *)(pCVar1[-1].models[1].textures + 0xe),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar2[-0x15].cloths + 9),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_00412720((CFlame *)(pCVar3[-5].model_name + 0x34),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar4[-2].base.create_event + 0x20),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar6 + -0xf,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar6 + -0x26),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar2[-0x18].filenames[2] + 0x10),0);
  ptr = (CSuccubus *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
