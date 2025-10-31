// Name: crt_stdio.c_vsscanf_FUN_00600100
// Address: 00600100
// Address Range: [[00600100, 0060013b]]
// Convention: __cdecl
// Signature: int crt_stdio.c_vsscanf_FUN_00600100(char * str, char * format, va_list_t args)
// Cross-references:
//   crt_stdio.c_sscanf_FUN_0060013c (0060013c) at 00600154 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_doscan_FUN_00604950

#include "nocturne.h"

int __cdecl crt_stdio_c_vsscanf_FUN_00600100(char *str,char *format,va_list_t args)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  code *local_1c;
  code *local_18;
  char *local_14;
  
  local_14 = str;
  local_1c = crt_stdio_c_string_getc_FUN_006000d0;
  local_18 = crt_stdio_c_string_ungetc_FUN_006000f8;
  iVar1 = crt_stdio_c_doscan_FUN_00604950
                    ((scanf_state_t *)&local_1c,(char **)format,(va_list_t *)args);
  return iVar1;
}


// Assembly code:
// 00600100: PUSH EBX
//   Label: crt_stdio.c_vsscanf_FUN_00600100
// 00600101: PUSH ESI
// 00600102: SUB ESP,0x14
// 00600105: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00600109: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0060010d: MOV EDX,0x6000d0
//   XREF to: 006000d0 (PARAM)
// 00600112: PUSH ECX
// 00600113: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00600117: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060011b: PUSH ESI
// 0060011c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 00600120: MOV EBX,0x6000f8
//   XREF to: 006000f8 (PARAM)
// 00600125: PUSH EAX
// 00600126: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 006000d0 (DATA)
// 0060012a: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 006000f8 (DATA)
// 0060012e: CALL crt_stdio.c_doscan_FUN_00604950
//   XREF to: 00604950 (UNCONDITIONAL_CALL)
// 00600133: ADD ESP,0xc
// 00600136: ADD ESP,0x14
// 00600139: POP ESI
// 0060013a: POP EBX
// 0060013b: RET
