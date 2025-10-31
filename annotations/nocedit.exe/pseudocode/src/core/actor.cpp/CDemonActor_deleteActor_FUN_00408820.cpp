// Name: core_actor.cpp_CDemonActor_deleteActor_FUN_00408820
// Address: 00408820
// Address Range: [[00408820, 0040886b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_deleteActor_FUN_00408820(CDemonActor * this_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe601 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_removeItem_FUN_004fea70 (004fea70) at 004feafa [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523f20 (00523f20) at 00523f41 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613554
//   TerminatedCString s_core_actor_cpp_00613566
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_deleteActor_FUN_00408820(CDemonActor *this_ptr)

{
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  if (this_ptr != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (this_ptr,"..\\core\\actor.cpp",0x141);
    g_CurrentDebugFilename = "..\\core\\actor.cpp";
    g_CurrentDebugLine = 0x149;
    if (this_ptr != (CDemonActor *)0x0) {
      (*((this_ptr->metadata).vtable)->dtor)
                (this_ptr,2,unaff_retaddr,(uint)this_ptr,in_stack_00000008,in_stack_0000000c,
                 in_stack_00000010,in_stack_00000014,in_stack_00000018);
      return;
    }
  }
  return;
}


// Assembly code:
// 00408820: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_deleteActor_FUN_00408820
// 00408821: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00408825: TEST EBX,EBX
// 00408827: JNZ 0x0040882b
//   XREF to: 0040882b (CONDITIONAL_JUMP)
// 00408829: POP EBX
//   Label: LAB_00408829
// 0040882a: RET
// 0040882b: PUSH 0x141
//   Label: LAB_0040882b
// 00408830: PUSH 0x613554
//   XREF to: 00613554 (DATA)
// 00408835: PUSH EBX
// 00408836: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040883b: MOV EDX,0x613566
//   XREF to: 00613566 (DATA)
// 00408840: MOV ECX,0x149
// 00408845: ADD ESP,0xc
// 00408848: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0040884e: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00408854: TEST EBX,EBX
// 00408856: JZ 0x00408829
//   XREF to: 00408829 (CONDITIONAL_JUMP)
// 00408858: PUSH 0x2
// 0040885a: MOV EAX,dword ptr [EBX + 0x154]
// 00408860: PUSH EBX
// 00408861: CALL dword ptr [EAX + 0xe4]
// 00408867: ADD ESP,0x8
// 0040886a: POP EBX
// 0040886b: RET
