// Name: core_melee.cpp_dumpHeap_FUN_004e7540
// Address: 004e7540
// Address Range: [[004e7540, 004e760f]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_dumpHeap_FUN_004e7540(void *stream)

#include "nocturne.h"

void __cdecl core_melee_cpp_dumpHeap_FUN_004e7540(void *stream)

{
  int iVar1;
  char *pcVar2;
  uint uStack_20;
  ushort uStack_1c;
  uint uStack_1a;
  int iStack_16;
  
  uStack_1c = 0;
  uStack_20 = 0;
  while (iVar1 = _heapwalk((WatcomHeapInfo *)&uStack_20), iVar1 == 0) {
    if (iStack_16 == 0) {
      pcVar2 = "FREE";
    }
    else {
      pcVar2 = "USED";
    }
    support_trstream_cpp_COutStream_printf_FUN_005744b0
              (stream,"%08X %4s %d\n",uStack_20,(uint)uStack_1c,pcVar2,uStack_1a);
  }
  switch(iVar1) {
  case 1:
    support_trstream_cpp_COutStream_printf_FUN_005744b0(stream,"OK - empty heap\n");
    break;
  case 2:
    support_trstream_cpp_COutStream_printf_FUN_005744b0(stream,"ERROR - bad start of heap\n");
    return;
  case 3:
    support_trstream_cpp_COutStream_printf_FUN_005744b0(stream,"ERROR - bad node in heap\n");
    return;
  case 4:
    support_trstream_cpp_COutStream_printf_FUN_005744b0(stream,"OK - end of heap\n");
    return;
  case 5:
    support_trstream_cpp_COutStream_printf_FUN_005744b0(stream,"ERROR - bad pointer to heap\n");
    return;
  }
  return;
}
