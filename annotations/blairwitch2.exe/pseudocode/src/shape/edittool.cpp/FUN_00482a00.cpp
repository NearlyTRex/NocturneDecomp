// Name: shape_edittool.cpp_FUN_00482a00
// Address: 00482a00
// Address Range: [[00482a00, 004831c3]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_00482a00(CPickList *this_ptr,char *dialog_title,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_FUN_00482a00(CPickList *this_ptr,char *dialog_title,uint window_flags)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  CPickList *pCVar8;
  int bottom_pos;
  int top_pos;
  int iVar9;
  int iVar10;
  bool bVar11;
  char local_160 [300];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  *(int *)&this_ptr->field_0x18c = _DAT_01c25f7c + 1;
  *(uint *)&this_ptr->field_0x190 = 8;
  *(uint *)&this_ptr->field_0x50 = 1;
  memset(&this_ptr->field_0x10,0,0x40);
  local_14 = 0;
  if (0 < *(int *)this_ptr) {
    do {
      iVar10 = 0;
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240((CStrList *)this_ptr,local_14);
      pCVar8 = this_ptr;
      while( true ) {
        cVar1 = *pcVar3;
        pcVar2 = pcVar3;
        pcVar7 = local_160;
        while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
          *pcVar7 = *pcVar2;
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar3;
          pcVar2 = pcVar3;
        }
        *pcVar7 = '\0';
        iVar4 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,local_160);
        if (*(int *)&pCVar8->field_0x10 < iVar4) {
          *(int *)&pCVar8->field_0x10 = iVar4;
        }
        iVar10 = iVar10 + 1;
        pCVar8 = (CPickList *)&pCVar8->field_0x4;
        if (*pcVar3 == '\0') break;
        if (0xf < iVar10) {
          _DAT_01d046a0 = "..\\shape\\edittool.cpp";
          _DAT_01d046a4 = 0xf9a;
          core_main_c_FUN_004e4500("Too many picklist columns!");
        }
      }
      if (*(int *)&this_ptr->field_0x50 < iVar10) {
        *(int *)&this_ptr->field_0x50 = iVar10;
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)this_ptr);
  }
  pCVar8 = this_ptr;
  for (iVar10 = 0; iVar10 < *(int *)&this_ptr->field_0x50 + -1; iVar10 = iVar10 + 1) {
    *(int *)&pCVar8->field_0x10 = *(int *)&pCVar8->field_0x10 + DAT_006141b8 / 0x28;
    pCVar8 = (CPickList *)&pCVar8->field_0x4;
  }
  *(uint *)&this_ptr->field_0x1a4 = 0;
  iVar10 = 0;
  pCVar8 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x50) {
    do {
      iVar10 = iVar10 + 1;
      *(int *)&this_ptr->field_0x1a4 = *(int *)&this_ptr->field_0x1a4 + *(int *)&pCVar8->field_0x10;
      pCVar8 = (CPickList *)&pCVar8->field_0x4;
    } while (iVar10 < *(int *)&this_ptr->field_0x50);
  }
  *(int *)&this_ptr->field_0x1a4 =
       *(int *)&this_ptr->field_0x1a4 + *(int *)&this_ptr->field_0x190 * 2;
  iVar10 = (DAT_006141bc + _DAT_01c25f7c * -4) / *(int *)&this_ptr->field_0x18c;
  *(int *)&this_ptr->field_0x1a0 = iVar10;
  if (iVar10 < 1) {
    *(uint *)&this_ptr->field_0x1a0 = 1;
  }
  if (*(int *)this_ptr < *(int *)&this_ptr->field_0x1a0) {
    *(int *)&this_ptr->field_0x1a0 = *(int *)this_ptr;
  }
  iVar10 = DAT_006141b8 * 7 >> 0x1f;
  iVar10 = ((int)((DAT_006141b8 * 7 + iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3) /
           *(int *)&this_ptr->field_0x1a4;
  *(int *)&this_ptr->field_0x1a8 = iVar10;
  if (iVar10 < 1) {
    *(uint *)&this_ptr->field_0x1a8 = 1;
  }
  iVar10 = (*(int *)this_ptr + *(int *)&this_ptr->field_0x1a0 + -1) / *(int *)&this_ptr->field_0x1a0
  ;
  if (iVar10 < *(int *)&this_ptr->field_0x1a8) {
    *(int *)&this_ptr->field_0x1a8 = iVar10;
  }
  if (0 < *(int *)&this_ptr->field_0x54) {
    *(int *)&this_ptr->field_0x1a8 = *(int *)&this_ptr->field_0x54;
  }
  *(uint *)&this_ptr->field_0x1f0 = 0;
  if (*(int *)&this_ptr->field_0x1a0 * *(int *)&this_ptr->field_0x1a8 < *(int *)this_ptr) {
    if (*(int *)&this_ptr->field_0x1a8 < 2) {
      *(uint *)&this_ptr->field_0x1f0 = 1;
    }
    else {
      *(uint *)&this_ptr->field_0x1f0 = 2;
    }
  }
  iVar10 = *(int *)&this_ptr->field_0x1a4 * *(int *)&this_ptr->field_0x1a8 + 8;
  iVar4 = *(int *)&this_ptr->field_0x1a0 * *(int *)&this_ptr->field_0x18c + 6;
  iVar5 = shape_edittool_cpp_calculateGridWidth_FUN_00484dd0();
  local_30 = iVar5;
  local_2c = shape_edittool_cpp_calculateGridHeight_FUN_00484df0();
  if (*(int *)&this_ptr->field_0x1f0 == 1) {
    iVar10 = iVar10 + iVar5;
  }
  else if (*(int *)&this_ptr->field_0x1f0 == 2) {
    iVar4 = iVar4 + local_2c;
  }
  local_34 = (int)((DAT_006141b8 + (DAT_006141b8 >> 0x1f) * -0x80) -
                  (uint)((DAT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  local_28 = DAT_006141bc / 0x60;
  iVar9 = 0;
  iVar5 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  bVar11 = this_ptr->field_0x5c != '\0';
  if (bVar11) {
    iVar5 = shape_edittool_cpp_FUN_004852f0(&this_ptr->field_0x5c);
  }
  local_18 = (uint)bVar11;
  if (this_ptr->field_0xc0 != '\0') {
    iVar6 = shape_edittool_cpp_FUN_004852f0(&this_ptr->field_0xc0);
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    local_18 = local_18 + 1;
  }
  if (0 < (int)local_18) {
    iVar9 = shape_edittool_cpp_FUN_004852f0("Cancel");
    if (iVar5 < iVar9) {
      iVar5 = iVar9;
    }
    local_1c = shape_edittool_cpp_FUN_00485380(0);
    iVar9 = local_28 + local_1c;
    local_20 = local_18 * iVar5 + (local_18 - 1) * local_34;
    if (*(int *)&this_ptr->field_0x1f0 == 2) {
      iVar9 = iVar9 + local_28;
    }
    if (iVar10 < local_20) {
      iVar10 = local_20;
    }
    iVar4 = iVar4 + iVar9;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (g_CEditorToolsPtr,iVar10,iVar4,dialog_title,window_flags);
  iVar10 = (_DAT_01c35e50 - _DAT_01c35e48) + 1;
  iVar4 = (_DAT_01c35e54 - _DAT_01c35e4c) + 1;
  if (*(int *)&this_ptr->field_0x1f0 == 1) {
    iVar10 = iVar10 - local_30;
    bottom_pos = (_DAT_01c35e54 - local_1c) - local_28;
    iVar6 = (_DAT_01c35e50 - local_30) + 1;
    top_pos = _DAT_01c35e4c;
  }
  else {
    if (*(int *)&this_ptr->field_0x1f0 != 2) goto LAB_00482f8c;
    iVar4 = iVar4 - local_2c;
    bottom_pos = _DAT_01c35e54 - iVar9;
    top_pos = ((_DAT_01c35e54 - local_2c) - iVar9) + 1;
    iVar6 = _DAT_01c35e48;
  }
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_00484390
            ((CEdScrollBar *)&this_ptr->field_0x1bc,iVar6,top_pos,_DAT_01c35e50,bottom_pos);
LAB_00482f8c:
  if (0 < (int)local_18) {
    local_24 = (_DAT_01c35e54 - local_1c) + 1;
    if (this_ptr->field_0x5c != '\0') {
      iVar6 = (_DAT_01c35e50 + 1) - local_20;
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0
                ((CEdButton *)&this_ptr->field_0x1f4,iVar6,local_24,iVar6 + -1 + iVar5,
                 local_24 + local_1c + -1,&this_ptr->field_0x5c);
    }
    if (this_ptr->field_0xc0 != '\0') {
      iVar6 = (_DAT_01c35e50 + 1) - iVar5;
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0
                ((CEdButton *)&this_ptr->field_0x2d8,iVar6,local_24,iVar6 + -1 + iVar5,
                 local_24 + local_1c + -1,&this_ptr->field_0xc0);
    }
    iVar4 = iVar4 - iVar9;
  }
  *(int *)&this_ptr->field_0x1a0 = iVar4 / *(int *)&this_ptr->field_0x18c;
  *(int *)&this_ptr->field_0x1a8 = iVar10 / *(int *)&this_ptr->field_0x1a4;
  iVar4 = (*(int *)this_ptr + *(int *)&this_ptr->field_0x1a0 + -1) / *(int *)&this_ptr->field_0x1a0;
  if (iVar4 < *(int *)&this_ptr->field_0x1a8) {
    *(int *)&this_ptr->field_0x1a8 = iVar4;
  }
  if (*(int *)&this_ptr->field_0x1a8 < 1) {
    *(uint *)&this_ptr->field_0x1a8 = 1;
  }
  *(int *)&this_ptr->field_0x19c = *(int *)&this_ptr->field_0x1a0 * *(int *)&this_ptr->field_0x1a8;
  *(uint *)&this_ptr->field_0x198 = 0;
  *(int *)&this_ptr->field_0x1a4 = iVar10 / *(int *)&this_ptr->field_0x1a8;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  this_ptr->field_0x124 = 0;
  _DAT_01c2640c = 0xffffffff;
  *(uint *)&this_ptr->field_0x188 = 0;
  return;
}
