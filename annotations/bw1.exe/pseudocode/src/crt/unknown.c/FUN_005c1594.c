// Name: crt_unknown.c_FUN_005c1594
// Address: 005c1594
// Address Range: [[005c1594, 005c1612]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005c1594(_FILE *param_1)

#include "nocturne.h"

_FILE * FUN_005c1594(_FILE *param_1)

{
  _FILE *p_Var1;
  FileListNode *pFVar2;
  FileListNode *pFVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626610)();
  for (pFVar2 = g_AllocatedListHead; pFVar2 != (FileListNode *)0x0; pFVar2 = pFVar2->next) {
    p_Var1 = pFVar2->file_struct;
    if (param_1 == p_Var1) {
      if ((p_Var1->_flag & 3) != 0) {
        _fclose(p_Var1,1);
      }
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
      return param_1;
    }
  }
  pFVar2 = (FileListNode *)&g_FreeListHeadPointer;
  do {
    pFVar3 = pFVar2;
    pFVar2 = pFVar3->next;
    if (pFVar2 == (FileListNode *)0x0) {
      setErrno(4);
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
      return (_FILE *)0x0;
    }
  } while (param_1 != pFVar2->file_struct);
  pFVar3->next = pFVar2->next;
  pFVar2->next = g_AllocatedListHead;
  g_AllocatedListHead = pFVar2;
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
  return param_1;
}
