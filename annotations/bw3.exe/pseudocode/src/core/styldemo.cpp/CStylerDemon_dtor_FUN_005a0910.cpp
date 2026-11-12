// Name: core_styldemo.cpp_CStylerDemon_dtor_FUN_005a0910
// Address: 005a0910
// Address Range: [[005a0910, 005a09a4]]
// Convention: unknown
// Signature: CStylerDemon * core_styldemo_cpp_CStylerDemon_dtor_FUN_005a0910(CStylerDemon *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStylerDemon * core_styldemo_cpp_CStylerDemon_dtor_FUN_005a0910(CStylerDemon *this_ptr,uint flags)

{
  CMorph *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CStylerDemon *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CStylerDemonTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0(&this_ptr->morph,0);
  iVar2 = core_armour_cpp_FUN_00410370(&pCVar1[-0xd].models[1].parts[2].start_vertex,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar2 + -0x954),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar3[-0x1b].filenames[7] + 8),0);
  pCVar5 = (CStylerDemon *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005a30c4(pCVar5);
  return pCVar5;
}
