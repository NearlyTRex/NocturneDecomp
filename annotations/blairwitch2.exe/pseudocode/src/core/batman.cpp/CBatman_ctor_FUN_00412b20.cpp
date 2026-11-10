// Name: core_batman.cpp_CBatman_ctor_FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412bd0]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00412b20(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00412b20(CBatman *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CBatman *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CBatman *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  pcVar5 = (char *)0x5cb971;
  (pCVar4->base).base.base.vtable._ub = &g_CBatmanVTable._ub;
  pcVar6 = pCVar4->fall_event;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar4->base).base.model,(char *)0x5cb966);
  uVar2 = _DAT_005f3090;
  *(uint *)&(pCVar4->base).base.field_0x3430 = 0x3f19999a;
  uVar3 = _DAT_005f3094;
  *(uint *)&(pCVar4->base).base.field_0x3434 = 0x40000000;
  *(uint *)&(pCVar4->base).base.field_0x3438 = uVar2;
  *(uint *)&(pCVar4->base).base.field_0x343c = uVar3;
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
