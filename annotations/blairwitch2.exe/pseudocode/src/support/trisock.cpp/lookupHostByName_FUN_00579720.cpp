// Name: support_trisock.cpp_lookupHostByName_FUN_00579720
// Address: 00579720
// Address Range: [[00579720, 005797a1]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_lookupHostByName_FUN_00579720(char *host_name,void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_lookupHostByName_FUN_00579720(char *host_name,void *host_info_out)

{
  char cVar1;
  int iVar2;
  hostent *host;
  uint unaff_EBX;
  char *pcVar3;
  
  iVar2 = support_trisock_cpp_parseIPComponents_FUN_00578cf0((uint *)&stack0xfffffff4,host_name);
  if (iVar2 == 0) {
    host = gethostbyname(host_name);
    iVar2 = support_trisock_cpp_copyHostent_FUN_00579550(host,host_info_out);
    return iVar2;
  }
  memset(host_info_out,0,0x2b8);
  pcVar3 = host_info_out;
  do {
    cVar1 = *host_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = host_name[1];
    host_name = host_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)host_info_out + 0x284) = 1;
  *(uint *)((int)host_info_out + 0x288) = unaff_EBX;
  return 1;
}
