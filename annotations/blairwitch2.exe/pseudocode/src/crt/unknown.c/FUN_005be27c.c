// Name: crt_unknown.c_FUN_005be27c
// Address: 005be27c
// Address Range: [[005be27c, 005be2c0]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005be27c(uint param_1)

#include "nocturne.h"

int FUN_005be27c(uint param_1)

{
  _FILE *p_Var1;
  FileListNode *pFVar2;
  int iVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  iVar3 = 0;
  for (pFVar2 = g_AllocatedListHead; pFVar2 != (FileListNode *)0x0; pFVar2 = pFVar2->next) {
    p_Var1 = pFVar2->file_struct;
    if (((p_Var1->_flag & param_1) != 0) && (iVar3 = iVar3 + 1, (p_Var1->_flag & 0x1000) != 0)) {
      FUN_005bea80(p_Var1);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  return iVar3;
}
