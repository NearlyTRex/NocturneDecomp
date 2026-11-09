// Name: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004d4880
// Address: 004d4880
// Address Range: [[004d4880, 004d4924]]
// Convention: unknown
// Signature: CHighPriestOfGardath * core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004d4880(CHighPriestOfGardath *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHighPriestOfGardath * core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004d4880(CHighPriestOfGardath *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CHighPriestOfGardath *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHighPriestOfGardathTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00511d10((CPathMap *)&this_ptr->field_0x10a60,0);
  iVar2 = unkafter_armour_cpp_FUN_0040f2b0(&pCVar1[-1].field_0x689c,0);
  iVar2 = unkaddr_0059d350_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar3 = core_cloth_cpp_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3 + -0x2a58),0);
  pCVar5 = (CHighPriestOfGardath *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar4[-1].field_0x2000,1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
