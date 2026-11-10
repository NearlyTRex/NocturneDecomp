// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170
// Address: 005a5170
// Address Range: [[005a5170, 005a529f]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005a5170(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005a5170(CVampireBoss *this_ptr)

{
  CEnemy *pCVar1;
  CDeformableModelInstance *pCVar2;
  CCloth *pCVar3;
  CMorph *pCVar4;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
                     ((CDeformableModelInstance *)(pCVar1 + 1));
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0((CCloth *)(pCVar2 + 1));
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(pCVar3 + 0x3ab30);
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(pCVar3 + 0x3ab30);
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)(pCVar3 + 0x3ab34));
  *(CEnemy_full_vtable **)(pCVar4 + -0xbe64c) = &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar4 + -0xbe648),(char *)0x5f8ced);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar4 + -0xb2538),"batboss.dfm");
  *(uint *)(pCVar4 + -0xbb7b4) = 0x40000000;
  *(uint *)(pCVar4 + -0xbb7b0) = 0x40400000;
  *(uint *)(pCVar4 + -0xbb7ac) = 0x42480000;
  *(uint *)(pCVar4 + -0xbb7a8) = 0x42c80000;
  *(uint *)(pCVar4 + 0xc30) = 0;
  *(uint *)(pCVar4 + -4) = 0;
  *(uint *)(pCVar4 + 0xc2c) = 0;
  *(uint *)(pCVar4 + 0xc48) = 0;
  *(uint *)(pCVar4 + 0xc4c) = 0;
  *(uint *)(pCVar4 + 0xc50) = 0;
  *(uint *)(pCVar4 + 0xc54) = 0;
  *(uint *)(pCVar4 + 0xc44) = 0;
  *(uint *)(pCVar4 + 0xc58) = 0;
  *(uint *)(pCVar4 + 0xc34) = 0x41200000;
  *(uint *)(pCVar4 + 0xc40) = 1;
  *(uint *)(pCVar4 + -0xbbfe0) = 0;
  return (CVampireBoss *)(pCVar4 + -0xbe7a0);
}
