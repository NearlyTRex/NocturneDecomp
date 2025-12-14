// Name: crt_stdio.c_AllocateFileStruct_FUN_006092f0
// Address: 006092f0
// Address Range: [[006092f0, 006093ad]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_AllocateFileStruct_FUN_006092f0(int unused_param)

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_AllocateFileStruct_FUN_006092f0(int unused_param)

{
  streambuf *psVar1;
  FILE **dest;
  uint uVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  if (g_FreeListHeadPointer == (streambuf *)0x0) {
    dest = &g_StaticFilePoolStart;
    do {
      if ((((FILE *)dest)->_flag & 3) == 0) {
        psVar1 = crt_memory_c_malloc_FUN_00601bb0(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_00609398;
        uVar2 = 3;
        goto LAB_00609369;
      }
      dest = (FILE **)((int)dest + 0x1a);
    } while (dest < (FILE *)&g_StaticFilePoolEnd);
    uVar2 = 0x4003;
    psVar1 = crt_memory_c_malloc_FUN_00601bb0(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_00609398:
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_IO_ERROR);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return (FILE *)0x0;
    }
    dest = (FILE **)((int)&psVar1->__put_end + 1);
  }
  else {
    dest = (FILE **)g_FreeListHeadPointer->__reserve_base;
    uVar2 = (uint)((ushort)((FILE *)dest)->_flag & 0x4003 | 3);
    psVar1 = g_FreeListHeadPointer;
    g_FreeListHeadPointer = g_FreeListHeadPointer->__b_lock;
  }
LAB_00609369:
  crt_memory_c_memset_FUN_005fde40(dest,0,0x1a);
  ((FILE *)dest)->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  ((FILE *)dest)->_link = psVar1;
  psVar1->__b_lock = g_AllocatedListHead;
  g_AllocatedListHead = (FileListNode *)psVar1;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  return (FILE *)dest;
}
