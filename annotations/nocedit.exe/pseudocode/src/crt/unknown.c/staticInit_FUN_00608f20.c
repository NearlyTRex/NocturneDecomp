// Name: crt_unknown.c_staticInit_FUN_00608f20
// Address: 00608f20
// Address Range: [[00608f20, 00608fbb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_00608f20()
// Globals:
//   TerminatedCString s_Not_enough_memory_to_all_00659070
//   FILE* g_StaticFilePoolStart = 00000000
//   undefined4 DAT_00684ccc
//   undefined4 DAT_00684cd0
//   undefined4 DAT_00684cea
//   undefined1 DAT_00684d05
//   FileListNode* g_AllocatedListHead
//   undefined4 g_FreeListHeadPointer
// Function calls:
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_startup.c_HandleRuntimeError_FUN_00606660

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_00608f20(void)

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
      *(undefined1 *)&((FILE *)ppFVar3)->_link->__get_ptr = 0;
      ((FILE *)ppFVar3)->_link->__get_base = (char *)0x0;
      pFVar1 = (FILE *)((int)ppFVar3 + 0x1c);
      ppFVar3 = (FILE **)((int)ppFVar3 + 0x1a);
      g_AllocatedListHead = (FileListNode *)psVar2;
    } while (*(int *)((int)&pFVar1->_link + 2) != 0);
  }
  g_FreeListHeadPointer = 0;
  return;
}


// Assembly code:
// 00608f20: PUSH EBX
//   Label: crt_unknown.c_staticInit_FUN_00608f20
// 00608f21: PUSH ESI
// 00608f22: MOV AH,byte ptr [0x00684d05]
//   XREF to: 00684d05 (READ)
// 00608f28: AND AH,0xf8
// 00608f2b: MOV DL,AH
// 00608f2d: MOV byte ptr [0x00684d05],AH
//   XREF to: 00684d05 (WRITE)
// 00608f33: OR DL,0x4
// 00608f36: MOV byte ptr [0x00684d05],DL
//   XREF to: 00684d05 (WRITE)
// 00608f3c: MOV EDX,dword ptr [0x00684cd0]
//   XREF to: 00684cd0 (READ)
// 00608f42: MOV EBX,0x684cc4
//   XREF to: 00684cc4 (DATA)
// 00608f47: TEST EDX,EDX
// 00608f49: JZ 0x00608fb1
//   XREF to: 00608fb1 (CONDITIONAL_JUMP)
// 00608f4b: PUSH 0x1d
//   Label: LAB_00608f4b
// 00608f4d: CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   XREF to: 00601bc0 (UNCONDITIONAL_CALL)
// 00608f52: ADD ESP,0x4
// 00608f55: TEST EAX,EAX
// 00608f57: JNZ 0x00608f7a
//   XREF to: 00608f7a (CONDITIONAL_JUMP)
// 00608f59: PUSH 0x1d
// 00608f5b: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 00608f60: ADD ESP,0x4
// 00608f63: MOV ESI,EAX
// 00608f65: TEST EAX,EAX
// 00608f67: JNZ 0x00608f7c
//   XREF to: 00608f7c (CONDITIONAL_JUMP)
// 00608f69: PUSH 0x1
// 00608f6b: PUSH 0x659070
//   XREF to: 00659070 (DATA)
// 00608f70: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 00608f75: ADD ESP,0x8
// 00608f78: JMP 0x00608f7c
//   XREF to: 00608f7c (UNCONDITIONAL_JUMP)
// 00608f7a: MOV ESI,EAX
//   Label: LAB_00608f7a
// 00608f7c: MOV EAX,[0x03f9b200]
//   Label: LAB_00608f7c
//   XREF to: 03f9b200 (READ)
// 00608f81: MOV dword ptr [ESI + 0x4],EBX
//   XREF to: 00684cc4 (DATA)
// 00608f84: MOV dword ptr [ESI],EAX
// 00608f86: MOV dword ptr [EBX + 0x8],ESI
//   XREF to: 00684ccc (WRITE)
// 00608f89: MOV dword ptr [ESI + 0x8],0x0
// 00608f90: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 00684ccc (READ)
// 00608f93: MOV byte ptr [EAX + 0x14],0x0
// 00608f97: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 00684ccc (READ)
// 00608f9a: MOV dword ptr [EAX + 0xc],0x0
// 00608fa1: MOV dword ptr [0x03f9b200],ESI
//   XREF to: 03f9b200 (WRITE)
// 00608fa7: MOV ECX,dword ptr [EBX + 0x26]
//   XREF to: 00684cea (READ)
// 00608faa: ADD EBX,0x1a
// 00608fad: TEST ECX,ECX
// 00608faf: JNZ 0x00608f4b
//   XREF to: 00608f4b (CONDITIONAL_JUMP)
// 00608fb1: XOR ESI,ESI
//   Label: LAB_00608fb1
// 00608fb3: MOV dword ptr [0x03f9b204],ESI
//   XREF to: 03f9b204 (WRITE)
// 00608fb9: POP ESI
// 00608fba: POP EBX
// 00608fbb: RET
