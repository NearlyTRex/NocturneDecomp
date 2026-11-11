// Name: engine_dosio.cpp_findFileNormally_FUN_00465730
// Address: 00465730
// Address Range: [[00465730, 004657e4]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_dosio_cpp_findFileNormally_FUN_00465730(char *param_1)

#include "nocturne.h"

uint __cdecl engine_dosio_cpp_findFileNormally_FUN_00465730(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_14c [256];
  WatcomStat local_4c;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = engine_dosio_cpp_getFullPath_FUN_00465ff0(local_14c,param_1);
    if ((iVar2 != 0) && (iVar2 = FUN_005a4bc4(local_14c,&local_4c), iVar2 == 0)) {
      *(long *)(param_1 + 0x204) = local_4c._st_size;
      param_1[0x200] = '\0';
      param_1[0x201] = '\0';
      param_1[0x202] = '\0';
      param_1[0x203] = '\0';
      pcVar3 = local_14c;
      *(time_t *)(param_1 + 0x20c) = local_4c._st_mtime;
      pcVar4 = param_1 + 0x100;
      *(time_t *)(param_1 + 0x210) = local_4c._st_mtime;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      param_1[0x208] = '\0';
      param_1[0x209] = '\0';
      param_1[0x20a] = '\0';
      param_1[0x20b] = '\0';
      return 1;
    }
  }
  return 0;
}
