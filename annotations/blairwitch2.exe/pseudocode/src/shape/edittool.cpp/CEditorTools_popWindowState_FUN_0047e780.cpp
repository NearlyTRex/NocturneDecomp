// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780
// Address: 0047e780
// Address Range: [[0047e780, 0047e866]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  if (g_INT_01c2559c < 1) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0x8b5;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CEditorTools::popWindow() called but no window was opened!");
  }
  g_INT_01c2559c = g_INT_01c2559c + -1;
  iVar2 = g_INT_01c2559c * 0x1f8;
  if (*(void **)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x1d8) != (void *)0x0) {
    debugFree(*(void **)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x1d8));
    pcVar1 = g_CHAR_ARRAY_01c255a0 + iVar2 + 0x1d8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  }
  engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0
            (*(float *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x20),
             *(float *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x24),
             *(float *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x28),
             *(float *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x2c));
  g_INT_01c35e48 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x10);
  g_INT_01c35e4c = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x14);
  g_INT_01c35e50 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x18);
  g_INT_01c35e54 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x1c);
  g_INT_01c35e38 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x30);
  g_INT_01c35e3c = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x34);
  g_INT_01c35e40 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x38);
  g_INT_01c35e44 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x3c);
  g_INT_01c35e58 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x40);
  g_INT_01c35e5c = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar2 + 0x44);
  return;
}
