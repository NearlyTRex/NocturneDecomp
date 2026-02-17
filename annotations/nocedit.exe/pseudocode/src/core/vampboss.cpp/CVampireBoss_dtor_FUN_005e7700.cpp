// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
// Address: 005e7700
// Address Range: [[005e7700, 005e7808]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CCloth *pCVar2;
  CDeformableModelInstance *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CClothList *pCVar7;
  CVampireBoss *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)&pCVar1[-0x55].rescale_enabled,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)&pCVar2[-2].last_euler.y,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)&pCVar2[-2].last_euler.y,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)
                      &pCVar2[-1].collide_bones[0x13].world_matrix.m[1].x,0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_00412720((CFlame *)(pCVar3[-5].model_name + 0x34),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar4[-2].base.create_event + 0x20),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar6 + -0x26),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  ptr = (CVampireBoss *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
