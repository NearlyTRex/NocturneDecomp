// Name: core_actor.cpp_CDemonActor_load_FUN_0040b050
// Address: 0040b050
// Address Range: [[0040b050, 0040b209]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_load_FUN_0040b050(CDemonActor * this_ptr, FILE * file_handle)
// Cross-references:
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff5c9 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00523247 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053be7b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0 (0053c0b0) at 0053c109 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_00613d27
//   TerminatedCString s_core_actor_cpp_00613d36
//   TerminatedCString s_Start_of_actor_file_tag__00613d48
//   TerminatedCString s_s_00613d76
//   TerminatedCString s_core_actor_cpp_00613d85
//   TerminatedCString s_End_of_actor_file_tag_mi_00613d97
//   TerminatedCString s_core_actor_cpp_00613dcd
//   TerminatedCString s_IO_Error_after_reading_s_00613ddf
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
//   CDemonActor* g_CurrentActorBeingProcessed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,FILE *file_handle)

{
  char cVar1;
  char *str1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  CDemonActor *pCVar5;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_00000024;
  int in_stack_00000030;
  char *pcStack_d4;
  undefined1 auStack_74 [12];
  char acStack_68 [12];
  undefined1 uStack_5c;
  char acStack_54 [68];
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
  auStack_74[0] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000000c," { %s \"%[^\"]\"\n",&stack0xffffff28,auStack_74);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,(char *)&pcStack_d4);
  if (iVar2 != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7b7;
    pcStack_d4 = str1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Start of actor file tag mismatch for class %s");
  }
  pcVar4 = acStack_68;
  pCVar5 = this_ptr;
  do {
    cVar1 = *pcVar4;
    pCVar5->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->actor_name[1] = cVar1;
    pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
  } while (cVar1 != '\0');
  pCVar5 = g_CurrentActorBeingProcessed;
  iVar2 = g_ActorReadingMode;
  g_ActorDataFile = in_stack_00000018;
  g_ActorReadingMode = 1;
  g_CurrentActorBeingProcessed = this_ptr;
                    /* this must be where it does the reading of the actual actor text and filling
                       obj details */
  pcStack_d4 = (char *)0x40b10b;
  (*this_ptr->vtable->serialize)(this_ptr);
  uStack_5c = 0;
  pcStack_d4 = (char *)0x40b134;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024," } %s \"%[^\"]\"\n");
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,&stack0xffffff44);
  if ((iVar3 != 0) ||
     (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->actor_name,acStack_54), iVar3 != 0)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("End of actor file tag mismatch for class %s name \"%s\"");
  }
  if ((*(byte *)(in_stack_00000030 + 0xc) & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("IO Error after reading %s \"%s\"");
  }
  g_CurrentActorBeingProcessed = pCVar5;
  g_ActorReadingMode = iVar2;
  g_ActorDataFile = in_stack_00000014;
  return;
}


