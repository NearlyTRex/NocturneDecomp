// Name: core_werewolf.cpp_CWerewolf_dtor_FUN_005b1a40
// Address: 005b1a40
// Address Range: [[005b1a40, 005b1ac4]]
// Convention: unknown
// Signature: CWerewolf * core_werewolf_cpp_CWerewolf_dtor_FUN_005b1a40(CWerewolf *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CWerewolf * core_werewolf_cpp_CWerewolf_dtor_FUN_005b1a40(CWerewolf *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CWerewolf *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CWerewolfTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = unkafter_armour_cpp_FUN_0040ee30(&this_ptr->field_0x35dc,0);
  pCVar2 = core_cloth_cpp_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2 + -0x2b48),0);
  pCVar4 = (CWerewolf *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
