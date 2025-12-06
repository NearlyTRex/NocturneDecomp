// Name: crt_stdio.c_CalculateZeroPadding_FUN_0060317c
// Address: 0060317c
// Address Range: [[0060317c, 006031be]]
// Convention: __cdecl
// Signature: void crt_stdio.c_CalculateZeroPadding_FUN_0060317c(FormatSpec * spec_info)

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

void __cdecl crt_stdio_c_CalculateZeroPadding_FUN_0060317c(FormatSpec *spec_info)

{
  int iVar1;
  
  if (((spec_info->flags & LEFT_ALIGN) == 0) && (spec_info->zerofill == '0')) {
    iVar1 = (((((spec_info->width - *(int *)((int)&spec_info->flags + 2)) -
               spec_info->padding_needed) - spec_info->content_length) - spec_info->prefix_length) -
            spec_info->suffix_length) - spec_info->alternate_form_length;
    if (0 < iVar1) {
      spec_info->padding_needed = spec_info->padding_needed + iVar1;
    }
  }
  return;
}
