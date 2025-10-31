// Name: crt_string.c_strcpy_FUN_00610760
// Address: 00610760
// Address Range: [[00610760, 00610784]]
// Convention: __cdecl
// Signature: char * crt_string.c_strcpy_FUN_00610760(char * dest, char * src)
// Cross-references:
//   crt_process.c_build_cmdline_FUN_00610258 (00610258) at 0061035c [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f788 [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl crt_string_c_strcpy_FUN_00610760(char *dest,char *src)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = dest;
  do {
    cVar1 = *src;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return dest;
    }
    cVar1 = src[1];
    src = src + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return dest;
}


// Assembly code:
// 00610760: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_string.c_strcpy_FUN_00610760
//   XREF to: Stack[0x4] (READ)
// 00610764: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00610768: PUSH EAX
// 00610769: MOV CL,byte ptr [EDX]
//   Label: LAB_00610769
// 0061076b: MOV byte ptr [EAX],CL
// 0061076d: CMP CL,0x0
// 00610770: JZ 0x00610783
//   XREF to: 00610783 (CONDITIONAL_JUMP)
// 00610772: MOV CL,byte ptr [EDX + 0x1]
// 00610775: ADD EDX,0x2
// 00610778: MOV byte ptr [EAX + 0x1],CL
// 0061077b: ADD EAX,0x2
// 0061077e: CMP CL,0x0
// 00610781: JNZ 0x00610769
//   XREF to: 00610769 (CONDITIONAL_JUMP)
// 00610783: POP EAX
//   Label: LAB_00610783
// 00610784: RET
