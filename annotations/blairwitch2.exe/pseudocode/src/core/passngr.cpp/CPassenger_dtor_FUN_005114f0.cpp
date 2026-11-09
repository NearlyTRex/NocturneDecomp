// Name: core_passngr.cpp_CPassenger_dtor_FUN_005114f0
// Address: 005114f0
// Address Range: [[005114f0, 005115d2]]
// Convention: unknown
// Signature: CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_005114f0(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_005114f0(CPassenger *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CPathMap *pCVar2;
  int iVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CPassenger *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPassengerTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  iVar3 = *(int *)&this_ptr->field_0x24450;
  *(byte **)&this_ptr->field_0x2b0 = &g_CPassengerVTable;
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xd8))(iVar3,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80((CMorph *)&this_ptr->field_0x24454,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_00511d10((CPathMap *)(pCVar1 + -0x139f4),0);
  iVar3 = unkafter_armour_cpp_FUN_0040f2b0(&pCVar2[-1].field_0x689c,0);
  iVar3 = unkaddr_0059d350_cpp_FUN_0059df70(iVar3 + -0x9c8,0);
  pCVar4 = core_cloth_cpp_FUN_005b1480((CClothList *)(iVar3 + -0x34c),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4 + -0x2a58),0);
  pCVar6 = (CPassenger *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar5[-1].field_0x2000,1);
  if ((flags & 2) != 0) {
    FUN_005b7fdc(pCVar6);
    return pCVar6;
  }
  return pCVar6;
}
