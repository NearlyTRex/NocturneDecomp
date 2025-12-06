// Name: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
// Address: 004a2590
// Address Range: [[004a2590, 004a2659]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
          (CEditorTools *this_ptr,char *output_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_1e;
  int iStack_1a;
  
  iVar3 = 0;
  iVar6 = 0;
  uVar4 = 0;
  while (iVar2 = crt_heap_c_heapCheckWrapper_FUN_006012c0(&stack0xffffffd8), iVar2 == 0) {
    if (iStack_1a == 0) {
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + local_1e;
      if (uVar4 < local_1e) {
        uVar4 = local_1e;
      }
    }
  }
  switch(iVar2) {
  default:
    pcVar5 = "Memory corruption detected!";
    break;
  case 4:
    if (0 < iVar3) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (output_buffer,"Blocks: %d Total: %.1fk Max: %.1fk",iVar3,
                 (double)iVar6 * 0.0009765625,
                 (double)(int)uVar4 * 0.0009765625);
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
