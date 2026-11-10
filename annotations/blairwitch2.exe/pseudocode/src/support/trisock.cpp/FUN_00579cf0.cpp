// Name: support_trisock.cpp_FUN_00579cf0
// Address: 00579cf0
// Address Range: [[00579cf0, 00579db5]]
// Convention: unknown
// Signature: uint support_trisock_cpp_FUN_00579cf0(int *param_1,code *param_2,undefined4 param_3)

#include "nocturne.h"

uint support_trisock_cpp_FUN_00579cf0(int *param_1,code *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[0x202] < 1) {
    param_1[0x202] = 0;
    param_1[0x203] = (int)(param_1 + 2);
    while( true ) {
      iVar2 = (*param_2)(0,param_3);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      iVar2 = support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240
                        ((CSocket *)param_1[1],(char *)(param_1 + 2),0x800,(SNetworkAddr *)0x0);
      if ((iVar2 == -2) && (uVar1 = 0xfffffffe, *param_1 != 0)) break;
      if (iVar2 < 0) {
        (*param_2)(1,"Error communicating with server");
        return 0xffffffff;
      }
      if (0 < iVar2) {
        param_1[0x202] = iVar2;
        param_1[0x203] = (int)param_1 + 9;
        param_1[0x202] = iVar2 + -1;
        return (uint)*(byte *)(param_1 + 2);
      }
    }
  }
  else {
    uVar1 = (uint)*(byte *)param_1[0x203];
    param_1[0x203] = (int)((byte *)param_1[0x203] + 1);
    param_1[0x202] = param_1[0x202] + -1;
  }
  return uVar1;
}
