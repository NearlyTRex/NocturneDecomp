// Name: crt_unknown.c_FUN_0056aefc
// Address: 0056aefc
// Address Range: [[0056aefc, 0056af40]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056aefc(uint param_1)

#include "nocturne.h"

int FUN_0056aefc(uint param_1)

{
  _FILE *p_Var1;
  FileListNode *pFVar2;
  int iVar3;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  iVar3 = 0;
  for (pFVar2 = g_FileListNode_PTR_02de4e20; pFVar2 != (FileListNode *)0x0; pFVar2 = pFVar2->next) {
    p_Var1 = pFVar2->file_struct;
    if (((p_Var1->_flag & param_1) != 0) && (iVar3 = iVar3 + 1, (p_Var1->_flag & 0x1000) != 0)) {
      FUN_00568890(p_Var1);
    }
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  return iVar3;
}
