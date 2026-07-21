// Name: FUN_0055d610
// Address: 0055d610
// Address Range: [[0055d610, 0055d658]]
// Convention: unknown
// Signature: void FUN_0055d610(undefined4 param_1)

#include "nocturne.h"

void FUN_0055d610(uint param_1)

{
  uint *unaff_ESI;
  uint *puVar1;
  byte bVar2;
  uint auStackY_1804 [1512];
  byte local_58 [48];
  uint local_28;
  uint auStack_24 [6];
  
  bVar2 = 0;
  auStack_24[3] = 0;
  auStack_24[4] = 0;
  auStack_24[5] = 0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_58,auStack_24 + 3,param_1)
  ;
  core_xform_cpp_matrixToQuaternion_FUN_0055cf10(local_58);
  puVar1 = unaff_ESI + (uint)bVar2 * -2 + 1;
  *unaff_ESI = local_28;
  *puVar1 = auStack_24[(uint)bVar2 * -2];
  puVar1[(uint)bVar2 * -2 + 1] = auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  (puVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (auStack_24 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  return;
}
