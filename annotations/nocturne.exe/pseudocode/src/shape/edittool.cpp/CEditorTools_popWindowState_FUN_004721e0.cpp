// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
// Address: 004721e0
// Address Range: [[004721e0, 004722af]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (_DAT_01bcd07c < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1816;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::popWindow() called but no window was opened!");
  }
  _DAT_01bcd07c = _DAT_01bcd07c + -1;
  iVar1 = _DAT_01bcd07c * 0x1d8;
  if (*(void **)(iVar1 + 0x1bcd248) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x1bcd248));
    *(uint *)(iVar1 + 0x1bcd248) = 0;
  }
  _DAT_01c00c58 = *(uint *)(iVar1 + 0x1bcd090);
  _DAT_01c00c5c = *(uint *)(iVar1 + 0x1bcd094);
  _DAT_01c00c60 = *(uint *)(iVar1 + 0x1bcd098);
  _DAT_01c00c64 = *(uint *)(iVar1 + 0x1bcd09c);
  _DAT_01c00c48 = *(uint *)(iVar1 + 0x1bcd0a0);
  _DAT_01c00c4c = *(uint *)(iVar1 + 0x1bcd0a4);
  _DAT_01c00c50 = *(uint *)(iVar1 + 0x1bcd0a8);
  _DAT_01c00c54 = *(uint *)(iVar1 + 0x1bcd0ac);
  _DAT_01c00c68 = *(uint *)(iVar1 + 0x1bcd0b0);
  _DAT_01c00c6c = *(uint *)(iVar1 + 0x1bcd0b4);
  return;
}
