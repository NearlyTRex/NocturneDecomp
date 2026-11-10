// Name: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041ab00
// Address: 0041ab00
// Address Range: [[0041ab00, 0041ab84]]
// Convention: unknown
// Signature: CBoneGuy * core_boneguy_cpp_CBoneGuy_dtor_FUN_0041ab00(CBoneGuy *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBoneGuy * core_boneguy_cpp_CBoneGuy_dtor_FUN_0041ab00(CBoneGuy *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CBoneGuy *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBoneGuyTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = unkafter_armour_cpp_FUN_00410370((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  pCVar4 = (CBoneGuy *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005a30c4(pCVar4);
  return pCVar4;
}
