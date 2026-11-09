// Name: core_beast.cpp_CBeast_dtor_FUN_00414900
// Address: 00414900
// Address Range: [[00414900, 00414984]]
// Convention: unknown
// Signature: CBeast * core_beast_cpp_CBeast_dtor_FUN_00414900(CBeast *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBeast * core_beast_cpp_CBeast_dtor_FUN_00414900(CBeast *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CBeast *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBeastTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = unkafter_armour_cpp_FUN_0040ee30(&this_ptr->field_0x35dc,0);
  pCVar2 = core_cloth_cpp_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2 + -0x2b48),0);
  pCVar4 = (CBeast *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
