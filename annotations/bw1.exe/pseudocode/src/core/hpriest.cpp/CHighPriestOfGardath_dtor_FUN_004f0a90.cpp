// Name: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004f0a90
// Address: 004f0a90
// Address Range: [[004f0a90, 004f0b24]]
// Convention: unknown
// Signature: CHighPriestOfGardath * core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004f0a90(CHighPriestOfGardath *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHighPriestOfGardath * core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004f0a90(CHighPriestOfGardath *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CHighPriestOfGardath *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHighPriestOfGardathTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00533060((CPathMap *)&this_ptr->field_0xc1d0,0);
  iVar2 = unkafter_armour_cpp_FUN_0040ee30(&pCVar1[-1].field_0xace8,0);
  pCVar3 = core_cloth_cpp_FUN_00441ca0((CClothList *)(iVar2 + -0x93c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar3 + -0x2b48),0);
  pCVar5 = (CHighPriestOfGardath *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar4[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005c0344(pCVar5);
  return pCVar5;
}
