// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_0058e110
// Address: 0058e110
// Address Range: [[0058e110, 0058e449]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_0058e110(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_0058e110(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  int iStack_38;
  uint uStack_30;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar11 = 0;
  pcVar9 = text_string;
  pcVar10 = this_ptr->text_cache;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  iVar3 = (*((this_ptr->base).vtable)->getStringWidth)(this_ptr,text_string);
  this_ptr->cached_string_width = iVar3;
  iVar3 = (*((this_ptr->base).vtable)->getStringHeight)(this_ptr,text_string);
  this_ptr->cached_string_height = iVar3;
  uVar6 = 0xffffffff;
  pcVar9 = this_ptr->text_cache;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  SetTextColor(this_ptr->device_context_handle,0);
  TextOutA(this_ptr->device_context_handle,0,0,text_string,~uVar6 - 1);
  if (this_ptr->right + x < DAT_006141b8) {
    iVar3 = this_ptr->right;
  }
  else {
    iVar3 = DAT_006141b8 - x;
  }
  if (this_ptr->top + y < DAT_006141bc) {
    iStack_20 = this_ptr->top;
  }
  else {
    iStack_20 = DAT_006141bc - y;
  }
  if (this_ptr->cached_string_width < iVar3) {
    iVar3 = this_ptr->cached_string_width;
  }
  if (this_ptr->cached_string_height < iStack_20) {
    iStack_20 = this_ptr->cached_string_height;
  }
  iVar4 = foreground_color * 3;
  if (DAT_006141c0 == 0x10) {
    if (foreground_color < 0) {
      iVar4 = engine_font_cpp_getDefaultTextColor_FUN_004a96e0();
      uVar2 = (ushort)iVar4;
    }
    else {
      uVar2 = (ushort)((byte)(&DAT_01c3583a)[iVar4] / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
              (ushort)((byte)(&DAT_01c35839)[iVar4] / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
              (ushort)((byte)(&DAT_01c35838)[iVar4] / _DAT_01c35818 << (DAT_01c35814 & 0x1f));
    }
    iStack_28 = 0;
    if (0 < iStack_20) {
      iStack_38 = y;
      do {
        iVar4 = iStack_38 + this_ptr->y_offset1;
        if ((-1 < iVar4) && (iVar4 < DAT_006141bc)) {
          iVar5 = 0;
          if (0 < iVar3) {
            puVar7 = (ushort *)(x * 2 + *(int *)(&DAT_01c2a38c + iVar4 * 4));
            do {
              if (*(short *)((int)this_ptr->ppv_bits + (iStack_28 * this_ptr->right + iVar5) * 2) !=
                  0x7c1f) {
                *puVar7 = uVar2;
              }
              iVar5 = iVar5 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar5 < iVar3);
          }
        }
        iStack_38 = iStack_38 + 1;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < iStack_20);
    }
  }
  else {
    if (foreground_color < 0) {
      uStack_30 = engine_font_cpp_getDefaultTextColor_FUN_004a96e0();
    }
    else {
      uVar6 = (uint)(byte)(&DAT_01c3583a)[iVar4];
      if (DAT_006141c0 == 0x20) {
        uStack_30 = (uint)(byte)(&DAT_01c35839)[iVar4] << (DAT_01c35820 & 0x1f) |
                    (uint)(byte)(&DAT_01c35838)[iVar4] << (DAT_01c35814 & 0x1f);
        uVar6 = uVar6 << (DAT_01c3582c & 0x1f);
      }
      else {
        uStack_30 = (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                    (uint)(byte)(&DAT_01c35839)[iVar4] << 8;
      }
      uStack_30 = uStack_30 | uVar6;
    }
    iStack_18 = 0;
    if (0 < iStack_20) {
      iStack_1c = y;
      do {
        iVar4 = iStack_1c + this_ptr->y_offset1;
        if ((-1 < iVar4) && (iVar4 < DAT_006141bc)) {
          iVar5 = 0;
          if (0 < iVar3) {
            puVar8 = (uint *)(*(int *)(&DAT_01c2a38c + iVar4 * 4) + x * 4);
            do {
              if (*(int *)((int)this_ptr->ppv_bits + (iStack_18 * this_ptr->right + iVar5) * 4) !=
                  0xff00ff) {
                *puVar8 = uStack_30;
              }
              iVar5 = iVar5 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar5 < iVar3);
          }
        }
        iStack_1c = iStack_1c + 1;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iStack_20);
    }
  }
  return;
}
