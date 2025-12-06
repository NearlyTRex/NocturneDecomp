// Name: crt_watcom.c_heapchk_FUN_00600ad0
// Address: 00600ad0
// Address Range: [[00600ad0, 00600b93]]
// Convention: __cdecl
// Signature: undefined crt_watcom.c_heapchk_FUN_00600ad0()

#include "nocturne.h"

int __cdecl crt_watcom_c_heapchk_FUN_00600ad0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  HeapState HStack_18;
  int iStack_8;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  if (DAT_03f9b850 != '\0') {
    (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
    return 0;
  }
  iVar1 = crt_unknown_c_FUN_00600990();
  if (iVar1 == 0) {
    HStack_18.segment_selector = 0;
    HStack_18.current_block_ptr = (void *)0x0;
    while( true ) {
      iVar1 = crt_heap_c_heapWalk_FUN_006012d0(&HStack_18,g_MainHeap);
      if (iVar1 != 0) break;
      if (HStack_18.allocation_status == 1) {
        iVar1 = crt_unknown_c_FUN_00600a64();
        if (iVar1 != 0) break;
        iStack_8 = iStack_8 - HStack_18.block_size;
      }
    }
    if (iStack_8 == 0) {
      if (iVar1 == 5) {
        (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
        return 3;
      }
      if (iVar1 == 4) {
        iVar1 = 0;
      }
      else if (iVar1 != 0) goto LAB_00600b87;
      DAT_03f9b850 = '\x01';
    }
    else {
      iVar1 = 3;
    }
  }
LAB_00600b87:
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return iVar1;
}
