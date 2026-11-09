// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005a7420
// Address: 005a7420
// Address Range: [[005a7420, 005a74f8]]
// Convention: unknown
// Signature: CVampireBoss * core_vampboss_cpp_CVampireBoss_dtor_FUN_005a7420(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CVampireBoss * core_vampboss_cpp_CVampireBoss_dtor_FUN_005a7420(CVampireBoss *this_ptr,uint flags)

{
  CMorph *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CClothList *pCVar4;
  CVampireBoss *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0((CMorph *)&this_ptr->field_0xbe7a0,0);
  iVar2 = core_cloth_cpp_FUN_0043e620(pCVar1 + -0x3ab34,0);
  iVar2 = core_cloth_cpp_FUN_0043e620(iVar2 + -0x3ab30,0);
  iVar2 = core_cloth_cpp_FUN_0043e620(iVar2 + -0x3ab30,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(iVar2 + -0x23a4),0);
  iVar2 = unkafter_armour_cpp_FUN_0040ee30(&pCVar3[-4].field_0x204,0);
  pCVar4 = core_cloth_cpp_FUN_00441ca0((CClothList *)(iVar2 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar4 + -0x2b48),0);
  pCVar5 = (CVampireBoss *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005c0344(pCVar5);
  return pCVar5;
}
