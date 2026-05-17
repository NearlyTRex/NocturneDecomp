// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
// Address: 005f2440
// Address Range: [[005f2440, 005f285c]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

{
  char cVar2;
  int iVar6;
  int iVar3;
  int iVar7;
  char *pcVar8;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  ushort *puVar8;
  int *piVar9;
  char *pcVar10;
  int iVar9;
  byte bVar11;
  int in_stack_0000002c;
  COLORREF CStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  COLORREF CStack_18;
  ushort uVar2;
  char cVar1;
  
  bVar11 = 0;
  if (((foreground_color != this_ptr->cached_foreground_color) ||
      (background_color != this_ptr->cached_background_color)) ||
     (iVar7 = _strcmp(this_ptr->text_cache,text_string), iVar7 != 0)) {
    this_ptr->cached_foreground_color = foreground_color;
    this_ptr->cached_background_color = background_color;
    if (foreground_color < 0) {
      engine_font_cpp_getDefaultTextColor_FUN_004ce220();
    }
    pcVar7 = text_string;
    pcVar10 = this_ptr->text_cache;
    do {
      cVar1 = *pcVar7;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    iVar3 = (*((this_ptr->base).vtable)->getStringWidth)(&this_ptr->base,text_string);
    this_ptr->cached_string_width = iVar3;
    iVar7 = (*((this_ptr->base).vtable)->getStringHeight)(&this_ptr->base,text_string);
    this_ptr->cached_string_height = iVar7;
    uVar6 = 0xffffffff;
    pcVar8 = this_ptr->text_cache;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    if (in_stack_0000002c != -1) {
      (*g_SetTextColorFunc)(this_ptr->device_context_handle,CStack_18);
      (*g_TextOutAFunc)(this_ptr->device_context_handle,1,1,text_string,~uVar6 - 1);
    }
    (*g_SetTextColorFunc)(this_ptr->device_context_handle,CStack_24);
    (*g_TextOutAFunc)(this_ptr->device_context_handle,0,0,text_string,~uVar6 - 1);
  }
  if (this_ptr->right + x < g_WindowWidth) {
    iVar7 = this_ptr->right;
  }
  else {
    iVar7 = g_WindowWidth - x;
  }
  if (this_ptr->top + y < g_WindowHeight) {
    CStack_24 = this_ptr->top;
  }
  else {
    CStack_24 = g_WindowHeight - y;
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
      pcStack_1c = (char *)y;
      do {
        pcVar8 = pcStack_1c + this_ptr->y_offset1;
        if ((-1 < (int)pcVar8) && ((int)pcVar8 < g_WindowHeight)) {
          iVar4 = 0;
          if (0 < iVar7) {
            puVar8 = (ushort *)((int)g_ScreenBufferArray[(int)pcVar8] + x * 2);
            do {
              uVar2 = *(ushort *)
                       ((int)this_ptr->ppv_bits + (CStack_18 * this_ptr->right + iVar4) * 2);
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
      pcStack_20 = (char *)y;
      do {
        pcVar8 = pcStack_20 + this_ptr->y_offset1;
        if ((-1 < (int)pcVar8) && ((int)pcVar8 < g_WindowHeight)) {
          iVar5 = 0;
          if (0 < iVar7) {
            piVar9 = (int *)(x * 4 + (int)g_ScreenBufferArray[(int)pcVar8]);
            do {
              iVar6 = *(int *)((this_ptr->right * iVar9 + iVar5) * 4 + (int)this_ptr->ppv_bits);
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
