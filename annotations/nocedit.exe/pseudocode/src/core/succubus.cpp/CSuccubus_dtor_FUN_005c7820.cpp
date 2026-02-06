// Name: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
// Address: 005c7820
// Address Range: [[005c7820, 005c7908]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus *this_ptr,uint flags)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus *this_ptr,uint flags)

{
  int extraout_EAX;
  CClothList *pCVar1;
  CDeformableModelInstance *pCVar2;
  CFlame *pCVar3;
  SFire *pSVar4;
  CVector3f *pCVar5;
  CSuccubus *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSuccubusTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)(this_ptr->unk + 0x2488));
  pCVar1 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(extraout_EAX + -0x1cc));
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar1[-0x15].cloths + 9),0);
  pCVar3 = core_armour_cpp_freeFlames_FUN_00412720((CFlame *)(pCVar2[-5].model_name + 0x34));
  pSVar4 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar3[-2].base.create_event + 0x20));
  pCVar5 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar4[-0x16].unk + 4));
  pCVar5 = core_armour_cpp_freeVectors_FUN_004126e0(pCVar5 + -0xf);
  pCVar1 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar5 + -0x26));
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar1[-0x18].filenames[2] + 0x10),0);
  ptr = (CSuccubus *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
