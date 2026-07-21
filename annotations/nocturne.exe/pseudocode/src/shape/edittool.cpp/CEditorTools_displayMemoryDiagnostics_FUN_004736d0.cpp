// Name: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
// Address: 004736d0
// Address Range: [[004736d0, 00473799]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_22;
  int local_1e;
  
  iVar3 = 0;
  iVar6 = 0;
  uVar4 = 0;
  while (iVar2 = _heapwalk(), iVar2 == 0) {
    if (local_1e == 0) {
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + local_22;
      if (uVar4 < local_22) {
        uVar4 = local_22;
      }
    }
  }
  switch(iVar2) {
  default:
    pcVar5 = "Memory corruption detected!";
    break;
  case 4:
    if (0 < iVar3) {
      _sprintf(param_2,"?Blocks: %d Total: %.1fk Max: %.1fk" + 1,iVar3,
                 (double)iVar6 * _DAT_0057eb0a,(double)(int)uVar4 * _DAT_0057eb0a);
      return;
    }
  case 1:
    pcVar5 = "Heap is empty.";
  }
  do {
    cVar1 = *pcVar5;
    *param_2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return;
}
