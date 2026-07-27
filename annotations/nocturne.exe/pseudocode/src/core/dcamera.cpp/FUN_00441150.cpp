// Name: core_dcamera.cpp_FUN_00441150
// Address: 00441150
// Address Range: [[00441150, 004411ab]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00441150(int param_1,int *param_2)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00441150(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *unaff_ESI;
  
  iVar1 = param_2[2];
  iVar2 = *(int *)(param_1 + 0x1c4);
  iVar3 = param_2[2];
  iVar4 = param_2[1];
  iVar5 = *(int *)(param_1 + 0x1cc);
  *unaff_ESI = (int)(((longlong)(*param_2 - *(int *)(param_1 + 0x1c8)) * (longlong)iVar1) /
                    (longlong)*(int *)(param_1 + 0x1c0));
  unaff_ESI[1] = (int)(((longlong)(iVar4 - iVar5) * (longlong)iVar3) / (longlong)iVar2);
  unaff_ESI[2] = iVar1;
  return;
}
