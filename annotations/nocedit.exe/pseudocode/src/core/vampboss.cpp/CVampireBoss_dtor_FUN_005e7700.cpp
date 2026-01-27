// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
// Address: 005e7700
// Address Range: [[005e7700, 005e7808]]
// Convention: __cdecl
// Signature: CVampireBoss * core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9, uint d10, uint d11, uint d12, uint d13)

#include "nocturne.h"

CVampireBoss * __cdecl
core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700
          (CVampireBoss *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9,uint d10,uint d11,uint d12,uint d13)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CVampireBoss *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CVampireBossTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)this_ptr->unk2);
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  iVar1 = core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x22b4),0,unaff_EBX,unaff_retaddr,
                      (uint)this_ptr);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(pCVar2[-5].model_name + 0x34));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,unaff_EBX,unaff_retaddr,
                      (uint)this_ptr);
  ptr = (CVampireBoss *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
