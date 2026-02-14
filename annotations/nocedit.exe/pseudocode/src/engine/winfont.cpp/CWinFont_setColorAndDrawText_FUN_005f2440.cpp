// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
// Address: 005f2440
// Address Range: [[005f2440, 005f285c]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont *this_ptr,HDC device_context,int x_position,int y_position,char *text_string,int foreground_color,int background_color)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont *this_ptr,HDC device_context,int x_position,int y_position,char *text_string,int foreground_color,int background_color)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  ushort *puVar8;
  int *piVar9;
  char *pcVar10;
  byte bVar11;
  int in_stack_0000002c;
  COLORREF CStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  COLORREF CStack_18;
  
  bVar11 = 0;
  if (((foreground_color != this_ptr->cached_foreground_color) ||
      (background_color != this_ptr->cached_background_color)) ||
     (iVar3 = strcmp(this_ptr->text_cache,(char *)x_position), iVar3 != 0)
     ) {
    this_ptr->cached_foreground_color = foreground_color;
    this_ptr->cached_background_color = background_color;
    if (foreground_color < 0) {
      engine_font_cpp_getDefaultTextColor_FUN_004ce220();
    }
    pcVar7 = (char *)x_position;
    pcVar10 = this_ptr->text_cache;
    do {
      cVar1 = *pcVar7;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar3 = (*((this_ptr->base).vtable)->getStringWidth)(&this_ptr->base,(char *)x_position);
    this_ptr->cached_string_width = iVar3;
    iVar3 = (*((this_ptr->base).vtable)->getStringHeight)(&this_ptr->base,(char *)x_position);
    this_ptr->cached_string_height = iVar3;
    uVar6 = 0xffffffff;
    pcVar7 = this_ptr->text_cache;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (in_stack_0000002c != -1) {
      (*g_SetTextColorFunc)(this_ptr->device_context_handle,CStack_18);
      (*g_TextOutAFunc)(this_ptr->device_context_handle,1,1,(LPCSTR)x_position,~uVar6 - 1);
    }
    (*g_SetTextColorFunc)(this_ptr->device_context_handle,CStack_24);
    (*g_TextOutAFunc)(this_ptr->device_context_handle,0,0,(LPCSTR)x_position,~uVar6 - 1);
  }
  if (this_ptr->right + y_position < g_WindowWidth) {
    iVar3 = this_ptr->right;
  }
  else {
    iVar3 = g_WindowWidth - y_position;
  }
  if ((int)(text_string + this_ptr->top) < g_WindowHeight) {
    CStack_24 = this_ptr->top;
  }
  else {
    CStack_24 = g_WindowHeight - (int)text_string;
  }
  if (this_ptr->cached_string_width < iVar3) {
    iVar3 = this_ptr->cached_string_width;
  }
  if (this_ptr->cached_string_height < (int)CStack_24) {
    CStack_24 = this_ptr->cached_string_height;
  }
  if (g_BitsPerPixel == 0x10) {
    CStack_18 = 0;
    if (0 < (int)CStack_24) {
      pcStack_1c = text_string;
      do {
        pcVar7 = pcStack_1c + this_ptr->y_offset1;
        if ((-1 < (int)pcVar7) && ((int)pcVar7 < g_WindowHeight)) {
          iVar4 = 0;
          if (0 < iVar3) {
            puVar8 = (ushort *)((int)g_ScreenBufferArray[(int)pcVar7] + y_position * 2);
            do {
              uVar2 = *(ushort *)
                       ((int)this_ptr->ppv_bits + (CStack_18 * this_ptr->right + iVar4) * 2);
              if (uVar2 != 0x7c1f) {
                *puVar8 = (ushort)((byte)((char)uVar2 << 3) >> ((byte)g_BlueBitCount & 0x1f)) <<
                          ((byte)g_BlueBitPosition & 0x1f) |
                          (ushort)(((((int)(uint)uVar2 >> 10 & 0x1fU) << 3) >>
                                   ((byte)g_RedBitCount & 0x1f)) << ((byte)g_RedBitPosition & 0x1f))
                          | (ushort)(((((int)(uint)uVar2 >> 5 & 0x1fU) << 3) >>
                                     ((byte)g_GreenBitCount & 0x1f)) <<
                                    ((byte)g_GreenBitPosition & 0x1f));
              }
              iVar4 = iVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar4 < iVar3);
          }
        }
        pcStack_1c = pcStack_1c + 1;
        CStack_18 = CStack_18 + 1;
      } while ((int)CStack_18 < (int)CStack_24);
    }
  }
  else {
    iVar4 = 0;
    if (0 < (int)CStack_24) {
      pcStack_20 = text_string;
      do {
        pcVar7 = pcStack_20 + this_ptr->y_offset1;
        if ((-1 < (int)pcVar7) && ((int)pcVar7 < g_WindowHeight)) {
          iVar5 = 0;
          if (0 < iVar3) {
            piVar9 = (int *)(y_position * 4 + (int)g_ScreenBufferArray[(int)pcVar7]);
            do {
              if (this_ptr->ppv_bits[this_ptr->right * iVar4 + iVar5] !=
                  g_LightBufferPool[0xd] + 0x6ef7) {
                *piVar9 = (int)this_ptr->ppv_bits[this_ptr->right * iVar4 + iVar5];
              }
              iVar5 = iVar5 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar5 < iVar3);
          }
        }
        pcStack_20 = pcStack_20 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)CStack_24);
    }
  }
  return;
}
