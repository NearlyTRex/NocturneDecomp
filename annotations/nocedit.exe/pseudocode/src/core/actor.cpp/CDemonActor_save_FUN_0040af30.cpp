// Name: core_actor.cpp_CDemonActor_save_FUN_0040af30
// Address: 0040af30
// Address Range: [[0040af30, 0040b041]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_save_FUN_0040af30(CDemonActor * this_ptr, FILE * file_handle)
// Cross-references:
//   core_inv.cpp_CInventory_save_FUN_004ff210 (004ff210) at 004ff353 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 00523910 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bdee [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 (0053c140) at 0053c1e5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613c80
//   TerminatedCString s_CDemonActor_save_tried_t_00613c92
//   TerminatedCString s_s_s_s_00613cd3
//   TerminatedCString s_s_s_s_00613ce0
//   TerminatedCString s_core_actor_cpp_00613ced
//   TerminatedCString s_IO_Error_after_writing_a_00613cff
//   char* g_PropertyNamePrefix = 00000000
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
//   CDemonActor* g_CurrentActorBeingProcessed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_0040aee0
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040af30(CDemonActor *this_ptr,FILE *file_handle)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  int unk;
  char *pcStack0000000c;
  int in_stack_00000014;
  FILE *in_stack_00000018;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x778;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::save - tried to save actor of class %s with no name",pcVar2);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%s{ %s \"%s\"\n",&g_PropertyNamePrefix,pcVar2,this_ptr);
  pCVar1 = g_CurrentActorBeingProcessed;
  g_ActorDataFile = file_handle;
  g_CurrentActorBeingProcessed = this_ptr;
  g_ActorReadingMode = 2;
  core_actor_cpp_CDemonActor_FUN_0040aee0(2);
  unk = (*((this_ptr->metadata).vtable)->serialize)(this_ptr);
  core_actor_cpp_CDemonActor_FUN_0040aee0(unk);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s} %s \"%s\"\n");
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x79a;
    pcStack0000000c = pcVar2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("IO Error after writing actor of type %s");
  }
  g_ActorDataFile = in_stack_00000018;
  g_CurrentActorBeingProcessed = pCVar1;
  g_ActorReadingMode = in_stack_00000014;
  return;
}


// Assembly code:
// 0040af30: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_save_FUN_0040af30
// 0040af31: PUSH ESI
// 0040af32: PUSH EDI
// 0040af33: PUSH EBP
// 0040af34: SUB ESP,0x8
// 0040af37: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040af3b: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0040af3f: CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)
// 0040af44: PUSH EBX
// 0040af45: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 0040af4a: ADD ESP,0x4
// 0040af4d: MOV DL,byte ptr [EBX]
// 0040af4f: MOV ESI,EAX
// 0040af51: TEST DL,DL
// 0040af53: JNZ 0x0040af79
//   XREF to: 0040af79 (CONDITIONAL_JUMP)
// 0040af55: PUSH EAX
// 0040af56: MOV EDX,0x613c80
//   XREF to: 00613c80 (PARAM)
// 0040af5b: MOV ECX,0x778
// 0040af60: PUSH 0x613c92
//   XREF to: 00613c92 (DATA)
// 0040af65: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040af6b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040af71: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040af76: ADD ESP,0x8
// 0040af79: PUSH EBX
//   Label: LAB_0040af79
// 0040af7a: PUSH ESI
// 0040af7b: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040af80: PUSH 0x613cd3
//   XREF to: 00613cd3 (DATA)
// 0040af85: PUSH EDI
// 0040af86: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040af8b: ADD ESP,0x14
// 0040af8e: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040af93: MOV EBP,dword ptr [0x0082203c]
//   XREF to: 0082203c (READ)
// 0040af99: PUSH 0x1
// 0040af9b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040af9f: MOV EAX,[0x00822038]
//   XREF to: 00822038 (READ)
// 0040afa4: MOV dword ptr [0x00822034],EDI
//   XREF to: 00822034 (WRITE)
// 0040afaa: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0040afae: MOV EAX,0x2
// 0040afb3: MOV dword ptr [0x0082203c],EBX
//   XREF to: 0082203c (WRITE)
// 0040afb9: MOV [0x00822038],EAX
//   XREF to: 00822038 (WRITE)
// 0040afbe: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040afc3: ADD ESP,0x4
// 0040afc6: MOV EAX,dword ptr [EBX + 0x154]
// 0040afcc: PUSH EBX
// 0040afcd: CALL dword ptr [EAX + 0xe8]
// 0040afd3: ADD ESP,0x4
// 0040afd6: PUSH -0x1
// 0040afd8: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040afdd: ADD ESP,0x4
// 0040afe0: PUSH EBX
// 0040afe1: PUSH ESI
// 0040afe2: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040afe7: PUSH 0x613ce0
//   XREF to: 00613ce0 (DATA)
// 0040afec: PUSH EDI
// 0040afed: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040aff2: MOV DH,byte ptr [EDI + 0xc]
// 0040aff5: ADD ESP,0x14
// 0040aff8: TEST DH,0x20
// 0040affb: JNZ 0x0040b01c
//   XREF to: 0040b01c (CONDITIONAL_JUMP)
// 0040affd: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0040affd
// 0040b001: MOV [0x00822034],EAX
//   XREF to: 00822034 (WRITE)
// 0040b006: MOV EAX,dword ptr [ESP]
// 0040b009: MOV dword ptr [0x0082203c],EBP
//   XREF to: 0082203c (WRITE)
// 0040b00f: MOV [0x00822038],EAX
//   XREF to: 00822038 (WRITE)
// 0040b014: ADD ESP,0x8
// 0040b017: POP EBP
// 0040b018: POP EDI
// 0040b019: POP ESI
// 0040b01a: POP EBX
// 0040b01b: RET
// 0040b01c: PUSH ESI
//   Label: LAB_0040b01c
// 0040b01d: MOV EDX,0x613ced
//   XREF to: 00613ced (PARAM)
// 0040b022: MOV ECX,0x79a
// 0040b027: PUSH 0x613cff
//   XREF to: 00613cff (DATA)
// 0040b02c: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040b032: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040b038: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040b03d: ADD ESP,0x8
// 0040b040: JMP 0x0040affd
//   XREF to: 0040affd (UNCONDITIONAL_JUMP)
