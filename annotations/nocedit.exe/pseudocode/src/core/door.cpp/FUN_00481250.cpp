// Name: core_door.cpp_FUN_00481250
// Address: 00481250
// Address Range: [[00481250, 004812a8]]
// Convention: unknown
// Signature: undefined core_door.cpp_FUN_00481250()
// Cross-references:
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 0048137c [DATA]
// Globals:
//   TerminatedCString s_Closed_00621340
//   undefined4 s_losed_00621341
//   TerminatedCString s_Open_00621347
//   undefined4 DAT_00621348
//   undefined4 DAT_00621349
//   undefined4 DAT_0062134a
//   TerminatedCString s_Unknown_0062134c
//   undefined4 s_nknown_0062134d
//   undefined4 g_CDoorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void core_door_cpp_FUN_00481250(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CDoorClassInfo.name_hash)
  ;
  fVar2 = pCVar3[2].orient.pitch;
  if (fVar2 == 0.0) {
    pcVar4 = "Closed";
  }
  else if (fVar2 == 2.8026e-45) {
    pcVar4 = "Open";
  }
  else {
    pcVar4 = "Unknown";
  }
  do {
    cVar1 = *pcVar4;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00481250: PUSH ESI
//   Label: core_door.cpp_FUN_00481250
// 00481251: PUSH EDI
// 00481252: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00481256: MOV EDX,dword ptr [0x02c14d14]
//   XREF to: 02c14d14 (READ)
// 0048125c: PUSH EDX
// 0048125d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00481261: PUSH ECX
// 00481262: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00481267: MOV EAX,dword ptr [EAX + 0x2e0]
// 0048126d: ADD ESP,0x8
// 00481270: TEST EAX,EAX
// 00481272: JBE 0x0048129b
//   XREF to: 0048129b (CONDITIONAL_JUMP)
// 00481274: CMP EAX,0x2
// 00481277: JNZ 0x004812a2
//   XREF to: 004812a2 (CONDITIONAL_JUMP)
// 00481279: MOV ESI,0x621347
//   XREF to: 00621347 (DATA)
// 0048127e: PUSH EDI
//   Label: LAB_0048127e
// 0048127f: MOV AL,byte ptr [ESI]
//   Label: LAB_0048127f
//   XREF to: 00621340 (READ)
//   XREF to: 00621347 (READ)
//   XREF to: 00621349 (READ)
//   XREF to: 0062134c (READ)
// 00481281: MOV byte ptr [EDI],AL
// 00481283: CMP AL,0x0
// 00481285: JZ 0x00481297
//   XREF to: 00481297 (CONDITIONAL_JUMP)
// 00481287: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00621341 (READ)
//   XREF to: 00621348 (READ)
//   XREF to: 0062134a (READ)
//   XREF to: 0062134d (READ)
// 0048128a: ADD ESI,0x2
// 0048128d: MOV byte ptr [EDI + 0x1],AL
// 00481290: ADD EDI,0x2
// 00481293: CMP AL,0x0
// 00481295: JNZ 0x0048127f
//   XREF to: 0048127f (CONDITIONAL_JUMP)
// 00481297: POP EDI
//   Label: LAB_00481297
// 00481298: POP EDI
// 00481299: POP ESI
// 0048129a: RET
// 0048129b: MOV ESI,0x621340
//   Label: LAB_0048129b
//   XREF to: 00621340 (DATA)
// 004812a0: JMP 0x0048127e
//   XREF to: 0048127e (UNCONDITIONAL_JUMP)
// 004812a2: MOV ESI,0x62134c
//   Label: LAB_004812a2
//   XREF to: 0062134c (DATA)
// 004812a7: JMP 0x0048127e
//   XREF to: 0048127e (UNCONDITIONAL_JUMP)
