// Name: crt_ioinit.c_staticInit_FUN_00608f20
// Address: 00608f20
// Address Range: [[00608f20, 00608fbb]]
// Convention: __cdecl
// Signature: void __cdecl crt_ioinit_c_staticInit_FUN_00608f20(void)

#include "nocturne.h"

void __cdecl crt_ioinit_c_staticInit_FUN_00608f20(void)

{
  int iVar1;
  FILE *pFVar2;
  streambuf *psVar3;
  FILE **ppFVar4;
  
  BYTE_00684d05 = BYTE_00684d05 & 0xf8 | 4;
  ppFVar4 = &g_StaticFilePoolStart;
  iVar1 = INT_00684cd0;
  while (iVar1 != 0) {
    psVar3 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(0x1d);
    if ((psVar3 == (streambuf *)0x0) &&
       (psVar3 = crt_memory_c_malloc_FUN_00601bb0(0x1d), psVar3 == (streambuf *)0x0)) {
      crt_startup_c_HandleRuntimeError_FUN_00606660("Not enough memory to allocate file structures\r\n",1);
    }
    psVar3->__reserve_base = (char *)ppFVar4;
    psVar3->__b_lock = g_AllocatedListHead;
    ((FILE *)ppFVar4)->_link = psVar3;
    psVar3->__reserve_end = (char *)0x0;
    *(byte *)&((FILE *)ppFVar4)->_link->__get_ptr = 0;
    ((FILE *)ppFVar4)->_link->__get_base = (char *)0x0;
    pFVar2 = (FILE *)((int)ppFVar4 + 0x1c);
    ppFVar4 = (FILE **)((int)ppFVar4 + 0x1a);
    g_AllocatedListHead = (FileListNode *)psVar3;
    iVar1 = *(int *)((int)&pFVar2->_link + 2);
  }
  g_FreeListHeadPointer = 0;
  return;
}
