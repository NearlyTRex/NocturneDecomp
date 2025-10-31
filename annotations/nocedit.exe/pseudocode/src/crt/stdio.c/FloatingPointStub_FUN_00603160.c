// Name: crt_stdio.c_FloatingPointStub_FUN_00603160
// Address: 00603160
// Address Range: [[00603160, 0060317a]]
// Convention: __cdecl
// Signature: void crt_stdio.c_FloatingPointStub_FUN_00603160(char * buffer, va_list_t * args, FormatSpec * spec_info)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 006034cc [UNCONDITIONAL_CALL]
// Globals:
//   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c = 0060ad30
// Function calls:
//   crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

void __cdecl
crt_stdio_c_FloatingPointStub_FUN_00603160(char *buffer,va_list_t *args,FormatSpec *spec_info)

{
  (*PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c)
            ((double *)buffer,(double *)args,spec_info->unknown_0x00);
  return;
}


// Assembly code:
// 00603160: PUSH EBX
//   Label: crt_stdio.c_FloatingPointStub_FUN_00603160
// 00603161: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00603165: PUSH EDX
// 00603166: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060316a: PUSH EBX
// 0060316b: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060316f: PUSH ECX
// 00603170: CALL dword ptr [PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c]
//   XREF to: 0060ad30 (COMPUTED_CALL)
//   XREF to: 0068540c (READ)
// 00603176: ADD ESP,0xc
// 00603179: POP EBX
// 0060317a: RET
