// Name: crt_unknown.c_FUN_005c6a20
// Address: 005c6a20
// Address Range: [[005c6a20, 005c6add]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005c6a20(void)

#include "nocturne.h"

_FILE * FUN_005c6a20(void)

{
  streambuf *psVar1;
  _FILE **dest;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626610)();
  if (g_FileListNode_PTR_02c9f054 == (FileListNode *)0x0) {
    dest = &g_FILE_PTR_006262d4;
    do {
      if ((((_FILE *)dest)->_flag & 3) == 0) {
        psVar1 = (streambuf *)malloc(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_005c6ac8;
        uVar2 = 3;
        goto LAB_005c6a99;
      }
      dest = (_FILE **)((int)dest + 0x1a);
    } while (dest < (_FILE *)&DAT_006264dc);
    uVar2 = 0x4003;
    psVar1 = (streambuf *)malloc(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_005c6ac8:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
      return (_FILE *)0x0;
    }
    dest = (_FILE **)((int)&psVar1->__put_end + 1);
  }
  else {
    dest = (_FILE **)g_FileListNode_PTR_02c9f054->file_struct;
    uVar2 = (uint)((ushort)((_FILE *)dest)->_flag & 0x4003 | 3);
    psVar1 = (streambuf *)g_FileListNode_PTR_02c9f054;
    g_FileListNode_PTR_02c9f054 = g_FileListNode_PTR_02c9f054->next;
  }
LAB_005c6a99:
  memset(dest,0,0x1a);
  ((_FILE *)dest)->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  ((_FILE *)dest)->_link = psVar1;
  psVar1->__b_lock = g_FileListNode_PTR_02c9f050;
  g_FileListNode_PTR_02c9f050 = (FileListNode *)psVar1;
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
  return (_FILE *)dest;
}
