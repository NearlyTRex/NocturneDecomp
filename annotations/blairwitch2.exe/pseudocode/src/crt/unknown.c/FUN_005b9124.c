// Name: crt_unknown.c_FUN_005b9124
// Address: 005b9124
// Address Range: [[005b9124, 005b91a2]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005b9124(_FILE *param_1)

#include "nocturne.h"

_FILE * FUN_005b9124(_FILE *param_1)

{
  _FILE *p_Var1;
  FileListNode *pFVar2;
  FileListNode *pFVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  for (pFVar2 = g_AllocatedListHead; pFVar2 != (FileListNode *)0x0; pFVar2 = pFVar2->next) {
    p_Var1 = pFVar2->file_struct;
    if (param_1 == p_Var1) {
      if ((p_Var1->_flag & 3) != 0) {
        _fclose(p_Var1,1);
      }
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
      return param_1;
    }
  }
  pFVar2 = (FileListNode *)&g_FreeListHeadPointer;
  do {
    pFVar3 = pFVar2;
    pFVar2 = pFVar3->next;
    if (pFVar2 == (FileListNode *)0x0) {
      setErrno(4);
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
      return (_FILE *)0x0;
    }
  } while (param_1 != pFVar2->file_struct);
  pFVar3->next = pFVar2->next;
  pFVar2->next = g_AllocatedListHead;
  g_AllocatedListHead = pFVar2;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  return param_1;
}
