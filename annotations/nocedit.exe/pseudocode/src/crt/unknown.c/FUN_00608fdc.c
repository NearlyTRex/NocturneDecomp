// Name: crt_unknown.c_FUN_00608fdc
// Address: 00608fdc
// Address Range: [[00608fdc, 0060903f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00608fdc(void)

#include "nocturne.h"

int crt_unknown_c_FUN_00608fdc(void)

{
  FileListNode *pFVar1;
  _FILE *file_handle;
  FileListNode *pFVar2;
  int close_flags;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = 0;
  pFVar2 = g_AllocatedListHead;
joined_r0x00609003:
  if (pFVar2 == (FileListNode *)0x0) {
    return iVar3;
  }
  pFVar1 = pFVar2->next;
  file_handle = pFVar2->file_struct;
  close_flags = 1;
  pFVar2 = pFVar1;
  if (((file_handle->_flag & 0x4000) == 0) && ((file_handle->_flag & 0x800) == 0))
  goto code_r0x0060901c;
  goto LAB_00609029;
code_r0x0060901c:
  if ((_FILE *)((int)&g_StaticFilePoolStart + in_stack_00000004 * 0x1a) <= file_handle) {
    if (file_handle < (_FILE *)&DAT_00684d12) {
      close_flags = 0;
    }
LAB_00609029:
    iVar3 = iVar3 + 1;
    __CClose(file_handle,close_flags);
  }
  goto joined_r0x00609003;
}
