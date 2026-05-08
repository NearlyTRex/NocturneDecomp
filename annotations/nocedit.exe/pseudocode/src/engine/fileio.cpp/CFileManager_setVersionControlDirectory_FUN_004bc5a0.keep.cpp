// Name: engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
// Address: 004bc5a0
// MANUAL RECONSTRUCTION
// Address Range: [[004bc5a0, 004bc5c7]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0(CFileManager *this_ptr,char *directory)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0(CFileManager *this_ptr,char *directory)

{
  strcpy(g_VersionControlDirectory, directory);
  return;
}
