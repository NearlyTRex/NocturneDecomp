// Name: crt_stdio.c_fclose_FUN_005c0d10
// Address: 005c0d10
// Address Range: [[005c0d10, 005c0d50]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fclose_FUN_005c0d10(_FILE *file_handle)

#include "nocturne.h"

int __cdecl _fclose(_FILE *file_handle)

{
  FileListNode *pFVar1;
  int iVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626610)();
  pFVar1 = g_FileListNode_PTR_02c9f050;
  while( true ) {
    if (pFVar1 == (FileListNode *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
      return -1;
    }
    if (file_handle == pFVar1->file_struct) break;
    pFVar1 = pFVar1->next;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
  iVar2 = FUN_005c0d54(file_handle,1);
  return iVar2;
}
