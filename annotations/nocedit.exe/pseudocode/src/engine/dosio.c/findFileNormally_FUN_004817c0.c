// Name: engine_dosio.c_findFileNormally_FUN_004817c0
// Address: 004817c0
// Address Range: [[004817c0, 00481874]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_14c [256];
  stat local_4c;
  
  if ((info != (SFoundFileInfo *)0x0) && (info->found_path[0] != '\0')) {
    iVar2 = engine_dosio_c_getFullPath_FUN_004820c0(local_14c,info->found_path);
    if ((iVar2 != 0) && (iVar2 = crt_io_c_stat_thunk_00600c18(local_14c,&local_4c), iVar2 == 0)) {
      info->file_size = local_4c.st_size;
      info->file_offset = 0;
      pcVar3 = local_14c;
      info->timestamp = local_4c.st_mtime;
      pcVar4 = info->target_path;
      info->container_size = local_4c.st_mtime;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      info->is_archive = 0;
      return 1;
    }
  }
  return 0;
}
