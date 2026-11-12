// Name: core_shotgun.cpp_CShadowsc_dtor_FUN_00546f40
// Address: 00546f40
// Address Range: [[00546f40, 00546fc4]]
// Convention: unknown
// Signature: CShadowsc * core_shotgun_cpp_CShadowsc_dtor_FUN_00546f40(CShadowsc *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadowsc * core_shotgun_cpp_CShadowsc_dtor_FUN_00546f40(CShadowsc *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CShadowsc *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CShadowscTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_00410370((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  pCVar4 = (CShadowsc *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005a30c4(pCVar4);
  return pCVar4;
}
