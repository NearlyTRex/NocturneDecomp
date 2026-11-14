// Name: core_succubus.cpp_CSuccubus_dtor_FUN_00592ce0
// Address: 00592ce0
// Address Range: [[00592ce0, 00592d98]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_00592ce0(CSuccubus *this_ptr,uint flags)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_00592ce0(CSuccubus *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  int iVar4;
  CSuccubus *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSuccubusTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0
                     ((CClothList *)(pCVar1[-1].models[1].textures + 0xe),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x15].filenames[4] + 0x24),0);
  iVar4 = core_armour_cpp_FUN_0040ee30(&pCVar3[-4].bone_origins[0x23].z,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar4 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  pCVar5 = (CSuccubus *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005c0344(pCVar5);
  return pCVar5;
}
