// Name: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
// Address: 005c7820
// Address Range: [[005c7820, 005c7908]]
// Convention: __cdecl
// Signature: CSuccubus * core_succubus.cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9, uint d10, uint d11)

#include "nocturne.h"

CSuccubus * __cdecl
core_succubus_cpp_CSuccubus_dtor_FUN_005c7820
          (CSuccubus *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9,uint d10,uint d11)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CSuccubus *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSuccubusTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)(this_ptr->field1_0xbeb4 + 0x2488));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x22b4),0,(uint)this_ptr,d1,d2);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(pCVar2[-5].model_name + 0x34));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d6,d7,d8);
  ptr = (CSuccubus *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d11 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
