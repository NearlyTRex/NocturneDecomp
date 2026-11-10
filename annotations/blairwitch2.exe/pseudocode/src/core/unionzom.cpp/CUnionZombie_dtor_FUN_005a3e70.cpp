// Name: core_unionzom.cpp_CUnionZombie_dtor_FUN_005a3e70
// Address: 005a3e70
// Address Range: [[005a3e70, 005a3f30]]
// Convention: unknown
// Signature: CUnionZombie * core_unionzom_cpp_CUnionZombie_dtor_FUN_005a3e70(CUnionZombie *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CUnionZombie * core_unionzom_cpp_CUnionZombie_dtor_FUN_005a3e70(CUnionZombie *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CUnionZombie *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CUnionZombieTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(CUnionZombie_full_vtable **)&this_ptr->field_0x2b0 = &g_CUnionZombieVTable;
  unkaddr_005a7eb0_cpp_FUN_005a8100(&this_ptr->field_0x264,0);
  unkafter_superopt_cpp_FUN_005a8220(&this_ptr->field_0x264);
  iVar1 = core_armour_cpp_FUN_0040f2b0(&this_ptr->field_0x3a20,0);
  iVar1 = unkaddr_0059d350_cpp_FUN_0059df70(iVar1 + -0x9c8,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar1 + -0x34c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[6] + 0x10),0);
  pCVar4 = (CUnionZombie *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar3[-1].field_0x2000,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005b7fdc(pCVar4);
  return pCVar4;
}
