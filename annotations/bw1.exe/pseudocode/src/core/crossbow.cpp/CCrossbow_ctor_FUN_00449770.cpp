// Name: core_crossbow.cpp_CCrossbow_ctor_FUN_00449770
// Address: 00449770
// Address Range: [[00449770, 00449821]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00449770(CCrossbow *this_ptr)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00449770(CCrossbow *this_ptr)

{
  CFlame *pCVar1;
  CWeapon *pCVar2;
  CFlame *pCVar3;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0(&this_ptr->base);
  pCVar3 = core_flame_cpp_CFlame_ctor_FUN_004b7a30((CFlame *)(pCVar2[1].base.actor_name + 4));
  pCVar3[-2].base.dead1 = (int)&g_CCrossbowVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar3[-2].base.dead2,(char *)0x5d737c);
  pCVar3[-1].base.location.position.z = 0.0;
  pCVar3[-1].render_corona = 0;
  (pCVar3->flame_size).x = 0.45;
  (pCVar3->flame_size).y = 0.85;
  (pCVar3->flame_size).z = 0.45;
  pCVar3[-0xffffffff00000001].base.actor_name[0] = '\0';
  pCVar3[-0xffffffff00000001].base.actor_name[1] = '\0';
  pCVar3[-0xffffffff00000001].base.actor_name[2] = '\0';
  pCVar3[-0xffffffff00000001].base.actor_name[3] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[4] = '\0';
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[8] = '\x01';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[0xc] = '\0';
  (pCVar1->base).actor_name[0xd] = '\0';
  (pCVar1->base).actor_name[0xe] = '\0';
  (pCVar1->base).actor_name[0xf] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[0x10] = '\0';
  (pCVar1->base).actor_name[0x11] = '\0';
  (pCVar1->base).actor_name[0x12] = 'H';
  (pCVar1->base).actor_name[0x13] = 'B';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[0x14] = '\0';
  (pCVar1->base).actor_name[0x15] = '\0';
  (pCVar1->base).actor_name[0x16] = '\0';
  (pCVar1->base).actor_name[0x17] = '\0';
  return (CCrossbow *)(pCVar3[-3].off_event + 0x54);
}
