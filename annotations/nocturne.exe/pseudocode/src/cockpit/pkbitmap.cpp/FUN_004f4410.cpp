// Name: cockpit_pkbitmap.cpp_FUN_004f4410
// Address: 004f4410
// Address Range: [[004f4410, 004f44cf]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_004f4410(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_004f4410(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_18;
  uint local_14;
  
  if ((((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x14) != 0)) && (param_2 <= param_6))
     && (param_3 <= param_7)) {
    iVar3 = *(int *)(param_1 + 0x18) + param_2 + -1;
    iVar1 = *(int *)(param_1 + 0x1c) + param_3 + -1;
    if ((param_4 <= iVar3) && (param_5 <= iVar1)) {
      local_18 = 0;
      if (param_2 < param_4) {
        local_18 = param_4 - param_2;
        param_2 = param_4;
      }
      local_14 = 0;
      if (param_3 < param_5) {
        local_14 = param_5 - param_3;
        param_3 = param_5;
      }
      iVar2 = *(int *)(param_1 + 0x18) + -1;
      if (param_6 < iVar3) {
        iVar2 = iVar2 - (iVar3 - param_6);
      }
      iVar3 = *(int *)(param_1 + 0x1c) + -1;
      if (param_7 < iVar1) {
        iVar3 = iVar3 - (iVar1 - param_7);
      }
      cockpit_pkbitmap_cpp_FUN_004f4310(param_1,param_2,param_3,local_18,local_14,iVar2,iVar3);
    }
  }
  return;
}
