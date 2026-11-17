// Name: core_setdir.cpp_restoreZBufferTable_FUN_00538390
// Address: 00538390
// Address Range: [[00538390, 005383f1]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00538390(int count)

#include "nocturne.h"

void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00538390(int count)

{
  int iVar1;
  int iVar2;
  
  if (g_UINT_PTR_ARRAY_020b0258[0] == (uint *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\setdir.cpp";
    g_INT_01d046a4 = 0x70;
    core_main_c_displayErrorAndQuit_FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < count) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)((int)g_UINT_PTR_ARRAY_01c2b64c + iVar2) =
           *(uint *)((int)g_UINT_PTR_ARRAY_020b0258 + iVar2);
      iVar2 = iVar1;
    } while (iVar1 < count * 4);
  }
  g_UINT_PTR_ARRAY_020b0258[0] = (uint *)0x0;
  return;
}
