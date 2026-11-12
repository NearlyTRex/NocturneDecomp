// Name: core_zombie.cpp_CZombie_dtor_FUN_00599d70
// Address: 00599d70
// Address Range: [[00599d70, 00599e04]]
// Convention: unknown
// Signature: CZombie * core_zombie_cpp_CZombie_dtor_FUN_00599d70(CZombie *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombie * core_zombie_cpp_CZombie_dtor_FUN_00599d70(CZombie *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CZombie *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CZombieTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040f2b0((this_ptr->base).base.flames,0);
  iVar1 = core_muzzle_cpp_FUN_0059df70(iVar1 + -0x9c8,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar1 + -0x34c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[6] + 0x10),0);
  pCVar4 = (CZombie *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar3[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005b7fdc(pCVar4);
  return pCVar4;
}
