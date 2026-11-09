// Name: core_dog.cpp_CZombieDog_dtor_FUN_004639c0
// Address: 004639c0
// Address Range: [[004639c0, 00463a44]]
// Convention: unknown
// Signature: CZombieDog * core_dog_cpp_CZombieDog_dtor_FUN_004639c0(CZombieDog *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieDog * core_dog_cpp_CZombieDog_dtor_FUN_004639c0(CZombieDog *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CZombieDog *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CZombieDogTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = unkafter_armour_cpp_FUN_00410370(&this_ptr->field_0x385c,0);
  pCVar2 = core_cloth_cpp_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2 + -0x2db0),0);
  pCVar4 = (CZombieDog *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005a30c4(pCVar4);
  return pCVar4;
}
