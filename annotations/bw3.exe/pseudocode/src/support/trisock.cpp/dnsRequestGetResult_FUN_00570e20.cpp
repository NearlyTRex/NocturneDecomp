// Name: support_trisock.cpp_dnsRequestGetResult_FUN_00570e20
// Address: 00570e20
// Address Range: [[00570e20, 00570e7a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_dnsRequestGetResult_FUN_00570e20(void *request,void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_dnsRequestGetResult_FUN_00570e20(void *request,void *host_info_out)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(int *)((int)request + 0x3bc) == 1) {
    wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
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
