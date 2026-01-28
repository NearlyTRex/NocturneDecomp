// Name: crt_stdio.c_ParseFormatFlags_FUN_00602edc
// Address: 00602edc
// Address Range: [[00602edc, 00602f4b]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c_ParseFormatFlags_FUN_00602edc(char *format,FormatSpec *spec_info)

#include "nocturne.h"

char * __cdecl crt_stdio_c_ParseFormatFlags_FUN_00602edc(char *format,FormatSpec *spec_info)

{
  FormatFlags FVar1;
  char cVar2;
  
  spec_info->flags =
       ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
        ALTERNATE_FORM);
  spec_info->length_flags =
       ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
         BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG);
  cVar2 = *format;
  if (cVar2 != '-') goto LAB_00602ef8;
  spec_info->flags = spec_info->flags | LEFT_ALIGN;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            format = format + 1;
            cVar2 = *format;
            if (cVar2 != '-') break;
            spec_info->flags = spec_info->flags | LEFT_ALIGN;
          }
LAB_00602ef8:
          if (cVar2 != '#') break;
          spec_info->flags = spec_info->flags | ALTERNATE_FORM;
        }
        if (cVar2 != '+') break;
        FVar1 = spec_info->flags;
        spec_info->flags = FVar1 | FORCE_SIGN;
        spec_info->flags =
             FVar1 & (FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|
                     ALTERNATE_FORM) | FORCE_SIGN;
      }
      if (cVar2 != ' ') break;
      if ((spec_info->flags & FORCE_SIGN) ==
          ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
           ALTERNATE_FORM)) {
        spec_info->flags = spec_info->flags | SPACE_SIGN;
      }
    }
    if (cVar2 != '0') break;
    spec_info->zerofill = '0';
  }
  return format;
}
