// Name: support_trisock.cpp_lookupHostByAddr_FUN_005797b0
// Address: 005797b0
// Address Range: [[005797b0, 00579812]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_lookupHostByAddr_FUN_005797b0(uint ip_address,void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_lookupHostByAddr_FUN_005797b0(uint ip_address,void *host_info_out)

{
  hostent *host;
  int iVar1;
  void *in_stack_0000001c;
  
  support_trisock_cpp_extractIPOctets_FUN_00578dd0
            ((uchar *)&ip_address,(uint *)&stack0xfffffff0,(uint *)&stack0xfffffff4,
             (uint *)&stack0xfffffff8,(uint *)&stack0xfffffffc);
  host = gethostbyaddr(&stack0x00000000,4,2);
  iVar1 = support_trisock_cpp_copyHostent_FUN_00579550(host,in_stack_0000001c);
  return iVar1;
}
