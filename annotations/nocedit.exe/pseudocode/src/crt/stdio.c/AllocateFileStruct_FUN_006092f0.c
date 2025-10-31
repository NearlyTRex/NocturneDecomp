// Name: crt_stdio.c_AllocateFileStruct_FUN_006092f0
// Address: 006092f0
// Address Range: [[006092f0, 006093ad]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_AllocateFileStruct_FUN_006092f0(int unused_param)
// Cross-references:
//   crt_stdio.c_fopenWithFlags_FUN_00601a20 (00601a20) at 00601a3e [UNCONDITIONAL_CALL]
// Globals:
//   FILE* g_StaticFilePoolStart = 00000000
//   undefined4 DAT_00684cd0
//   undefined4 DAT_00684cde
//   undefined4 DAT_00684cea
//   undefined4 g_StaticFilePoolEnd
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
//   FileListNode* g_AllocatedListHead
//   undefined4 g_FreeListHeadPointer
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_memory.c_memset_FUN_005fde40
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_AllocateFileStruct_FUN_006092f0(int unused_param)

{
  streambuf *psVar1;
  FILE **dest;
  uint uVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  if (g_FreeListHeadPointer == (streambuf *)0x0) {
    dest = &g_StaticFilePoolStart;
    do {
      if ((((FILE *)dest)->_flag & 3) == 0) {
        psVar1 = (streambuf *)crt_memory_c_malloc_FUN_00601bb0(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_00609398;
        uVar2 = 3;
        goto LAB_00609369;
      }
      dest = (FILE **)((int)dest + 0x1a);
    } while (dest < (FILE *)&g_StaticFilePoolEnd);
    uVar2 = 0x4003;
    psVar1 = (streambuf *)crt_memory_c_malloc_FUN_00601bb0(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_00609398:
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_IO_ERROR);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return (FILE *)0x0;
    }
    dest = (FILE **)((int)&psVar1->__put_end + 1);
  }
  else {
    dest = (FILE **)g_FreeListHeadPointer->__reserve_base;
    uVar2 = (uint)((ushort)((FILE *)dest)->_flag & 0x4003 | 3);
    psVar1 = g_FreeListHeadPointer;
    g_FreeListHeadPointer = (streambuf *)g_FreeListHeadPointer->__b_lock;
  }
LAB_00609369:
  crt_memory_c_memset_FUN_005fde40(dest,0,0x1a);
  ((FILE *)dest)->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  ((FILE *)dest)->_link = psVar1;
  psVar1->__b_lock = g_AllocatedListHead;
  g_AllocatedListHead = (FileListNode *)psVar1;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  return (FILE *)dest;
}


// Assembly code:
// 006092f0: PUSH EBX
//   Label: crt_stdio.c_AllocateFileStruct_FUN_006092f0
// 006092f1: PUSH ESI
// 006092f2: PUSH EDI
// 006092f3: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ef8 (READ)
// 006092f9: MOV ESI,dword ptr [0x03f9b204]
//   XREF to: 03f9b204 (READ)
// 006092ff: TEST ESI,ESI
// 00609301: JZ 0x0060931c
//   XREF to: 0060931c (CONDITIONAL_JUMP)
// 00609303: MOV EBX,dword ptr [ESI + 0x4]
// 00609306: MOV EDI,dword ptr [EBX + 0xc]
// 00609309: MOV EAX,dword ptr [ESI]
// 0060930b: AND EDI,0x4003
// 00609311: MOV [0x03f9b204],EAX
//   XREF to: 03f9b204 (WRITE)
// 00609316: OR DI,0x3
// 0060931a: JMP 0x00609369
//   XREF to: 00609369 (UNCONDITIONAL_JUMP)
// 0060931c: MOV EBX,0x684cc4
//   Label: LAB_0060931c
//   XREF to: 00684cc4 (PARAM)
// 00609321: CMP EBX,0x684ecc
//   XREF to: 00684ecc (DATA)
// 00609327: JNC 0x00609351
//   XREF to: 00609351 (CONDITIONAL_JUMP)
// 00609329: TEST byte ptr [EBX + 0xc],0x3
//   Label: LAB_00609329
//   XREF to: 00684cd0 (READ)
//   XREF to: 00684cea (READ)
// 0060932d: JNZ 0x00609346
//   XREF to: 00609346 (CONDITIONAL_JUMP)
// 0060932f: PUSH 0x1d
// 00609331: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 00609336: ADD ESP,0x4
// 00609339: MOV ESI,EAX
// 0060933b: TEST EAX,EAX
// 0060933d: JZ 0x00609398
//   XREF to: 00609398 (CONDITIONAL_JUMP)
// 0060933f: MOV EDI,0x3
// 00609344: JMP 0x00609369
//   XREF to: 00609369 (UNCONDITIONAL_JUMP)
// 00609346: ADD EBX,0x1a
//   Label: LAB_00609346
//   XREF to: 00684cde (PARAM)
// 00609349: CMP EBX,0x684ecc
//   XREF to: 00684ecc (DATA)
// 0060934f: JC 0x00609329
//   XREF to: 00609329 (CONDITIONAL_JUMP)
// 00609351: PUSH 0x37
//   Label: LAB_00609351
// 00609353: MOV EDI,0x4003
// 00609358: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060935d: ADD ESP,0x4
// 00609360: MOV ESI,EAX
// 00609362: TEST EAX,EAX
// 00609364: JZ 0x00609398
//   XREF to: 00609398 (CONDITIONAL_JUMP)
// 00609366: LEA EBX,[EAX + 0x1d]
// 00609369: PUSH 0x1a
//   Label: LAB_00609369
// 0060936b: PUSH 0x0
// 0060936d: PUSH EBX
//   XREF to: 00684cc4 (DATA)
//   XREF to: 00684cde (DATA)
// 0060936e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00609373: MOV dword ptr [EBX + 0xc],EDI
// 00609376: MOV EAX,[0x03f9b200]
//   XREF to: 03f9b200 (READ)
// 0060937b: MOV dword ptr [ESI + 0x4],EBX
// 0060937e: ADD ESP,0xc
// 00609381: MOV dword ptr [EBX + 0x8],ESI
// 00609384: MOV dword ptr [0x03f9b200],ESI
//   XREF to: 03f9b200 (WRITE)
// 0060938a: MOV dword ptr [ESI],EAX
// 0060938c: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 00609392: MOV EAX,EBX
// 00609394: POP EDI
// 00609395: POP ESI
// 00609396: POP EBX
// 00609397: RET
// 00609398: PUSH 0x5
//   Label: LAB_00609398
// 0060939a: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060939f: ADD ESP,0x4
// 006093a2: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 006093a8: XOR EAX,EAX
// 006093aa: POP EDI
// 006093ab: POP ESI
// 006093ac: POP EBX
// 006093ad: RET
