// Name: engine_dosio.c_findFileNormally_FUN_004817c0
// Address: 004817c0
// Address Range: [[004817c0, 00481874]]
// Convention: __cdecl
// Signature: int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)

#include "nocturne.h"

int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char acStack_144 [278];
  uint local_2e;
  uint uStack_26;
  
  if ((info != (SFoundFileInfo *)0x0) && (info->found_path[0] != '\0')) {
    iVar2 = engine_dosio_c_getFullPath_FUN_004820c0(&stack0xfffffeb4,info->found_path);
    if ((iVar2 != 0) &&
       (iVar2 = crt_io_c_stat_thunk_00600c18(&stack0xfffffeb8,(stat *)(acStack_144 + 0xfc)),
       iVar2 == 0)) {
      info->file_size = local_2e;
      info->file_offset = 0;
      pcVar3 = acStack_144;
      info->timestamp = uStack_26;
      pcVar4 = info->target_path;
      info->container_size = uStack_26;
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
