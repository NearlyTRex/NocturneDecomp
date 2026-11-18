// Name: crt_unknown.c_FUN_005be750
// Address: 005be750
// Address Range: [[005be750, 005be80d]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005be750(void)

#include "nocturne.h"

_FILE * FUN_005be750(void)

{
  streambuf *psVar1;
  _FILE **dest;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  if (g_FreeListHeadPointer == (FileListNode *)0x0) {
    dest = &g_StaticFilePoolStart;
    do {
      if ((((_FILE *)dest)->_flag & 3) == 0) {
        psVar1 = (streambuf *)malloc(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_005be7f8;
        uVar2 = 3;
        goto LAB_005be7c9;
      }
      dest = (_FILE **)((int)dest + 0x1a);
    } while (dest < (_FILE *)&DAT_0061f15c);
    uVar2 = 0x4003;
    psVar1 = (streambuf *)malloc(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_005be7f8:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
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
LAB_005be7c9:
  memset(dest,0,0x1a);
  ((_FILE *)dest)->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  ((_FILE *)dest)->_link = psVar1;
  psVar1->__b_lock = g_AllocatedListHead;
  g_AllocatedListHead = (FileListNode *)psVar1;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  return (_FILE *)dest;
}
