// Name: engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120
// Address: 004b3120
// Address Range: [[004b3120, 004b31d2]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_checkFileOverwriteCondition_FUN_004b3120(char *target_filename,char *source_directory)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_checkFileOverwriteCondition_FUN_004b3120(char *target_filename,char *source_directory)

{
  uint uVar1;
  int iVar2;
  int iVar1;
  char local_3f4 [500];
  char local_200 [500];
  
  uVar1 = engine_dosio_c_getFileSize_FUN_00481960((char *)0x0,target_filename);
  if (-1 < (int)uVar1) {
    if (((source_directory != (char *)0x0) && (*source_directory != '\0')) &&
       (iVar2 = _stricmp
                          (source_directory,g_VersionControlSession.primary_username), iVar2 == 0))
    {
      _sprintf
                (local_3f4,"You currently have %s checked out.  Replace local copy with network copy?",target_filename);
      iVar1 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                        (local_3f4,&g_VersionControlSession.overwrite_own_choice);
      return iVar1;
    }
    if ((uVar1 & 8) == 0) {
      _sprintf
                (local_200,"A writable copy of %s exists.  Replace it?",target_filename);
      iVar1 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                        (local_200,&g_VersionControlSession.overwrite_writeable_choice);
      return iVar1;
    }
  }
  return 1;
}
