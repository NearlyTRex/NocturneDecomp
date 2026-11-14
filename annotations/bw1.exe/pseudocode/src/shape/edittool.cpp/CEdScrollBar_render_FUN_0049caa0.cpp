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
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_28;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(this_ptr);
  uVar11 = _DAT_01c3f5ac;
  iVar4 = this_ptr->bounds_bottom;
  iVar5 = this_ptr->bounds_right;
  iVar10 = this_ptr->bounds_top;
  iVar12 = this_ptr->bounds_left;
  iVar9 = iVar4 + -2;
  iVar7 = iVar5 + -2;
  iVar3 = iVar12 + 1;
  iVar8 = iVar10 + 1;
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar3,iVar8,iVar7,iVar9,_DAT_01c3f5ac,_DAT_01c3f5b0)
    ;
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
    engine_mini3d_cpp_drawRect_FUN_00518290(iVar12,iVar10,iVar5 + -1,iVar4 + -1);
    if (_DAT_01c3f544 != 0) {
      iVar4 = (uVar11 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
      uVar11 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar11;
    engine_mini3d_cpp_fillRect_FUN_00518010(iVar3,iVar8,iVar7,iVar9);
  }
  iVar4 = this_ptr->bounds_right + -1;
  iVar5 = this_ptr->bounds_bottom + -1;
  iVar12 = this_ptr->bounds_top + 1;
  iVar10 = this_ptr->bounds_left + 1;
  if (this_ptr->orientation == 0) {
    iVar3 = this_ptr->thumb_end;
    iVar7 = this_ptr->thumb_start;
    iVar8 = iVar10;
    local_28 = iVar4;
  }
  else {
    iVar8 = this_ptr->thumb_start;
    iVar7 = iVar12;
    iVar3 = iVar5;
    local_28 = this_ptr->thumb_end;
  }
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 0)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_0049c500(iVar8,iVar7,local_28,iVar3,iVar9);
  if (this_ptr->orientation == 0) {
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_0049c500(iVar10,iVar12,iVar4,this_ptr->track_start,iVar3);
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    shape_edittool_cpp_FUN_0049c750(iVar10,iVar12,iVar4,this_ptr->track_start,uVar6,0);
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
      iVar12 = 1;
    }
    else {
      iVar12 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_0049c500(iVar10,this_ptr->track_end,iVar4,iVar5,iVar12);
    if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    shape_edittool_cpp_FUN_0049c750(iVar10,this_ptr->track_end,iVar4,iVar5,uVar6,1);
    return;
  }
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_0049c500(iVar10,iVar12,this_ptr->track_start,iVar5,iVar3);
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  shape_edittool_cpp_FUN_0049c750(iVar10,iVar12,this_ptr->track_start,iVar5,uVar6,2);
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_0049c500(this_ptr->track_end,iVar12,iVar4,iVar5,iVar10);
  if ((this_ptr == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  shape_edittool_cpp_FUN_0049c750(this_ptr->track_end,iVar12,iVar4,iVar5,uVar6,3);
  return;
}
