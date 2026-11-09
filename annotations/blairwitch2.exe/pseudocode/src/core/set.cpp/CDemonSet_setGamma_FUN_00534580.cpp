// Name: core_set.cpp_CDemonSet_setGamma_FUN_00534580
// Address: 00534580
// Address Range: [[00534580, 00534609]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00534580(CDemonSet *this_ptr,int gamma)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00534580(CDemonSet *this_ptr,int gamma)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  float fVar3;
  int local_14;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00443180(&g_CDemonCameraInstance,gamma);
  fVar3 = (float)gamma * (float)_DAT_005e5bca;
  iVar1 = 0;
  do {
    fVar2 = (float10)iVar1 * (float10)_DAT_005e5bca;
    pow(fVar3);
    fVar2 = fVar2 * (float10)_DAT_005e5bd2;
    round();
    local_14 = (int)ROUND(fVar2);
    if (local_14 < 0x100) {
      local_14 = 0x100;
    }
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x1fca390) = local_14;
  } while (iVar1 < 0x10000);
  return;
}
