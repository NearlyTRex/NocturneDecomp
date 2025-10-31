// Name: core_werewolf.cpp_CWerewolf_FUN_005f20d0
// Address: 005f20d0
// Address Range: [[005f20d0, 005f21da]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_FUN_005f20d0(CWerewolf * this_ptr)
// Globals:
//   TerminatedCString s_Model_00657ea5
//   TerminatedCString s_State_00657eab
//   TerminatedCString s_Type_00657eb1
//   TerminatedCString s_Light_up_eyes_00657eb6
//   TerminatedCString s_CDemonActor_00657ec4
//   TerminatedCString s_chainAnchor_00657ed0
//   TerminatedCString s_chainLength_00657edc
//   TerminatedCString s_CWayPoint_00657ee8
//   TerminatedCString s_Way_Point_1_00657ef2
//   TerminatedCString s_CWayPoint_00657efe
//   TerminatedCString s_Way_Point_2_00657f08
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f20d0(CWerewolf *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  char *pcStack00000014;
  undefined4 uStack00000018;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  if (*(int *)(this_ptr->field6_0xbed8 + 0x10) == 0) {
    if (this_ptr->type != 2) {
      return;
    }
  }
  else {
    pcStack00000010 = (char *)0x0;
    pcStack0000000c = (char *)0x447a0000;
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
    if (this_ptr->type != 2) {
      return;
    }
  }
  pcStack00000014 = (char *)0x0;
  pcStack00000010 = "CWayPoint";
  pcStack0000000c = (char *)0x1;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  uStack00000018 = 0;
  pcStack00000014 = "CWayPoint";
  pcStack00000010 = (char *)0x1;
  pcStack0000000c = this_ptr->field8_0xbef0 + 4;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  return;
}


// Assembly code:
// 005f20d0: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_FUN_005f20d0
// 005f20d1: PUSH ESI
// 005f20d2: PUSH EDI
// 005f20d3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f20d7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f20db: PUSH ESI
// 005f20dc: PUSH EBX
// 005f20dd: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 005f20e2: ADD ESP,0x8
// 005f20e5: PUSH 0x0
// 005f20e7: LEA EDI,[EBX + 0x158]
// 005f20ed: PUSH EDI
// 005f20ee: PUSH 0x657ea5
//   XREF to: 00657ea5 (DATA)
// 005f20f3: PUSH ESI
// 005f20f4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 005f20f9: ADD ESP,0x10
// 005f20fc: PUSH EDI
// 005f20fd: PUSH 0x657eab
//   XREF to: 00657eab (DATA)
// 005f2102: PUSH ESI
// 005f2103: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 005f2108: ADD ESP,0xc
// 005f210b: PUSH 0x5f2070
//   XREF to: 005f2070 (DATA)
// 005f2110: PUSH 0x5f2010
//   XREF to: 005f2010 (DATA)
// 005f2115: PUSH 0x657eb1
//   XREF to: 00657eb1 (DATA)
// 005f211a: PUSH ESI
// 005f211b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 005f2120: ADD ESP,0x10
// 005f2123: LEA EDI,[EBX + 0xbed4]
// 005f2129: PUSH EDI
// 005f212a: PUSH 0x657eb6
//   XREF to: 00657eb6 (DATA)
// 005f212f: PUSH ESI
// 005f2130: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005f2135: ADD ESP,0xc
// 005f2138: PUSH 0x0
// 005f213a: PUSH 0x657ec4
//   XREF to: 00657ec4 (DATA)
// 005f213f: PUSH 0x1
// 005f2141: LEA EDI,[EBX + 0xbee8]
// 005f2147: PUSH EDI
// 005f2148: PUSH 0x657ed0
//   XREF to: 00657ed0 (DATA)
// 005f214d: PUSH ESI
// 005f214e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005f2153: MOV EDX,dword ptr [EBX + 0xbee8]
// 005f2159: ADD ESP,0x18
// 005f215c: TEST EDX,EDX
// 005f215e: JNZ 0x005f216d
//   XREF to: 005f216d (CONDITIONAL_JUMP)
// 005f2160: CMP dword ptr [EBX + 0xbebc],0x2
// 005f2167: JZ 0x005f219b
//   XREF to: 005f219b (CONDITIONAL_JUMP)
// 005f2169: POP EDI
// 005f216a: POP ESI
// 005f216b: POP EBX
// 005f216c: RET
// 005f216d: PUSH 0x0
//   Label: LAB_005f216d
// 005f216f: PUSH 0x447a0000
// 005f2174: LEA EDI,[EBX + 0xbeec]
// 005f217a: PUSH 0x3f800000
// 005f217f: PUSH EDI
// 005f2180: PUSH 0x657edc
//   XREF to: 00657edc (DATA)
// 005f2185: PUSH ESI
// 005f2186: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005f218b: ADD ESP,0x18
// 005f218e: CMP dword ptr [EBX + 0xbebc],0x2
// 005f2195: JZ 0x005f219b
//   XREF to: 005f219b (CONDITIONAL_JUMP)
// 005f2197: POP EDI
// 005f2198: POP ESI
// 005f2199: POP EBX
// 005f219a: RET
// 005f219b: PUSH 0x0
//   Label: LAB_005f219b
// 005f219d: PUSH 0x657ee8
//   XREF to: 00657ee8 (DATA)
// 005f21a2: PUSH 0x1
// 005f21a4: LEA EDI,[EBX + 0xbef0]
// 005f21aa: PUSH EDI
// 005f21ab: PUSH 0x657ef2
//   XREF to: 00657ef2 (DATA)
// 005f21b0: PUSH ESI
// 005f21b1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005f21b6: ADD ESP,0x18
// 005f21b9: PUSH 0x0
// 005f21bb: PUSH 0x657efe
//   XREF to: 00657efe (DATA)
// 005f21c0: PUSH 0x1
// 005f21c2: ADD EBX,0xbef4
// 005f21c8: PUSH EBX
// 005f21c9: PUSH 0x657f08
//   XREF to: 00657f08 (DATA)
// 005f21ce: PUSH ESI
// 005f21cf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005f21d4: ADD ESP,0x18
// 005f21d7: POP EDI
// 005f21d8: POP ESI
// 005f21d9: POP EBX
// 005f21da: RET
