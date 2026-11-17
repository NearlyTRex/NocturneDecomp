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
  *out_x = g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec6c].x;
  *out_cost = g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec6c].cost;
  iVar1 = g_INT_01e5ec6c + 1;
  *out_z = g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec6c].z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01e5ec6c = iVar1;
  return;
}
