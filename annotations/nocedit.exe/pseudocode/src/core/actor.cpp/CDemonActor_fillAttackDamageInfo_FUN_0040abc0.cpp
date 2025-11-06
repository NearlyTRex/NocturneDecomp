// Name: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
// Address: 0040abc0
// Address Range: [[0040abc0, 0040ac1f]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210 (0041b210) at 0041b229 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050eaf0 (0050eaf0) at 0050eb09 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613ab0
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
          (CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x6e4);
  out_damage_info->damage_amount = 5.0;
  out_damage_info->damage_type = 0x67;
  out_damage_info->weapon_damage_modifier = 0.2;
  out_damage_info->damage_flags = 0x3ecccccd;
  out_damage_info->attacker = this_ptr;
  pCVar1 = (*this_ptr->vtable->getCarrier)(this_ptr);
  out_damage_info->wielder = pCVar1;
  return;
}


// Assembly code:
// 0040abc0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
// 0040abc1: PUSH ESI
// 0040abc2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040abc6: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040abca: PUSH 0x6e4
// 0040abcf: PUSH 0x613ab0
//   XREF to: 00613ab0 (DATA)
// 0040abd4: PUSH ESI
// 0040abd5: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040abda: MOV dword ptr [EBX + 0x4],0x40a00000
// 0040abe1: MOV dword ptr [EBX + 0x30],0x67
// 0040abe8: MOV dword ptr [EBX + 0x2c],0x3e4ccccd
// 0040abef: MOV dword ptr [EBX + 0x8],0x3ecccccd
// 0040abf6: ADD ESP,0xc
// 0040abf9: MOV dword ptr [EBX + 0x34],ESI
// 0040abfc: PUSH ESI
// 0040abfd: MOV EAX,dword ptr [ESI + 0x154]
// 0040ac03: CALL dword ptr [EAX + 0x8c]
// 0040ac09: ADD ESP,0x4
// 0040ac0c: MOV dword ptr [EBX + 0x38],EAX
// 0040ac0f: POP ESI
// 0040ac10: POP EBX
