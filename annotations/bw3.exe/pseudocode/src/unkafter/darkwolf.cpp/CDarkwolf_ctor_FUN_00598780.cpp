// Name: unkafter_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780
// Address: 00598780
// Address Range: [[00598780, 005987fb]]
// Convention: unknown
// Signature: CDarkwolf * unkafter_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780(CDarkwolf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDarkwolf * unkafter_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780(CDarkwolf *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEnemy *pCVar3;
  CMorph *pCVar4;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0
                     ((CMorph *)(pCVar3[1].base.base.actor_name + 0x10));
  *(CEnemy_full_vtable **)(pCVar4 + -0xcf10) = &g_CDarkwolfVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar4 + -0xcf0c),(char *)0x5d97f7);
  uVar1 = _DAT_005e79f8;
  *(uint *)(pCVar4 + -0x9df8) = 0x3f400000;
  uVar2 = _DAT_005e79fc;
  *(uint *)(pCVar4 + -0x9df4) = 0x3fc00000;
  *(uint *)(pCVar4 + -8) = 0;
  *(uint *)(pCVar4 + -0x9df0) = uVar1;
  *(uint *)(pCVar4 + -0x9dec) = uVar2;
  return (CDarkwolf *)(pCVar4 + -0xd064);
}
