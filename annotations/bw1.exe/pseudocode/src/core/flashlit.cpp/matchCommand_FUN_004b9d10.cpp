// Name: core_flashlit.cpp_matchCommand_FUN_004b9d10
// Address: 004b9d10
// Address Range: [[004b9d10, 004b9da6]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_matchCommand_FUN_004b9d10(char *line,char *keyword,char *out_args)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_matchCommand_FUN_004b9d10(char *line,char *keyword,char *out_args)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  while (((&DAT_00626114)[(byte)(*line + 1)] & 2) != 0) {
    line = line + 1;
  }
  if (*line == 0x5c) {
    bVar2 = *keyword;
    while (line = line + 1, bVar2 != 0) {
      iVar3 = toupper((uint)(byte)*line);
      iVar4 = toupper((uint)(byte)*keyword);
      if (iVar3 != iVar4) {
        return 0;
      }
      pbVar1 = (byte *)(keyword + 1);
      keyword = keyword + 1;
      bVar2 = *pbVar1;
    }
    while (((&DAT_00626114)[(byte)(*line + 1)] & 2) != 0) {
      line = line + 1;
    }
    do {
      bVar2 = *line;
      *out_args = bVar2;
      if (bVar2 == 0) {
        return 1;
      }
      bVar2 = line[1];
      line = line + 2;
      out_args[1] = bVar2;
      out_args = out_args + 2;
    } while (bVar2 != 0);
    return 1;
  }
  return 0;
}
