// Name: core_batman.cpp_CBatman_ctor_FUN_00416450
// Address: 00416450
// Address Range: [[00416450, 00416500]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr)

#include "nocturne.h"

CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CBatman *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CBatman *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pcVar5 = "none";
  (pCVar4->base).base.base.vtable._ub = &g_CBatmanVTable;
  pcVar6 = pCVar4->unk1;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"batman.dfm");
  fVar2 = 50.0f;
  (pCVar4->base).base.field54_0x2ddc = 0.6;
  fVar3 = 100.0f;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  (pCVar4->base).base.field56_0x2de4 = fVar2;
  (pCVar4->base).base.field57_0x2de8 = fVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar4->mist_state = 0;
  pCVar4->vanish_timer = 0.0;
  (pCVar4->new_pos).z = 0.0;
  (pCVar4->new_pos).y = (pCVar4->new_pos).z;
  (pCVar4->new_pos).x = (pCVar4->new_pos).y;
  return pCVar4;
}
