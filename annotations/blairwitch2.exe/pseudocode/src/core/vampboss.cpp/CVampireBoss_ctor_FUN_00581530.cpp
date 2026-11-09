// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530
// Address: 00581530
// Address Range: [[00581530, 0058165f]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530(CVampireBoss *this_ptr)

{
  CEnemy *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CMorph *pCVar4;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0
                     ((CDeformableModelInstance *)(pCVar1 + 1));
  iVar3 = core_necklace_cpp_FUN_005adda0(pCVar2 + 1);
  iVar3 = core_necklace_cpp_FUN_005adda0(iVar3 + 0x3ab30);
  iVar3 = core_necklace_cpp_FUN_005adda0(iVar3 + 0x3ab30);
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)(iVar3 + 0x3ab34));
  *(byte **)(pCVar4 + -0xc2c90) = &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar4 + -0xc2c8c),(char *)0x5ed991);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar4 + -0xb2448),"batboss.dfm");
  *(uint *)(pCVar4 + -0xbfb10) = 0x40000000;
  *(uint *)(pCVar4 + -0xbfb0c) = 0x40400000;
  *(uint *)(pCVar4 + -0xbfb08) = 0x42480000;
  *(uint *)(pCVar4 + -0xbfb04) = 0x42c80000;
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
  *(uint *)(pCVar4 + -0xc0714) = 0;
  return (CVampireBoss *)(pCVar4 + -0xc2f40);
}
