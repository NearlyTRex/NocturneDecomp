// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00481df0
// Address: 00481df0
// Address Range: [[00481df0, 00481ee9]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00481df0(CEditorTools *this_ptr,int cursor_type,int height,int width)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00481df0(CEditorTools *this_ptr,int cursor_type,int height,int width)

{
  int iVar1;
  int iVar2;
  
  g_MouseCursorType = cursor_type;
  if (cursor_type != 0) {
    if ((uint)cursor_type < 2) {
      if (height < 1) {
        height = 0xb;
      }
      if (width < 1) {
        width = height / 2;
      }
      goto LAB_00481e26;
    }
    if (cursor_type != 2) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 2973;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::setMousePointerType - invalid type!");
      g_CursorSizeHorizontal = width;
      g_CursorSizeVertical = height;
      return;
    }
  }
  if (height < 1) {
    height = 0xb;
  }
  if (width < 1) {
    iVar1 = (height * g_INT_005fba18 * 3) / g_INT_005fba1c;
    iVar2 = iVar1 >> 0x1f;
    width = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((height & 1U) == 0) {
    height = height + 1;
  }
LAB_00481e26:
  if ((width & 1U) == 0) {
    width = width + 1;
  }
  g_CursorSizeHorizontal = width;
  g_CursorSizeVertical = height;
  return;
}
