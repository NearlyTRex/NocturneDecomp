// Name: engine_font.cpp_CBitFont_wrapTextToLines_FUN_004c4260
// Address: 004c4260
// Address Range: [[004c4260, 004c430a]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  memset(dest_buffer,0,max_lines * line_width);
  if (source_text == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < max_lines) {
      do {
        while( true ) {
          iVar1 = engine_font_cpp_CBitFont_wrapLine_FUN_004c4030
                            (this_ptr,source_text,dest_buffer + line_width * iVar2,line_width,
                             max_pixel_width,0x2f,&local_c);
          source_text = source_text + local_c;
          if (iVar1 == 3) break;
          if (iVar1 == 0) {
            if (dest_buffer[line_width * iVar2] == '\0') {
              return iVar2;
            }
            return iVar2 + 1;
          }
          iVar2 = iVar2 + 1;
          if (max_lines <= iVar2) {
            return iVar2;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < max_lines);
    }
  }
  return iVar2;
}
