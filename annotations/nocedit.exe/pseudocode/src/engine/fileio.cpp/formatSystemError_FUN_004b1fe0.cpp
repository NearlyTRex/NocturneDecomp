// Name: engine_fileio.cpp_formatSystemError_FUN_004b1fe0
// Address: 004b1fe0
// Address Range: [[004b1fe0, 004b2025]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_formatSystemError_FUN_004b1fe0(char * dest_buffer)
// Globals:
//   TerminatedCString s_s_006260e7
// Function calls:
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strerror_FUN_00601470

#include "nocturne.h"

void __cdecl engine_fileio_cpp_formatSystemError_FUN_004b1fe0(char *dest_buffer)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)crt_errno_c_errno_FUN_00601450();
  pcVar2 = crt_string_c_strerror_FUN_00601470(*piVar1);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  do {
    pcVar2 = dest_buffer;
    if (*dest_buffer == '\0') goto LAB_004b201b;
    if (*dest_buffer == '\0') break;
    pcVar2 = dest_buffer + 1;
    if (*pcVar2 == '\0') goto LAB_004b201b;
    dest_buffer = dest_buffer + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_004b201b:
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar2,"\n%s");
  return;
}


// Assembly code:
// 004b1fe0: PUSH ESI
//   Label: engine_fileio.cpp_formatSystemError_FUN_004b1fe0
// 004b1fe1: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b1fe5: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b1fea: MOV EDX,dword ptr [EAX]
// 004b1fec: PUSH EDX
// 004b1fed: CALL crt_string.c_strerror_FUN_00601470
//   XREF to: 00601470 (UNCONDITIONAL_CALL)
// 004b1ff2: ADD ESP,0x4
// 004b1ff5: TEST EAX,EAX
// 004b1ff7: JNZ 0x004b1ffb
//   XREF to: 004b1ffb (CONDITIONAL_JUMP)
// 004b1ff9: POP ESI
// 004b1ffa: RET
// 004b1ffb: PUSH EAX
//   Label: LAB_004b1ffb
// 004b1ffc: PUSH 0x6260e7
//   XREF to: 006260e7 (DATA)
// 004b2001: XOR DL,DL
// 004b2003: MOV AL,byte ptr [ESI]
//   Label: LAB_004b2003
// 004b2005: CMP AL,DL
// 004b2007: JZ 0x004b201b
//   XREF to: 004b201b (CONDITIONAL_JUMP)
// 004b2009: CMP AL,0x0
// 004b200b: JZ 0x004b2019
//   XREF to: 004b2019 (CONDITIONAL_JUMP)
// 004b200d: INC ESI
// 004b200e: MOV AL,byte ptr [ESI]
// 004b2010: CMP AL,DL
// 004b2012: JZ 0x004b201b
//   XREF to: 004b201b (CONDITIONAL_JUMP)
// 004b2014: INC ESI
// 004b2015: CMP AL,0x0
// 004b2017: JNZ 0x004b2003
//   XREF to: 004b2003 (CONDITIONAL_JUMP)
// 004b2019: SUB ESI,ESI
//   Label: LAB_004b2019
// 004b201b: PUSH ESI
//   Label: LAB_004b201b
// 004b201c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b2021: ADD ESP,0xc
// 004b2024: POP ESI
// 004b2025: RET
