// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00481df0
// Address: 00481df0
// Address Range: [[00481df0, 00481ee9]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00481df0(CEditorTools *this_ptr,int cursor_type,int height,int width)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00481df0(CEditorTools *this_ptr,int cursor_type,int height,int width)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c5bae8 = cursor_type;
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
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0xb9d;
      core_main_c_FUN_004e4330("CEditorTools::setMousePointerType - invalid type!");
      DAT_005fb144 = width;
      DAT_005fb148 = height;
      return;
    }
  }
  if (height < 1) {
    height = 0xb;
  }
  if (width < 1) {
    iVar1 = (height * DAT_005fba18 * 3) / DAT_005fba1c;
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
  DAT_005fb144 = width;
  DAT_005fb148 = height;
  return;
}
