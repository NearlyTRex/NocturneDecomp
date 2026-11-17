// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0
// Address: 00496df0
// Address Range: [[00496df0, 00496ed6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  if (g_INT_01c3eb5c < 1) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0x913;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::popWindow() called but no window was opened!");
  }
  g_INT_01c3eb5c = g_INT_01c3eb5c + -1;
  iVar2 = g_INT_01c3eb5c * 0x1f8;
  if (*(void **)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x1d8) != (void *)0x0) {
    debugFree(*(void **)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x1d8));
    pcVar1 = g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x1d8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  }
  engine_mini3d_cpp_setRenderViewport_FUN_00511850
            (*(float *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x20),
             *(float *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x24),
             *(float *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x28),
             *(float *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x2c));
  g_INT_01c4f008 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x10);
  g_INT_01c4f00c = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x14);
  g_INT_01c4f010 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x18);
  g_INT_01c4f014 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x1c);
  g_INT_01c4eff8 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x30);
  g_INT_01c4effc = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x34);
  g_INT_01c4f000 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x38);
  g_INT_01c4f004 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x3c);
  g_INT_01c4f018 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x40);
  g_INT_01c4f01c = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar2 + 0x44);
  return;
}
