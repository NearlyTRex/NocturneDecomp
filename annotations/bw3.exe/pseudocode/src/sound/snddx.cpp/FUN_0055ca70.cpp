// Name: sound_snddx.cpp_FUN_0055ca70
// Address: 0055ca70
// Address Range: [[0055ca70, 0055cb11]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0055ca70(undefined4 param_1,int param_2)

#include "nocturne.h"

uint sound_snddx_cpp_FUN_0055ca70(uint param_1,int param_2)

{
  int iVar1;
  uint error_code;
  int *piStack_19c;
  byte *puStack_198;
  byte bStack_c;
  byte auStack_4 [4];
  
  iVar1 = *(int *)(param_2 + 0x60);
  if (((0 < iVar1) && (iVar1 < 0x1f)) && (*(int *)(iVar1 * 0x24 + 0x2cf500c) != 0)) {
    puStack_198 = auStack_4;
    piStack_19c = *(int **)(iVar1 * 0x24 + 0x2cf500c);
    error_code = (**(code **)(*piStack_19c + 0x24))();
    if (error_code != 0) {
      sound_snddx_cpp_FUN_0055a670(error_code);
      _sprintf((char *)&piStack_19c,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_0055a560(&piStack_19c);
      return 0;
    }
    if ((bStack_c & 1) != 0) {
      return 1;
    }
  }
  return 0;
}
