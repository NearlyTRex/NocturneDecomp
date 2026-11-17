// Name: core_path.cpp_queuePop_FUN_004efcd0
// Address: 004efcd0
// Address Range: [[004efcd0, 004efd4e]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_004efcd0(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePop_FUN_004efcd0(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (g_INT_01e4008c == g_INT_01e40090) {
    g_CurrentFilename = "..\\core\\path.cpp";
    g_CurrentLineNumber = 223;
    core_main_c_displayErrorAndQuit_FUN_004c8440("queuePop - empty queue?!");
  }
  *out_x = g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e4008c].x;
  *out_cost = g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e4008c].cost;
  iVar1 = g_INT_01e4008c + 1;
  *out_z = g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e4008c].z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01e4008c = iVar1;
  return;
}
