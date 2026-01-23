// Name: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
// Address: 00570d60
// Address Range: [[00570d60, 00570de9]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  int iVar5;
  float local_18;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(&g_CDemonCameraInstance,gamma);
  local_18 = (float)gamma * (float)1.52587890625e-05;
  iVar2 = 0;
  iVar1 = 0;
  do {
    fVar3 = crt_math_c_pow_FUN_005ffd76((float10)iVar2 * (float10)1.52587890625e-05,(float10)local_18)
    ;
    local_18 = 7.994614e-39;
    dVar4 = crt_math_c_round_FUN_005fe6b0((double)(fVar3 * (float10)65536));
    iVar5 = (int)ROUND(dVar4);
    if (iVar5 < 0x100) {
      iVar5 = 0x100;
    }
    iVar2 = iVar2 + 1;
    *(int *)((int)g_IntensityToValueLookupTable + iVar1) = iVar5;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x10000);
  return;
}
