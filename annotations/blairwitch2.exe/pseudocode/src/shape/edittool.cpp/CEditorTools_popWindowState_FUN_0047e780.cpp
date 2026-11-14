// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780
// Address: 0047e780
// Address Range: [[0047e780, 0047e866]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (_DAT_01c2559c < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x8b5;
    core_main_c_FUN_004e4500("CEditorTools::popWindow() called but no window was opened!");
  }
  _DAT_01c2559c = _DAT_01c2559c + -1;
  iVar1 = _DAT_01c2559c * 0x1f8;
  if (*(int *)(iVar1 + 0x1c25778) != 0) {
    FUN_005b86a0(*(int *)(iVar1 + 0x1c25778));
    *(uint *)(iVar1 + 0x1c25778) = 0;
  }
  engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0
            (*(float *)(iVar1 + 0x1c255c0),*(float *)(iVar1 + 0x1c255c4),
             *(float *)(iVar1 + 0x1c255c8),*(float *)(iVar1 + 0x1c255cc));
  _DAT_01c35e48 = *(uint *)(iVar1 + 0x1c255b0);
  _DAT_01c35e4c = *(uint *)(iVar1 + 0x1c255b4);
  _DAT_01c35e50 = *(uint *)(iVar1 + 0x1c255b8);
  _DAT_01c35e54 = *(uint *)(iVar1 + 0x1c255bc);
  _DAT_01c35e38 = *(uint *)(iVar1 + 0x1c255d0);
  _DAT_01c35e3c = *(uint *)(iVar1 + 0x1c255d4);
  _DAT_01c35e40 = *(uint *)(iVar1 + 0x1c255d8);
  _DAT_01c35e44 = *(uint *)(iVar1 + 0x1c255dc);
  _DAT_01c35e58 = *(uint *)(iVar1 + 0x1c255e0);
  _DAT_01c35e5c = *(uint *)(iVar1 + 0x1c255e4);
  return;
}
