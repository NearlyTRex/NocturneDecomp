// Name: engine_dosio.cpp_findFileNormally_FUN_00456800
// Address: 00456800
// Address Range: [[00456800, 004568ba]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_dosio_cpp_findFileNormally_FUN_00456800(char *param_1)

#include "nocturne.h"

uint __cdecl engine_dosio_cpp_findFileNormally_FUN_00456800(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_150 [256];
  byte local_50 [22];
  uint local_3a;
  uint local_32;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar2 = (char *)_fullpath(local_150,param_1,0x100);
    if (pcVar2 == local_150) {
      iVar3 = getFileStat(local_150,local_50);
      pcVar2 = local_150;
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0x204) = local_3a;
        param_1[0x200] = '\0';
        param_1[0x201] = '\0';
        param_1[0x202] = '\0';
        param_1[0x203] = '\0';
        *(uint *)(param_1 + 0x20c) = local_32;
        pcVar4 = param_1 + 0x100;
        *(uint *)(param_1 + 0x210) = local_32;
        do {
          cVar1 = *pcVar2;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
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
  }
  return 0;
}
