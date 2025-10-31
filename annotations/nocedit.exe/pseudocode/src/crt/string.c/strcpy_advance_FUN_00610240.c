// Name: crt_string.c_strcpy_advance_FUN_00610240
// Address: 00610240
// Address Range: [[00610240, 00610256]]
// Convention: __cdecl
// Signature: char * crt_string.c_strcpy_advance_FUN_00610240(char * dest, char * src)
// Cross-references:
//   crt_process.c_build_cmdline_FUN_00610258 (00610258) at 0061033a [UNCONDITIONAL_CALL]
//   crt_process.c_build_command_line_FUN_006103a4 (006103a4) at 006103bc [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl crt_string_c_strcpy_advance_FUN_00610240(char *dest,char *src)

{
  char cVar1;
  
  for (; cVar1 = *src, *dest = cVar1, cVar1 != '\0'; src = src + 1) {
    dest = dest + 1;
  }
  return dest;
}


// Assembly code:
// 00610240: PUSH EBX
//   Label: crt_string.c_strcpy_advance_FUN_00610240
// 00610241: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00610245: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00610249: MOV BL,byte ptr [EDX]
//   Label: LAB_00610249
// 0061024b: MOV byte ptr [EAX],BL
// 0061024d: TEST BL,BL
// 0061024f: JZ 0x00610255
//   XREF to: 00610255 (CONDITIONAL_JUMP)
// 00610251: INC EAX
// 00610252: INC EDX
// 00610253: JMP 0x00610249
//   XREF to: 00610249 (UNCONDITIONAL_JUMP)
// 00610255: POP EBX
//   Label: LAB_00610255
// 00610256: RET
