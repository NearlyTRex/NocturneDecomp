// Name: support_trisock.cpp_dnsRequestGetResult_FUN_0057a7c0
// Address: 0057a7c0
// Address Range: [[0057a7c0, 0057a81a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_dnsRequestGetResult_FUN_0057a7c0(void *request,void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_dnsRequestGetResult_FUN_0057a7c0(void *request,void *host_info_out)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(int *)((int)request + 0x3bc) == 1) {
    wincore_winrun_cpp_sleep_FUN_0058fd90(0.0);
  }
  if (*(int *)((int)request + 0x3bc) == 2) {
    puVar2 = (uint *)((int)request + 0x104);
    for (iVar1 = 0xae; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)host_info_out = *puVar2;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
      host_info_out = (uint *)((int)host_info_out + ((uint)bVar3 * -2 + 1) * 4);
    }
    return *(int *)((int)request + 0x3bc);
  }
  memset(host_info_out,0,0x2b8);
  return *(int *)((int)request + 0x3bc);
}
