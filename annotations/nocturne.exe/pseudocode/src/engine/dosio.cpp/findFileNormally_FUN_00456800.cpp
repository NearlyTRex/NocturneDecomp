// Name: engine_dosio.cpp_findFileNormally_FUN_00456800
// Address: 00456800
// Address Range: [[00456800, 004568ba]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_findFileNormally_FUN_00456800(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_findFileNormally_FUN_00456800(SFoundFileInfo *info)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_150 [256];
  _stat local_50;
  
  if ((info != (SFoundFileInfo *)0x0) && (info->found_path[0] != '\0')) {
    pcVar2 = _fullpath(local_150,info->found_path,0x100);
    if (pcVar2 == local_150) {
      iVar3 = getFileStat(local_150,&local_50);
      pcVar2 = local_150;
      if (iVar3 == 0) {
        info->file_size = local_50._st_size;
        info->file_offset = 0;
        info->timestamp = local_50._st_mtime;
        pcVar4 = info->target_path;
        info->container_timestamp = local_50._st_mtime;
        do {
          cVar1 = *pcVar2;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        info->is_archive = 0;
        return 1;
      }
    }
  }
  return 0;
}
