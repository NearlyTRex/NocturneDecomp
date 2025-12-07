// Name: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
// Address: 00570d60
// Address Range: [[00570d60, 00570de9]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma)

{
  float fVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_EDX;
  double dVar3;
  int local_10;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(&g_CDemonCameraInstance,gamma);
  fVar1 = (float)1.52587890625e-05;
  iVar2 = 0;
  do {
    dVar3 = crt_math_c_pow_FUN_005ffd76
                      (SUB108 /* extract 3-byte value */((float10)iVar2 * (float10)1.52587890625e-05,0),
                       SUB108 /* extract 3-byte value */((float10)((float)gamma * fVar1),0));
    dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3 * 65536);
    local_10 = (int)ROUND(dVar3);
    if (local_10 < 0x100) {
      local_10 = 0x100;
    }
    iVar2 = extraout_EDX + 1;
    *(int *)((int)g_IntensityToValueLookupTable + extraout_ECX) = local_10;
  } while (iVar2 < 0x10000);
  return;
}
