// Name: core_waypoint.cpp_CWayPoint_FUN_005ec280
// Address: 005ec280
// Address Range: [[005ec280, 005ec312]]
// Convention: __cdecl
// Signature: void core_waypoint.cpp_CWayPoint_FUN_005ec280(CWayPoint * this_ptr)
// Globals:
//   TerminatedCString s_nextWayPoint_00657587
//   TerminatedCString s_adjCount_00657594
//   int g_CWayPointClassVersion = 0x2
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_trigger.cpp_CTrigger_serialize_FUN_005e0690

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec280(CWayPoint *this_ptr)

{
  CDemonActor *actor_ptr;
  BADSPACEBASE *in_ESP;
  int iVar1;
  
  core_trigger_cpp_CTrigger_serialize_FUN_005e0690(&this_ptr->base_trigger);
  if (g_CWayPointClassVersion < 2) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&stack0xfffffff0,"nextWayPoint");
  }
  if (1 < g_CWayPointClassVersion) {
    iVar1 = 0;
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->num_adjacent_waypoints,"adjCount");
    if (0 < this_ptr->num_adjacent_waypoints) {
      actor_ptr = (CDemonActor *)this_ptr->field2_0x374;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_serializeActor_FUN_0040b870(actor_ptr,(char *)0x0);
        actor_ptr = (CDemonActor *)(actor_ptr->actor_name + 8);
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
      return;
    }
  }
  return;
}


// Assembly code:
// 005ec280: PUSH EBX
//   Label: core_waypoint.cpp_CWayPoint_FUN_005ec280
// 005ec281: PUSH ESI
// 005ec282: PUSH EDI
// 005ec283: PUSH EBP
// 005ec284: SUB ESP,0x4
// 005ec287: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005ec28b: PUSH EDI
// 005ec28c: CALL core_trigger.cpp_CTrigger_serialize_FUN_005e0690
//   XREF to: 005e0690 (UNCONDITIONAL_CALL)
// 005ec291: MOV EDX,dword ptr [0x0068489c]
//   XREF to: 0068489c (READ)
// 005ec297: ADD ESP,0x4
// 005ec29a: CMP EDX,0x2
// 005ec29d: JL 0x005ec2b8
//   XREF to: 005ec2b8 (CONDITIONAL_JUMP)
// 005ec29f: CMP dword ptr [0x0068489c],0x2
//   Label: LAB_005ec29f
//   XREF to: 0068489c (READ)
// 005ec2a6: JGE 0x005ec2cc
//   XREF to: 005ec2cc (CONDITIONAL_JUMP)
// 005ec2a8: LEA EAX,[EAX]
// 005ec2ae: MOV EDX,EDX
// 005ec2b0: ADD ESP,0x4
//   Label: LAB_005ec2b0
// 005ec2b3: POP EBP
// 005ec2b4: POP EDI
// 005ec2b5: POP ESI
// 005ec2b6: POP EBX
// 005ec2b7: RET
// 005ec2b8: PUSH 0x657587
//   Label: LAB_005ec2b8
//   XREF to: 00657587 (DATA)
// 005ec2bd: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 005ec2c1: PUSH EBX
// 005ec2c2: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005ec2c7: ADD ESP,0x8
// 005ec2ca: JMP 0x005ec29f
//   XREF to: 005ec29f (UNCONDITIONAL_JUMP)
// 005ec2cc: PUSH 0x657594
//   Label: LAB_005ec2cc
//   XREF to: 00657594 (DATA)
// 005ec2d1: LEA EBX,[EDI + 0x370]
// 005ec2d7: PUSH EBX
// 005ec2d8: XOR ESI,ESI
// 005ec2da: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005ec2df: MOV EBX,dword ptr [EDI + 0x370]
// 005ec2e5: ADD ESP,0x8
// 005ec2e8: TEST EBX,EBX
// 005ec2ea: JLE 0x005ec2b0
//   XREF to: 005ec2b0 (CONDITIONAL_JUMP)
// 005ec2ec: LEA EBX,[EDI + 0x374]
// 005ec2f2: PUSH 0x0
//   Label: LAB_005ec2f2
// 005ec2f4: PUSH EBX
// 005ec2f5: INC ESI
// 005ec2f6: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005ec2fb: ADD ESP,0x8
// 005ec2fe: MOV EBP,dword ptr [EDI + 0x370]
// 005ec304: ADD EBX,0x8
// 005ec307: CMP ESI,EBP
// 005ec309: JL 0x005ec2f2
//   XREF to: 005ec2f2 (CONDITIONAL_JUMP)
// 005ec30b: ADD ESP,0x4
// 005ec30e: POP EBP
// 005ec30f: POP EDI
// 005ec310: POP ESI
// 005ec311: POP EBX
// 005ec312: RET
