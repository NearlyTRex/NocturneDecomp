// Name: crt_string.c_strchr_FUN_0060f890
// Address: 0060f890
// Address Range: [[0060f890, 0060f8b1]]
// Convention: __cdecl
// Signature: char * crt_string.c_strchr_FUN_0060f890(char * str, int ch)
// Cross-references:
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e76d [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl crt_string_c_strchr_FUN_0060f890(char *str,int ch)

{
  char cVar1;
  
  cVar1 = *str;
  while( true ) {
    if ((char)ch == cVar1) {
      return str;
    }
    cVar1 = *str;
    str = str + 1;
    if (cVar1 == '\0') break;
    cVar1 = *str;
  }
  return (char *)0x0;
}


// Assembly code:
// 0060f890: PUSH EBX
//   Label: crt_string.c_strchr_FUN_0060f890
// 0060f891: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060f895: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060f899: MOV BL,DL
// 0060f89b: CMP DL,byte ptr [EAX]
// 0060f89d: JZ 0x0060f8b0
//   XREF to: 0060f8b0 (CONDITIONAL_JUMP)
// 0060f89f: MOV EDX,EAX
//   Label: LAB_0060f89f
// 0060f8a1: MOV CL,byte ptr [EDX]
// 0060f8a3: INC EAX
// 0060f8a4: TEST CL,CL
// 0060f8a6: JZ 0x0060f8ae
//   XREF to: 0060f8ae (CONDITIONAL_JUMP)
// 0060f8a8: CMP BL,byte ptr [EAX]
// 0060f8aa: JZ 0x0060f8b0
//   XREF to: 0060f8b0 (CONDITIONAL_JUMP)
// 0060f8ac: JMP 0x0060f89f
//   XREF to: 0060f89f (UNCONDITIONAL_JUMP)
// 0060f8ae: XOR EAX,EAX
//   Label: LAB_0060f8ae
// 0060f8b0: POP EBX
//   Label: LAB_0060f8b0
// 0060f8b1: RET
