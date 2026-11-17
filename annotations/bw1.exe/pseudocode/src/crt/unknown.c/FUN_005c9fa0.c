// Name: crt_unknown.c_FUN_005c9fa0
// Address: 005c9fa0
// Address Range: [[005c9fa0, 005ca03b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c9fa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c9fa0(void)

{
  int *piVar1;
  int iVar2;
  _FILE *p_Var3;
  _FILE **pp_Var4;
  
  g_FILE_00626308._flag._1_1_ = g_FILE_00626308._flag._1_1_ & 0xf8 | 4;
  pp_Var4 = &g_FILE_PTR_006262d4;
  iVar2 = _DAT_006262e0;
  while (iVar2 != 0) {
    p_Var3 = InternalHeapAlloc(0x1d);
    if ((p_Var3 == (_FILE *)0x0) &&
       (p_Var3 = malloc(0x1d), p_Var3 == (_FILE *)0x0)) {
      FUN_005c9f70("Not enough memory to allocate file structures\r\n",1);
    }
    p_Var3->_cnt = (int)pp_Var4;
    p_Var3->_ptr = (char *)_DAT_02c9f050;
    pp_Var4[2] = p_Var3;
    p_Var3->_link = (streambuf *)0x0;
    *(byte *)&pp_Var4[2]->_bufsize = 0;
    pp_Var4[2]->_flag = 0;
    piVar1 = (int *)((int)pp_Var4 + 0x26);
    pp_Var4 = (_FILE **)((int)pp_Var4 + 0x1a);
    _DAT_02c9f050 = p_Var3;
    iVar2 = *piVar1;
  }
  _DAT_02c9f054 = 0;
  return;
}
