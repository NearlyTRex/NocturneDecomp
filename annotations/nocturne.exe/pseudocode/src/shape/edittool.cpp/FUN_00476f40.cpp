// Name: shape_edittool.cpp_FUN_00476f40
// Address: 00476f40
// Address Range: [[00476f40, 00476fc5]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00476f40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00476f40(int param_1)

{
  char *text;
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_draw3DBorder_FUN_00476260
            (*(int *)(param_1 + 4),*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
             *(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
  text = (char *)(param_1 + 0x18);
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,text);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,text);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_01bcd070,text,((*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) - iVar1) / 2,
             ((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) - iVar2) / 2,0,-1);
  return;
}
