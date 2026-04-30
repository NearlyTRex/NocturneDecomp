// Name: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
// Address: 00570d60
// MANUAL RECONSTRUCTION
// Address Range: [[00570d60, 00570de9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma)

{
  int iVar2;
  float10 fVar3;
  float exponent;
  int local_18;

  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(&g_CDemonCameraInstance,gamma);
  exponent = (float)gamma * (float)1.52587890625e-05;
  for (iVar2 = 0; iVar2 < 0x10000; iVar2 = iVar2 + 1) {
    fVar3 = pow((float10)iVar2 * (float10)1.52587890625e-05,(float10)exponent);
    local_18 = (int)ROUND(ROUND(fVar3 * (float10)65536));
    if (local_18 < 0x100) {
      local_18 = 0x100;
    }
    g_IntensityToValueLookupTable[iVar2] = local_18;
  }
  return;
}
