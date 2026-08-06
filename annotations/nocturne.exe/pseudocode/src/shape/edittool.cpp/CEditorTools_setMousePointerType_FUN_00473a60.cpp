// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00473a60
// Address: 00473a60
// Address Range: [[00473a60, 00473b59]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00473a60(CEditorTools *this_ptr,int cursor_type,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00473a60(CEditorTools *this_ptr,int cursor_type,int width,int height)

{
  int iVar1;
  int iVar2;
  
  _DAT_01bcd9c0 = cursor_type;
  if (cursor_type != 0) {
    if ((uint)cursor_type < 2) {
      if (width < 1) {
        width = 0xb;
      }
      if (height < 1) {
        height = width / 2;
      }
      goto LAB_00473a96;
    }
    if (cursor_type != 2) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 2363;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::setMousePointerType - invalid type!");
      DAT_005b6d54 = height;
      DAT_005b6d58 = width;
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
LAB_00473a96:
  if ((height & 1U) == 0) {
    height = height + 1;
  }
  DAT_005b6d54 = height;
  DAT_005b6d58 = width;
  return;
}
