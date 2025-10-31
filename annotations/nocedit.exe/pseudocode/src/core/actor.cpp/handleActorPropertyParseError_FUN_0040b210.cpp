// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
// Address: 0040b210
// Address Range: [[0040b210, 0040b287]]
// Convention: __cdecl
// Signature: void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
// Cross-references:
//   core_actor.cpp_serializeClothList_FUN_0040be60 (0040be60) at 0040bf44 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeDescription_FUN_0040b290 (0040b290) at 0040b2d0 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeFloat_FUN_0040b770 (0040b770) at 0040b7b9 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeInteger_FUN_0040b7f0 (0040b7f0) at 0040b83a [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeLocation_FUN_0040b480 (0040b480) at 0040b4d6 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0 (0040b9f0) at 0040ba65 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0 (0040b3e0) at 0040b431 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializePartStatus_FUN_0040bae0 (0040bae0) at 0040bb6d [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeQuaternion_FUN_0040b520 (0040b520) at 0040b575 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeRules_FUN_0040c000 (0040c000) at 0040c0e0 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeSimBox_FUN_0040bd70 (0040bd70) at 0040bde5 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeString_FUN_0040b5c0 (0040b5c0) at 0040b606 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeVector_FUN_0040b340 (0040b340) at 0040b391 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_unknown_00613dfe
//   TerminatedCString s_unknown_00613e08
//   TerminatedCString s_unknown_00613e12
//   TerminatedCString s_load_00613e1c
//   TerminatedCString s_save_00613e21
//   TerminatedCString s_core_actor_cpp_00613e26
//   TerminatedCString s_Error_sing_actor_propert_00613e38
//   int g_ActorReadingMode
//   CDemonActor* g_CurrentActorBeingProcessed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
          (char *property_description,char *property_type)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  char *pcVar3;
  CDemonActor *pCVar4;
  char *pcVar5;
  
  pCVar1 = g_CurrentActorBeingProcessed;
  pcVar2 = "(unknown)";
  pCVar4 = (CDemonActor *)"(unknown)";
  if (g_CurrentActorBeingProcessed != (CDemonActor *)0x0) {
    pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(g_CurrentActorBeingProcessed)
    ;
    pCVar4 = pCVar1;
  }
  pcVar5 = property_type;
  if (property_type == (char *)0x0) {
    pcVar5 = "(unknown)";
  }
  pcVar3 = "load";
  if (g_ActorReadingMode == 2) {
    pcVar3 = "save";
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 0x7ec;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",pcVar3,pCVar4,pcVar2,pcVar5,property_type);
  return;
}


// Assembly code:
// 0040b210: PUSH EBX
//   Label: core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
// 0040b211: PUSH ESI
// 0040b212: PUSH EDI
// 0040b213: PUSH EBP
// 0040b214: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040b218: MOV EAX,0x613e08
//   XREF to: 00613e08 (PARAM)
// 0040b21d: MOV EDX,dword ptr [0x0082203c]
//   XREF to: 0082203c (READ)
// 0040b223: MOV EBX,0x613dfe
//   XREF to: 00613dfe (PARAM)
// 0040b228: TEST EDX,EDX
// 0040b22a: JNZ 0x0040b27b
//   XREF to: 0040b27b (CONDITIONAL_JUMP)
// 0040b22c: TEST ESI,ESI
//   Label: LAB_0040b22c
// 0040b22e: JNZ 0x0040b235
//   XREF to: 0040b235 (CONDITIONAL_JUMP)
// 0040b230: MOV ESI,0x613e12
//   XREF to: 00613e12 (DATA)
// 0040b235: MOV ECX,dword ptr [0x00822038]
//   Label: LAB_0040b235
//   XREF to: 00822038 (READ)
// 0040b23b: MOV EDX,0x613e1c
//   XREF to: 00613e1c (PARAM)
// 0040b240: CMP ECX,0x2
// 0040b243: JNZ 0x0040b24a
//   XREF to: 0040b24a (CONDITIONAL_JUMP)
// 0040b245: MOV EDX,0x613e21
//   XREF to: 00613e21 (PARAM)
// 0040b24a: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_0040b24a
//   XREF to: Stack[0x4] (READ)
// 0040b24e: PUSH ECX
// 0040b24f: PUSH ESI
//   XREF to: 00613e12 (DATA)
// 0040b250: PUSH EAX
//   XREF to: 00613e08 (DATA)
// 0040b251: PUSH EBX
//   XREF to: 00613dfe (DATA)
// 0040b252: PUSH EDX
//   XREF to: 00613e1c (DATA)
//   XREF to: 00613e21 (DATA)
// 0040b253: MOV EDI,0x613e26
//   XREF to: 00613e26 (DATA)
// 0040b258: MOV EBP,0x7ec
// 0040b25d: PUSH 0x613e38
//   XREF to: 00613e38 (DATA)
// 0040b262: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0040b268: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0040b26e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040b273: ADD ESP,0x18
// 0040b276: POP EBP
// 0040b277: POP EDI
// 0040b278: POP ESI
// 0040b279: POP EBX
// 0040b27a: RET
// 0040b27b: PUSH EDX
//   Label: LAB_0040b27b
// 0040b27c: MOV EBX,EDX
// 0040b27e: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 0040b283: ADD ESP,0x4
// 0040b286: JMP 0x0040b22c
//   XREF to: 0040b22c (UNCONDITIONAL_JUMP)
