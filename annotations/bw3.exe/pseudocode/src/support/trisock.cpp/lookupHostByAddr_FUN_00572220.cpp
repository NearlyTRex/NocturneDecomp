// Name: support_trisock.cpp_lookupHostByAddr_FUN_00572220
// Address: 00572220
// Address Range: [[00572220, 00572282]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_lookupHostByAddr_FUN_00572220(uint ip_address,void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_lookupHostByAddr_FUN_00572220(uint ip_address,void *host_info_out)

{
  hostent *host;
  int iVar1;
  void *in_stack_0000001c;
  
  support_trisock_cpp_extractIPOctets_FUN_0056f6a0
            ((uchar *)&ip_address,(uint *)&stack0xfffffff0,(uint *)&stack0xfffffff4,
             (uint *)&stack0xfffffff8,(uint *)&stack0xfffffffc);
  host = gethostbyaddr(&stack0x00000000,4,2);
  iVar1 = support_trisock_cpp_copyHostent_FUN_00571fc0(host,in_stack_0000001c);
  return iVar1;
}
