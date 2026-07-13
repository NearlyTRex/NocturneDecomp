// Name: FUN_0043b1a0
// Address: 0043b1a0
// Address Range: [[0043b1a0, 0043b2ea]]
// Convention: unknown
// Signature: void FUN_0043b1a0(int param_1,float param_2)

#include "nocturne.h"

void FUN_0043b1a0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  iVar2 = FUN_0047dc30(0x01C03A10,param_1 + 0x738);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x800) = 1;
  }
  iVar2 = FUN_0047dc30(0x01C03A10,param_1 + 0x79c);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x800) != 0) {
      local_18 = param_1 + 0x72c;
      iVar4 = 0;
      local_14 = param_1 + 0x804;
      iVar2 = 0;
      while (iVar4 < *(int *)(0x01E57284 + 0x14cd6c)) {
        iVar1 = *(int *)(0x01E57284 + 0x14cd70 + iVar2);
        if (param_1 == *(int *)(iVar1 + 0xdc)) {
          if (*(char *)(*(int *)(iVar1 + 0xdc) + 0x804) == '\0') {
LAB_0043b24d:
            FUN_0040a200(param_1,&local_30,local_18);
            local_24 = local_30 * param_2;
            local_20 = local_2c * param_2;
            local_1c = local_28 * param_2;
            if ((float *)(iVar1 + 0xe0) != &local_24) {
              *(float *)(iVar1 + 0xe0) = local_24;
              *(float *)(iVar1 + 0xe4) = local_20;
              *(float *)(iVar1 + 0xe8) = local_1c;
            }
            *(uint *)(iVar1 + 0xf4) = 0;
            *(uint *)(iVar1 + 0xf0) = 0;
            *(uint *)(iVar1 + 0xec) = 0;
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 4;
          }
          else {
            iVar3 = FUN_0040d7e0(iVar1,local_14);
            if (iVar3 != 0) goto LAB_0043b24d;
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 4;
          }
        }
        else {
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x800) = 0;
  }
  return;
}
