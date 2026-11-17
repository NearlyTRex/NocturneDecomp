// Name: core_path.cpp_queuePop_FUN_00511c10
// Address: 00511c10
// Address Range: [[00511c10, 00511c8e]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_00511c10(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePop_FUN_00511c10(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (g_INT_01e5ec6c == g_INT_01e5ec70) {
    g_CHAR_PTR_01d046a0 = "..\\core\\path.cpp";
    g_INT_01d046a4 = 0xdf;
    core_main_c_displayErrorAndQuit_FUN_004e4500("queuePop - empty queue?!");
  }
  *out_x = g_INT_ARRAY_01e5020c[g_INT_01e5ec6c * 3];
  *out_cost = *(int *)(&DAT_01e50210 + g_INT_01e5ec6c * 0xc);
  iVar1 = g_INT_01e5ec6c + 1;
  *out_z = *(int *)(&DAT_01e50214 + g_INT_01e5ec6c * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01e5ec6c = iVar1;
  return;
}
