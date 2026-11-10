// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00480bf0
// Address: 00480bf0
// Address Range: [[00480bf0, 00480ce9]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00480bf0(CEditorTools *this_ptr,int cursor_type,int height,int width)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00480bf0(CEditorTools *this_ptr,int cursor_type,int height,int width)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c25f80 = cursor_type;
  if (cursor_type != 0) {
    if ((uint)cursor_type < 2) {
      if (height < 1) {
        height = 0xb;
      }
      if (width < 1) {
        width = height / 2;
      }
      goto LAB_00480c26;
    }
    if (cursor_type != 2) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0xb28;
      core_main_c_FUN_004e4500("CEditorTools::setMousePointerType - invalid type!");
      DAT_006138e4 = width;
      DAT_006138e8 = height;
      return;
    }
  }
  if (height < 1) {
    height = 0xb;
  }
  if (width < 1) {
    iVar1 = (height * DAT_006141b8 * 3) / DAT_006141bc;
    iVar2 = iVar1 >> 0x1f;
    width = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((height & 1U) == 0) {
    height = height + 1;
  }
LAB_00480c26:
  if ((width & 1U) == 0) {
    width = width + 1;
  }
  DAT_006138e4 = width;
  DAT_006138e8 = height;
  return;
}
