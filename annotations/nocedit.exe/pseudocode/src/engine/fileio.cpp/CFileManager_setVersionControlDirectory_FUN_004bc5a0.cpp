// Name: engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
// Address: 004bc5a0
// Address Range: [[004bc5a0, 004bc5c7]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0(CFileManager * this_ptr, char * directory)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
          (CFileManager *this_ptr,char *directory)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = g_VersionControlDirectory;
  do {
    cVar1 = *directory;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = directory[1];
    directory = directory + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
