// Name: core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
// Address: 0040e6c0
// Address Range: [[0040e6c0, 0040e765]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160 (0040e160) at 0040e178 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0 (0040e1a0) at 0040e1b8 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0 (0040e1e0) at 0040e1f8 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e220 (0040e220) at 0040e238 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e260 (0040e260) at 0040e278 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e290 (0040e290) at 0040e2a8 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0 (0040e2d0) at 0040e2e4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e300 (0040e300) at 0040e314 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e330 (0040e330) at 0040e344 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e350 (0040e350) at 0040e36d [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0 (0040e3b0) at 0040e3c4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e3e0 (0040e3e0) at 0040e3f6 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e460 (0040e460) at 0040e474 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e480 (0040e480) at 0040e494 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0 (0040e4a0) at 0040e4b4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0 (0040e4d0) at 0040e4e4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e500 (0040e500) at 0040e569 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e5a0 (0040e5a0) at 0040e605 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e640 (0040e640) at 0040e654 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e670 (0040e670) at 0040e680 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e6a0 (0040e6a0) at 0040e6b4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00614471
//   TerminatedCString s_CActorPropertyList_snag__00614483
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList *this_ptr)

{
  char cVar1;
  int iVar2;
  CActorProperty *pCVar3;
  char *pcVar4;
  int in_stack_0000000c;
  char *in_stack_00000010;
  void *in_stack_00000014;
  void *in_stack_00000018;
  
  if (0x28 < this_ptr->propertyCount) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xec7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CActorPropertyList::snag - Too many actor properties!");
  }
  iVar2 = this_ptr->propertyCount;
  this_ptr->propertyCount = this_ptr->propertyCount + 1;
  pCVar3 = this_ptr->properties + iVar2;
  pcVar4 = pCVar3->name;
  pCVar3->type = in_stack_0000000c;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar3->field_58 = 0;
  pCVar3->field_54 = 1;
  pCVar3->field_108[0x18] = '\0';
  pCVar3->data1 = in_stack_00000014;
  pCVar3->data2 = in_stack_00000018;
  return (int)pCVar3;
}


// Assembly code:
// 0040e6c0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
// 0040e6c1: PUSH ESI
// 0040e6c2: PUSH EDI
// 0040e6c3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040e6c7: CMP dword ptr [EBX + 0x4],0x28
// 0040e6cb: JG 0x0040e73e
//   XREF to: 0040e73e (CONDITIONAL_JUMP)
// 0040e6cd: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_0040e6cd
// 0040e6d0: MOV EAX,EDX
// 0040e6d2: SHL EAX,0x4
// 0040e6d5: SUB EAX,EDX
// 0040e6d7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040e6db: SHL EAX,0x2
// 0040e6de: MOV EDI,dword ptr [EBX + 0x4]
// 0040e6e1: SUB EAX,EDX
// 0040e6e3: INC EDI
// 0040e6e4: SHL EAX,0x2
// 0040e6e7: LEA EDX,[EBX + 0x8]
// 0040e6ea: MOV dword ptr [EBX + 0x4],EDI
// 0040e6ed: ADD EDX,EAX
// 0040e6ef: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e6f3: LEA EDI,[EDX + 0x4]
// 0040e6f6: MOV dword ptr [EDX],EAX
// 0040e6f8: PUSH EDI
// 0040e6f9: MOV AL,byte ptr [ESI]
//   Label: LAB_0040e6f9
// 0040e6fb: MOV byte ptr [EDI],AL
// 0040e6fd: CMP AL,0x0
// 0040e6ff: JZ 0x0040e711
//   XREF to: 0040e711 (CONDITIONAL_JUMP)
// 0040e701: MOV AL,byte ptr [ESI + 0x1]
// 0040e704: ADD ESI,0x2
// 0040e707: MOV byte ptr [EDI + 0x1],AL
// 0040e70a: ADD EDI,0x2
// 0040e70d: CMP AL,0x0
// 0040e70f: JNZ 0x0040e6f9
//   XREF to: 0040e6f9 (CONDITIONAL_JUMP)
// 0040e711: POP EDI
//   Label: LAB_0040e711
// 0040e712: MOV dword ptr [EDX + 0x58],0x0
// 0040e719: MOV dword ptr [EDX + 0x54],0x1
// 0040e720: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0040e724: MOV byte ptr [EDX + 0x84],0x0
// 0040e72b: MOV dword ptr [EDX + 0x68],EAX
// 0040e72e: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0040e732: MOV dword ptr [EDX + 0xe8],EAX
// 0040e738: MOV EAX,EDX
// 0040e73a: POP EDI
// 0040e73b: POP ESI
// 0040e73c: POP EBX
// 0040e73d: RET
// 0040e73e: MOV ECX,0x614471
//   Label: LAB_0040e73e
//   XREF to: 00614471 (PARAM)
// 0040e743: MOV ESI,0xec7
// 0040e748: PUSH 0x614483
//   XREF to: 00614483 (DATA)
// 0040e74d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0040e753: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0040e759: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040e75e: ADD ESP,0x4
// 0040e761: JMP 0x0040e6cd
//   XREF to: 0040e6cd (UNCONDITIONAL_JUMP)
