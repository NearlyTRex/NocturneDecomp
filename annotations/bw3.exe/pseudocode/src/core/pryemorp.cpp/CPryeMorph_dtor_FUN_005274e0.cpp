// Name: core_pryemorp.cpp_CPryeMorph_dtor_FUN_005274e0
// Address: 005274e0
// Address Range: [[005274e0, 005275b2]]
// Convention: unknown
// Signature: CPryeMorph * core_pryemorp_cpp_CPryeMorph_dtor_FUN_005274e0(CPryeMorph *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPryeMorph * core_pryemorp_cpp_CPryeMorph_dtor_FUN_005274e0(CPryeMorph *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CPathMap *pCVar2;
  int iVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CPryeMorph *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPryeMorphTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar3 = *(int *)&this_ptr->field_0x20810;
  *(byte ***)&this_ptr->field_0x154 = &g_CPryeMorphVTable;
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xd0))(iVar3,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0((CMorph *)&this_ptr->field_0x20814,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_0050ad40((CPathMap *)(pCVar1 + -0x13a48),0);
  iVar3 = unkafter_armour_cpp_FUN_00410370(&pCVar2[-1].field_0xa36c,0);
  pCVar4 = core_cloth_cpp_FUN_0043f900((CClothList *)(iVar3 + -0x954),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar4 + -0x2db0),0);
  pCVar6 = (CPryeMorph *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar5[-1].field_0x224c,1);
  if ((flags & 2) != 0) {
    FUN_005a30c4(pCVar6);
    return pCVar6;
  }
  return pCVar6;
}
