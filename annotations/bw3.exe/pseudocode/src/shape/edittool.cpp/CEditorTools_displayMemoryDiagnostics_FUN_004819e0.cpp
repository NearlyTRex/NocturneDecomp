// Name: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0
// Address: 004819e0
// Address Range: [[004819e0, 00481aa9]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0(CEditorTools *this_ptr,char *output_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0(CEditorTools *this_ptr,char *output_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint local_22;
  int local_1e;
  
  iVar3 = 0;
  uVar4 = 0;
  while (iVar2 = _heapwalk(), iVar2 == 0) {
    if ((local_1e == 0) && (iVar3 = iVar3 + 1, uVar4 < local_22)) {
      uVar4 = local_22;
    }
  }
  switch(iVar2) {
  default:
    pcVar5 = "Memory corruption detected!";
    break;
  case 4:
    if (0 < iVar3) {
      _sprintf(output_buffer,"?Blocks: %d Total: %.1fk Max: %.1fk" + 1);
      return;
    }
  case 1:
    pcVar5 = "Heap is empty.";
  }
  do {
    cVar1 = *pcVar5;
    *output_buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
  return;
}
