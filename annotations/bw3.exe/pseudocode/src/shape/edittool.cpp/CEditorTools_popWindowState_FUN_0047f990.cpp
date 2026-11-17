// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990
// Address: 0047f990
// Address Range: [[0047f990, 0047fa76]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047f990(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047f990(CEditorTools *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  if (g_INT_01c5b104 < 1) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0x916;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::popWindow() called but no window was opened!");
  }
  g_INT_01c5b104 = g_INT_01c5b104 + -1;
  iVar2 = g_INT_01c5b104 * 0x1f8;
  if (*(void **)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x1d8) != (void *)0x0) {
    debugFree(*(void **)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x1d8));
    pcVar1 = g_CHAR_ARRAY_01c5b108 + iVar2 + 0x1d8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  }
  engine_mini3d_cpp_setRenderViewport_FUN_004ed020
            (*(float *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x20),
             *(float *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x24),
             *(float *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x28),
             *(float *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x2c));
  g_INT_01c6b5a8 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x10);
  g_INT_01c6b5ac = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x14);
  g_INT_01c6b5b0 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x18);
  g_INT_01c6b5b4 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x1c);
  g_INT_01c6b598 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x30);
  g_INT_01c6b59c = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x34);
  g_INT_01c6b5a0 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x38);
  g_INT_01c6b5a4 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x3c);
  g_INT_01c6b5b8 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x40);
  g_INT_01c6b5bc = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar2 + 0x44);
  return;
}
