// Name: core_firestff.cpp_CFirestaff_fillAttackDamageInfo_FUN_004a4cd0
// Address: 004a4cd0
// Address Range: [[004a4cd0, 004a4cfb]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_fillAttackDamageInfo_FUN_004a4cd0(CFirestaff *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_firestff_cpp_CFirestaff_fillAttackDamageInfo_FUN_004a4cd0(CFirestaff *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
            ((CDemonActor *)this_ptr,attack_flags,out_damage_info,victim);
  out_damage_info->damage_amount = 15.0;
  return;
}
