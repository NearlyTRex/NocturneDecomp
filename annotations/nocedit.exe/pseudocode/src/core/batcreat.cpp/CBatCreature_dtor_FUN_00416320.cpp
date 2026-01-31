// Name: core_batcreat.cpp_CBatCreature_dtor_FUN_00416320
// Address: 00416320
// Address Range: [[00416320, 004163d8]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_batcreat_cpp_CBatCreature_dtor_FUN_00416320 (CBatCreature *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

#include "nocturne.h"

CDemonActor * __cdecl
core_batcreat_cpp_CBatCreature_dtor_FUN_00416320
          (CBatCreature *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBatCreatureTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return (CDemonActor *)this_ptr;
  }
  iVar1 = core_armour_cpp_freeFlames_FUN_00412720
                    ((CFlame **)((this_ptr->base).base.cloth_data + 0x934));
  iVar1 = core_armour_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_armour_cpp_freeVectors_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,unaff_EBX,unaff_retaddr,
                      (uint)this_ptr);
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
