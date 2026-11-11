// Name: core_searpart.cpp_CSearchParty_dtor_FUN_005a8e80
// Address: 005a8e80
// Address Range: [[005a8e80, 005a8f14]]
// Convention: unknown
// Signature: CSearchParty * core_searpart_cpp_CSearchParty_dtor_FUN_005a8e80(CSearchParty *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSearchParty * core_searpart_cpp_CSearchParty_dtor_FUN_005a8e80(CSearchParty *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CDemonActor *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSearchPartyTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040f2b0((this_ptr->base).base.base.base.flames,0);
  iVar1 = unkaddr_0059d350_cpp_FUN_0059df70(iVar1 + -0x9c8,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar1 + -0x34c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[6] + 0x10),0);
  pCVar4 = core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar3[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return (CSearchParty *)pCVar4;
  }
  FUN_005b7fdc(pCVar4);
  return (CSearchParty *)pCVar4;
}
