// Name: core_dskybox.cpp_initializeSkyboxTexture_FUN_0046f300
// Address: 0046f300
// Address Range: [[0046f300, 0046f333]]
// Convention: __cdecl
// Signature: int __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_0046f300(int param_1)

#include "nocturne.h"

int __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_0046f300(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "ANITESKY.RAW" + 1;
  pcVar3 = (char *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return param_1;
}
