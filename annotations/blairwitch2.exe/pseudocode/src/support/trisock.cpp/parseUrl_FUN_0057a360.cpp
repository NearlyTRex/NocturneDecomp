// Name: support_trisock.cpp_parseUrl_FUN_0057a360
// Address: 0057a360
// Address Range: [[0057a360, 0057a475]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_parseUrl_FUN_0057a360(char *url,char *host_out,ushort *port_out,char *path_out,int path_size)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0057a42a) */
/* WARNING: Removing unreachable block (ram,0x0057a432) */
/* WARNING: Removing unreachable block (ram,0x0057a43a) */

int __cdecl support_trisock_cpp_parseUrl_FUN_0057a360(char *url,char *host_out,ushort *port_out,char *path_out,int path_size)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *host_out = '\0';
  *path_out = '\0';
  *port_out = 0x50;
  iVar2 = _strnicmp(url,"http:",5);
  if (iVar2 == 0) {
    url = url + 5;
  }
  iVar2 = _strnicmp(url,"//",2);
  if (iVar2 == 0) {
    url = url + 2;
  }
  cVar1 = *url;
  iVar2 = 0;
  pcVar3 = host_out;
  for (; ((cVar1 != '\0' && (cVar1 = *url, cVar1 != ':')) && (cVar1 != '/')); url = url + 1) {
    pcVar4 = pcVar3;
    if (iVar2 < 0x7f) {
      pcVar4 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      *pcVar3 = cVar1;
    }
    cVar1 = url[1];
    pcVar3 = pcVar4;
  }
  host_out[iVar2] = '\0';
  if (*url != ':') {
    iVar2 = 0;
    pcVar3 = path_out;
    while( true ) {
      if (*url == '\0') break;
      if (iVar2 < path_size + -1) {
        *pcVar3 = *url;
        url = url + 1;
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 1;
      }
      else {
        url = url + 1;
      }
    }
    if (iVar2 == 0) {
      *pcVar3 = '/';
      iVar2 = iVar2 + 1;
    }
    path_out[iVar2] = '\0';
    return 1;
  }
  sscanf(url,":%d%n");
  return 0;
}
