// Name: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
// Address: 0041b210
// Address Range: [[0041b210, 0041b23f]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210(CBodyPart * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
// Function calls:
//   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void __cdecl
core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
          (CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
            (&this_ptr->base_actor,attack_flags,out_damage_info,victim);
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,15.0);
  out_damage_info->weapon_damage_modifier = 0.02;
  out_damage_info->damage_amount = fVar1;
  return;
}


// Assembly code:
// 0041b210: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
// 0041b211: PUSH ESI
// 0041b212: SUB ESP,0x4
// 0041b215: MOV EBX,dword ptr [ESP + 0x18]
// 0041b219: MOV EDX,dword ptr [ESP + 0x1c]
// 0041b21d: PUSH EDX
// 0041b21e: PUSH EBX
// 0041b21f: MOV ECX,dword ptr [ESP + 0x1c]
// 0041b223: PUSH ECX
// 0041b224: MOV ESI,dword ptr [ESP + 0x1c]
// 0041b228: PUSH ESI
// 0041b229: CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
//   XREF to: 0040abc0 (UNCONDITIONAL_CALL)
// 0041b22e: ADD ESP,0x10
// 0041b231: PUSH 0x41700000
// 0041b236: PUSH 0x40a00000
// 0041b23b: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
