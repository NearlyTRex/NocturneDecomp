// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005b1c50
// Address: 005b1c50
// Address Range: [[005b1c50, 005b1e8c]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005b1c50(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005b1c50(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  
  bVar10 = 0;
  pcVar8 = text_string;
  pcVar9 = this_ptr->text_cache;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  iVar2 = (*((this_ptr->base).vtable)->getStringWidth)(this_ptr,text_string);
  this_ptr->cached_string_width = iVar2;
  iVar2 = (*((this_ptr->base).vtable)->getStringHeight)(this_ptr,text_string);
  this_ptr->cached_string_height = iVar2;
  uVar5 = 0xffffffff;
  pcVar8 = this_ptr->text_cache;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  SetTextColor(this_ptr->device_context_handle,0);
  TextOutA(this_ptr->device_context_handle,0,0,text_string,~uVar5 - 1);
  if (this_ptr->right + x < DAT_0061b498) {
    iVar2 = this_ptr->right;
  }
  else {
    iVar2 = DAT_0061b498 - x;
  }
  if (this_ptr->top + y < DAT_0061b49c) {
    iStack_2c = this_ptr->top;
  }
  else {
    iStack_2c = DAT_0061b49c - y;
  }
  if (this_ptr->cached_string_width < iVar2) {
    iVar2 = this_ptr->cached_string_width;
  }
  if (this_ptr->cached_string_height < iStack_2c) {
    iStack_2c = this_ptr->cached_string_height;
  }
  if (DAT_0061b4a0 == 0x10) {
    iStack_18 = 0;
    if (0 < iStack_2c) {
      iStack_24 = y;
      do {
        iVar3 = iStack_24 + this_ptr->y_offset1;
        if ((-1 < iVar3) && (iVar3 < DAT_0061b49c)) {
          iVar4 = 0;
          if (0 < iVar2) {
            puVar6 = (ushort *)(x * 2 + *(int *)(&DAT_01c4354c + iVar3 * 4));
            do {
              if (*(short *)((int)this_ptr->ppv_bits + (iStack_18 * this_ptr->right + iVar4) * 2) !=
                  0x7c1f) {
                *puVar6 = (short)foreground_color;
              }
              iVar4 = iVar4 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar4 < iVar2);
          }
        }
        iStack_24 = iStack_24 + 1;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iStack_2c);
    }
  }
  else {
    iStack_1c = 0;
    if (0 < iStack_2c) {
      iStack_28 = y;
      do {
        iVar3 = iStack_28 + this_ptr->y_offset1;
        if ((-1 < iVar3) && (iVar3 < DAT_0061b49c)) {
          iVar4 = 0;
          if (0 < iVar2) {
            piVar7 = (int *)(*(int *)(&DAT_01c4354c + iVar3 * 4) + x * 4);
            do {
              if (*(int *)((int)this_ptr->ppv_bits + (iStack_1c * this_ptr->right + iVar4) * 4) !=
                  0xff00ff) {
                *piVar7 = foreground_color;
              }
              iVar4 = iVar4 + 1;
              piVar7 = piVar7 + 1;
            } while (iVar4 < iVar2);
          }
        }
        iStack_28 = iStack_28 + 1;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < iStack_2c);
    }
  }
  return;
}
