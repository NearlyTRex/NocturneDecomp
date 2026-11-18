// Name: support_trisock.cpp_lookupHostByAddr_FUN_0059f230
// Address: 0059f230
// Address Range: [[0059f230, 0059f292]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_lookupHostByAddr_FUN_0059f230(uint ip_address,void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_lookupHostByAddr_FUN_0059f230(uint ip_address,void *host_info_out)

{
  hostent *host;
  int iVar1;
  void *in_stack_0000001c;
  
  support_trisock_cpp_extractIPOctets_FUN_0059c6b0
            ((uchar *)&ip_address,(uint *)&stack0xfffffff0,(uint *)&stack0xfffffff4,
             (uint *)&stack0xfffffff8,(uint *)&stack0xfffffffc);
  host = gethostbyaddr(&stack0x00000000,4,2);
  iVar1 = support_trisock_cpp_copyHostent_FUN_0059efd0(host,in_stack_0000001c);
  return iVar1;
}
