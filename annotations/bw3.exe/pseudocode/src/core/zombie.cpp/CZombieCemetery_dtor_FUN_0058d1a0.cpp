// Name: core_zombie.cpp_CZombieCemetery_dtor_FUN_0058d1a0
// Address: 0058d1a0
// Address Range: [[0058d1a0, 0058d224]]
// Convention: unknown
// Signature: CZombieCemetery * core_zombie_cpp_CZombieCemetery_dtor_FUN_0058d1a0(CZombieCemetery *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCemetery * core_zombie_cpp_CZombieCemetery_dtor_FUN_0058d1a0(CZombieCemetery *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CDemonActor *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CZombieCemeteryTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = unkafter_armour_cpp_FUN_00410370((this_ptr->base).base.base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  pCVar4 = core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return (CZombieCemetery *)pCVar4;
  }
  FUN_005a30c4(pCVar4);
  return (CZombieCemetery *)pCVar4;
}
