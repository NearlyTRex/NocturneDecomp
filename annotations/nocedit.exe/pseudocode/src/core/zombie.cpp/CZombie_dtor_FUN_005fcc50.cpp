// Name: core_zombie.cpp_CZombie_dtor_FUN_005fcc50
// Address: 005fcc50
// Address Range: [[005fcc50, 005fcd08]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_CZombie_dtor_FUN_005fcc50(CZombie *this_ptr,uint flags)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_CZombie_dtor_FUN_005fcc50(CZombie *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFire *pSVar2;
  CVector3f *pCVar3;
  int iVar4;
  CDeformableModelInstance *pCVar5;
  CZombie *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CZombieTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_freeFlames_FUN_00412720
                     ((CFlame *)((this_ptr->base).base.cloth_data + 0x934));
  pSVar2 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar1[-2].base.create_event + 0x20));
  pCVar3 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar2[-0x16].unk + 4));
  core_armour_cpp_freeVectors_FUN_004126e0(pCVar3 + -0xf);
  iVar4 = core_cloth_cpp_FUN_0043bf80();
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar4 + -0x293c),0);
  ptr = (CZombie *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar5[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
