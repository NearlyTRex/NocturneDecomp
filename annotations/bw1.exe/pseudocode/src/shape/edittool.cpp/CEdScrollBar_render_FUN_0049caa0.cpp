// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_0049caa0
// Address: 0049caa0
// Address Range: [[0049caa0, 0049ce34]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_0049caa0(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_0049caa0(CEdScrollBar *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int y2;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_28;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(this_ptr);
  uVar10 = _DAT_01c3f5ac;
  iVar4 = this_ptr->bounds_bottom;
  iVar5 = this_ptr->bounds_right;
  iVar9 = this_ptr->bounds_top;
  iVar11 = this_ptr->bounds_left;
  y2 = iVar4 + -2;
  iVar6 = iVar5 + -2;
  iVar3 = iVar11 + 1;
  iVar7 = iVar9 + 1;
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar3,iVar7,iVar6,y2,_DAT_01c3f5ac,_DAT_01c3f5b0);
  }
  else {
    uVar2 = _DAT_01c3f5b0;
    if (_DAT_01c3f544 != 0) {
      iVar1 = (_DAT_01c3f5b0 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 | (uint)(byte)(&DAT_01c4e9fa)[iVar1]);
      uVar2 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar2;
    engine_mini3d_cpp_drawRect_FUN_00518290(iVar11,iVar9,iVar5 + -1,iVar4 + -1);
    if (_DAT_01c3f544 != 0) {
      iVar4 = (uVar10 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
      uVar10 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar10;
    engine_mini3d_cpp_fillRect_FUN_00518010(iVar3,iVar7,iVar6,y2);
  }
  iVar4 = this_ptr->bounds_right + -1;
  iVar5 = this_ptr->bounds_bottom + -1;
  iVar11 = this_ptr->bounds_top + 1;
  iVar9 = this_ptr->bounds_left + 1;
  if (this_ptr->orientation == 0) {
    iVar3 = this_ptr->thumb_end;
    iVar6 = this_ptr->thumb_start;
    iVar7 = iVar9;
    local_28 = iVar4;
  }
  else {
    iVar7 = this_ptr->thumb_start;
    iVar6 = iVar11;
    iVar3 = iVar5;
    local_28 = this_ptr->thumb_end;
  }
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_0049c500(iVar7,iVar6,local_28,iVar3,uVar8);
  if (this_ptr->orientation == 0) {
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_0049c500(iVar9,iVar11,iVar4,this_ptr->track_start,uVar8);
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_0049c750(iVar9,iVar11,iVar4,this_ptr->track_start,uVar8,0);
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_0049c500(iVar9,this_ptr->track_end,iVar4,iVar5,uVar8);
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_0049c750(iVar9,this_ptr->track_end,iVar4,iVar5,uVar8,1);
    return;
  }
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_0049c500(iVar9,iVar11,this_ptr->track_start,iVar5,uVar8);
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_0049c750(iVar9,iVar11,this_ptr->track_start,iVar5,uVar8,2);
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_0049c500(this_ptr->track_end,iVar11,iVar4,iVar5,uVar8);
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_0049c750(this_ptr->track_end,iVar11,iVar4,iVar5,uVar8,3);
  return;
}
