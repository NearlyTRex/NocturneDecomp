// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
// Address: 005f2440
// MANUAL RECONSTRUCTION
// Address Range: [[005f2440, 005f285c]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont *this_ptr,HDC device_context,char *text_string,int x_position,int y_position,int foreground_color,int background_color)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont *this_ptr,HDC device_context,char *text_string,int x_position,int y_position,int foreground_color,int background_color)

{
  int iVar6;
  int iVar3;
  int iVar7;
  char *pcVar8;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar8;
  int *piVar9;
  int iVar9;
  COLORREF CStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  COLORREF CStack_18;
  ushort uVar2;
  
  if (((foreground_color != this_ptr->cached_foreground_color) ||
      (background_color != this_ptr->cached_background_color)) ||
     (iVar7 = _strcmp(this_ptr->text_cache,text_string), iVar7 != 0)) {
    this_ptr->cached_foreground_color = foreground_color;
    this_ptr->cached_background_color = background_color;
    if (foreground_color < 0) {
      engine_font_cpp_getDefaultTextColor_FUN_004ce220();
    }
    strcpy(this_ptr->text_cache,text_string);
    iVar3 = (*((this_ptr->base).vtable)->getStringWidth)(&this_ptr->base,text_string);
    this_ptr->cached_string_width = iVar3;
    iVar7 = (*((this_ptr->base).vtable)->getStringHeight)(&this_ptr->base,text_string);
    this_ptr->cached_string_height = iVar7;
    uVar6 = strlen(this_ptr->text_cache);
    if (background_color != -1) {
      (*g_SetTextColorFunc)(this_ptr->device_context_handle,CStack_18);
      (*g_TextOutAFunc)(this_ptr->device_context_handle,1,1,text_string,uVar6);
    }
    (*g_SetTextColorFunc)(this_ptr->device_context_handle,CStack_24);
    (*g_TextOutAFunc)(this_ptr->device_context_handle,0,0,text_string,uVar6);
  }
  if (this_ptr->right + x_position < g_WindowWidth) {
    iVar7 = this_ptr->right;
  }
  else {
    iVar7 = g_WindowWidth - x_position;
  }
  if (this_ptr->top + y_position < g_WindowHeight) {
    CStack_24 = this_ptr->top;
  }
  else {
    CStack_24 = g_WindowHeight - y_position;
  }
  if (this_ptr->cached_string_width < iVar7) {
    iVar7 = this_ptr->cached_string_width;
  }
  if (this_ptr->cached_string_height < (int)CStack_24) {
    CStack_24 = this_ptr->cached_string_height;
  }
  if (g_BitsPerPixel == 0x10) {
    CStack_18 = 0;
    if (0 < (int)CStack_24) {
      pcStack_1c = (char *)y_position;
      do {
        pcVar8 = pcStack_1c + this_ptr->y_offset1;
        if ((-1 < (int)pcVar8) && ((int)pcVar8 < g_WindowHeight)) {
          iVar4 = 0;
          if (0 < iVar7) {
            puVar8 = (ushort *)g_ScreenBufferArray[(int)pcVar8] + x_position;
            do {
              uVar2 = ((ushort *)this_ptr->ppv_bits)[CStack_18 * this_ptr->right + iVar4];
              if (uVar2 != 0x7c1f) {
                *puVar8 = (ushort)((byte)((char)uVar2 << 3) >> (g_BlueBitCount.bytes[0] & 0x1f)) <<
                          (g_BlueBitPosition.bytes[0] & 0x1f) |
                          (ushort)(((((int)(uint)uVar2 >> 10 & 0x1fU) << 3) >>
                                   (g_RedBitCount.bytes[0] & 0x1f)) <<
                                  (g_RedBitPosition.bytes[0] & 0x1f)) |
                          (ushort)(((((int)(uint)uVar2 >> 5 & 0x1fU) << 3) >>
                                   (g_GreenBitCount.bytes[0] & 0x1f)) <<
                                  (g_GreenBitPosition.bytes[0] & 0x1f));
              }
              iVar4 = iVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar4 < iVar7);
          }
        }
        pcStack_1c = pcStack_1c + 1;
        CStack_18 = CStack_18 + 1;
      } while ((int)CStack_18 < (int)CStack_24);
    }
  }
  else {
    iVar9 = 0;
    if (0 < (int)CStack_24) {
      pcStack_20 = (char *)y_position;
      do {
        pcVar8 = pcStack_20 + this_ptr->y_offset1;
        if ((-1 < (int)pcVar8) && ((int)pcVar8 < g_WindowHeight)) {
          iVar5 = 0;
          if (0 < iVar7) {
            piVar9 = (int *)g_ScreenBufferArray[(int)pcVar8] + x_position;
            do {
              iVar6 = ((int *)this_ptr->ppv_bits)[this_ptr->right * iVar9 + iVar5];
              if (iVar6 != GAME_COLOR_MAGENTA_TRANSPARENT) {
                *piVar9 = iVar6;
              }
              iVar5 = iVar5 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar5 < iVar7);
          }
        }
        pcStack_20 = pcStack_20 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)CStack_24);
    }
  }
  return;
}
