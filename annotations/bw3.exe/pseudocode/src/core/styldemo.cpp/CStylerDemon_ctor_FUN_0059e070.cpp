// Name: core_styldemo.cpp_CStylerDemon_ctor_FUN_0059e070
// Address: 0059e070
// Address Range: [[0059e070, 0059e127]]
// Convention: unknown
// Signature: CStylerDemon * core_styldemo_cpp_CStylerDemon_ctor_FUN_0059e070(CStylerDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStylerDemon * core_styldemo_cpp_CStylerDemon_ctor_FUN_0059e070(CStylerDemon *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEnemy *pCVar3;
  CMorph *pCVar4;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0
                     ((CMorph *)(pCVar3[1].base.base.actor_name + 0x10));
  *(CEnemy_full_vtable **)(pCVar4 + -0xcf10) = &g_CStylerDemonVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar4 + -0xcf0c),"bwp3_stylerdemon.dfm");
  *(uint *)(pCVar4 + -0x9df8) = 0x3f19999a;
  *(uint *)(pCVar4 + -0x9df4) = 0x3f666666;
  *(uint *)(pCVar4 + -0x204) = 0x41c80000;
  *(uint *)(pCVar4 + 0xc2c) = 0;
  *(uint *)(pCVar4 + 0xc30) = 0;
  *(uint *)(pCVar4 + 0xc38) = 0;
  uVar1 = _DAT_005e84e0;
  *(uint *)(pCVar4 + -4) = 0;
  uVar2 = _DAT_005e84e4;
  *(uint *)(pCVar4 + -8) = 0;
  *(uint *)(pCVar4 + 0xc3c) = 0;
  *(uint *)(pCVar4 + -0x9df0) = uVar1;
  *(uint *)(pCVar4 + -0x9dec) = uVar2;
  return (CStylerDemon *)(pCVar4 + -0xd064);
}
