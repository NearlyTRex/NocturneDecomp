// Name: core_biggs.cpp_CBiggs_dtor_FUN_00418d10
// Address: 00418d10
// Address Range: [[00418d10, 00418dd8]]
// Convention: __cdecl
// Signature: CBiggs * core_biggs.cpp_CBiggs_dtor_FUN_00418d10(CBiggs * this_ptr, uint d1)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs *this_ptr,uint d1)

{
  int extraout_EAX;
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBiggs *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBiggsTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)this_ptr->field4_0xc040);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(extraout_EAX + -0x8c74));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,unaff_EBX,unaff_retaddr,
                      (uint)this_ptr);
  ptr = (CBiggs *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
