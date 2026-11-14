// Name: engine_dosio.cpp_findFileNormally_FUN_004609e0
// Address: 004609e0
// Address Range: [[004609e0, 00460a94]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_findFileNormally_FUN_004609e0(SFoundFileInfo *info)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_findFileNormally_FUN_004609e0(SFoundFileInfo *info)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_14c [256];
  WatcomStat local_4c;
  
  if ((info != (SFoundFileInfo *)0x0) && (info->found_path[0] != '\0')) {
    iVar2 = engine_dosio_cpp_getFullPath_FUN_00461210(local_14c,info->found_path);
    if ((iVar2 != 0) && (iVar2 = FUN_005b99c8(local_14c,&local_4c), iVar2 == 0)) {
      info->file_size = local_4c._st_size;
      info->file_offset = 0;
      pcVar3 = local_14c;
      info->timestamp = local_4c._st_mtime;
      pcVar4 = info->target_path;
      info->container_timestamp = local_4c._st_mtime;
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
