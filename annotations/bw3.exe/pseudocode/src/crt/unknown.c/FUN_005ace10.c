// Name: crt_unknown.c_FUN_005ace10
// Address: 005ace10
// Address Range: [[005ace10, 005aceab]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ace10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ace10(void)

{
  int *piVar1;
  int iVar2;
  _FILE *p_Var3;
  _FILE **pp_Var4;
  
  g_FILE_006076ac._flag._1_1_ = g_FILE_006076ac._flag._1_1_ & 0xf8 | 4;
  pp_Var4 = &g_FILE_PTR_00607678;
  iVar2 = _DAT_00607684;
  while (iVar2 != 0) {
    p_Var3 = InternalHeapAlloc(0x1d);
    if ((p_Var3 == (_FILE *)0x0) &&
       (p_Var3 = malloc(0x1d), p_Var3 == (_FILE *)0x0)) {
      FUN_005acde0("Not enough memory to allocate file structures\r\n",1);
    }
    p_Var3->_cnt = (int)pp_Var4;
    p_Var3->_ptr = (char *)_DAT_02d252a0;
    pp_Var4[2] = p_Var3;
    p_Var3->_link = (streambuf *)0x0;
    *(byte *)&pp_Var4[2]->_bufsize = 0;
    pp_Var4[2]->_flag = 0;
    piVar1 = (int *)((int)pp_Var4 + 0x26);
    pp_Var4 = (_FILE **)((int)pp_Var4 + 0x1a);
    _DAT_02d252a0 = p_Var3;
    iVar2 = *piVar1;
  }
  _DAT_02d252a4 = 0;
  return;
}
