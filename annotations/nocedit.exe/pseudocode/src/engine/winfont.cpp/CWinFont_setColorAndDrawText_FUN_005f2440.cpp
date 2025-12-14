// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
// Address: 005f2440
// Address Range: [[005f2440, 005f285c]]
// Convention: __cdecl
// Signature: void engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont * this_ptr, HDC device_context, int x_position, int y_position, char * text_string, int foreground_color, int background_color)

#include "nocturne.h"

void __cdecl
engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440
          (CWinFont *this_ptr,HDC device_context,int x_position,int y_position,char *text_string,
          int foreground_color,int background_color)

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
  int in_stack_00000020;
  COLORREF CStack_6c;
  COLORREF in_stack_ffffffac;
  int local_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar12 = 0;
  if (((foreground_color != this_ptr->cached_foreground_color) ||
      (background_color != this_ptr->cached_background_color)) ||
     (iVar3 = crt_string_c_strcmp_FUN_005fef20(this_ptr->text_cache,(char *)x_position), iVar3 != 0)
     ) {
    this_ptr->cached_foreground_color = foreground_color;
    this_ptr->cached_background_color = in_stack_00000020;
    if (foreground_color < 0) {
      engine_font_cpp_getDefaultTextColor_FUN_004ce220();
    }
    pcVar8 = (char *)x_position;
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
    iVar3 = (*((this_ptr->base_font).vtable)->getStringWidth)
                      (&this_ptr->base_font,(char *)x_position);
    this_ptr->cached_string_width = iVar3;
    iVar3 = (*((this_ptr->base_font).vtable)->getStringHeight)
                      (&this_ptr->base_font,(char *)x_position);
    this_ptr->cached_string_height = iVar3;
    uVar7 = 0xffffffff;
    pcVar8 = this_ptr->text_cache;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    if (local_28 != -1) {
      (*SetTextColor)(this_ptr->deviceContextHandle,CStack_6c);
      (*TextOutA)(this_ptr->deviceContextHandle,1,1,(LPCSTR)x_position,~uVar7 - 1);
    }
    (*SetTextColor)(this_ptr->deviceContextHandle,in_stack_ffffffac);
    (*TextOutA)(this_ptr->deviceContextHandle,0,0,(LPCSTR)x_position,~uVar7 - 1);
  }
  if ((int)(text_string + this_ptr->right) < g_WindowWidth) {
    iVar3 = this_ptr->right;
  }
  else {
    iVar3 = g_WindowWidth - (int)text_string;
  }
  if (this_ptr->top + foreground_color < g_WindowHeight) {
    iStack_20 = this_ptr->top;
  }
  else {
    iStack_20 = g_WindowHeight - foreground_color;
  }
  if (this_ptr->cached_string_width < iVar3) {
    iVar3 = this_ptr->cached_string_width;
  }
  if (this_ptr->cached_string_height < iStack_20) {
    iStack_20 = this_ptr->cached_string_height;
  }
  if (g_BitsPerPixel == 0x10) {
    iStack_14 = 0;
    if (0 < iStack_20) {
      iStack_18 = foreground_color;
      do {
        iVar4 = iStack_18 + this_ptr->yOffset1;
        if ((-1 < iVar4) && (iVar4 < g_WindowHeight)) {
          iVar5 = 0;
          if (0 < iVar3) {
            puVar9 = (ushort *)((int)g_ScreenBufferArray[iVar4] + (int)text_string * 2);
            do {
              uVar2 = *(ushort *)
                       ((int)this_ptr->ppvBits + (iStack_14 * this_ptr->right + iVar5) * 2);
              if (uVar2 != 0x7c1f) {
                *puVar9 = (ushort)((byte)((char)uVar2 << 3) >> ((byte)g_BlueBitCount & 0x1f)) <<
                          ((byte)g_BlueBitPosition & 0x1f) |
                          (ushort)(((((int)(uint)uVar2 >> 10 & 0x1fU) << 3) >>
                                   ((byte)g_RedBitCount & 0x1f)) << ((byte)g_RedBitPosition & 0x1f))
                          | (ushort)(((((int)(uint)uVar2 >> 5 & 0x1fU) << 3) >>
                                     ((byte)g_GreenBitCount & 0x1f)) <<
                                    ((byte)g_GreenBitPosition & 0x1f));
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar5 < iVar3);
          }
        }
        iStack_18 = iStack_18 + 1;
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < iStack_20);
    }
  }
  else {
    iVar4 = 0;
    if (0 < iStack_20) {
      iStack_1c = foreground_color;
      do {
        iVar5 = iStack_1c + this_ptr->yOffset1;
        if ((-1 < iVar5) && (iVar5 < g_WindowHeight)) {
          iVar6 = 0;
          if (0 < iVar3) {
            piVar10 = (int *)((int)text_string * 4 + (int)g_ScreenBufferArray[iVar5]);
            do {
              if (this_ptr->ppvBits[this_ptr->right * iVar4 + iVar6] !=
                  g_LightBufferPool[0xd] + 0x6ef7) {
                *piVar10 = (int)this_ptr->ppvBits[this_ptr->right * iVar4 + iVar6];
              }
              iVar6 = iVar6 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar6 < iVar3);
          }
        }
        iStack_1c = iStack_1c + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_20);
    }
  }
  return;
}
