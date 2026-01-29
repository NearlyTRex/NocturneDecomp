// Name: crt_stdio.c_FormatWideString_FUN_006031c0
// Address: 006031c0
// Address Range: [[006031c0, 00603235]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_FormatWideString_FUN_006031c0 (wchar_t *wide_string_offset,ushort segment,FormatSpec *spec_info, OUTPUT_CALLBACK output_func)

#include "nocturne.h"

void __cdecl
FormatWideString
          (wchar_t *wide_string_offset,ushort segment,FormatSpec *spec_info,
          OUTPUT_CALLBACK output_func)

{
  wchar_t wVar1;
  int iVar2;
  byte *pbVar3;
  byte local_18 [4];
  
  iVar2 = spec_info->content_length;
  do {
    if (iVar2 < 1) {
      return;
    }
    pbVar3 = local_18;
    wVar1 = *wide_string_offset;
    wide_string_offset = wide_string_offset + 1;
    iVar2 = WideCharToSingleByte
                      ((wchar_t)local_18,(char *)(uint)(ushort)wVar1);
    if (iVar2 != -1) {
      if (spec_info->content_length < iVar2) {
        spec_info->content_length = 0;
        return;
      }
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        (*output_func)(spec_info,(uint)*pbVar3);
        pbVar3 = pbVar3 + 1;
        spec_info->content_length = spec_info->content_length + -1;
      }
    }
    iVar2 = spec_info->content_length;
  } while( true );
}
