// Name: engine_dosio.cpp_resolveRelativePath_FUN_00479770
// Address: 00479770
// Address Range: [[00479770, 004798b3]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_resolveRelativePath_FUN_00479770(char *base_path,char *path,char *out_path)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_resolveRelativePath_FUN_00479770(char *base_path,char *path,char *out_path)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar6;
  char acStack_508 [500];
  char acStack_314 [12];
  char acStack_308 [244];
  char acStack_214 [12];
  char acStack_208 [244];
  char cStack_114;
  char cStack_113;
  char acStack_108 [244];
  char acStack_14 [4];
  char acStack_10 [4];
  char *pcVar5;
  
  bVar6 = 0;
  engine_dosio_cpp_splitPath_FUN_00479580(path,acStack_14,&cStack_114,acStack_214,acStack_314);
  if ((acStack_14[0] != '\0') ||
     (((cStack_114 == '\\' || (cStack_114 == '/')) && ((cStack_113 == '\\' || (cStack_113 == '/'))))
     )) {
    do {
      cVar1 = *path;
      *out_path = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = path[1];
      path = path + 2;
      out_path[1] = cVar1;
      out_path = out_path + 2;
    } while (cVar1 != '\0');
    return;
  }
  engine_dosio_cpp_ensureTrailingSlash_FUN_004795e0(base_path,acStack_10,&stack0xfffffaec);
  if ((acStack_108[0] == '/') || (acStack_108[0] == '\\')) {
    acStack_508[0] = '\0';
  }
  pcVar3 = acStack_108;
  iVar2 = -1;
  pcVar5 = acStack_508;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_makePath_FUN_004795b0
            (out_path,&stack0xfffffffc,acStack_508,acStack_208,acStack_308);
  return;
}
