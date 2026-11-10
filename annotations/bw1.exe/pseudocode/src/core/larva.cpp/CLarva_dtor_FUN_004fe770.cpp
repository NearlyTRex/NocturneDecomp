// Name: core_larva.cpp_CLarva_dtor_FUN_004fe770
// Address: 004fe770
// Address Range: [[004fe770, 004fe7f4]]
// Convention: unknown
// Signature: CLarva * core_larva_cpp_CLarva_dtor_FUN_004fe770(CLarva *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLarva * core_larva_cpp_CLarva_dtor_FUN_004fe770(CLarva *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CLarva *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLarvaTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040ee30((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  pCVar4 = (CLarva *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
