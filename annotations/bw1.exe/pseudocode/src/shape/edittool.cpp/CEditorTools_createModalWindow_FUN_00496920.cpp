// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00496920
// Address: 00496920
// Address Range: [[00496920, 00496dcb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00496920(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00496920(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

{
  int iVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *buffer;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  int local_28;
  uint *local_18;
  
  bVar11 = 0;
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (4 < _DAT_01c3eb5c) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x864;
    core_main_c_FUN_005030e0("Can't open another window!");
  }
  iVar1 = _DAT_01c3eb5c * 0x1f8;
  iVar2 = (int)((DAT_0061b498 + (DAT_0061b498 >> 0x1f) * -0x80) -
               (uint)((DAT_0061b498 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_0061b49c / 0x60;
  _DAT_01c3eb5c = _DAT_01c3eb5c + 1;
  left = left - iVar2;
  top = top - iVar3;
  right = right + iVar2;
  bottom = bottom + iVar3;
  if (left < 0) {
    left = 0;
  }
  if (DAT_0061b498 < right) {
    right = DAT_0061b498;
  }
  *(byte *)(iVar1 + 0x1c3eba8) = 0;
  local_28 = 0;
  if (text_content != (char *)0x0) {
    buffer = (char *)(iVar1 + 0x1c3eba8);
    iVar4 = engine_font_cpp_FUN_004c4260
                      (_DAT_01c3eb50,text_content,0x1c3dbb0,0x14,200,(right - left) + iVar2 * -2);
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar9 + 1;
        iVar5 = _sprintf(buffer,&DAT_005dc121);
        buffer = buffer + iVar5;
      } while (iVar9 < iVar4);
    }
    this_ptr_00 = _DAT_01c3eb50;
    if (0 < iVar4) {
      buffer[-1] = '\0';
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50
                           (this_ptr_00,(char *)(iVar1 + 0x1c3eba8));
      local_28 = _DAT_01c3f53c + local_28;
      iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_01c3eb50,&DAT_005dc125);
      if (local_28 < iVar4 + _DAT_01c3f53c) {
        local_28 = iVar4 + _DAT_01c3f53c;
      }
      bottom = bottom + local_28 / 2;
      top = top - local_28 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (DAT_0061b49c < bottom) {
    bottom = DAT_0061b49c;
  }
  if (_DAT_01c3f544 != 0) {
    window_flags = window_flags | 1;
  }
  *(uint *)(iVar1 + 0x1c3ed38) = 0;
  if ((window_flags & 1) == 0) {
    if (_DAT_01c3eb5c == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_00494030(this_ptr);
    }
    if (_DAT_01c4354c != 0) {
      *(int *)(iVar1 + 0x1c3ed44) = DAT_0061b498;
      iVar4 = *(int *)(iVar1 + 0x1c3ed44) * DAT_0061b4a0;
      *(int *)(iVar1 + 0x1c3ed48) = DAT_0061b49c;
      iVar9 = iVar4 >> 0x1f;
      uVar6 = (int)((iVar4 + iVar9 * -8) - (uint)(iVar9 << 2 < 0)) >> 3;
      *(uint *)(iVar1 + 0x1c3ed3c) = 0;
      *(uint *)(iVar1 + 0x1c3ed40) = 0;
      local_18 = FUN_005c08d0(*(int *)(iVar1 + 0x1c3ed48) * uVar6);
      *(uint **)(iVar1 + 0x1c3ed38) = local_18;
      if ((local_18 != (uint *)0x0) && (iVar4 = 0, 0 < *(int *)(iVar1 + 0x1c3ed48))) {
        do {
          iVar9 = *(int *)(iVar1 + 0x1c3ed3c) * DAT_0061b4a0;
          iVar5 = iVar9 >> 0x1f;
          puVar8 = (uint *)
                   (*(int *)(&DAT_01c4354c + (*(int *)(iVar1 + 0x1c3ed40) + iVar4) * 4) +
                   ((int)((iVar9 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3));
          puVar10 = local_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(byte *)puVar10 = *(byte *)puVar8;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
            puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
          }
          local_18 = (uint *)((int)local_18 + uVar6);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 0x1c3ed48));
      }
    }
  }
  *(uint *)(iVar1 + 0x1c3eb70) = _DAT_01c4f008;
  *(uint *)(iVar1 + 0x1c3eb74) = _DAT_01c4f00c;
  *(uint *)(iVar1 + 0x1c3eb78) = _DAT_01c4f010;
  *(uint *)(iVar1 + 0x1c3eb7c) = _DAT_01c4f014;
  *(uint *)(iVar1 + 0x1c3eb90) = _DAT_01c4eff8;
  *(uint *)(iVar1 + 0x1c3eb94) = _DAT_01c4effc;
  *(uint *)(iVar1 + 0x1c3eb98) = _DAT_01c4f000;
  *(uint *)(iVar1 + 0x1c3eb9c) = _DAT_01c4f004;
  *(uint *)(iVar1 + 0x1c3eba0) = _DAT_01c4f018;
  *(uint *)(iVar1 + 0x1c3eba4) = _DAT_01c4f01c;
  unkafter_minecar_cpp_FUN_00511980
            (iVar1 + 0x1c3eb80,iVar1 + 0x1c3eb84,iVar1 + 0x1c3eb88,iVar1 + 0x1c3eb8c);
  unkafter_minecar_cpp_FUN_00511850((float)left,(float)top,(float)right,(float)bottom);
  *(int *)(iVar1 + 0x1c3eb60) = left;
  *(int *)(iVar1 + 0x1c3eb64) = top;
  *(int *)(iVar1 + 0x1c3eb68) = right;
  *(int *)(iVar1 + 0x1c3eb6c) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401810
            (left + iVar2,top + iVar3 + local_28,(right - iVar2) + -1,(bottom - iVar3) + -1);
  return;
}
