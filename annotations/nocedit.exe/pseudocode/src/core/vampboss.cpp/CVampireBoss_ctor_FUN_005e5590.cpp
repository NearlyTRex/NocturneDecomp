// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
// Address: 005e5590
// Address Range: [[005e5590, 005e56bf]]
// Convention: __cdecl
// Signature: CVampireBoss * core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss * this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

{
  CEnemy *pCVar1;
  int iVar2;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar1[1].base_character.base_actor.actor_name + 8));
  core_cloth_cpp_FUN_00438ba0();
  core_cloth_cpp_FUN_00438ba0();
  core_cloth_cpp_FUN_00438ba0();
  iVar2 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar2 + -0xcdb70) = &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0xcdb6c),"nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0xc1e08),"batboss.dfm");
  *(uint *)(iVar2 + -0xcaee8) = 0x40000000;
  *(uint *)(iVar2 + -0xcaee4) = 0x40400000;
  *(uint *)(iVar2 + -0xcaee0) = 0x42480000;
  *(uint *)(iVar2 + -0xcaedc) = 0x42c80000;
  *(uint *)(iVar2 + 0xc30) = 0;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + 0xc2c) = 0;
  *(uint *)(iVar2 + 0xc48) = 0;
  *(uint *)(iVar2 + 0xc4c) = 0;
  *(uint *)(iVar2 + 0xc50) = 0;
  *(uint *)(iVar2 + 0xc54) = 0;
  *(uint *)(iVar2 + 0xc44) = 0;
  *(uint *)(iVar2 + 0xc58) = 0;
  *(uint *)(iVar2 + 0xc34) = 0x41200000;
  *(uint *)(iVar2 + 0xc40) = 1;
  *(uint *)(iVar2 + -0xcb6a0) = 0;
  return (CVampireBoss *)(iVar2 + -0xcdcc4);
}
