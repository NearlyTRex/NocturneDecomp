// Name: crt_unknown.c_FUN_005acecc
// Address: 005acecc
// Address Range: [[005acecc, 005acf2f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005acecc(int param_1)

#include "nocturne.h"

int FUN_005acecc(int param_1)

{
  FileListNode *pFVar1;
  _FILE *p_Var2;
  FileListNode *pFVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  pFVar3 = g_FileListNode_PTR_02d252a0;
joined_r0x005acef3:
  if (pFVar3 == (FileListNode *)0x0) {
    return iVar5;
  }
  pFVar1 = pFVar3->next;
  p_Var2 = pFVar3->file_struct;
  uVar4 = 1;
  pFVar3 = pFVar1;
  if (((p_Var2->_flag & 0x4000) == 0) && ((p_Var2->_flag & 0x800) == 0)) goto code_r0x005acf0c;
  goto LAB_005acf19;
code_r0x005acf0c:
  if ((_FILE *)((int)&g_FILE_PTR_00607678 + param_1 * 0x1a) <= p_Var2) {
    if (p_Var2 < (_FILE *)0x6076c6) {
      uVar4 = 0;
    }
LAB_005acf19:
    iVar5 = iVar5 + 1;
    FUN_005a3ad4(p_Var2,uVar4);
  }
  goto joined_r0x005acef3;
}
