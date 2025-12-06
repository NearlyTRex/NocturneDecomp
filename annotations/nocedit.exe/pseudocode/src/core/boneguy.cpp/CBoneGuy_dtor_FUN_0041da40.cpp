// Name: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
// Address: 0041da40
// Address Range: [[0041da40, 0041db08]]
// Convention: __cdecl
// Signature: CBoneGuy * core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)

#include "nocturne.h"

CBoneGuy * __cdecl
core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40
          (CBoneGuy *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBoneGuy *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBoneGuyTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_boneguy_cpp_FUN_0041db30((SBoneGuyBox **)&this_ptr->box_list_pos);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(iVar1 + -0x8b70));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d4,d5,d6);
  ptr = (CBoneGuy *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
