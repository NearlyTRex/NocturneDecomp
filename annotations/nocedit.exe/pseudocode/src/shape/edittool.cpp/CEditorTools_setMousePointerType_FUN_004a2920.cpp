// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
// Address: 004a2920
// Address Range: [[004a2920, 004a2a19]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920(CEditorTools * this_ptr, int cursor_type, int width, int height)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920
          (CEditorTools *this_ptr,int cursor_type,int width,int height)

{
  int iVar1;
  int iVar2;
  
  g_MouseCursorType = cursor_type;
  if (cursor_type != 0) {
    if ((uint)cursor_type < 2) {
      if (width < 1) {
        width = 0xb;
      }
      if (height < 1) {
        height = width / 2;
      }
      goto LAB_004a2956;
    }
    if (cursor_type != 2) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0xab3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::setMousePointerType - invalid type!");
      g_CursorSizeHorizontal = height;
      g_CursorSizeVertical = height;
      return;
    }
  }
  if (width < 1) {
    width = 0xb;
  }
  if (height < 1) {
    iVar1 = (width * g_WindowWidth * 3) / g_WindowHeight;
    iVar2 = iVar1 >> 0x1f;
    height = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((width & 1U) == 0) {
    width = width + 1;
  }
LAB_004a2956:
  if ((height & 1U) == 0) {
    height = height + 1;
  }
  g_CursorSizeHorizontal = height;
  g_CursorSizeVertical = width;
  return;
}
