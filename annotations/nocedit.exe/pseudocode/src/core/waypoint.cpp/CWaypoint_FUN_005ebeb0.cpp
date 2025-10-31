// Name: core_waypoint.cpp_CWaypoint_FUN_005ebeb0
// Address: 005ebeb0
// Address Range: [[005ebeb0, 005ebf6b]]
// Convention: __cdecl
// Signature: void core_waypoint.cpp_CWaypoint_FUN_005ebeb0(CWayPoint * this_ptr)
// Globals:
//   TerminatedCString s_none_0065753c
//   TerminatedCString s_true_00657541
//   TerminatedCString s_core_waypoint_cpp_00657546
//   TerminatedCString s_Can_t_have_creation_even_0065755b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_trigger.cpp_CTrigger_FUN_005df990
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWaypoint_FUN_005ebeb0(CWayPoint *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CWayPoint *pCVar5;
  int iVar6;
  char *str1;
  
  core_trigger_cpp_CTrigger_FUN_005df990(&this_ptr->base_trigger);
  iVar6 = 0;
  if (0 < this_ptr->num_adjacent_waypoints) {
    pCVar5 = this_ptr;
    do {
      iVar1 = *(int *)pCVar5->field2_0x374;
      fVar2 = (this_ptr->base_trigger).base_actor.location.position.x - *(float *)(iVar1 + 0x20);
      fVar4 = (this_ptr->base_trigger).base_actor.location.position.y - *(float *)(iVar1 + 0x24);
      fVar3 = (this_ptr->base_trigger).base_actor.location.position.z - *(float *)(iVar1 + 0x28);
      iVar6 = iVar6 + 1;
      *(float *)(pCVar5->field2_0x374 + 4) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      pCVar5 = (CWayPoint *)((pCVar5->base_trigger).base_actor.actor_name + 8);
    } while (iVar6 < this_ptr->num_adjacent_waypoints);
  }
  if ((this_ptr->base_trigger).base_actor.create_event[0] != '\0') {
    str1 = (this_ptr->base_trigger).base_actor.create_event;
    iVar6 = crt_string_c_stricmp_FUN_005fe7f0(str1,"none");
    if ((iVar6 != 0) &&
       (iVar6 = crt_string_c_stricmp_FUN_005fe7f0(str1,"true"), iVar6 != 0)) {
      g_CurrentFilename = "..\\core\\waypoint.cpp";
      g_CurrentLineNumber = 0x79;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}


// Assembly code:
// 005ebeb0: PUSH EBX
//   Label: core_waypoint.cpp_CWaypoint_FUN_005ebeb0
// 005ebeb1: PUSH ESI
// 005ebeb2: PUSH EBP
// 005ebeb3: SUB ESP,0xc
// 005ebeb6: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005ebeba: PUSH ESI
// 005ebebb: CALL core_trigger.cpp_CTrigger_FUN_005df990
//   XREF to: 005df990 (UNCONDITIONAL_CALL)
// 005ebec0: XOR EBX,EBX
// 005ebec2: MOV EDX,dword ptr [ESI + 0x370]
// 005ebec8: ADD ESP,0x4
// 005ebecb: TEST EDX,EDX
// 005ebecd: JLE 0x005ebf0f
//   XREF to: 005ebf0f (CONDITIONAL_JUMP)
// 005ebecf: PUSH EDI
// 005ebed0: LEA ECX,[ESI + 0x20]
// 005ebed3: MOV EDX,ESI
// 005ebed5: MOV EAX,dword ptr [EDX + 0x374]
//   Label: LAB_005ebed5
// 005ebedb: FLD float ptr [ECX]
// 005ebedd: FSUB float ptr [EAX + 0x20]
// 005ebee0: FMUL ST0
// 005ebee2: FLD float ptr [ECX + 0x4]
// 005ebee5: FSUB float ptr [EAX + 0x24]
// 005ebee8: FMUL ST0
// 005ebeea: FLD float ptr [ECX + 0x8]
// 005ebeed: FXCH
// 005ebeef: FADDP ST2,ST0
// 005ebef1: FSUB float ptr [EAX + 0x28]
// 005ebef4: FMUL ST0
// 005ebef6: FADDP
// 005ebef8: FSQRT
// 005ebefa: INC EBX
// 005ebefb: FSTP float ptr [EDX + 0x378]
// 005ebf01: MOV EDI,dword ptr [ESI + 0x370]
// 005ebf07: ADD EDX,0x8
// 005ebf0a: CMP EBX,EDI
// 005ebf0c: JL 0x005ebed5
//   XREF to: 005ebed5 (CONDITIONAL_JUMP)
// 005ebf0e: POP EDI
// 005ebf0f: CMP byte ptr [ESI + 0x78],0x0
//   Label: LAB_005ebf0f
// 005ebf13: JNZ 0x005ebf1c
//   XREF to: 005ebf1c (CONDITIONAL_JUMP)
// 005ebf15: ADD ESP,0xc
//   Label: LAB_005ebf15
// 005ebf18: POP EBP
// 005ebf19: POP ESI
// 005ebf1a: POP EBX
// 005ebf1b: RET
// 005ebf1c: PUSH 0x65753c
//   Label: LAB_005ebf1c
//   XREF to: 0065753c (DATA)
// 005ebf21: ADD ESI,0x78
// 005ebf24: PUSH ESI
// 005ebf25: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005ebf2a: ADD ESP,0x8
// 005ebf2d: TEST EAX,EAX
// 005ebf2f: JZ 0x005ebf15
//   XREF to: 005ebf15 (CONDITIONAL_JUMP)
// 005ebf31: PUSH 0x657541
//   XREF to: 00657541 (DATA)
// 005ebf36: PUSH ESI
// 005ebf37: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005ebf3c: ADD ESP,0x8
// 005ebf3f: TEST EAX,EAX
// 005ebf41: JZ 0x005ebf15
//   XREF to: 005ebf15 (CONDITIONAL_JUMP)
// 005ebf43: MOV EBP,0x657546
//   XREF to: 00657546 (DATA)
// 005ebf48: MOV EAX,0x79
// 005ebf4d: PUSH 0x65755b
//   XREF to: 0065755b (DATA)
// 005ebf52: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005ebf58: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005ebf5d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ebf62: ADD ESP,0x4
// 005ebf65: ADD ESP,0xc
// 005ebf68: POP EBP
// 005ebf69: POP ESI
// 005ebf6a: POP EBX
// 005ebf6b: RET
