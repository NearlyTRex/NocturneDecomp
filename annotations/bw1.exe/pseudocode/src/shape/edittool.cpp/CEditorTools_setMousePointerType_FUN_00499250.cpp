// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00499250
// Address: 00499250
// Address Range: [[00499250, 00499349]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00499250(CEditorTools *this_ptr,int cursor_type,int height,int width)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00499250(CEditorTools *this_ptr,int cursor_type,int height,int width)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c3f540 = cursor_type;
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
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0xb9a;
      core_main_c_FUN_005030e0("CEditorTools::setMousePointerType - invalid type!");
      DAT_0061abc4 = width;
      DAT_0061abc8 = height;
      return;
    }
  }
  if (height < 1) {
    height = 0xb;
  }
  if (width < 1) {
    iVar1 = (height * DAT_0061b498 * 3) / DAT_0061b49c;
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
  DAT_0061abc4 = width;
  DAT_0061abc8 = height;
  return;
}
