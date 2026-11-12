// Name: core_djien.cpp_CDjien_ctor_FUN_0045fe10
// Address: 0045fe10
// Address Range: [[0045fe10, 0045fef8]]
// Convention: unknown
// Signature: CDjien * core_djien_cpp_CDjien_ctor_FUN_0045fe10(CDjien *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDjien * core_djien_cpp_CDjien_ctor_FUN_0045fe10(CDjien *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEnemy *pCVar3;
  int iVar4;
  CDjien *pCVar5;
  CDjien *pCVar6;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  iVar4 = __arrinit
                    (pCVar3[1].base.base.create_event + 0x1c,0x18,&g_SDjienBoxTypeInfo);
  *(CDjien_full_vtable **)(iVar4 + -0xc1a8) = &g_CDjienVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(iVar4 + -0xc1a4),(char *)0x5d8ac7);
  *(uint *)(iVar4 + -0x9310) = 0x40800000;
  *(uint *)(iVar4 + -0x930c) = 0x41000000;
  *(uint *)(iVar4 + -0x34) = 0;
  *(uint *)(iVar4 + 0x6c0) = 0;
  *(uint *)(iVar4 + 0x6c8) = 0;
  *(uint *)(iVar4 + 0x6cc) = 0;
  *(uint *)(iVar4 + 0x6c4) = 1;
  *(uint *)(iVar4 + -0xc) = 0;
  uVar1 = _DAT_005fea20;
  *(uint *)(iVar4 + -8) = 0;
  uVar2 = _DAT_005fea24;
  *(uint *)(iVar4 + -0x2c) = 0;
  *(uint *)(iVar4 + -0x28) = 6;
  *(uint *)(iVar4 + -0x9308) = uVar1;
  *(uint *)(iVar4 + -0x9304) = uVar2;
  pCVar5 = (CDjien *)(iVar4 + -0xc2fc);
  do {
    pCVar6 = (CDjien *)((pCVar5->base).base.base.actor_name + 4);
    pCVar5->sack_damage[0] = 0.0;
    pCVar5 = pCVar6;
  } while (pCVar6 != (CDjien *)(iVar4 + -0xc2e4));
  return (CDjien *)(iVar4 + -0xc2fc);
}
