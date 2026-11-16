// Name: engine_palette.cpp_CFont_queueText_FUN_00509bc0
// Address: 00509bc0
// Address Range: [[00509bc0, 00509d87]]
// Convention: __cdecl
// Signature: int __cdecl engine_palette_cpp_CFont_queueText_FUN_00509bc0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_palette_cpp_CFont_queueText_FUN_00509bc0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float unaff_EDI;
  char (*pacVar5) [256];
  double dVar6;
  
  if (99 < this_ptr->queued_text_count) {
    return 0;
  }
  pacVar5 = this_ptr->queued_text + this_ptr->queued_text_count;
  do {
    cVar1 = *text;
    (*pacVar5)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = text[1];
    text = text + 2;
    (*pacVar5)[1] = cVar1;
    pacVar5 = (char (*) [256])(*pacVar5 + 2);
  } while (cVar1 != '\0');
  iVar4 = this_ptr->queued_text_count;
  dVar6 = round((double)((float)x * _DAT_01d76cc4));
  this_ptr->queued_x[iVar4] = (int)ROUND(dVar6);
  iVar4 = this_ptr->queued_text_count;
  dVar6 = round((double)((float)x * unaff_EDI));
  this_ptr->queued_y[iVar4] = (int)ROUND(dVar6);
  if (foreground_color < 0) {
    uVar3 = engine_font_cpp_getDefaultTextColor_FUN_004b12e0();
    iVar4 = this_ptr->queued_text_count;
  }
  else {
    iVar2 = foreground_color * 3;
    if (DAT_005fba20 != 0x10) {
      if (DAT_005fba20 == 0x20) {
        this_ptr->queued_foreground_color[this_ptr->queued_text_count] =
             (uint)(byte)(&DAT_01c6af9a)[iVar2] << (DAT_01c6af8c & 0x1f) |
             (uint)(byte)(&DAT_01c6af98)[iVar2] << (DAT_01c6af74 & 0x1f) |
             (uint)(byte)(&DAT_01c6af99)[iVar2] << (DAT_01c6af80 & 0x1f);
      }
      else {
        this_ptr->queued_foreground_color[this_ptr->queued_text_count] =
             (uint)(byte)(&DAT_01c6af99)[iVar2] << 8 | (uint)(byte)(&DAT_01c6af98)[iVar2] << 0x10 |
             (uint)(byte)(&DAT_01c6af9a)[iVar2];
      }
      goto LAB_00509d02;
    }
    iVar4 = this_ptr->queued_text_count;
    uVar3 = ((byte)(&DAT_01c6af9a)[iVar2] / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f) |
            (byte)(&DAT_01c6af98)[iVar2] / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f) |
            (byte)(&DAT_01c6af99)[iVar2] / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) & 0xffff;
  }
  this_ptr->queued_foreground_color[iVar4] = uVar3;
LAB_00509d02:
  this_ptr->queued_background_color[this_ptr->queued_text_count] = y;
  this_ptr->queued_text_count = this_ptr->queued_text_count + 1;
  return 0;
}
