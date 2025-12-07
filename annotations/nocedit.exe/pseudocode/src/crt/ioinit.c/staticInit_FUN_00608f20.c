// Name: crt_ioinit.c_staticInit_FUN_00608f20
// Address: 00608f20
// Address Range: [[00608f20, 00608fbb]]
// Convention: __cdecl
// Signature: void crt_ioinit.c_staticInit_FUN_00608f20(void)

#include "nocturne.h"

void __cdecl crt_ioinit_c_staticInit_FUN_00608f20(void)

{
  FILE *pFVar1;
  streambuf *psVar2;
  FILE **ppFVar3;
  
  DAT_00684d05 = DAT_00684d05 & 0xf8 | 4;
  ppFVar3 = &g_StaticFilePoolStart;
  if (DAT_00684cd0 != 0) {
    do {
      psVar2 = (streambuf *)crt_heap_c_InternalHeapAlloc_FUN_00601bc0(0x1d);
      if ((psVar2 == (streambuf *)0x0) &&
         (psVar2 = (streambuf *)crt_memory_c_malloc_FUN_00601bb0(0x1d), psVar2 == (streambuf *)0x0))
      {
        crt_startup_c_HandleRuntimeError_FUN_00606660("Not enough memory to allocate file structures\r\n",1);
      }
      psVar2->__reserve_base = (char *)ppFVar3;
      psVar2->__b_lock = g_AllocatedListHead;
      ((FILE *)ppFVar3)->_link = psVar2;
      psVar2->__reserve_end = (char *)0x0;
      *(byte *)&((FILE *)ppFVar3)->_link->__get_ptr = 0;
      ((FILE *)ppFVar3)->_link->__get_base = (char *)0x0;
      pFVar1 = (FILE *)((int)ppFVar3 + 0x1c);
      ppFVar3 = (FILE **)((int)ppFVar3 + 0x1a);
      g_AllocatedListHead = (FileListNode *)psVar2;
    } while (*(int *)((int)&pFVar1->_link + 2) != 0);
  }
  g_FreeListHeadPointer = 0;
  return;
}
