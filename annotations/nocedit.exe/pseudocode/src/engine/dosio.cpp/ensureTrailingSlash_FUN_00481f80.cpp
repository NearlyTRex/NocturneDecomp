// Name: engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80
// Address: 00481f80
// Address Range: [[00481f80, 00482030]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(char *input_path,char *drive,char *output_path)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(char *input_path,char *drive,char *output_path)

{
  char cVar2;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar3;
  byte bVar6;
  char acStack_308 [256];
  char local_208 [256];
  char local_108 [256];
  char cVar1;
  
  bVar6 = 0;
  engine_dosio_cpp_splitPath_FUN_00481f20(input_path,drive,local_208,local_108,acStack_308);
  engine_dosio_cpp_makePath_FUN_00481f50(output_path,(char *)0x0,local_208,local_108,acStack_308);
  if ((output_path != (char *)0x0) && (*output_path != '\0')) {
    uVar2 = 0xffffffff;
    pcVar3 = output_path;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if (output_path[~uVar2 - 2] != '\\') {
      pcVar4 = "\\";
      iVar3 = -1;
      pcVar5 = output_path;
      do {
        pcVar5 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5;
      } while (cVar2 != '\0');
      pcVar3 = pcVar5 + -1;
      do {
        cVar2 = *pcVar4;
        *pcVar3 = cVar2;
        if (cVar2 == '\0') {
          return;
        }
        cVar2 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar3[1] = cVar2;
        pcVar3 = pcVar3 + 2;
      } while (cVar2 != '\0');
      return;
    }
  }
  return;
}
