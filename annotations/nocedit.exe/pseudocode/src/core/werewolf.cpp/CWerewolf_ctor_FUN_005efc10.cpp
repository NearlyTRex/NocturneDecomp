// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
// Address: 005efc10
// Address Range: [[005efc10, 005efcbd]]
// Convention: __cdecl
// Signature: CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf * this_ptr)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CWerewolf *pCVar5;
  
  pCVar5 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar5->base).base.base.vtable._ub = &g_CWerewolfVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base).base.model,"wolfbrn.dfm");
  pCVar1 = &pCVar5->base;
  (pCVar1->base).cloth_data[0x344] = '\0';
  (pCVar1->base).cloth_data[0x345] = '\0';
  (pCVar1->base).cloth_data[0x346] = -0x80;
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar5->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = '\0';
  (pCVar1->base).cloth_data[0x34b] = '@';
  pCVar5->type = 0;
  pCVar5->light_up_eyes = 1;
  pCVar5->unk4[0x10] = '\0';
  fVar2 = 50.0f;
  pCVar5->unk4[0x11] = '\0';
  pCVar5->unk4[0x12] = '\0';
  pCVar5->unk4[0x13] = '\0';
  pCVar5->chain_length = 5.0;
  fVar3 = 100.0f;
  pCVar5->unk5[0] = '\0';
  fVar4 = 10.0f;
  pCVar5->unk5[1] = '\0';
  pCVar5->unk5[2] = '\0';
  pCVar5->unk5[3] = '\0';
  pCVar5->unk5[4] = '\0';
  pCVar5->unk5[5] = '\0';
  pCVar5->unk5[6] = '\0';
  pCVar5->unk5[7] = '\0';
  pCVar5->phase = 0;
  *(float *)((pCVar5->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar5->base).base.cloth_data + 0x350) = fVar3;
  pCVar5->phase_timer = fVar4;
  return pCVar5;
}
