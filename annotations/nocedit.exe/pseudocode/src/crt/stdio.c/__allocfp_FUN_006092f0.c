// Name: crt_stdio.c___allocfp_FUN_006092f0
// Address: 006092f0
// Address Range: [[006092f0, 006093ad]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c___allocfp_FUN_006092f0(int unused_param)

#include "nocturne.h"

_FILE * __cdecl __allocfp(int unused_param)

{
  streambuf *psVar1;
  _FILE **dest;
  uint uVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  if (g_FreeListHeadPointer == (streambuf *)0x0) {
    dest = &g_StaticFilePoolStart;
    do {
      if ((((_FILE *)dest)->_flag & 3) == 0) {
        psVar1 = malloc(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_00609398;
        uVar2 = 3;
        goto LAB_00609369;
      }
      dest = (_FILE **)((int)dest + 0x1a);
    } while (dest < (_FILE *)&g_StaticFilePoolEnd);
    uVar2 = 0x4003;
    psVar1 = malloc(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_00609398:
      setErrno(SYSTEM_IO_ERROR);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return (_FILE *)0x0;
    }
    dest = (_FILE **)((int)&psVar1->__put_end + 1);
  }
  else {
    dest = (_FILE **)g_FreeListHeadPointer->__reserve_base;
    uVar2 = (uint)((ushort)((_FILE *)dest)->_flag & 0x4003 | 3);
    psVar1 = g_FreeListHeadPointer;
    g_FreeListHeadPointer = g_FreeListHeadPointer->__b_lock;
  }
LAB_00609369:
  memset(dest,0,0x1a);
  ((_FILE *)dest)->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  ((_FILE *)dest)->_link = psVar1;
  psVar1->__b_lock = g_AllocatedListHead;
  g_AllocatedListHead = (FileListNode *)psVar1;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  return (_FILE *)dest;
}
