// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990
// Address: 0047f990
// Address Range: [[0047f990, 0047fa76]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047f990(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047f990(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (_DAT_01c5b104 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x916;
    core_main_c_FUN_004e4330("CEditorTools::popWindow() called but no window was opened!");
  }
  _DAT_01c5b104 = _DAT_01c5b104 + -1;
  iVar1 = _DAT_01c5b104 * 0x1f8;
  if (*(int *)(iVar1 + 0x1c5b2e0) != 0) {
    FUN_005a3770(*(int *)(iVar1 + 0x1c5b2e0));
    *(uint *)(iVar1 + 0x1c5b2e0) = 0;
  }
  unkafter_minecar_cpp_FUN_004ed020
            (*(uint *)(iVar1 + 0x1c5b128),*(uint *)(iVar1 + 0x1c5b12c),
             *(uint *)(iVar1 + 0x1c5b130),*(uint *)(iVar1 + 0x1c5b134));
  _DAT_01c6b5a8 = *(uint *)(iVar1 + 0x1c5b118);
  _DAT_01c6b5ac = *(uint *)(iVar1 + 0x1c5b11c);
  _DAT_01c6b5b0 = *(uint *)(iVar1 + 0x1c5b120);
  _DAT_01c6b5b4 = *(uint *)(iVar1 + 0x1c5b124);
  _DAT_01c6b598 = *(uint *)(iVar1 + 0x1c5b138);
  _DAT_01c6b59c = *(uint *)(iVar1 + 0x1c5b13c);
  _DAT_01c6b5a0 = *(uint *)(iVar1 + 0x1c5b140);
  _DAT_01c6b5a4 = *(uint *)(iVar1 + 0x1c5b144);
  _DAT_01c6b5b8 = *(uint *)(iVar1 + 0x1c5b148);
  _DAT_01c6b5bc = *(uint *)(iVar1 + 0x1c5b14c);
  return;
}
