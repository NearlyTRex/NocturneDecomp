// Name: core_path.cpp_queuePop_FUN_00532f60
// Address: 00532f60
// Address Range: [[00532f60, 00532fde]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_00532f60(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePop_FUN_00532f60(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (g_INT_01e7abdc == g_INT_01e7abe0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
    g_INT_01d1d404 = 0xdf;
    core_main_c_displayErrorAndQuit_FUN_005030e0("queuePop - empty queue?!");
  }
  *out_x = g_INT_ARRAY_01e6c17c[g_INT_01e7abdc * 3];
  *out_cost = *(int *)(&DAT_01e6c180 + g_INT_01e7abdc * 0xc);
  iVar1 = g_INT_01e7abdc + 1;
  *out_z = *(int *)(&DAT_01e6c184 + g_INT_01e7abdc * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01e7abdc = iVar1;
  return;
}
