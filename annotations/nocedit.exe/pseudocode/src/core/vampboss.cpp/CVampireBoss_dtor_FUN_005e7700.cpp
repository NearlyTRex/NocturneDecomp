// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
// Address: 005e7700
// Address Range: [[005e7700, 005e7808]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

CVampireBoss * __cdecl
core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss *this_ptr,uint flags)

{
  int extraout_EAX;
  CCloth *pCVar1;
  CDeformableModelInstance *pCVar2;
  CFlame *pCVar3;
  SFire *pSVar4;
  CVector3f *pCVar5;
  CClothList *pCVar6;
  CVampireBoss *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)this_ptr->unk3);
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)(extraout_EAX + -0x3fe74));
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)&pCVar1[-2].last_euler.y);
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00438c00((CCloth *)&pCVar1[-2].last_euler.y);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)
                      &pCVar1[-1].collide_bones[0x13].world_matrix.m[1].x,0);
  pCVar3 = core_armour_cpp_freeFlames_FUN_00412720((CFlame *)(pCVar2[-5].model_name + 0x34));
  pSVar4 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar3[-2].base.create_event + 0x20));
  pCVar5 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar4[-0x16].unk + 4));
  pCVar5 = core_armour_cpp_freeVectors_FUN_004126e0(pCVar5 + -0xf);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar5 + -0x26));
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar6[-0x18].filenames[2] + 0x10),0);
  ptr = (CVampireBoss *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
