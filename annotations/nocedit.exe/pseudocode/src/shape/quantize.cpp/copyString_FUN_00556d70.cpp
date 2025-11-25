// Name: shape_quantize.cpp_copyString_FUN_00556d70
// Address: 00556d70
// Address Range: [[00556d70, 00556d84]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_copyString_FUN_00556d70(char * dest, char * src)
// Function calls:
//   crt_string.c_strncpy_FUN_00600f40

#include "nocturne.h"

void __cdecl shape_quantize_cpp_copyString_FUN_00556d70(char *dest,char *src)

{
  crt_string_c_strncpy_FUN_00600f40(dest,src,0x14);
  return;
}


// Assembly code:
// 00556d70: PUSH 0x14
//   Label: shape_quantize.cpp_copyString_FUN_00556d70
// 00556d72: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00556d76: PUSH EDX
// 00556d77: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00556d7b: PUSH ECX
// 00556d7c: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 00556d81: ADD ESP,0xc
// 00556d84: RET
