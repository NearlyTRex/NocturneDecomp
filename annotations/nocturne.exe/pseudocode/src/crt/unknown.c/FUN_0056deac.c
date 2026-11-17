// Name: crt_unknown.c_FUN_0056deac
// Address: 0056deac
// Address Range: [[0056deac, 0056df0f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056deac(int param_1)

#include "nocturne.h"

int FUN_0056deac(int param_1)

{
  FileListNode *pFVar1;
  _FILE *file_handle;
  FileListNode *pFVar2;
  int close_flags;
  int iVar3;
  
  iVar3 = 0;
  pFVar2 = g_FileListNode_PTR_02de4e20;
joined_r0x0056ded3:
  if (pFVar2 == (FileListNode *)0x0) {
    return iVar3;
  }
  pFVar1 = pFVar2->next;
  file_handle = pFVar2->file_struct;
  close_flags = 1;
  pFVar2 = pFVar1;
  if (((file_handle->_flag & 0x4000) == 0) && ((file_handle->_flag & 0x800) == 0))
  goto code_r0x0056deec;
  goto LAB_0056def9;
code_r0x0056deec:
  if ((_FILE *)((int)&g_FILE_PTR_005c1894 + param_1 * 0x1a) <= file_handle) {
    if (file_handle < (_FILE *)0x5c18e2) {
      close_flags = 0;
    }
LAB_0056def9:
    iVar3 = iVar3 + 1;
    __CClose(file_handle,close_flags);
  }
  goto joined_r0x0056ded3;
}
