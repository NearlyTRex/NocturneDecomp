// Name: crt_unknown.c_FUN_005c1c50
// Address: 005c1c50
// Address Range: [[005c1c50, 005c1ceb]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c1c50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c1c50(void)

{
  uint uVar1;
  _FILE *p_Var2;
  streambuf *psVar3;
  _FILE **pp_Var4;
  
  g_FILE_0061ef88._flag._1_1_ = g_FILE_0061ef88._flag._1_1_ & 0xf8 | 4;
  pp_Var4 = &g_FILE_PTR_0061ef54;
  uVar1 = _DAT_0061ef60;
  while (uVar1 != 0) {
    psVar3 = InternalHeapAlloc(0x1d);
    if ((psVar3 == (streambuf *)0x0) &&
       (psVar3 = malloc(0x1d), psVar3 == (streambuf *)0x0)) {
      FUN_005c1c20("Not enough memory to allocate file structures\r\n",1);
    }
    psVar3->__reserve_base = (char *)pp_Var4;
    psVar3->__b_lock = g_FileListNode_PTR_02680160;
    ((_FILE *)pp_Var4)->_link = psVar3;
    psVar3->__reserve_end = (char *)0x0;
    *(byte *)&((_FILE *)pp_Var4)->_link->__get_ptr = 0;
    ((_FILE *)pp_Var4)->_link->__get_base = (char *)0x0;
    p_Var2 = (_FILE *)((int)pp_Var4 + 0x1a);
    pp_Var4 = (_FILE **)((int)pp_Var4 + 0x1a);
    g_FileListNode_PTR_02680160 = (FileListNode *)psVar3;
    uVar1 = p_Var2->_flag;
  }
  g_FileListNode_PTR_02680164 = (FileListNode *)0x0;
  return;
}
