// Name: crt_string.c_mbstrncpy_FUN_00605e90
// Address: 00605e90
// Address Range: [[00605e90, 00605ebc]]
// Convention: __watcallStack
// Signature: char * crt_string.c_mbstrncpy_FUN_00605e90(char * dest, char * src, int char_count)
// Cross-references:
//   crt_file.c_extract_path_component_FUN_00610400 (00610400) at 00610437 [UNCONDITIONAL_CALL]
//   crt_string.c_strncpy_safe_FUN_005ff130 (005ff130) at 005ff15f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_mbstrnbytes_FUN_00605ec0
//   crt_unknown.c_FUN_0060b670

#include "nocturne.h"

char * __watcallStack crt_string_c_mbstrncpy_FUN_00605e90(char *dest,char *src,int char_count)

{
  crt_string_c_mbstrnbytes_FUN_00605ec0(src,char_count);
  crt_unknown_c_FUN_0060b670();
  return dest;
}


// Assembly code:
// 00605e90: PUSH EBX
//   Label: crt_string.c_mbstrncpy_FUN_00605e90
// 00605e91: PUSH ESI
// 00605e92: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00605e96: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00605e9a: PUSH EDX
// 00605e9b: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00605e9f: PUSH ECX
// 00605ea0: CALL crt_string.c_mbstrnbytes_FUN_00605ec0
//   XREF to: 00605ec0 (UNCONDITIONAL_CALL)
// 00605ea5: ADD ESP,0x8
// 00605ea8: INC EAX
// 00605ea9: PUSH EAX
// 00605eaa: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00605eae: PUSH ESI
// 00605eaf: PUSH EBX
// 00605eb0: CALL crt_unknown.c_FUN_0060b670
//   XREF to: 0060b670 (UNCONDITIONAL_CALL)
// 00605eb5: ADD ESP,0xc
// 00605eb8: MOV EAX,EBX
// 00605eba: POP ESI
// 00605ebb: POP EBX
// 00605ebc: RET
