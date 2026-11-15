// Name: core_doc.cpp_FUN_00472260
// Address: 00472260
// Address Range: [[00472260, 004722ea]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00472260(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_doc_cpp_FUN_00472260(void)

{
  float fVar1;
  double dVar2;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if ((((float)_DAT_005da2b4 <= in_stack_00000008) &&
      (dVar2 = (double)(SQRT(in_stack_00000008 * in_stack_00000008 -
                             in_stack_0000000c * in_stack_0000000c) / in_stack_00000008),
      dVar2 < 1.0)) && (0.0 <= dVar2)) {
    dVar2 = acos(dVar2);
    if (in_stack_0000000c < 0.0) {
      fVar1 = *in_stack_00000004 - (float)dVar2;
    }
    else {
      fVar1 = *in_stack_00000004 + (float)dVar2;
    }
    *in_stack_00000004 = fVar1;
    fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(*in_stack_00000004);
    *in_stack_00000004 = fVar1;
  }
  return;
}
