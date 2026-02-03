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
  CDeformableModelInstance *pCVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  int iVar5;
  CVampireBoss *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)this_ptr->unk2);
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(extraout_EAX + -0x22b4),0);
  pCVar2 = core_armour_cpp_freeFlames_FUN_00412720((CFlame *)(pCVar1[-5].model_name + 0x34));
  pSVar3 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar2[-2].base.create_event + 0x20));
  pCVar4 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar3[-0x16].unk + 4));
  core_armour_cpp_freeVectors_FUN_004126e0(pCVar4 + -0xf);
  iVar5 = core_cloth_cpp_FUN_0043bf80();
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar5 + -0x293c),0);
  ptr = (CVampireBoss *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar1[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
