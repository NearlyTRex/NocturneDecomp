// Name: engine_dosio.cpp_FUN_00465eb0
// Address: 00465eb0
// Address Range: [[00465eb0, 00465f68]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_FUN_00465eb0(char *input_path,char *drive,char *output_path)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_FUN_00465eb0(char *input_path,char *drive,char *output_path)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char acStack_308 [256];
  char acStack_208 [256];
  char acStack_108 [256];
  
  bVar6 = 0;
  engine_dosio_cpp_splitPath_FUN_00465e50(input_path,drive,acStack_208,acStack_108,acStack_308);
  engine_dosio_cpp_makePath_FUN_00465e80
            (output_path,(char *)0x0,acStack_208,acStack_108,acStack_308);
  if ((output_path != (char *)0x0) && (*output_path != '\0')) {
    uVar2 = 0xffffffff;
    pcVar4 = output_path;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if ((output_path[~uVar2 - 2] != '\\') && (output_path[~uVar2 - 2] != '/')) {
      pcVar4 = (char *)0x5bc042;
      iVar3 = -1;
      do {
        pcVar5 = output_path;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = output_path + (uint)bVar6 * -2 + 1;
        cVar1 = *output_path;
        output_path = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      return;
    }
  }
  return;
}
