// Name: crt_unknown.c_FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a994d]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005a9890(void)

#include "nocturne.h"

_FILE * FUN_005a9890(void)

{
  streambuf *psVar1;
  _FILE **dest;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b4)();
  if (g_FileListNode_PTR_02d252a4 == (FileListNode *)0x0) {
    dest = &g_FILE_PTR_00607678;
    do {
      if ((((_FILE *)dest)->_flag & 3) == 0) {
        psVar1 = (streambuf *)malloc(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_005a9938;
        uVar2 = 3;
        goto LAB_005a9909;
      }
      dest = (_FILE **)((int)dest + 0x1a);
    } while (dest < (_FILE *)&DAT_00607880);
    uVar2 = 0x4003;
    psVar1 = (streambuf *)malloc(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_005a9938:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
      return (_FILE *)0x0;
    }
    dest = (_FILE **)((int)&psVar1->__put_end + 1);
  }
  else {
    dest = (_FILE **)g_FileListNode_PTR_02d252a4->file_struct;
    uVar2 = (uint)((ushort)((_FILE *)dest)->_flag & 0x4003 | 3);
    psVar1 = (streambuf *)g_FileListNode_PTR_02d252a4;
    g_FileListNode_PTR_02d252a4 = g_FileListNode_PTR_02d252a4->next;
  }
LAB_005a9909:
  memset(dest,0,0x1a);
  ((_FILE *)dest)->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  ((_FILE *)dest)->_link = psVar1;
  psVar1->__b_lock = g_FileListNode_PTR_02d252a0;
  g_FileListNode_PTR_02d252a0 = (FileListNode *)psVar1;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
  return (_FILE *)dest;
}
