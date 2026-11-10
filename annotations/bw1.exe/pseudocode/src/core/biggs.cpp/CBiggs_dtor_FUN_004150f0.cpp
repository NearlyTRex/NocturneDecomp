// Name: core_biggs.cpp_CBiggs_dtor_FUN_004150f0
// Address: 004150f0
// Address Range: [[004150f0, 00415184]]
// Convention: unknown
// Signature: CBiggs * core_biggs_cpp_CBiggs_dtor_FUN_004150f0(CBiggs *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBiggs * core_biggs_cpp_CBiggs_dtor_FUN_004150f0(CBiggs *this_ptr,uint flags)

{
  CMorph *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CBiggs *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBiggsTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0((CMorph *)&this_ptr->field_0xc3ec,0);
  iVar2 = core_armour_cpp_FUN_0040ee30(pCVar1 + -0x8e10,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar2 + -0x93c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[0] + 0x10),0);
  pCVar5 = (CBiggs *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar4[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005c0344(pCVar5);
  return pCVar5;
}
