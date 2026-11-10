// Name: core_armour.cpp_CArmour_dtor_FUN_0040ecc0
// Address: 0040ecc0
// Address Range: [[0040ecc0, 0040ed44]]
// Convention: unknown
// Signature: CArmour * core_armour_cpp_CArmour_dtor_FUN_0040ecc0(CArmour *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CArmour * core_armour_cpp_CArmour_dtor_FUN_0040ecc0(CArmour *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CArmour *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CArmourTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040ee30((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  pCVar4 = (CArmour *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
