// Name: core_actor.cpp_serializeDescription_FUN_0040b290
// Address: 0040b290
// Address Range: [[0040b290, 0040b33e]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
// Cross-references:
//   core_actor.cpp_serializeClothList_FUN_0040be60 (0040be60) at 0040bec7 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeFloat_FUN_0040b770 (0040b770) at 0040b7a3 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeInteger_FUN_0040b7f0 (0040b7f0) at 0040b824 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeLocation_FUN_0040b480 (0040b480) at 0040b4c0 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0 (0040b3e0) at 0040b41b [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeQuaternion_FUN_0040b520 (0040b520) at 0040b55f [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeRules_FUN_0040c000 (0040c000) at 0040c065 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeString_FUN_0040b5c0 (0040b5c0) at 0040b6c7 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeVector_FUN_0040b340 (0040b340) at 0040b37b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_00613e9e
//   TerminatedCString s_anon_00613ea9
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
//   int g_IncludeCommentsWhenWriting
// Function calls:
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeDescription_FUN_0040b290(char *property_description,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
      if (iVar1 < 0) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  (property_description,property_name);
      }
    } while (iVar1 != 10);
    if ((g_ActorDataFile->_flag & 0x20) == 0) {
      return;
    }
  }
  else if ((g_IncludeCommentsWhenWriting == 0) && (property_name != (char *)0x0)) {
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"    // %s\n",property_name);
    if ((g_ActorDataFile->_flag & 0x20) == 0) {
      return;
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\n");
    if ((g_ActorDataFile->_flag & 0x20) == 0) {
      return;
    }
  }
  core_actor_cpp_handleActorPropertyParseError_FUN_0040b210(property_description,property_name);
  return;
}


// Assembly code:
// 0040b290: PUSH EBX
//   Label: core_actor.cpp_serializeDescription_FUN_0040b290
// 0040b291: PUSH ESI
// 0040b292: PUSH EDI
// 0040b293: PUSH EBP
// 0040b294: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040b298: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040b29c: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b2a3: JNZ 0x0040b2da
//   XREF to: 0040b2da (CONDITIONAL_JUMP)
// 0040b2a5: MOV EAX,[0x00822034]
//   Label: LAB_0040b2a5
//   XREF to: 00822034 (READ)
// 0040b2aa: PUSH EAX
// 0040b2ab: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040b2b0: ADD ESP,0x4
// 0040b2b3: MOV EBX,EAX
// 0040b2b5: TEST EAX,EAX
// 0040b2b7: JL 0x0040b2ce
//   XREF to: 0040b2ce (CONDITIONAL_JUMP)
// 0040b2b9: CMP EBX,0xa
//   Label: LAB_0040b2b9
// 0040b2bc: JNZ 0x0040b2a5
//   XREF to: 0040b2a5 (CONDITIONAL_JUMP)
// 0040b2be: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040b2c3: TEST byte ptr [EAX + 0xc],0x20
// 0040b2c7: JNZ 0x0040b330
//   XREF to: 0040b330 (CONDITIONAL_JUMP)
// 0040b2c9: POP EBP
// 0040b2ca: POP EDI
// 0040b2cb: POP ESI
// 0040b2cc: POP EBX
// 0040b2cd: RET
// 0040b2ce: PUSH ESI
//   Label: LAB_0040b2ce
// 0040b2cf: PUSH EDI
// 0040b2d0: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b2d5: ADD ESP,0x8
// 0040b2d8: JMP 0x0040b2b9
//   XREF to: 0040b2b9 (UNCONDITIONAL_JUMP)
// 0040b2da: CMP dword ptr [0x00822040],0x0
//   Label: LAB_0040b2da
//   XREF to: 00822040 (READ)
// 0040b2e1: JNZ 0x0040b30c
//   XREF to: 0040b30c (CONDITIONAL_JUMP)
// 0040b2e3: TEST ESI,ESI
// 0040b2e5: JZ 0x0040b30c
//   XREF to: 0040b30c (CONDITIONAL_JUMP)
// 0040b2e7: PUSH ESI
// 0040b2e8: PUSH 0x613e9e
//   XREF to: 00613e9e (DATA)
// 0040b2ed: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b2f3: PUSH EBX
// 0040b2f4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b2f9: ADD ESP,0xc
// 0040b2fc: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040b301: TEST byte ptr [EAX + 0xc],0x20
// 0040b305: JNZ 0x0040b330
//   XREF to: 0040b330 (CONDITIONAL_JUMP)
// 0040b307: POP EBP
// 0040b308: POP EDI
// 0040b309: POP ESI
// 0040b30a: POP EBX
// 0040b30b: RET
// 0040b30c: PUSH 0x613ea9
//   Label: LAB_0040b30c
//   XREF to: 00613ea9 (DATA)
// 0040b311: MOV EBP,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b317: PUSH EBP
// 0040b318: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b31d: ADD ESP,0x8
// 0040b320: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040b325: TEST byte ptr [EAX + 0xc],0x20
// 0040b329: JNZ 0x0040b330
//   XREF to: 0040b330 (CONDITIONAL_JUMP)
// 0040b32b: POP EBP
// 0040b32c: POP EDI
// 0040b32d: POP ESI
// 0040b32e: POP EBX
// 0040b32f: RET
// 0040b330: PUSH ESI
//   Label: LAB_0040b330
// 0040b331: PUSH EDI
// 0040b332: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b337: ADD ESP,0x8
// 0040b33a: POP EBP
// 0040b33b: POP EDI
// 0040b33c: POP ESI
// 0040b33d: POP EBX
// 0040b33e: RET
