// Name: core_batman.cpp_CBatman_ctor_FUN_00416450
// Address: 00416450
// Address Range: [[00416450, 00416500]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr)

#include "nocturne.h"

CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  float fVar4;
  CBatman *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CBatman *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pcVar6 = "none";
  (pCVar5->base).base.base.vtable._ub = &g_CBatmanVTable;
  pcVar7 = pCVar5->unk1 + 8;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base).base.model,"batman.dfm");
  fVar3 = 50.0f;
  pCVar2 = &pCVar5->base;
  (pCVar2->base).cloth_data[0x344] = -0x66;
  fVar4 = 100.0f;
  (pCVar2->base).cloth_data[0x345] = -0x67;
  (pCVar2->base).cloth_data[0x346] = '\x19';
  (pCVar2->base).cloth_data[0x347] = '?';
  pCVar2 = &pCVar5->base;
  (pCVar2->base).cloth_data[0x348] = '\0';
  (pCVar2->base).cloth_data[0x349] = '\0';
  (pCVar2->base).cloth_data[0x34a] = '\0';
  (pCVar2->base).cloth_data[0x34b] = '@';
  *(float *)((pCVar5->base).base.cloth_data + 0x34c) = fVar3;
  *(float *)((pCVar5->base).base.cloth_data + 0x350) = fVar4;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pCVar5->mist_state = 0;
  pCVar5->vanish_timer = 0.0;
  (pCVar5->new_pos).z = 0.0;
  (pCVar5->new_pos).y = (pCVar5->new_pos).z;
  (pCVar5->new_pos).x = (pCVar5->new_pos).y;
  return pCVar5;
}
