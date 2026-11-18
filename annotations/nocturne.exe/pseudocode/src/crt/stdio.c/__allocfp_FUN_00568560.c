// Name: crt_stdio.c___allocfp_FUN_00568560
// Address: 00568560
// Address Range: [[00568560, 0056861d]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c___allocfp_FUN_00568560(int unused_param)

#include "nocturne.h"

_FILE * __cdecl __allocfp(int unused_param)

{
  streambuf *psVar1;
  _FILE **dest;
  uint uVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  if (g_FreeListHeadPointer == (FileListNode *)0x0) {
    dest = &g_StaticFilePoolStart;
    do {
      if ((((_FILE *)dest)->_flag & 3) == 0) {
        psVar1 = (streambuf *)malloc(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_00568608;
        uVar2 = 3;
        goto LAB_005685d9;
      }
      dest = (_FILE **)((int)dest + 0x1a);
    } while (dest < g_CHAR_ARRAY_005c1a9c);
    uVar2 = 0x4003;
    psVar1 = (streambuf *)malloc(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_00568608:
      setErrno(5);
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return (_FILE *)0x0;
    }
    dest = (_FILE **)((int)&psVar1->__put_end + 1);
  }
  else {
    dest = (_FILE **)g_FreeListHeadPointer->file_struct;
    uVar2 = (uint)((ushort)((_FILE *)dest)->_flag & 0x4003 | 3);
    psVar1 = (streambuf *)g_FreeListHeadPointer;
    g_FreeListHeadPointer = g_FreeListHeadPointer->next;
  }
LAB_005685d9:
  memset(dest,0,0x1a);
  ((_FILE *)dest)->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  ((_FILE *)dest)->_link = psVar1;
  psVar1->__b_lock = g_AllocatedListHead;
  g_AllocatedListHead = (FileListNode *)psVar1;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  return (_FILE *)dest;
}
