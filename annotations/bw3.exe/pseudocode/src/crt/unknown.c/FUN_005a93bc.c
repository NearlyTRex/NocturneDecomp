// Name: crt_unknown.c_FUN_005a93bc
// Address: 005a93bc
// Address Range: [[005a93bc, 005a9400]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005a93bc(uint param_1)

#include "nocturne.h"

int FUN_005a93bc(uint param_1)

{
  _FILE *p_Var1;
  FileListNode *pFVar2;
  int iVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b4)();
  iVar3 = 0;
  for (pFVar2 = g_FileListNode_PTR_02d252a0; pFVar2 != (FileListNode *)0x0; pFVar2 = pFVar2->next) {
    p_Var1 = pFVar2->file_struct;
    if (((p_Var1->_flag & param_1) != 0) && (iVar3 = iVar3 + 1, (p_Var1->_flag & 0x1000) != 0)) {
      FUN_005a9bc0(p_Var1);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
  return iVar3;
}
