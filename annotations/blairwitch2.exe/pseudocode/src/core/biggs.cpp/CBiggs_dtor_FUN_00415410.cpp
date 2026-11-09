// Name: core_biggs.cpp_CBiggs_dtor_FUN_00415410
// Address: 00415410
// Address Range: [[00415410, 004154b4]]
// Convention: unknown
// Signature: CBiggs * core_biggs_cpp_CBiggs_dtor_FUN_00415410(CBiggs *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBiggs * core_biggs_cpp_CBiggs_dtor_FUN_00415410(CBiggs *this_ptr,uint flags)

{
  CMorph *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CBiggs *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBiggsTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80((CMorph *)&this_ptr->field_0x10c7c,0);
  iVar2 = unkafter_armour_cpp_FUN_0040f2b0(pCVar1 + -0xd25c,0);
  iVar2 = unkaddr_0059d350_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar3 = core_cloth_cpp_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3 + -0x2a58),0);
  pCVar5 = (CBiggs *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar4[-1].field_0x2000,1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
