// Name: engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
// Address: 004bc5d0
// MANUAL RECONSTRUCTION
// Address Range: [[004bc5d0, 004bc641]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0(CFileManager *this_ptr,char *network_username,char *password,char *domain)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0(CFileManager *this_ptr,char *network_username,char *password,char *domain)

{
  strcpy(g_VersionControlSession.network_username,network_username);
  strcpy(g_VersionControlSession.password,password);
  strcpy(g_VersionControlSession.domain,domain);
  return;
}
