// Name: shape_edittool.cpp_FUN_00475470
// Address: 00475470
// Address Range: [[00475470, 004759c5]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00475470(CStrList *param_1,char *param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00475470(CStrList *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  CStrList_vtable *pCVar4;
  CStrList *pCVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int top_pos;
  int iVar10;
  char local_144 [300];
  int local_18;
  int local_14;
  
  param_1[0x11].item_count = _DAT_01bcd9bc + 1;
  param_1[0x11].capacity = 8;
  param_1[10].capacity = 1;
  memset(&param_1[7].vtable,0,0x28);
  local_14 = 0;
  if (0 < param_1->item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,local_14);
      iVar10 = 0;
      pCVar5 = param_1;
      while( true ) {
        cVar1 = *pcVar3;
        pcVar2 = pcVar3;
        pcVar8 = local_144;
        while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
          *pcVar8 = *pcVar2;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar3;
          pcVar2 = pcVar3;
        }
        *pcVar8 = '\0';
        pCVar4 = (CStrList_vtable *)
                 engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,local_144);
        if ((int)pCVar5[7].vtable._us < (int)pCVar4) {
          pCVar5[7].vtable._us = pCVar4;
        }
        iVar10 = iVar10 + 1;
        pCVar5 = (CStrList *)&pCVar5->capacity;
        if (*pcVar3 == '\0') break;
        if (9 < iVar10) {
          g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
          g_INT_01cc4804 = 0xd01;
          core_main_c_FUN_004c8440("Too many picklist columns!");
        }
      }
      if (param_1[10].capacity < iVar10) {
        param_1[10].capacity = iVar10;
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_1->item_count);
  }
  pCVar5 = param_1;
  for (iVar10 = 0; iVar10 < param_1[10].capacity + -1; iVar10 = iVar10 + 1) {
    pCVar5[7].vtable._us =
         (CStrList_vtable *)((int)&(pCVar5[7].vtable._us)->dtor + DAT_005b761c / 0x28);
    pCVar5 = (CStrList *)&pCVar5->capacity;
  }
  iVar9 = 0;
  iVar10 = param_1[10].capacity;
  param_1[0x12].data_array = (char **)0x0;
  pCVar5 = param_1;
  if (0 < iVar10) {
    do {
      iVar9 = iVar9 + 1;
      iVar10 = param_1[10].capacity;
      param_1[0x12].data_array =
           (char **)((int)param_1[0x12].data_array + (int)pCVar5[7].vtable._us);
      pCVar5 = (CStrList *)&pCVar5->capacity;
    } while (iVar9 < iVar10);
  }
  param_1[0x12].data_array = (char **)((int)param_1[0x12].data_array + param_1[0x11].capacity * 2);
  iVar10 = (DAT_005b7620 + _DAT_01bcd9bc * -4) / param_1[0x11].item_count;
  param_1[0x12].capacity = iVar10;
  if (iVar10 < 1) {
    param_1[0x12].capacity = 1;
  }
  if (param_1->item_count < param_1[0x12].capacity) {
    param_1[0x12].capacity = param_1->item_count;
  }
  iVar10 = DAT_005b761c * 7 >> 0x1f;
  pCVar4 = (CStrList_vtable *)
           (((int)((DAT_005b761c * 7 + iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3) /
           (int)param_1[0x12].data_array);
  param_1[0x12].vtable._us = pCVar4;
  if ((int)pCVar4 < 1) {
    param_1[0x12].vtable = (UStrListVTable)0x1;
  }
  pCVar4 = (CStrList_vtable *)
           ((param_1->item_count + param_1[0x12].capacity + -1) / param_1[0x12].capacity);
  if ((int)pCVar4 < (int)param_1[0x12].vtable._us) {
    param_1[0x12].vtable._us = pCVar4;
  }
  if (param_1[1].item_count != 0) {
    param_1[0x12].vtable = (UStrListVTable)0x1;
  }
  param_1[0x16].vtable._us = (CStrList_vtable *)0x0;
  if (param_1[0x12].capacity * (int)param_1[0x12].vtable._us < param_1->item_count) {
    if ((int)param_1[0x12].vtable._us < 2) {
      param_1[0x16].vtable = (UStrListVTable)0x1;
    }
    else {
      param_1[0x16].vtable = (UStrListVTable)0x2;
    }
  }
  iVar10 = (int)param_1[0x12].data_array * (int)param_1[0x12].vtable._us + 8;
  iVar9 = param_1[0x12].capacity * param_1[0x11].item_count + 6;
  iVar6 = shape_edittool_cpp_calculateGridWidth_FUN_00476df0();
  local_18 = iVar6;
  iVar7 = shape_edittool_cpp_calculateGridHeight_FUN_00476e10();
  if (param_1[0x16].vtable._us == (CStrList_vtable *)0x1) {
    iVar10 = iVar10 + iVar6;
  }
  else if (param_1[0x16].vtable._us == (CStrList_vtable *)0x2) {
    iVar9 = iVar9 + iVar7;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (g_CEditorTools_PTR_005b6d50,iVar10,iVar9,param_2,param_3);
  iVar10 = (_DAT_01c00c60 - _DAT_01c00c58) + 1;
  iVar9 = (_DAT_01c00c64 - _DAT_01c00c5c) + 1;
  if (param_1[0x16].vtable._us == (CStrList_vtable *)0x1) {
    iVar10 = iVar10 - local_18;
    iVar6 = (_DAT_01c00c60 - local_18) + 1;
    top_pos = _DAT_01c00c5c;
  }
  else {
    if (param_1[0x16].vtable._us != (CStrList_vtable *)0x2) goto LAB_0047587b;
    top_pos = (_DAT_01c00c64 - iVar7) + 1;
    iVar9 = iVar9 - iVar7;
    iVar6 = _DAT_01c00c58;
  }
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004764d0
            ((CEdScrollBar *)&param_1[0x13].data_array,iVar6,top_pos,_DAT_01c00c60,_DAT_01c00c64);
LAB_0047587b:
  param_1[0x12].capacity = iVar9 / param_1[0x11].item_count;
  param_1[0x12].vtable._us = (CStrList_vtable *)(iVar10 / (int)param_1[0x12].data_array);
  pCVar4 = (CStrList_vtable *)
           ((param_1->item_count + param_1[0x12].capacity + -1) / param_1[0x12].capacity);
  if ((int)pCVar4 < (int)param_1[0x12].vtable._us) {
    param_1[0x12].vtable._us = pCVar4;
  }
  if ((int)param_1[0x12].vtable._us < 1) {
    param_1[0x12].vtable = (UStrListVTable)0x1;
  }
  param_1[0x12].item_count = param_1[0x12].capacity * (int)param_1[0x12].vtable._us;
  param_1[0x11].vtable._us = (CStrList_vtable *)0x0;
  param_1[0x12].data_array = (char **)(iVar10 / (int)param_1[0x12].vtable._us);
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  *(byte *)&param_1[10].data_array = 0;
  _DAT_01bcde20 = 0xffffffff;
  param_1[0x10].vtable._us = (CStrList_vtable *)0x0;
  return;
}
