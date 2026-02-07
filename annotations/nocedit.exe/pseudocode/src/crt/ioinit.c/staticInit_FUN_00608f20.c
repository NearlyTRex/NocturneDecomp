// Name: crt_ioinit.c_staticInit_FUN_00608f20
// Address: 00608f20
// Address Range: [[00608f20, 00608fbb]]
// Convention: __cdecl
// Signature: void __cdecl crt_ioinit_c_staticInit_FUN_00608f20(void)

#include "nocturne.h"

void __cdecl staticInit(void)

{
  int iVar1;
  _FILE *p_Var2;
  streambuf *psVar3;
  _FILE **pp_Var4;
  
  g_StderrLogFile._flag._1_1_ = g_StderrLogFile._flag._1_1_ & 0xf8 | 4;
  pp_Var4 = &g_StaticFilePoolStart;
  iVar1 = INT_00684cd0;
  while (iVar1 != 0) {
    psVar3 = InternalHeapAlloc(0x1d);
    if ((psVar3 == (streambuf *)0x0) &&
       (psVar3 = malloc(0x1d), psVar3 == (streambuf *)0x0)) {
      HandleRuntimeError("Not enough memory to allocate file structures\r\n",1);
    }
    psVar3->__reserve_base = (char *)pp_Var4;
    psVar3->__b_lock = g_AllocatedListHead;
    ((_FILE *)pp_Var4)->_link = psVar3;
    psVar3->__reserve_end = (char *)0x0;
    *(byte *)&((_FILE *)pp_Var4)->_link->__get_ptr = 0;
    ((_FILE *)pp_Var4)->_link->__get_base = (char *)0x0;
    p_Var2 = (_FILE *)((int)pp_Var4 + 0x1c);
    pp_Var4 = (_FILE **)((int)pp_Var4 + 0x1a);
    g_AllocatedListHead = (FileListNode *)psVar3;
    iVar1 = *(int *)((int)&p_Var2->_link + 2);
  }
  g_FreeListHeadPointer = 0;
  return;
}
