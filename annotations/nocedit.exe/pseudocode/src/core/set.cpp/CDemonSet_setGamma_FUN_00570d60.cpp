// Name: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
// Address: 00570d60
// Address Range: [[00570d60, 00570de9]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  double dVar3;
  int iVar4;
  float local_14;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(&g_CDemonCameraInstance,gamma);
  local_14 = (float)gamma * (float)1.52587890625e-05;
  iVar1 = 0;
  do {
    fVar2 = crt_math_c_pow_FUN_005ffd76((float10)iVar1 * (float10)1.52587890625e-05,(float10)local_14)
    ;
    local_14 = 7.994614e-39;
    dVar3 = crt_math_c_round_FUN_005fe6b0((double)(fVar2 * (float10)65536));
    iVar4 = (int)ROUND(dVar3);
    if (iVar4 < 0x100) {
      iVar4 = 0x100;
    }
    iVar1 = extraout_EDX + 1;
    *(int *)((int)g_IntensityToValueLookupTable + extraout_ECX) = iVar4;
  } while (iVar1 < 0x10000);
  return;
}
