// Name: core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
// Address: 0040aee0
// Address Range: [[0040aee0, 0040af25]]
// Convention: __cdecl
// Signature: int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)

#include "nocturne.h"

int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = g_PropertyNamePrefix;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = indent_delta + (~uVar3 - 1);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  g_PropertyNamePrefix[iVar2] = '\0';
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    (&DAT_0066e177)[iVar2] = 9;
  }
  return iVar2;
}
