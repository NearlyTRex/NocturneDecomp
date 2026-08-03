// Name: core_path.cpp_queuePop_FUN_004efcd0
// Address: 004efcd0
// Address Range: [[004efcd0, 004efd4e]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_004efcd0(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_queuePop_FUN_004efcd0(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (_DAT_01e4008c == _DAT_01e40090) {
    g_CHAR_PTR_01cc4800 = "..\\core\\path.cpp";
    g_INT_01cc4804 = 0xdf;
    core_main_c_FUN_004c8440("queuePop - empty queue?!");
  }
  *out_x = *(int *)(&DAT_01e3162c + _DAT_01e4008c * 0xc);
  *out_cost = *(int *)(&DAT_01e31630 + _DAT_01e4008c * 0xc);
  iVar1 = _DAT_01e4008c + 1;
  *out_z = *(int *)(&DAT_01e31634 + _DAT_01e4008c * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e4008c = iVar1;
  return;
}
