// Name: engine_pod.cpp_FUN_0053c650
// Address: 0053c650
// Address Range: [[0053c650, 0053c74c]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_0053c650(int *param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

uint engine_pod_cpp_FUN_0053c650(int *param_1,uint param_2,char *param_3)

{
  char cVar1;
  CPodFile *this_ptr;
  int iVar2;
  CPodFile *pCVar3;
  char *pcVar4;
  
  this_ptr = (CPodFile *)debugAllocTracked1(0x42c);
  pCVar3 = (CPodFile *)0x0;
  if (this_ptr != (CPodFile *)0x0) {
    pCVar3 = engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0(this_ptr);
  }
  if (pCVar3 == (CPodFile *)0x0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Out of memory");
    do {
      cVar1 = *pcVar4;
      *param_3 = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = engine_pod_cpp_FUN_0053b250(pCVar3,param_2,param_3);
    if (iVar2 != 0) {
      (**(code **)(param_1[0x65] + 0x10))(param_1,param_2);
      if (*param_1 < 100) {
        param_1[*param_1 + 1] = (int)pCVar3;
        *param_1 = *param_1 + 1;
        return 1;
      }
      if (pCVar3 != (CPodFile *)0x0) {
        pCVar3 = engine_pod_cpp_CPodFile_dtor_FUN_0053b210(pCVar3,0);
        FUN_005c0344(pCVar3);
      }
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Too many PODs already mounted");
      do {
        cVar1 = *pcVar4;
        *param_3 = cVar1;
        if (cVar1 == '\0') {
          return 0;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        param_3[1] = cVar1;
        param_3 = param_3 + 2;
      } while (cVar1 != '\0');
      return 0;
    }
    if (pCVar3 != (CPodFile *)0x0) {
      pCVar3 = engine_pod_cpp_CPodFile_dtor_FUN_0053b210(pCVar3,0);
      FUN_005c0344(pCVar3);
    }
  }
  return 0;
}
