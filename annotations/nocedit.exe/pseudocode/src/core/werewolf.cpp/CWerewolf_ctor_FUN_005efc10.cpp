// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
// Address: 005efc10
// Address Range: [[005efc10, 005efcbd]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf *this_ptr)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CWerewolf *pCVar4;
  
  pCVar4 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CWerewolfVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"wolfbrn.dfm");
  (pCVar4->base).base.field54_0x2ddc = 1.0;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  pCVar4->type = WEREWOLF_TYPE_TRAIN;
  pCVar4->light_up_eyes = 1;
  pCVar4->unk4[0xc] = '\0';
  fVar1 = 50.0f;
  pCVar4->unk4[0xd] = '\0';
  pCVar4->unk4[0xe] = '\0';
  pCVar4->unk4[0xf] = '\0';
  pCVar4->chain_length = 5.0;
  fVar2 = 100.0f;
  pCVar4->unk5[0] = '\0';
  fVar3 = 10.0f;
  pCVar4->unk5[1] = '\0';
  pCVar4->unk5[2] = '\0';
  pCVar4->unk5[3] = '\0';
  pCVar4->unk5[4] = '\0';
  pCVar4->unk5[5] = '\0';
  pCVar4->unk5[6] = '\0';
  pCVar4->unk5[7] = '\0';
  pCVar4->phase = 0;
  (pCVar4->base).base.field56_0x2de4 = fVar1;
  (pCVar4->base).base.field57_0x2de8 = fVar2;
  pCVar4->phase_timer = fVar3;
  return pCVar4;
}
