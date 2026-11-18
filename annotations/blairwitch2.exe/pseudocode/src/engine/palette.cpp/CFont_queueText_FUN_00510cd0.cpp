// Name: engine_palette.cpp_CFont_queueText_FUN_00510cd0
// Address: 00510cd0
// Address Range: [[00510cd0, 00510d42]]
// Convention: __cdecl
// Signature: int __cdecl engine_palette_cpp_CFont_queueText_FUN_00510cd0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

int __cdecl engine_palette_cpp_CFont_queueText_FUN_00510cd0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

{
  char cVar1;
  char (*pacVar2) [256];
  
  if (99 < this_ptr->queued_text_count) {
    return 0;
  }
  pacVar2 = this_ptr->queued_text + this_ptr->queued_text_count;
  do {
    cVar1 = *text;
    (*pacVar2)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = text[1];
    text = text + 2;
    (*pacVar2)[1] = cVar1;
    pacVar2 = (char (*) [256])(*pacVar2 + 2);
  } while (cVar1 != '\0');
  this_ptr->queued_x[this_ptr->queued_text_count] = x;
  this_ptr->queued_y[this_ptr->queued_text_count] = y;
  this_ptr->queued_foreground_color[this_ptr->queued_text_count] = foreground_color;
  this_ptr->queued_background_color[this_ptr->queued_text_count] = background_color;
  this_ptr->queued_text_count = this_ptr->queued_text_count + 1;
  return 0;
}
