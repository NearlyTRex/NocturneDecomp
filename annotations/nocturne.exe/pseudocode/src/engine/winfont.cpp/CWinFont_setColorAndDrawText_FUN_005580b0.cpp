// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0
// Address: 005580b0
// Address Range: [[005580b0, 005584cc]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005580b0(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005580b0(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  ushort *puVar9;
  int *piVar10;
  char *pcVar11;
  byte bVar12;
  int in_stack_0000002c;
  COLORREF CStack_24;
  int iStack_20;
  int iStack_1c;
  COLORREF CStack_18;
  
  bVar12 = 0;
  if (((foreground_color != this_ptr->cached_foreground_color) ||
      (background_color != this_ptr->cached_background_color)) ||
     (iVar3 = _strcmp(this_ptr->text_cache,text_string), iVar3 != 0)) {
    this_ptr->cached_foreground_color = foreground_color;
    this_ptr->cached_background_color = background_color;
    if (foreground_color < 0) {
      engine_font_cpp_getDefaultTextColor_FUN_00491140();
    }
    pcVar8 = text_string;
    pcVar11 = this_ptr->text_cache;
    do {
      cVar1 = *pcVar8;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar3 = (*((this_ptr->base).vtable)->getStringWidth)(&this_ptr->base,text_string);
    this_ptr->cached_string_width = iVar3;
    iVar3 = (*((this_ptr->base).vtable)->getStringHeight)(&this_ptr->base,text_string);
    this_ptr->cached_string_height = iVar3;
    uVar7 = 0xffffffff;
    pcVar8 = this_ptr->text_cache;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    if (in_stack_0000002c != -1) {
      SetTextColor((HDC)this_ptr->device_context_handle,CStack_18);
      TextOutA((HDC)this_ptr->device_context_handle,1,1,text_string,~uVar7 - 1);
    }
    SetTextColor((HDC)this_ptr->device_context_handle,CStack_24);
    TextOutA((HDC)this_ptr->device_context_handle,0,0,text_string,~uVar7 - 1);
  }
  if (this_ptr->right + x < g_WindowWidth) {
    iVar3 = this_ptr->right;
  }
  else {
    iVar3 = g_WindowWidth - x;
  }
  if (this_ptr->top + y < g_WindowHeight) {
    CStack_24 = this_ptr->top;
  }
  else {
    CStack_24 = g_WindowHeight - y;
  }
  if (this_ptr->cached_string_width < iVar3) {
    iVar3 = this_ptr->cached_string_width;
  }
  if (this_ptr->cached_string_height < (int)CStack_24) {
    CStack_24 = this_ptr->cached_string_height;
  }
  if (DAT_005b7624 == 0x10) {
    CStack_18 = 0;
    if (0 < (int)CStack_24) {
      iStack_1c = y;
      do {
        iVar4 = iStack_1c + this_ptr->y_offset1;
        if ((-1 < iVar4) && (iVar4 < g_WindowHeight)) {
          iVar5 = 0;
          if (0 < iVar3) {
            puVar9 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar4 * 4) + x * 2);
            do {
              uVar2 = *(ushort *)
                       ((int)this_ptr->ppv_bits + (CStack_18 * this_ptr->right + iVar5) * 2);
              if (uVar2 != 0x7c1f) {
                *puVar9 = (ushort)((byte)((char)uVar2 << 3) >> (DAT_01c00644 & 0x1f)) <<
                          (DAT_01c0063c & 0x1f) |
                          (ushort)(((((int)(uint)uVar2 >> 10 & 0x1fU) << 3) >> (DAT_01c0062c & 0x1f)
                                   ) << (DAT_01c00624 & 0x1f)) |
                          (ushort)(((((int)(uint)uVar2 >> 5 & 0x1fU) << 3) >> (DAT_01c00638 & 0x1f))
                                  << (DAT_01c00630 & 0x1f));
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar5 < iVar3);
          }
        }
        iStack_1c = iStack_1c + 1;
        CStack_18 = CStack_18 + 1;
      } while ((int)CStack_18 < (int)CStack_24);
    }
  }
  else {
    iVar4 = 0;
    if (0 < (int)CStack_24) {
      iStack_20 = y;
      do {
        iVar5 = iStack_20 + this_ptr->y_offset1;
        if ((-1 < iVar5) && (iVar5 < g_WindowHeight)) {
          iVar6 = 0;
          if (0 < iVar3) {
            piVar10 = (int *)(x * 4 + *(int *)(&DAT_01bd2fa0 + iVar5 * 4));
            do {
              iVar5 = *(int *)((this_ptr->right * iVar4 + iVar6) * 4 + (int)this_ptr->ppv_bits);
              if (iVar5 != 0xff00ff) {
                *piVar10 = iVar5;
              }
              iVar6 = iVar6 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar6 < iVar3);
          }
        }
        iStack_20 = iStack_20 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)CStack_24);
    }
  }
  return;
}
