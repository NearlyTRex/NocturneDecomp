// Name: core_path.cpp_queuePop_FUN_0050ac40
// Address: 0050ac40
// Address Range: [[0050ac40, 0050acbe]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_0050ac40(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePop_FUN_0050ac40(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (g_INT_01ed02ac == g_INT_01ed02b0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\path.cpp";
    g_INT_01d71de4 = 0xdf;
    core_main_c_displayErrorAndQuit_FUN_004e4330("queuePop - empty queue?!");
  }
  *out_x = g_INT_ARRAY_01ec184c[g_INT_01ed02ac * 3];
  *out_cost = *(int *)(&DAT_01ec1850 + g_INT_01ed02ac * 0xc);
  iVar1 = g_INT_01ed02ac + 1;
  *out_z = *(int *)(&DAT_01ec1854 + g_INT_01ed02ac * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01ed02ac = iVar1;
  return;
}
