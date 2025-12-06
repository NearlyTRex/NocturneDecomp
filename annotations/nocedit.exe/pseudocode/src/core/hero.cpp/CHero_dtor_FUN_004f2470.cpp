// Name: core_hero.cpp_CHero_dtor_FUN_004f2470
// Address: 004f2470
// Address Range: [[004f2470, 004f2535]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)

#include "nocturne.h"

void __cdecl
core_hero_cpp_CHero_dtor_FUN_004f2470
          (CHero *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CPathMap *pCVar2;
  CDeformableModelInstance *pCVar3;
  
  (this_ptr->base_character).base_actor.vtable = &g_CHeroVTable;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)((int)g_HeroActors + iVar1)) {
      *(uint *)((int)g_HeroActors + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  iVar1 = core_inv_cpp_CInventory_dtor_FUN_004fd0c0(&this_ptr->inventory);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)(iVar1 + -0x138e0));
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar2[-1].height_cache_tags[0xb] + 0x2c));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d5,d6,d7);
  core_actor_cpp_CDemonActor_dtor_FUN_00408a30
            ((CDemonActor *)(pCVar3[-1].part_visibility_flags + 7),1);
  return;
}
