// Name: crt_stdio.c_clear_and_preserve_state_FUN_00600e64
// Address: 00600e64
// Address Range: [[00600e64, 00600e84]]
// Convention: __cdecl
// Signature: uint crt_stdio.c_clear_and_preserve_state_FUN_00600e64(FileEmbeddedData * embedded_data, uint error_code)
// Cross-references:
//   crt_fstream.cpp_openFile_FUN_00600e85 (00600e85) at 00600edd [UNCONDITIONAL_CALL]
//   engine_dosio.c_reopenFileStream_FUN_00481b50 (00481b50) at 00481b7a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_reportStreamError_FUN_00606020

#include "nocturne.h"

uint __cdecl
crt_stdio_c_clear_and_preserve_state_FUN_00600e64(FileEmbeddedData *embedded_data,uint error_code)

{
  uint uVar1;
  
  uVar1 = embedded_data->state_field;
  embedded_data->state_field = 0;
  crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,error_code);
  return uVar1;
}


// Assembly code:
// 00600e64: PUSH EBX
//   Label: crt_stdio.c_clear_and_preserve_state_FUN_00600e64
// 00600e65: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600e69: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00600e6d: PUSH EDX
// 00600e6e: PUSH EAX
// 00600e6f: MOV EBX,dword ptr [EAX + 0x10]
// 00600e72: MOV dword ptr [EAX + 0x10],0x0
// 00600e79: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 00600e7e: ADD ESP,0x8
// 00600e81: MOV EAX,EBX
// 00600e83: POP EBX
// 00600e84: RET
