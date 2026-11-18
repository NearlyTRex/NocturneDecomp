// Name: support_trisock.cpp_copyHostent_FUN_00579550
// Address: 00579550
// Address Range: [[00579550, 0057971a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_copyHostent_FUN_00579550(hostent *host,void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_copyHostent_FUN_00579550(hostent *host,void *host_info_out)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int in_stack_0000001c;
  int iStack_10;
  int iStack_c;
  char *pcStack_8;
  
  memset(host_info_out,0,0x2b8);
  if (host == (hostent *)0x0) {
    return 0;
  }
  _strncpy(host_info_out,host->h_name,0x7f);
  iVar5 = 0;
  iStack_10 = 0;
  pcStack_8 = (char *)((int)host_info_out + 0x84);
  do {
    while( true ) {
      pcVar4 = *(char **)((int)host->h_aliases + iStack_10);
      if (pcVar4 == (char *)0x0) goto LAB_005795b3;
      iStack_10 = iStack_10 + 4;
      _strncpy(pcStack_8,pcVar4,0x7f);
      iVar3 = _strcmp(pcStack_8,host_info_out);
      if (iVar3 != 0) break;
LAB_0057964b:
      if (3 < iVar5) goto LAB_005795b3;
    }
    iVar3 = 0;
    pcVar4 = (char *)((int)host_info_out + 0x84);
    if (0 < iVar5) {
      do {
        iVar2 = _strcmp(pcStack_8,pcVar4);
        if (iVar2 == 0) break;
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x80;
      } while (iVar3 < iVar5);
    }
    if (iVar3 < iVar5) goto LAB_0057964b;
    pcStack_8 = pcStack_8 + 0x80;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
LAB_005795b3:
  *(int *)((int)host_info_out + 0x80) = iVar5;
  if ((host->h_addrtype == 2) && (host->h_length == 4)) {
    iVar5 = 0;
    iStack_c = 0;
    do {
      pbVar1 = *(byte **)((int)host->h_addr_list + iStack_c);
      if (pbVar1 == (byte *)0x0) break;
      iStack_c = iStack_c + 4;
      iVar3 = 0;
      support_trisock_cpp_buildIPAddress_FUN_00578d60
                ((uint8_t *)((int)host_info_out + 0x288),(uint)*pbVar1,(uint)pbVar1[1],
                 (uint)pbVar1[2],(uint)pbVar1[3]);
      if (0 < iVar5) {
        iVar2 = in_stack_0000001c;
        do {
          if (*(int *)(pcStack_8 + iVar5 * 4) == *(int *)(iVar2 + 0x288)) break;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < iVar5);
      }
      if (iVar5 <= iVar3) {
        iVar5 = iVar5 + 1;
      }
    } while (iVar5 < 0xc);
    *(int *)((int)host_info_out + 0x284) = iVar5;
  }
  return (uint)(0 < *(int *)((int)host_info_out + 0x284));
}
