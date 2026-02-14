// Name: engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
// Address: 004bc5d0
// Address Range: [[004bc5d0, 004bc641]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0(CFileManager *this_ptr,char *network_username,char *password,char *domain)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0(CFileManager *this_ptr,char *network_username,char *password,char *domain)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = g_VersionControlSession.network_username;
  do {
    cVar1 = *network_username;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = network_username[1];
    network_username = network_username + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  pcVar2 = g_VersionControlSession.password;
  do {
    cVar1 = *password;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = password[1];
    password = password + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  pcVar2 = g_VersionControlSession.domain;
  do {
    cVar1 = *domain;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = domain[1];
    domain = domain + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
