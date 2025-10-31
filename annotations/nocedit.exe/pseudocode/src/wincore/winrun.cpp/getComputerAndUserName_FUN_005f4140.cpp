// Name: wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
// Address: 005f4140
// Address Range: [[005f4140, 005f4208]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140(char * buffer)
// Cross-references:
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 (004b1c00) at 004b1c20 [UNCONDITIONAL_CALL]
// Globals:
//   GetUserNameA* GetUserNameA = 002119a4
//   GetComputerNameA* GetComputerNameA = 00211e1c
//   TerminatedCString s_COMPUTERNAME_0065818c
//   TerminatedCString s_USERNAME_00658199
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_memory.c_memset_FUN_005fde40
//   GetComputerNameA
//   GetUserNameA

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(char *buffer)

{
  char cVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  LPSTR lpBuffer;
  
  crt_memory_c_memset_FUN_005fde40(buffer,0,0x200);
  lpBuffer = buffer + 0x100;
  (*GetComputerNameA)(lpBuffer,(LPDWORD)&stack0xfffffff4);
  (*GetUserNameA)(buffer,(LPDWORD)&stack0x00000000);
  if ((buffer[0x100] == '\0') &&
     (pcVar2 = crt_env_c_getenv_FUN_006013f0("COMPUTERNAME"), pcVar2 != (char *)0x0)) {
    do {
      cVar1 = *pcVar2;
      *lpBuffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      lpBuffer[1] = cVar1;
      lpBuffer = lpBuffer + 2;
    } while (cVar1 != '\0');
    if (*buffer != '\0') {
      return;
    }
  }
  else if (*buffer != '\0') {
    return;
  }
  pcVar2 = crt_env_c_getenv_FUN_006013f0("USERNAME");
  if (pcVar2 == (char *)0x0) {
    return;
  }
  do {
    cVar1 = *pcVar2;
    *buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    buffer[1] = cVar1;
    buffer = buffer + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 005f4140: PUSH EBX
//   Label: wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
// 005f4141: PUSH ESI
// 005f4142: PUSH EDI
// 005f4143: SUB ESP,0x4
// 005f4146: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f414a: PUSH 0x200
// 005f414f: PUSH 0x0
// 005f4151: PUSH EBX
// 005f4152: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005f4157: ADD ESP,0xc
// 005f415a: MOV EAX,ESP
// 005f415c: MOV EDX,0x100
// 005f4161: PUSH EAX
// 005f4162: LEA EDI,[EBX + EDX*0x1]
// 005f4165: PUSH EDI
// 005f4166: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 005f416a: CALL dword ptr CS:[0x611570]
//   XREF to: EXTERNAL:00000067 (COMPUTED_CALL)
//   XREF to: 00611570 (READ)
// 005f4171: MOV EAX,ESP
// 005f4173: PUSH EAX
// 005f4174: MOV ECX,0x100
// 005f4179: PUSH EBX
// 005f417a: MOV dword ptr [ESP + 0x8],ECX
// 005f417e: CALL dword ptr CS:[0x611460]
//   XREF to: EXTERNAL:00000025 (COMPUTED_CALL)
//   XREF to: 00611460 (READ)
// 005f4185: CMP byte ptr [EBX + 0x100],0x0
// 005f418c: JZ 0x005f419a
//   XREF to: 005f419a (CONDITIONAL_JUMP)
// 005f418e: CMP byte ptr [EBX],0x0
//   Label: LAB_005f418e
// 005f4191: JZ 0x005f41d3
//   XREF to: 005f41d3 (CONDITIONAL_JUMP)
// 005f4193: ADD ESP,0x4
//   Label: LAB_005f4193
// 005f4196: POP EDI
// 005f4197: POP ESI
// 005f4198: POP EBX
// 005f4199: RET
// 005f419a: PUSH 0x65818c
//   Label: LAB_005f419a
//   XREF to: 0065818c (DATA)
// 005f419f: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 005f41a4: ADD ESP,0x4
// 005f41a7: TEST EAX,EAX
// 005f41a9: JZ 0x005f418e
//   XREF to: 005f418e (CONDITIONAL_JUMP)
// 005f41ab: MOV ESI,EAX
// 005f41ad: PUSH EDI
// 005f41ae: MOV AL,byte ptr [ESI]
//   Label: LAB_005f41ae
// 005f41b0: MOV byte ptr [EDI],AL
// 005f41b2: CMP AL,0x0
// 005f41b4: JZ 0x005f41c6
//   XREF to: 005f41c6 (CONDITIONAL_JUMP)
// 005f41b6: MOV AL,byte ptr [ESI + 0x1]
// 005f41b9: ADD ESI,0x2
// 005f41bc: MOV byte ptr [EDI + 0x1],AL
// 005f41bf: ADD EDI,0x2
// 005f41c2: CMP AL,0x0
// 005f41c4: JNZ 0x005f41ae
//   XREF to: 005f41ae (CONDITIONAL_JUMP)
// 005f41c6: POP EDI
//   Label: LAB_005f41c6
// 005f41c7: CMP byte ptr [EBX],0x0
// 005f41ca: JZ 0x005f41d3
//   XREF to: 005f41d3 (CONDITIONAL_JUMP)
// 005f41cc: ADD ESP,0x4
// 005f41cf: POP EDI
// 005f41d0: POP ESI
// 005f41d1: POP EBX
// 005f41d2: RET
// 005f41d3: PUSH 0x658199
//   Label: LAB_005f41d3
//   XREF to: 00658199 (DATA)
// 005f41d8: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 005f41dd: ADD ESP,0x4
// 005f41e0: TEST EAX,EAX
// 005f41e2: JZ 0x005f4193
//   XREF to: 005f4193 (CONDITIONAL_JUMP)
// 005f41e4: MOV ESI,EAX
// 005f41e6: MOV EDI,EBX
// 005f41e8: PUSH EDI
// 005f41e9: MOV AL,byte ptr [ESI]
//   Label: LAB_005f41e9
// 005f41eb: MOV byte ptr [EDI],AL
// 005f41ed: CMP AL,0x0
// 005f41ef: JZ 0x005f4201
//   XREF to: 005f4201 (CONDITIONAL_JUMP)
// 005f41f1: MOV AL,byte ptr [ESI + 0x1]
// 005f41f4: ADD ESI,0x2
// 005f41f7: MOV byte ptr [EDI + 0x1],AL
// 005f41fa: ADD EDI,0x2
// 005f41fd: CMP AL,0x0
// 005f41ff: JNZ 0x005f41e9
//   XREF to: 005f41e9 (CONDITIONAL_JUMP)
// 005f4201: POP EDI
//   Label: LAB_005f4201
// 005f4202: ADD ESP,0x4
// 005f4205: POP EDI
// 005f4206: POP ESI
// 005f4207: POP EBX
// 005f4208: RET
