// Name: engine_dosio.c_findFileNormally_FUN_004817c0
// Address: 004817c0
// MANUAL RECONSTRUCTION
// Address Range: [[004817c0, 00481874]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info)

{
  int iVar2;
  int iVar3;
  char local_14c [256];
  _stat local_4c;

  if ((info != (SFoundFileInfo *)0x0) && (info->found_path[0] != '\0')) {
    iVar2 = engine_dosio_c_getFullPath_FUN_004820c0(local_14c,info->found_path);
    if ((iVar2 != 0) && (iVar3 = getFileStat(local_14c,&local_4c), iVar3 == 0)
       ) {
      info->file_size = local_4c._st_size;
      info->file_offset = 0;
      info->timestamp = local_4c._st_mtime;
      info->container_timestamp = local_4c._st_mtime;
      strcpy(info->target_path,local_14c);
      info->is_archive = 0;
      return 1;
    }
  }
  return 0;
}
