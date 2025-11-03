// Name: core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
// Address: 00523af0
// Address Range: [[00523af0, 00523b61]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_saveActor_FUN_00523af0(CDemonMission * this_ptr, CDemonActor * actor_ptr, FILE * file, CDemonActor * current_actor, char * description)
// Cross-references:
//   core_actor.cpp_serializeActor_FUN_0040b870 (0040b870) at 0040b8e2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_08x_0063905e
//   TerminatedCString s_core_mission_cpp_00639063
//   TerminatedCString s_s_0063907c
//   TerminatedCString s_anon_00639085
//   TerminatedCString s_none_0067d690
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_saveActor_FUN_00523af0
          (CDemonMission *this_ptr,CDemonActor *actor_ptr,FILE *file,CDemonActor *current_actor,
          char *description)

{
  char *pcVar1;
  int in_stack_00000018;
  char *format;
  
  if (actor_ptr < (CDemonActor *)0xff000000) {
    pcVar1 = "(none)";
    if (actor_ptr != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (actor_ptr,"..\\core\\mission.cpp",0x273);
      pcVar1 = actor_ptr->actor_name;
    }
    format = "\"%s\"";
  }
  else {
    format = "%08x";
    pcVar1 = actor_ptr->actor_name;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,format,pcVar1);
  if (in_stack_00000018 != 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"\t\t// %s\n",in_stack_00000018);
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"\n");
  return;
}


// Assembly code:
// 00523af0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
// 00523af1: PUSH ESI
// 00523af2: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00523af6: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00523afa: CMP EBX,0xff000000
// 00523b00: JNC 0x00523b49
//   XREF to: 00523b49 (CONDITIONAL_JUMP)
// 00523b02: MOV EAX,0x67d690
//   XREF to: 0067d690 (PARAM)
// 00523b07: TEST EBX,EBX
// 00523b09: JZ 0x00523b20
//   XREF to: 00523b20 (CONDITIONAL_JUMP)
// 00523b0b: PUSH 0x273
// 00523b10: PUSH 0x639063
//   XREF to: 00639063 (DATA)
// 00523b15: PUSH EBX
// 00523b16: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00523b1b: ADD ESP,0xc
// 00523b1e: MOV EAX,EBX
// 00523b20: PUSH EAX
//   Label: LAB_00523b20
//   XREF to: 0067d690 (DATA)
// 00523b21: PUSH 0x639077
//   XREF to: 00639077 (DATA)
// 00523b26: PUSH ESI
//   Label: LAB_00523b26
// 00523b27: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00523b2c: ADD ESP,0xc
// 00523b2f: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 00523b33: TEST EDX,EDX
// 00523b35: JZ 0x00523b51
//   XREF to: 00523b51 (CONDITIONAL_JUMP)
// 00523b37: PUSH EDX
// 00523b38: PUSH 0x63907c
//   XREF to: 0063907c (DATA)
// 00523b3d: PUSH ESI
// 00523b3e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00523b43: ADD ESP,0xc
// 00523b46: POP ESI
// 00523b47: POP EBX
// 00523b48: RET
// 00523b49: PUSH EBX
//   Label: LAB_00523b49
// 00523b4a: PUSH 0x63905e
//   XREF to: 0063905e (DATA)
// 00523b4f: JMP 0x00523b26
//   XREF to: 00523b26 (UNCONDITIONAL_JUMP)
// 00523b51: PUSH 0x639085
//   Label: LAB_00523b51
//   XREF to: 00639085 (DATA)
// 00523b56: PUSH ESI
// 00523b57: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00523b5c: ADD ESP,0x8
// 00523b5f: POP ESI
// 00523b60: POP EBX
// 00523b61: RET
