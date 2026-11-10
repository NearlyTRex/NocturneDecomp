// Name: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00416b80
// Address: 00416b80
// Address Range: [[00416b80, 00416bca]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00416b80(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00416b80(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
            (&this_ptr->base,attack_flags,out_damage_info,victim);
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,15.0);
  *(uint *)(out_damage_info + 0x2c) = 0x3ca3d70a;
  *(float *)(out_damage_info + 4) = fVar1;
  return;
}
