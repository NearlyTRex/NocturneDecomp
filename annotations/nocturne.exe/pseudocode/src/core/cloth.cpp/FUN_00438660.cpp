// Name: core_cloth.cpp_FUN_00438660
// Address: 00438660
// Address Range: [[00438660, 004386af]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_00438660(int *param_1,undefined4 *param_2)

#include "nocturne.h"

void core_cloth_cpp_FUN_00438660(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      while( true ) {
        iVar1 = piVar2[0x65];
        if ((uint *)(iVar1 + 0x3ab24) == param_2) break;
        *(uint *)(iVar1 + 0x3ab24) = *param_2;
        *(uint *)(iVar1 + 0x3ab28) = param_2[1];
        *(uint *)(iVar1 + 0x3ab2c) = param_2[2];
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
        if (*param_1 <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return;
}
