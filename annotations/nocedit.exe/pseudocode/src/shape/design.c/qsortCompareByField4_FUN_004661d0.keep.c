// Name: shape_design.c_qsortCompareByField4_FUN_004661d0
// Address: 004661d0
// MANUAL RECONSTRUCTION
// Address Range: [[004661d0, 00466200]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_qsortCompareByField4_FUN_004661d0(void *element_a,void *element_b)

#include "nocturne.h"

int __cdecl shape_design_c_qsortCompareByField4_FUN_004661d0(void *element_a,void *element_b)

{
  return ((int *)element_b)[1] - ((int *)element_a)[1];
}
