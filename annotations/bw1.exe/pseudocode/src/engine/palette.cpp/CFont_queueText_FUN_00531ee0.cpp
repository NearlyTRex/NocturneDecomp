// Name: engine_palette.cpp_CFont_queueText_FUN_00531ee0
// Address: 00531ee0
// Address Range: [[00531ee0, 005320a7]]
// Convention: __cdecl
// Signature: int __cdecl engine_palette_cpp_CFont_queueText_FUN_00531ee0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_palette_cpp_CFont_queueText_FUN_00531ee0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

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
  dVar6 = round((double)((float)x * _DAT_01d22544));
  this_ptr->queued_x[iVar4] = (int)ROUND(dVar6);
  iVar4 = this_ptr->queued_text_count;
  dVar6 = round((double)((float)x * unaff_EDI));
  this_ptr->queued_y[iVar4] = (int)ROUND(dVar6);
  if (foreground_color < 0) {
    uVar3 = engine_font_cpp_getDefaultTextColor_FUN_004c2690();
    iVar4 = this_ptr->queued_text_count;
  }
  else {
    iVar2 = foreground_color * 3;
    if (DAT_0061b4a0 != 0x10) {
      if (DAT_0061b4a0 == 0x20) {
        this_ptr->queued_foreground_color[this_ptr->queued_text_count] =
             (uint)(byte)(&DAT_01c4e9fa)[iVar2] << (DAT_01c4e9ec & 0x1f) |
             (uint)(byte)(&DAT_01c4e9f8)[iVar2] << (DAT_01c4e9d4 & 0x1f) |
             (uint)(byte)(&DAT_01c4e9f9)[iVar2] << (DAT_01c4e9e0 & 0x1f);
      }
      else {
        this_ptr->queued_foreground_color[this_ptr->queued_text_count] =
             (uint)(byte)(&DAT_01c4e9f9)[iVar2] << 8 | (uint)(byte)(&DAT_01c4e9f8)[iVar2] << 0x10 |
             (uint)(byte)(&DAT_01c4e9fa)[iVar2];
      }
      goto LAB_00532022;
    }
    iVar4 = this_ptr->queued_text_count;
    uVar3 = ((byte)(&DAT_01c4e9fa)[iVar2] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
            (byte)(&DAT_01c4e9f8)[iVar2] / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f) |
            (byte)(&DAT_01c4e9f9)[iVar2] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) & 0xffff;
  }
  this_ptr->queued_foreground_color[iVar4] = uVar3;
LAB_00532022:
  this_ptr->queued_background_color[this_ptr->queued_text_count] = y;
  this_ptr->queued_text_count = this_ptr->queued_text_count + 1;
  return 0;
}
