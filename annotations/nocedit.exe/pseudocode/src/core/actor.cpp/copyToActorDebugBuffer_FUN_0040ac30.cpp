// Name: core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30
// Address: 0040ac30
// Address Range: [[0040ac30, 0040ac73]]
// Convention: __cdecl
// Signature: char * core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30(char * source_string)
// Globals:
//   char[50] g_ActorDebugBuffer
//   undefined4 CHAR_ARRAY_00821fc4
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040ac30(char *source_string)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  crt_memory_c_memset_FUN_005fde40(g_ActorDebugBuffer,0,0x32);
  if (source_string == (char *)0x0) {
    return g_ActorDebugBuffer;
  }
  pcVar2 = g_ActorDebugBuffer;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)source_string;
    source_string = source_string + (uint)bVar3 * -8 + 4;
    pcVar2 = pcVar2 + (uint)bVar3 * -8 + 4;
  }
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pcVar2 = *source_string;
    source_string = source_string + (uint)bVar3 * -2 + 1;
    pcVar2 = pcVar2 + (uint)bVar3 * -2 + 1;
  }
  return g_ActorDebugBuffer;
}


// Assembly code:
// 0040ac30: PUSH ESI
//   Label: core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30
// 0040ac31: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040ac35: PUSH 0x32
// 0040ac37: PUSH 0x0
// 0040ac39: PUSH 0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ac3e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0040ac43: ADD ESP,0xc
// 0040ac46: TEST ESI,ESI
// 0040ac48: JNZ 0x0040ac51
//   XREF to: 0040ac51 (CONDITIONAL_JUMP)
// 0040ac4a: MOV EAX,0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ac4f: POP ESI
// 0040ac50: RET
// 0040ac51: PUSH EDI
//   Label: LAB_0040ac51
// 0040ac52: MOV ECX,0x31
// 0040ac57: MOV EDI,0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ac5c: PUSH EDI
//   XREF to: 00821fc0 (DATA)
// 0040ac5d: MOV EAX,ECX
// 0040ac5f: SHR ECX,0x2
// 0040ac62: MOVSD.REP ES:EDI,ESI
//   XREF to: 00821fc0 (WRITE)
//   XREF to: 00821fc4 (WRITE)
// 0040ac64: MOV CL,AL
// 0040ac66: AND CL,0x3
// 0040ac69: MOVSB.REP ES:EDI,ESI
//   XREF to: 00821fc4 (WRITE)
// 0040ac6b: POP EDI
// 0040ac6c: POP EDI
// 0040ac6d: MOV EAX,0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ac72: POP ESI
// 0040ac73: RET
