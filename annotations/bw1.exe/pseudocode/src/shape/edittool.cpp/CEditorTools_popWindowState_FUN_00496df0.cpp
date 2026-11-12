// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0
// Address: 00496df0
// Address Range: [[00496df0, 00496ed6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (_DAT_01c3eb5c < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x913;
    core_main_c_FUN_005030e0("CEditorTools::popWindow() called but no window was opened!");
  }
  _DAT_01c3eb5c = _DAT_01c3eb5c + -1;
  iVar1 = _DAT_01c3eb5c * 0x1f8;
  if (*(int *)(iVar1 + 0x1c3ed38) != 0) {
    FUN_005c09f0(*(int *)(iVar1 + 0x1c3ed38));
    *(uint *)(iVar1 + 0x1c3ed38) = 0;
  }
  engine_mini3d_cpp_FUN_00511850
            (*(uint *)(iVar1 + 0x1c3eb80),*(uint *)(iVar1 + 0x1c3eb84),
             *(uint *)(iVar1 + 0x1c3eb88),*(uint *)(iVar1 + 0x1c3eb8c));
  _DAT_01c4f008 = *(uint *)(iVar1 + 0x1c3eb70);
  _DAT_01c4f00c = *(uint *)(iVar1 + 0x1c3eb74);
  _DAT_01c4f010 = *(uint *)(iVar1 + 0x1c3eb78);
  _DAT_01c4f014 = *(uint *)(iVar1 + 0x1c3eb7c);
  _DAT_01c4eff8 = *(uint *)(iVar1 + 0x1c3eb90);
  _DAT_01c4effc = *(uint *)(iVar1 + 0x1c3eb94);
  _DAT_01c4f000 = *(uint *)(iVar1 + 0x1c3eb98);
  _DAT_01c4f004 = *(uint *)(iVar1 + 0x1c3eb9c);
  _DAT_01c4f018 = *(uint *)(iVar1 + 0x1c3eba0);
  _DAT_01c4f01c = *(uint *)(iVar1 + 0x1c3eba4);
  return;
}
