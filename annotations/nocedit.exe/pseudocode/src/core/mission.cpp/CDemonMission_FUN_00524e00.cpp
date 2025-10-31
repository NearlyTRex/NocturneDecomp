// Name: core_mission.cpp_CDemonMission_FUN_00524e00
// Address: 00524e00
// Address Range: [[00524e00, 00524e58]]
// Convention: __cdecl
// Signature: int core_mission.cpp_CDemonMission_FUN_00524e00(CDemonMission * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db500 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CEnemyClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_FUN_00524e00(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  SCollisionInfo *unaff_EBX;
  CDemonActor *actor_ptr;
  int iVar2;
  
  actor_ptr = this_ptr->first_actor;
  iVar2 = 0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
      return iVar2;
    }
    while ((this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                    (actor_ptr,g_CEnemyClassInfo.name_hash),
           this_ptr_00 != (CDemonActor *)0x0 &&
           (iVar1 = (*(this_ptr_00->metadata).vtable[1].hasCollision)(this_ptr_00,unaff_EBX),
           iVar1 != 0))) {
      iVar2 = iVar2 + 1;
      actor_ptr = (actor_ptr->metadata).next_actor;
      if (actor_ptr == (CDemonActor *)0x0) {
        return iVar2;
      }
    }
    actor_ptr = (actor_ptr->metadata).next_actor;
  } while( true );
}


// Assembly code:
// 00524e00: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00524e00
// 00524e01: PUSH ESI
// 00524e02: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00524e06: MOV EBX,dword ptr [EBX + 0x548]
// 00524e0c: XOR ESI,ESI
// 00524e0e: TEST EBX,EBX
// 00524e10: JZ 0x00524e30
//   XREF to: 00524e30 (CONDITIONAL_JUMP)
// 00524e12: MOV EDX,dword ptr [0x02cf2bf0]
//   Label: LAB_00524e12
//   XREF to: 02cf2bf0 (READ)
// 00524e18: PUSH EDX
// 00524e19: PUSH EBX
// 00524e1a: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00524e1f: ADD ESP,0x8
// 00524e22: TEST EAX,EAX
// 00524e24: JNZ 0x00524e35
//   XREF to: 00524e35 (CONDITIONAL_JUMP)
// 00524e26: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00524e26
// 00524e2c: TEST EBX,EBX
// 00524e2e: JNZ 0x00524e12
//   XREF to: 00524e12 (CONDITIONAL_JUMP)
// 00524e30: MOV EAX,ESI
//   Label: LAB_00524e30
// 00524e32: POP ESI
// 00524e33: POP EBX
// 00524e34: RET
// 00524e35: PUSH EAX
//   Label: LAB_00524e35
// 00524e36: MOV EDX,dword ptr [EAX + 0x154]
// 00524e3c: CALL dword ptr [EDX + 0x120]
// 00524e42: ADD ESP,0x4
// 00524e45: TEST EAX,EAX
// 00524e47: JZ 0x00524e26
//   XREF to: 00524e26 (CONDITIONAL_JUMP)
// 00524e49: INC ESI
// 00524e4a: MOV EBX,dword ptr [EBX + 0x14c]
// 00524e50: TEST EBX,EBX
// 00524e52: JNZ 0x00524e12
//   XREF to: 00524e12 (CONDITIONAL_JUMP)
// 00524e54: MOV EAX,ESI
// 00524e56: POP ESI
// 00524e57: POP EBX
// 00524e58: RET
