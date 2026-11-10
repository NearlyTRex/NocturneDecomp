// Name: core_holycrss.cpp_CHolycross_fillAttackDamageInfo_FUN_004d51d0
// Address: 004d51d0
// Address Range: [[004d51d0, 004d525a]]
// Convention: __cdecl
// Signature: void __cdecl core_holycrss_cpp_CHolycross_fillAttackDamageInfo_FUN_004d51d0(CHolycross *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_holycrss_cpp_CHolycross_fillAttackDamageInfo_FUN_004d51d0(CHolycross *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
            ((CDemonActor *)this_ptr,attack_flags,out_damage_info,victim);
  uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
  uVar1 = g_CCharacterClassInfo.name_hash;
  *(uint *)(out_damage_info + 0x30) = 0x71;
  *(uint *)(out_damage_info + 4) = uVar2;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(victim,uVar1);
  if (((iVar3 != 0) && ((*(uint *)(iVar3 + 0x3254) & 0x7fffffff) != 0)) &&
     (*(int *)(iVar3 + 0x3258) == 0)) {
    *(float *)(out_damage_info + 4) = *(float *)(out_damage_info + 4) * _DAT_005c51db;
    return;
  }
  return;
}
