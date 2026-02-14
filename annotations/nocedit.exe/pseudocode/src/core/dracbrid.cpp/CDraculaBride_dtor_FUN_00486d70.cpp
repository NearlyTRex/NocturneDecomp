// Name: core_dracbrid.cpp_CDraculaBride_dtor_FUN_00486d70
// Address: 00486d70
// Address Range: [[00486d70, 00486e28]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_dtor_FUN_00486d70(CDraculaBride *this_ptr,uint flags)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_dtor_FUN_00486d70(CDraculaBride *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFire *pSVar2;
  CVector3f *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CDraculaBride *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDraculaBrideTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor_FUN_00412720((this_ptr->base).base.flames,0);
  pSVar2 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar1[-2].base.create_event + 0x20),0);
  pCVar3 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)(pSVar2[-0x16].unk + 4),0);
  pCVar3 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar3 + -0xf,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar3 + -0x26),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar4[-0x18].filenames[2] + 0x10),0);
  ptr = (CDraculaBride *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar5[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
