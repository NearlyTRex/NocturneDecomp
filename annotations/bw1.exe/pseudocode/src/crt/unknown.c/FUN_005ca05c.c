// Name: crt_unknown.c_FUN_005ca05c
// Address: 005ca05c
// Address Range: [[005ca05c, 005ca0bf]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005ca05c(int param_1)

#include "nocturne.h"

int FUN_005ca05c(int param_1)

{
  FileListNode *pFVar1;
  _FILE *p_Var2;
  FileListNode *pFVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  pFVar3 = g_AllocatedListHead;
joined_r0x005ca083:
  if (pFVar3 == (FileListNode *)0x0) {
    return iVar5;
  }
  pFVar1 = pFVar3->next;
  p_Var2 = pFVar3->file_struct;
  uVar4 = 1;
  pFVar3 = pFVar1;
  if (((p_Var2->_flag & 0x4000) == 0) && ((p_Var2->_flag & 0x800) == 0)) goto code_r0x005ca09c;
  goto LAB_005ca0a9;
code_r0x005ca09c:
  if ((_FILE *)((int)&g_StaticFilePoolStart + param_1 * 0x1a) <= p_Var2) {
    if (p_Var2 < (_FILE *)0x626322) {
      uVar4 = 0;
    }
LAB_005ca0a9:
    iVar5 = iVar5 + 1;
    FUN_005c0d54(p_Var2,uVar4);
  }
  goto joined_r0x005ca083;
}
