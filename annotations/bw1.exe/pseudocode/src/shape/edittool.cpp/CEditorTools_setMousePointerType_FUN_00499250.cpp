// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00499250
// Address: 00499250
// Address Range: [[00499250, 00499349]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00499250(CEditorTools *this_ptr,int cursor_type,int height,int width)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00499250(CEditorTools *this_ptr,int cursor_type,int height,int width)

{
  int iVar1;
  int iVar2;
  
  g_INT_01c3f540 = cursor_type;
  if (cursor_type != 0) {
    if ((uint)cursor_type < 2) {
      if (height < 1) {
        height = 0xb;
      }
      if (width < 1) {
        width = height / 2;
      }
      goto LAB_00499286;
    }
    if (cursor_type != 2) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 2970;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::setMousePointerType - invalid type!");
      g_CursorSizeHorizontal = width;
      g_CursorSizeVertical = height;
      return;
    }
  }
  if (height < 1) {
    height = 0xb;
  }
  if (width < 1) {
    iVar1 = (height * g_INT_0061b498 * 3) / g_INT_0061b49c;
    iVar2 = iVar1 >> 0x1f;
    width = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((height & 1U) == 0) {
    height = height + 1;
  }
LAB_00499286:
  if ((width & 1U) == 0) {
    width = width + 1;
  }
  g_CursorSizeHorizontal = width;
  g_CursorSizeVertical = height;
  return;
}
