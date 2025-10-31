// Name: core_actor.cpp_getActorClassByName_FUN_0040c3c0
// Address: 0040c3c0
// Address Range: [[0040c3c0, 0040c42c]]
// Convention: __cdecl
// Signature: CDemonActorType * core_actor.cpp_getActorClassByName_FUN_0040c3c0(char * className)
// Cross-references:
//   core_actor.cpp_createActorByName_FUN_0040c430 (0040c430) at 0040c438 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 005230ab [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   undefined4 g_ActorClassRegistrations[1]
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

CDemonActorType * __cdecl core_actor_cpp_getActorClassByName_FUN_0040c3c0(char *className)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    bVar1 = *className;
    className = (char *)((byte *)className + 1);
    if (bVar1 == 0) break;
    if ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0xe0U) != 0) {
      iVar2 = crt_ctype_c_tolower_FUN_005feb30((uint)bVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  if (0 < g_NumActorClassTypes) {
    iVar2 = 0;
    do {
      if (uVar3 == (*(CDemonActorType **)((int)g_ActorClassRegistrations + iVar2))->name_hash) {
        return *(CDemonActorType **)((int)g_ActorClassRegistrations + iVar2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < g_NumActorClassTypes * 4);
  }
  return (CDemonActorType *)0x0;
}


// Assembly code:
// 0040c3c0: PUSH EBX
//   Label: core_actor.cpp_getActorClassByName_FUN_0040c3c0
// 0040c3c1: PUSH ESI
// 0040c3c2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040c3c6: XOR EBX,EBX
// 0040c3c8: XOR EAX,EAX
//   Label: LAB_0040c3c8
// 0040c3ca: MOV AL,byte ptr [ESI]
// 0040c3cc: INC ESI
// 0040c3cd: TEST EAX,EAX
// 0040c3cf: JNZ 0x0040c3f7
//   XREF to: 0040c3f7 (CONDITIONAL_JUMP)
// 0040c3d1: MOV EDX,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 0040c3d7: MOV ESI,EBX
// 0040c3d9: TEST EDX,EDX
// 0040c3db: JLE 0x0040c3f2
//   XREF to: 0040c3f2 (CONDITIONAL_JUMP)
// 0040c3dd: SHL EDX,0x2
// 0040c3e0: MOV EBX,dword ptr [EAX + 0x822048]
//   Label: LAB_0040c3e0
//   XREF to: 00822048 (DATA)
//   XREF to: 0082204c (DATA)
// 0040c3e6: CMP ESI,dword ptr [EBX + 0x38]
// 0040c3e9: JZ 0x0040c428
//   XREF to: 0040c428 (CONDITIONAL_JUMP)
// 0040c3eb: ADD EAX,0x4
// 0040c3ee: CMP EAX,EDX
// 0040c3f0: JL 0x0040c3e0
//   XREF to: 0040c3e0 (CONDITIONAL_JUMP)
// 0040c3f2: XOR EAX,EAX
//   Label: LAB_0040c3f2
// 0040c3f4: POP ESI
// 0040c3f5: POP EBX
// 0040c3f6: RET
// 0040c3f7: MOV DL,AL
//   Label: LAB_0040c3f7
// 0040c3f9: INC DL
// 0040c3fb: AND EDX,0xff
// 0040c401: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0040c408: JZ 0x0040c3c8
//   XREF to: 0040c3c8 (CONDITIONAL_JUMP)
// 0040c40a: PUSH EAX
// 0040c40b: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 0040c410: MOV EDX,EBX
// 0040c412: SHL EDX,0x7
// 0040c415: SHR EBX,0x19
// 0040c418: ADD EDX,EBX
// 0040c41a: MOV EBX,EAX
// 0040c41c: SHL EBX,0x11
// 0040c41f: ADD EBX,EDX
// 0040c421: ADD ESP,0x4
// 0040c424: ADD EBX,EAX
// 0040c426: JMP 0x0040c3c8
//   XREF to: 0040c3c8 (UNCONDITIONAL_JUMP)
// 0040c428: MOV EAX,EBX
//   Label: LAB_0040c428
// 0040c42a: POP ESI
// 0040c42b: POP EBX
// 0040c42c: RET
