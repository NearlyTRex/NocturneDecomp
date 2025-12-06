// Name: crt_stdio.c_FormatWideString_FUN_006031c0
// Address: 006031c0
// Address Range: [[006031c0, 00603235]]
// Convention: __cdecl
// Signature: void crt_stdio.c_FormatWideString_FUN_006031c0(wchar_t * wide_string_offset, ushort segment, FormatSpec * spec_info, OUTPUT_CALLBACK output_func)

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

void __cdecl
crt_stdio_c_FormatWideString_FUN_006031c0
          (wchar_t *wide_string_offset,ushort segment,FormatSpec *spec_info,
          OUTPUT_CALLBACK output_func)

{
  wchar_t wVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  byte *pbVar3;
  code *in_stack_00000014;
  
  iVar2 = spec_info->content_length;
  do {
    if (iVar2 < 1) {
      return;
    }
    wVar1 = *wide_string_offset;
    wide_string_offset = wide_string_offset + 1;
    iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                      ((wchar_t)&stack0xffffffe8,(char *)(uint)(ushort)wVar1);
    pbVar3 = &stack0xffffffec;
    if (iVar2 != -1) {
      if (spec_info->content_length < iVar2) {
        spec_info->content_length = 0;
        return;
      }
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        (*in_stack_00000014)(spec_info,(uint)*pbVar3);
        pbVar3 = pbVar3 + 1;
        spec_info->content_length = spec_info->content_length + -1;
      }
    }
    iVar2 = spec_info->content_length;
  } while( true );
}