// Assembly code:
// 0040b050: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_load_FUN_0040b050
// 0040b051: PUSH ESI
// 0040b052: PUSH EDI
// 0040b053: PUSH EBP
// 0040b054: SUB ESP,0xcc
// 0040b05a: MOV EBX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 0040b061: PUSH EBX
// 0040b062: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 0040b067: MOV ESI,EAX
// 0040b069: ADD ESP,0x4
// 0040b06c: MOV EBP,EAX
// 0040b06e: XOR AH,AH
// 0040b070: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0xdc] (DATA)
// 0040b073: MOV byte ptr [ESP + 0x64],AH
//   XREF to: Stack[-0x78] (WRITE)
// 0040b077: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x78] (DATA)
// 0040b07b: PUSH EAX
// 0040b07c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xdc] (DATA)
// 0040b080: PUSH EAX
// 0040b081: PUSH 0x613d27
//   XREF to: 00613d27 (DATA)
// 0040b086: MOV EDX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x8] (READ)
// 0040b08d: PUSH EDX
// 0040b08e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b093: ADD ESP,0x10
// 0040b096: MOV EAX,ESP
// 0040b098: PUSH EAX
// 0040b099: PUSH ESI
// 0040b09a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0040b09f: ADD ESP,0x8
// 0040b0a2: TEST EAX,EAX
// 0040b0a4: JNZ 0x0040b19f
//   XREF to: 0040b19f (CONDITIONAL_JUMP)
// 0040b0aa: LEA ESI,[ESP + 0x64]
//   Label: LAB_0040b0aa
//   XREF to: Stack[-0x78] (DATA)
// 0040b0ae: MOV EDI,EBX
// 0040b0b0: PUSH EDI
// 0040b0b1: MOV AL,byte ptr [ESI]
//   Label: LAB_0040b0b1
//   XREF to: Stack[-0x78] (DATA)
// 0040b0b3: MOV byte ptr [EDI],AL
// 0040b0b5: CMP AL,0x0
// 0040b0b7: JZ 0x0040b0c9
//   XREF to: 0040b0c9 (CONDITIONAL_JUMP)
// 0040b0b9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x77] (READ)
// 0040b0bc: ADD ESI,0x2
// 0040b0bf: MOV byte ptr [EDI + 0x1],AL
// 0040b0c2: ADD EDI,0x2
// 0040b0c5: CMP AL,0x0
// 0040b0c7: JNZ 0x0040b0b1
//   XREF to: 0040b0b1 (CONDITIONAL_JUMP)
// 0040b0c9: POP EDI
//   Label: LAB_0040b0c9
// 0040b0ca: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040b0cf: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040b0d6: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 0040b0dd: MOV EDI,dword ptr [0x00822038]
//   XREF to: 00822038 (READ)
// 0040b0e3: MOV [0x00822034],EAX
//   XREF to: 00822034 (WRITE)
// 0040b0e8: MOV EAX,0x1
// 0040b0ed: PUSH EBX
// 0040b0ee: MOV [0x00822038],EAX
//   XREF to: 00822038 (WRITE)
// 0040b0f3: MOV EAX,dword ptr [EBX + 0x154]
// 0040b0f9: MOV ESI,dword ptr [0x0082203c]
//   XREF to: 0082203c (READ)
// 0040b0ff: MOV dword ptr [0x0082203c],EBX
//   XREF to: 0082203c (WRITE)
// 0040b105: CALL dword ptr [EAX + 0xe8]
// 0040b10b: ADD ESP,0x4
// 0040b10e: LEA EAX,[ESP + 0x64]
// 0040b112: PUSH EAX
// 0040b113: LEA EAX,[ESP + 0x4]
// 0040b117: XOR DH,DH
// 0040b119: PUSH EAX
// 0040b11a: MOV byte ptr [ESP + 0x8],DH
// 0040b11e: PUSH 0x613d76
//   XREF to: 00613d76 (DATA)
// 0040b123: MOV byte ptr [ESP + 0x70],DH
// 0040b127: MOV EDX,dword ptr [ESP + 0xf0]
// 0040b12e: PUSH EDX
// 0040b12f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b134: ADD ESP,0x10
// 0040b137: MOV EAX,ESP
// 0040b139: PUSH EAX
// 0040b13a: PUSH EBP
// 0040b13b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0040b140: ADD ESP,0x8
// 0040b143: TEST EAX,EAX
// 0040b145: JZ 0x0040b1c8
//   XREF to: 0040b1c8 (CONDITIONAL_JUMP)
// 0040b14b: PUSH EBX
//   Label: LAB_0040b14b
// 0040b14c: PUSH EBP
// 0040b14d: MOV ECX,0x613d85
//   XREF to: 00613d85 (PARAM)
// 0040b152: MOV EAX,0x7d4
// 0040b157: PUSH 0x613d97
//   XREF to: 00613d97 (DATA)
// 0040b15c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0040b162: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0040b167: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040b16c: ADD ESP,0xc
// 0040b16f: MOV EAX,dword ptr [ESP + 0xe4]
//   Label: LAB_0040b16f
// 0040b176: TEST byte ptr [EAX + 0xc],0x20
// 0040b17a: JNZ 0x0040b1e0
//   XREF to: 0040b1e0 (CONDITIONAL_JUMP)
// 0040b17c: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_0040b17c
// 0040b183: MOV dword ptr [0x0082203c],ESI
//   XREF to: 0082203c (WRITE)
// 0040b189: MOV dword ptr [0x00822038],EDI
//   XREF to: 00822038 (WRITE)
// 0040b18f: MOV [0x00822034],EAX
//   XREF to: 00822034 (WRITE)
// 0040b194: ADD ESP,0xcc
// 0040b19a: POP EBP
// 0040b19b: POP EDI
// 0040b19c: POP ESI
// 0040b19d: POP EBX
// 0040b19e: RET
// 0040b19f: PUSH ESI
//   Label: LAB_0040b19f
// 0040b1a0: MOV ECX,0x613d36
//   XREF to: 00613d36 (PARAM)
// 0040b1a5: MOV EDI,0x7b7
// 0040b1aa: PUSH 0x613d48
//   XREF to: 00613d48 (DATA)
// 0040b1af: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0040b1b5: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0040b1bb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040b1c0: ADD ESP,0x8
// 0040b1c3: JMP 0x0040b0aa
//   XREF to: 0040b0aa (UNCONDITIONAL_JUMP)
// 0040b1c8: LEA EAX,[ESP + 0x64]
//   Label: LAB_0040b1c8
// 0040b1cc: PUSH EAX
// 0040b1cd: PUSH EBX
// 0040b1ce: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0040b1d3: ADD ESP,0x8
// 0040b1d6: TEST EAX,EAX
// 0040b1d8: JNZ 0x0040b14b
//   XREF to: 0040b14b (CONDITIONAL_JUMP)
// 0040b1de: JMP 0x0040b16f
//   XREF to: 0040b16f (UNCONDITIONAL_JUMP)
// 0040b1e0: PUSH EBX
//   Label: LAB_0040b1e0
// 0040b1e1: PUSH EBP
// 0040b1e2: MOV EDX,0x613dcd
//   XREF to: 00613dcd (PARAM)
// 0040b1e7: MOV ECX,0x7d9
// 0040b1ec: PUSH 0x613ddf
//   XREF to: 00613ddf (DATA)
// 0040b1f1: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040b1f7: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040b1fd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040b202: ADD ESP,0xc
// 0040b205: JMP 0x0040b17c
//   XREF to: 0040b17c (UNCONDITIONAL_JUMP)
