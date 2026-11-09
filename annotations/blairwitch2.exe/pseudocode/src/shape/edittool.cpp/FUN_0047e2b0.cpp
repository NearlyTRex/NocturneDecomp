// Name: shape_edittool.cpp_FUN_0047e2b0
// Address: 0047e2b0
// Address Range: [[0047e2b0, 0047e75b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_0047e2b0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_FUN_0047e2b0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

{
  int iVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  int local_28;
  uint *local_18;
  
  bVar13 = 0;
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  if (4 < _DAT_01c2559c) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x809;
    core_main_c_FUN_004e4500("Can't open another window!");
  }
  iVar1 = _DAT_01c2559c * 0x1f8;
  iVar2 = (int)((DAT_006141b8 + (DAT_006141b8 >> 0x1f) * -0x80) -
               (uint)((DAT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_006141bc / 0x60;
  _DAT_01c2559c = _DAT_01c2559c + 1;
  left = left - iVar2;
  top = top - iVar3;
  right = right + iVar2;
  bottom = bottom + iVar3;
  if (left < 0) {
    left = 0;
  }
  if (DAT_006141b8 < right) {
    right = DAT_006141b8;
  }
  *(byte *)(iVar1 + 0x1c255e8) = 0;
  local_28 = 0;
  if (text_content != (char *)0x0) {
    iVar8 = iVar1 + 0x1c255e8;
    iVar4 = engine_font_cpp_FUN_004ab2b0
                      (_DAT_01c25590,text_content,0x1c245f0,0x14,200,(right - left) + iVar2 * -2);
    iVar11 = 0;
    if (0 < iVar4) {
      iVar9 = 0x1c245f0;
      do {
        iVar11 = iVar11 + 1;
        iVar5 = FUN_005b7790(iVar8,&DAT_005d2388,iVar9);
        iVar8 = iVar8 + iVar5;
        iVar9 = iVar9 + 200;
      } while (iVar11 < iVar4);
    }
    this_ptr_00 = _DAT_01c25590;
    if (0 < iVar4) {
      *(byte *)(iVar8 + -1) = 0;
      local_28 = engine_font_cpp_FUN_004aafb0(this_ptr_00,(char *)(iVar1 + 0x1c255e8));
      local_28 = _DAT_01c25f7c + local_28;
      iVar8 = engine_font_cpp_FUN_004aafb0(_DAT_01c25590,&DAT_005d238c);
      if (local_28 < iVar8 + _DAT_01c25f7c) {
        local_28 = iVar8 + _DAT_01c25f7c;
      }
      bottom = bottom + local_28 / 2;
      top = top - local_28 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (DAT_006141bc < bottom) {
    bottom = DAT_006141bc;
  }
  if (_DAT_01c25f84 != 0) {
    window_flags = window_flags | 1;
  }
  *(uint *)(iVar1 + 0x1c25778) = 0;
  if ((window_flags & 1) == 0) {
    if (_DAT_01c2559c == 1) {
      shape_edittool_cpp_FUN_0047baf0(this_ptr);
    }
    if (_DAT_01c2a38c != 0) {
      *(int *)(iVar1 + 0x1c25784) = DAT_006141b8;
      iVar8 = *(int *)(iVar1 + 0x1c25784) * DAT_006141c0;
      *(int *)(iVar1 + 0x1c25788) = DAT_006141bc;
      iVar4 = iVar8 >> 0x1f;
      uVar6 = (int)((iVar8 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
      *(uint *)(iVar1 + 0x1c2577c) = 0;
      *(uint *)(iVar1 + 0x1c25780) = 0;
      local_18 = FUN_005b8580(*(int *)(iVar1 + 0x1c25788) * uVar6);
      *(uint **)(iVar1 + 0x1c25778) = local_18;
      if ((local_18 != (uint *)0x0) && (iVar8 = 0, 0 < *(int *)(iVar1 + 0x1c25788))) {
        do {
          iVar4 = *(int *)(iVar1 + 0x1c2577c) * DAT_006141c0;
          iVar11 = iVar4 >> 0x1f;
          puVar10 = (uint *)
                    (*(int *)(&DAT_01c2a38c + (*(int *)(iVar1 + 0x1c25780) + iVar8) * 4) +
                    ((int)((iVar4 + iVar11 * -8) - (uint)(iVar11 << 2 < 0)) >> 3));
          puVar12 = local_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(byte *)puVar12 = *(byte *)puVar10;
            puVar10 = (uint *)((int)puVar10 + (uint)bVar13 * -2 + 1);
            puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
          }
          local_18 = (uint *)((int)local_18 + uVar6);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar1 + 0x1c25788));
      }
    }
  }
  *(uint *)(iVar1 + 0x1c255b0) = _DAT_01c35e48;
  *(uint *)(iVar1 + 0x1c255b4) = _DAT_01c35e4c;
  *(uint *)(iVar1 + 0x1c255b8) = _DAT_01c35e50;
  *(uint *)(iVar1 + 0x1c255bc) = _DAT_01c35e54;
  *(uint *)(iVar1 + 0x1c255d0) = _DAT_01c35e38;
  *(uint *)(iVar1 + 0x1c255d4) = _DAT_01c35e3c;
  *(uint *)(iVar1 + 0x1c255d8) = _DAT_01c35e40;
  *(uint *)(iVar1 + 0x1c255dc) = _DAT_01c35e44;
  *(uint *)(iVar1 + 0x1c255e0) = _DAT_01c35e58;
  *(uint *)(iVar1 + 0x1c255e4) = _DAT_01c35e5c;
  unkafter_minecar_cpp_FUN_004f2ba0((CEdCheck *)(iVar1 + 0x1c255c0));
  unkafter_minecar_cpp_FUN_004f2ac0((float)left,(float)top,(float)right,(float)bottom);
  *(int *)(iVar1 + 0x1c255a0) = left;
  *(int *)(iVar1 + 0x1c255a4) = top;
  *(int *)(iVar1 + 0x1c255a8) = right;
  *(int *)(iVar1 + 0x1c255ac) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401810
            (left + iVar2,top + iVar3 + local_28,(right - iVar2) + -1,(bottom - iVar3) + -1);
  return;
}
