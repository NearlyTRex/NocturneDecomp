// Name: crt_stdio.c_ParseFormatFlags_FUN_00602edc
// Address: 00602edc
// Address Range: [[00602edc, 00602f4b]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_ParseFormatFlags_FUN_00602edc(char * format, FormatSpec * spec_info)

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

char * __cdecl crt_stdio_c_ParseFormatFlags_FUN_00602edc(char *format,FormatSpec *spec_info)

{
  byte uVar1;
  char cVar2;
  
  *(ushort *)&spec_info->flags = 0;
  cVar2 = *format;
  if (cVar2 != '-') goto LAB_00602ef8;
  *(byte *)&spec_info->flags = (char)spec_info->flags | LEFT_ALIGN;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            format = format + 1;
            cVar2 = *format;
            if (cVar2 != '-') break;
            *(byte *)&spec_info->flags = (char)spec_info->flags | LEFT_ALIGN;
          }
LAB_00602ef8:
          if (cVar2 != '#') break;
          *(byte *)&spec_info->flags = (char)spec_info->flags | ALTERNATE_FORM;
        }
        if (cVar2 != '+') break;
        uVar1 = (byte)spec_info->flags;
        *(byte *)&spec_info->flags = uVar1 | FORCE_SIGN;
        *(byte *)&spec_info->flags =
             uVar1 & (FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|
                     ALTERNATE_FORM) | FORCE_SIGN;
      }
      if (cVar2 != ' ') break;
      uVar1 = (byte)spec_info->flags;
      if ((uVar1 & FORCE_SIGN) == 0) {
        *(byte *)&spec_info->flags = uVar1 | SPACE_SIGN;
      }
    }
    if (cVar2 != '0') break;
    spec_info->zerofill = '0';
  }
  return format;
}
