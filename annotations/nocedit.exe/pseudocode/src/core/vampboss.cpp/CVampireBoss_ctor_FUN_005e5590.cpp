// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
// Address: 005e5590
// Address Range: [[005e5590, 005e56bf]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

{
  CVampireBoss *pCVar1;
  CDeformableModelInstance *pCVar2;
  CCloth *pCVar3;
  int extraout_EAX;
  
  pCVar1 = (CVampireBoss *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&pCVar1->model);
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar2 + 1));
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar3[1].model.model_filename + 0xc))
  ;
  core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar3[1].model.model_filename + 0xc));
  core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(extraout_EAX + -0xcdb70) = &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(extraout_EAX + -0xcdb6c),"nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(extraout_EAX + -0xc1e08),"batboss.dfm");
  *(uint *)(extraout_EAX + -0xcaee8) = 0x40000000;
  *(uint *)(extraout_EAX + -0xcaee4) = 0x40400000;
  *(uint *)(extraout_EAX + -0xcaee0) = 0x42480000;
  *(uint *)(extraout_EAX + -0xcaedc) = 0x42c80000;
  *(uint *)(extraout_EAX + 0xc30) = 0;
  *(uint *)(extraout_EAX + -4) = 0;
  *(uint *)(extraout_EAX + 0xc2c) = 0;
  *(uint *)(extraout_EAX + 0xc48) = 0;
  *(uint *)(extraout_EAX + 0xc4c) = 0;
  *(uint *)(extraout_EAX + 0xc50) = 0;
  *(uint *)(extraout_EAX + 0xc54) = 0;
  *(uint *)(extraout_EAX + 0xc44) = 0;
  *(uint *)(extraout_EAX + 0xc58) = 0;
  *(uint *)(extraout_EAX + 0xc34) = 0x41200000;
  *(uint *)(extraout_EAX + 0xc40) = 1;
  *(uint *)(extraout_EAX + -0xcb6a0) = 0;
  return (CVampireBoss *)(extraout_EAX + -0xcdcc4);
}
