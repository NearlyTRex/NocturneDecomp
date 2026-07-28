// Name: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
// Address: 004736d0
// Address Range: [[004736d0, 00473799]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(CEditorTools *this_ptr,char *output_buffer)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(CEditorTools *this_ptr,char *output_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  _heapinfo local_28;
  int local_18;
  
  iVar3 = 0;
  iVar6 = 0;
  local_28._segment = 0;
  local_28._pentry = (void *)0x0;
  uVar4 = 0;
  while (iVar2 = _heapwalk(&local_28), iVar2 == 0) {
    if (local_28._useflag == 0) {
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + local_28._size;
      if (uVar4 < local_28._size) {
        uVar4 = local_28._size;
      }
    }
  }
  switch(iVar2) {
  default:
    pcVar5 = "Memory corruption detected!";
    break;
  case 4:
    if (0 < iVar3) {
      local_18 = iVar6;
      _sprintf(output_buffer,"Blocks: %d Total: %.1fk Max: %.1fk",iVar3,
                 (double)iVar6 * 0.0009765625,(double)(int)uVar4 * 0.0009765625);
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
