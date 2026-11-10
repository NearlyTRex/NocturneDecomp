// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047f4c0
// Address: 0047f4c0
// Address Range: [[0047f4c0, 0047f96b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047f4c0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047f4c0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

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
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if (4 < _DAT_01c5b104) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x867;
    core_main_c_FUN_004e4330("Can't open another window!");
  }
  iVar1 = _DAT_01c5b104 * 0x1f8;
  iVar2 = (int)((DAT_005fba18 + (DAT_005fba18 >> 0x1f) * -0x80) -
               (uint)((DAT_005fba18 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_005fba1c / 0x60;
  _DAT_01c5b104 = _DAT_01c5b104 + 1;
  left = left - iVar2;
  top = top - iVar3;
  right = right + iVar2;
  bottom = bottom + iVar3;
  if (left < 0) {
    left = 0;
  }
  if (DAT_005fba18 < right) {
    right = DAT_005fba18;
  }
  *(byte *)(iVar1 + 0x1c5b150) = 0;
  local_28 = 0;
  if (text_content != (char *)0x0) {
    buffer = (char *)(iVar1 + 0x1c5b150);
    iVar4 = engine_font_cpp_FUN_004b2e40
                      (_DAT_01c5b0e0,text_content,0x1c5a140,0x14,200,(right - left) + iVar2 * -2);
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar9 + 1;
        iVar5 = _sprintf(buffer,&DAT_005bd1de);
        buffer = buffer + iVar5;
      } while (iVar9 < iVar4);
    }
    this_ptr_00 = _DAT_01c5b0e0;
    if (0 < iVar4) {
      buffer[-1] = '\0';
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30
                           (this_ptr_00,(char *)(iVar1 + 0x1c5b150));
      local_28 = _DAT_01c5bae4 + local_28;
      iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(_DAT_01c5b0e0,&DAT_005bd1e2);
      if (local_28 < iVar4 + _DAT_01c5bae4) {
        local_28 = iVar4 + _DAT_01c5bae4;
      }
      bottom = bottom + local_28 / 2;
      top = top - local_28 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (DAT_005fba1c < bottom) {
    bottom = DAT_005fba1c;
  }
  if (_DAT_01c5baec != 0) {
    window_flags = window_flags | 1;
  }
  *(uint *)(iVar1 + 0x1c5b2e0) = 0;
  if ((window_flags & 1) == 0) {
    if (_DAT_01c5b104 == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_0047cbd0(this_ptr);
    }
    if (_DAT_01c5faec != 0) {
      *(int *)(iVar1 + 0x1c5b2ec) = DAT_005fba18;
      iVar4 = *(int *)(iVar1 + 0x1c5b2ec) * DAT_005fba20;
      *(int *)(iVar1 + 0x1c5b2f0) = DAT_005fba1c;
      iVar9 = iVar4 >> 0x1f;
      uVar6 = (int)((iVar4 + iVar9 * -8) - (uint)(iVar9 << 2 < 0)) >> 3;
      *(uint *)(iVar1 + 0x1c5b2e4) = 0;
      *(uint *)(iVar1 + 0x1c5b2e8) = 0;
      local_18 = FUN_005a3650(*(int *)(iVar1 + 0x1c5b2f0) * uVar6);
      *(uint **)(iVar1 + 0x1c5b2e0) = local_18;
      if ((local_18 != (uint *)0x0) && (iVar4 = 0, 0 < *(int *)(iVar1 + 0x1c5b2f0))) {
        do {
          iVar9 = *(int *)(iVar1 + 0x1c5b2e4) * DAT_005fba20;
          iVar5 = iVar9 >> 0x1f;
          puVar8 = (uint *)
                   (*(int *)(&DAT_01c5faec + (*(int *)(iVar1 + 0x1c5b2e8) + iVar4) * 4) +
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
        } while (iVar4 < *(int *)(iVar1 + 0x1c5b2f0));
      }
    }
  }
  *(uint *)(iVar1 + 0x1c5b118) = _DAT_01c6b5a8;
  *(uint *)(iVar1 + 0x1c5b11c) = _DAT_01c6b5ac;
  *(uint *)(iVar1 + 0x1c5b120) = _DAT_01c6b5b0;
  *(uint *)(iVar1 + 0x1c5b124) = _DAT_01c6b5b4;
  *(uint *)(iVar1 + 0x1c5b138) = _DAT_01c6b598;
  *(uint *)(iVar1 + 0x1c5b13c) = _DAT_01c6b59c;
  *(uint *)(iVar1 + 0x1c5b140) = _DAT_01c6b5a0;
  *(uint *)(iVar1 + 0x1c5b144) = _DAT_01c6b5a4;
  *(uint *)(iVar1 + 0x1c5b148) = _DAT_01c6b5b8;
  *(uint *)(iVar1 + 0x1c5b14c) = _DAT_01c6b5bc;
  unkafter_minecar_cpp_FUN_004ed150
            (iVar1 + 0x1c5b128,iVar1 + 0x1c5b12c,iVar1 + 0x1c5b130,iVar1 + 0x1c5b134);
  unkafter_minecar_cpp_FUN_004ed020((float)left,(float)top,(float)right,(float)bottom);
  *(int *)(iVar1 + 0x1c5b108) = left;
  *(int *)(iVar1 + 0x1c5b10c) = top;
  *(int *)(iVar1 + 0x1c5b110) = right;
  *(int *)(iVar1 + 0x1c5b114) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401810
            (left + iVar2,top + iVar3 + local_28,(right - iVar2) + -1,(bottom - iVar3) + -1);
  return;
}
