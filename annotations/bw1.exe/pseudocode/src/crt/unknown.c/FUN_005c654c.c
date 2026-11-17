// Name: crt_unknown.c_FUN_005c654c
// Address: 005c654c
// Address Range: [[005c654c, 005c6590]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c654c(uint param_1)

#include "nocturne.h"

int FUN_005c654c(uint param_1)

{
  _FILE *p_Var1;
  FileListNode *pFVar2;
  int iVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626610)();
  iVar3 = 0;
  for (pFVar2 = g_FileListNode_PTR_02c9f050; pFVar2 != (FileListNode *)0x0; pFVar2 = pFVar2->next) {
    p_Var1 = pFVar2->file_struct;
    if (((p_Var1->_flag & param_1) != 0) && (iVar3 = iVar3 + 1, (p_Var1->_flag & 0x1000) != 0)) {
      FUN_005c6d50(p_Var1);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
  return iVar3;
}
