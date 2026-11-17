// Name: crt_unknown.c_FUN_005656a4
// Address: 005656a4
// Address Range: [[005656a4, 00565722]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005656a4(_FILE *param_1)

#include "nocturne.h"

_FILE * FUN_005656a4(_FILE *param_1)

{
  _FILE *file_handle;
  FileListNode *pFVar1;
  FileListNode *pFVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  for (pFVar1 = g_FileListNode_PTR_02de4e20; pFVar1 != (FileListNode *)0x0; pFVar1 = pFVar1->next) {
    file_handle = pFVar1->file_struct;
    if (param_1 == file_handle) {
      if ((file_handle->_flag & 3) != 0) {
        _fclose(file_handle,1);
      }
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return param_1;
    }
  }
  pFVar1 = (FileListNode *)&g_FileListNode_PTR_02de4e24;
  do {
    pFVar2 = pFVar1;
    pFVar1 = pFVar2->next;
    if (pFVar1 == (FileListNode *)0x0) {
      setErrno(4);
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return (_FILE *)0x0;
    }
  } while (param_1 != pFVar1->file_struct);
  pFVar2->next = pFVar1->next;
  pFVar1->next = g_FileListNode_PTR_02de4e20;
  g_FileListNode_PTR_02de4e20 = pFVar1;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  return param_1;
}
