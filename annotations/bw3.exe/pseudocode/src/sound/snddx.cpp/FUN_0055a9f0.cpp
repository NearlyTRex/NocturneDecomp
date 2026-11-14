// Name: sound_snddx.cpp_FUN_0055a9f0
// Address: 0055a9f0
// Address Range: [[0055a9f0, 0055ab1e]]
// Convention: unknown
// Signature: bool sound_snddx_cpp_FUN_0055a9f0(int param_1)

#include "nocturne.h"

bool sound_snddx_cpp_FUN_0055a9f0(int param_1)

{
  int *piVar1;
  uint error_code;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int unaff_retaddr;
  int *apiStack_1a4 [101];
  
  param_1 = param_1 * 0x24;
  piVar3 = (int *)(param_1 + 0x2cf500c);
  apiStack_1a4[0] = (int *)*piVar3;
  bVar4 = true;
  if (apiStack_1a4[0] != (int *)0x0) {
    error_code = (**(code **)(*apiStack_1a4[0] + 0x48))();
    if (error_code != 0) {
      sound_snddx_cpp_FUN_0055a670(error_code);
      _sprintf((char *)apiStack_1a4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560((char *)apiStack_1a4);
    }
    bVar4 = error_code == 0;
    piVar1 = *(int **)(param_1 + 0x2cf5010);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(param_1 + 0x2cf5010) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x2cf5014) * 0x18;
    if (*(int *)(param_1 + 0x2cf501c) != 0) {
      *(uint *)(*(int *)(param_1 + 0x2cf501c) * 0x24 + 0x2cf5018) =
           *(uint *)(param_1 + 0x2cf5018);
    }
    if (unaff_retaddr == *(int *)(iVar2 + 0x2cf49f8)) {
      *(uint *)(iVar2 + 0x2cf49f8) = *(uint *)(param_1 + 0x2cf501c);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x2cf5018) * 0x24 + 0x2cf501c) =
           *(uint *)(param_1 + 0x2cf501c);
    }
    piVar1 = (int *)*piVar3;
    if ((piVar1 != *(int **)(iVar2 + 0x2cf49f4)) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar3 = 0;
    }
  }
  *piVar3 = 0;
  *(uint *)(param_1 + 0x2cf501c) = 0;
  *(uint *)(param_1 + 0x2cf5018) = 0;
  *(uint *)(param_1 + 0x2cf5014) = 0;
  return bVar4;
}
