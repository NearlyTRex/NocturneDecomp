// Name: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
// Address: 0041da40
// Address Range: [[0041da40, 0041db08]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy *this_ptr,uint flags)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy *this_ptr,uint flags)

{
  SBoneGuyBox *pSVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CBoneGuy *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBoneGuyTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_boneguy_cpp_SBoneGuyBox_arrdtor_FUN_0041db30(this_ptr->boxes,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor_FUN_00412720((CFlame *)&pSVar1[-0x1f0].orient.y,0);
  pSVar3 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar2[-2].base.create_event + 0x20),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)&pSVar3[-0x16].bone_index,0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar4 + -0xf,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar4 + -0x26),0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar5[-0x18].filenames[2] + 0x10),0);
  ptr = (CBoneGuy *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar6[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
