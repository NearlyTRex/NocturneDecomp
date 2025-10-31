// Name: crt_thread.c_create_thread_with_sync_FUN_0060f960
// Address: 0060f960
// Address Range: [[0060f960, 0060fa54]]
// Convention: __cdecl
// Signature: HANDLE crt_thread.c_create_thread_with_sync_FUN_0060f960(LPVOID thread_param, SIZE_T stack_size_hint, LPVOID sync_param, HANDLE * out_thread_handle)
// Globals:
//   CloseHandle* CloseHandle = 00211c38
//   CreateEventA* PTR_CreateEventA_0061150c = 00211c5a
//   CreateThread* CreateThread = 00211c9a
//   GetCurrentThreadId* PTR_GetCurrentThreadId_00611584 = 00211e84
//   GetCurrentThread* PTR_GetCurrentThread_00611588 = 00211e9a
//   WaitForSingleObject* WaitForSingleObject = 002122c4
//   TerminatedCString s_bgnthd_00659784
//   undefined4 DAT_0065978c
//   DWORD g_TLSIndex = 0xffffffff
// Function calls:
//   CloseHandle
//   CreateEventA
//   CreateThread
//   crt_stdio.c_IntegerToString_FUN_00607d18
//   crt_tls.c_allocate_tls_index_FUN_0060a27c
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
//   GetCurrentThread
//   GetCurrentThreadId
//   WaitForSingleObject

#include "nocturne.h"

HANDLE __cdecl
crt_thread_c_create_thread_with_sync_FUN_0060f960
          (LPVOID thread_param,SIZE_T stack_size_hint,LPVOID sync_param,HANDLE *out_thread_handle)

{
  BOOL BVar1;
  DWORD value;
  HANDLE hObject;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  char acStackY_1034 [4048];
  char *buffer;
  int base;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined4 uStack_48;
  char acStack_44 [24];
  LPVOID local_2c;
  LPVOID local_28;
  HANDLE pvStack_24;
  HANDLE pvStack_20;
  undefined4 *puStack_1c;
  DWORD DStack_18;
  
  bVar2 = 0;
  if (g_TLSIndex == 0xffffffff) {
    BVar1 = crt_tls_c_allocate_tls_index_FUN_0060a27c();
    if (BVar1 == 0) {
      return (HANDLE)0x0;
    }
    crt_tls_c_initialize_tls_infrastructure_FUN_0060a3b4();
  }
  local_2c = thread_param;
  local_28 = sync_param;
  pvStack_24 = (*PTR_GetCurrentThread_00611588)();
  base = 0x10;
  buffer = acStack_44;
  puStack_1c = (undefined4 *)0x0;
  cStack_4c = "__bgnthd"[0];
  cStack_4b = "__bgnthd"[1];
  cStack_4a = "__bgnthd"[2];
  cStack_49 = "__bgnthd"[3];
  (&uStack_48)[(uint)bVar2 * -2] = *(undefined4 *)("__bgnthd" + (uint)bVar2 * -8 + 4);
  acStack_44[(uint)bVar2 * -8 + (uint)bVar2 * -8] =
       "__bgnthd"[(uint)bVar2 * -8 + (uint)bVar2 * -8 + 8];
  value = (*PTR_GetCurrentThreadId_00611584)();
  crt_stdio_c_IntegerToString_FUN_00607d18(value,buffer,base);
  pvStack_20 = (*PTR_CreateEventA_0061150c)((LPSECURITY_ATTRIBUTES)0x0,0,0,&stack0xffffffb4);
  hObject = (*CreateThread)((LPSECURITY_ATTRIBUTES)0x0,
                            (stack_size_hint + 0xfff >> 8 & 0xfffff0) << 8,
                            crt_thread_c_threadStartupWrapper_FUN_0060f8c0,&local_2c,0,&DStack_18);
  if (hObject == (HANDLE)0x0) {
    DStack_18 = 0xffffffff;
  }
  else {
    (*WaitForSingleObject)(pvStack_20,0xffffffff);
    if (puStack_1c == (undefined4 *)0x0) {
      (*CloseHandle)(hObject);
    }
    else {
      *puStack_1c = hObject;
    }
  }
  (*CloseHandle)(pvStack_20);
  return hObject;
}


// Assembly code:
// 0060f960: PUSH EBX
//   Label: crt_thread.c_create_thread_with_sync_FUN_0060f960
// 0060f961: PUSH ESI
// 0060f962: PUSH EDI
// 0060f963: PUSH ES
// 0060f964: PUSH EBP
// 0060f965: SUB ESP,0x38
// 0060f968: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0060f96c: CMP dword ptr [0x00684ee0],-0x1
//   XREF to: 00684ee0 (READ)
// 0060f973: JNZ 0x0060f987
//   XREF to: 0060f987 (CONDITIONAL_JUMP)
// 0060f975: CALL crt_tls.c_allocate_tls_index_FUN_0060a27c
//   XREF to: 0060a27c (UNCONDITIONAL_CALL)
// 0060f97a: TEST EAX,EAX
// 0060f97c: JZ 0x0060fa4c
//   XREF to: 0060fa4c (CONDITIONAL_JUMP)
// 0060f982: CALL crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
//   XREF to: 0060a3b4 (UNCONDITIONAL_CALL)
// 0060f987: LEA EAX,[EBX + 0xfff]
//   Label: LAB_0060f987
// 0060f98d: XOR AL,AL
// 0060f98f: AND AH,0xf0
// 0060f992: MOV EBX,EAX
// 0060f994: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0060f998: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0060f99c: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0xc] (READ)
// 0060f9a0: MOV EDI,ESP
// 0060f9a2: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0060f9a6: CALL dword ptr CS:[0x611588]
//   XREF to: EXTERNAL:0000006d (COMPUTED_CALL)
//   XREF to: 00611588 (READ)
// 0060f9ad: PUSH 0x10
// 0060f9af: MOV dword ptr [ESP + 0x2c],EAX
// 0060f9b3: MOV AX,DS
// 0060f9b5: XOR ECX,ECX
// 0060f9b7: MOV ES,AX
// 0060f9b9: LEA EAX,[ESP + 0xc]
// 0060f9bd: MOV ESI,0x659784
//   XREF to: 00659784 (DATA)
// 0060f9c2: MOV dword ptr [ESP + 0x34],ECX
// 0060f9c6: PUSH EAX
// 0060f9c7: MOVSD ES:EDI,ESI
//   XREF to: 00659784 (READ)
// 0060f9c8: MOVSD ES:EDI,ESI
//   XREF to: 00659788 (READ)
// 0060f9c9: MOVSB ES:EDI,ESI
//   XREF to: 0065978c (READ)
// 0060f9ca: CALL dword ptr CS:[0x611584]
//   XREF to: EXTERNAL:0000006c (COMPUTED_CALL)
//   XREF to: 00611584 (READ)
// 0060f9d1: PUSH EAX
// 0060f9d2: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 0060f9d7: ADD ESP,0xc
// 0060f9da: MOV EAX,ESP
// 0060f9dc: PUSH EAX
// 0060f9dd: PUSH 0x0
// 0060f9df: PUSH 0x0
// 0060f9e1: PUSH 0x0
// 0060f9e3: CALL dword ptr CS:[0x61150c]
//   XREF to: EXTERNAL:0000004e (COMPUTED_CALL)
//   XREF to: 0061150c (READ)
// 0060f9ea: MOV dword ptr [ESP + 0x2c],EAX
// 0060f9ee: LEA EAX,[ESP + 0x34]
// 0060f9f2: PUSH EAX
// 0060f9f3: PUSH 0x0
// 0060f9f5: LEA EAX,[ESP + 0x28]
// 0060f9f9: PUSH EAX
// 0060f9fa: PUSH 0x60f8c0
//   XREF to: 0060f8c0 (DATA)
// 0060f9ff: PUSH EBX
// 0060fa00: PUSH 0x0
// 0060fa02: CALL dword ptr CS:[0x61151c]
//   XREF to: EXTERNAL:00000052 (COMPUTED_CALL)
//   XREF to: 0061151c (READ)
// 0060fa09: MOV EBX,EAX
// 0060fa0b: MOV ESI,EAX
// 0060fa0d: TEST EAX,EAX
// 0060fa0f: JNZ 0x0060fa1b
//   XREF to: 0060fa1b (CONDITIONAL_JUMP)
// 0060fa11: MOV dword ptr [ESP + 0x34],0xffffffff
// 0060fa19: JMP 0x0060fa3e
//   XREF to: 0060fa3e (UNCONDITIONAL_JUMP)
// 0060fa1b: PUSH -0x1
//   Label: LAB_0060fa1b
// 0060fa1d: MOV EDI,dword ptr [ESP + 0x30]
// 0060fa21: PUSH EDI
// 0060fa22: CALL dword ptr CS:[0x61166c]
//   XREF to: EXTERNAL:000000a6 (COMPUTED_CALL)
//   XREF to: 0061166c (READ)
// 0060fa29: MOV EBP,dword ptr [ESP + 0x30]
// 0060fa2d: TEST EBP,EBP
// 0060fa2f: JZ 0x0060fa36
//   XREF to: 0060fa36 (CONDITIONAL_JUMP)
// 0060fa31: MOV dword ptr [EBP],EBX
// 0060fa34: JMP 0x0060fa3e
//   XREF to: 0060fa3e (UNCONDITIONAL_JUMP)
// 0060fa36: PUSH EBX
//   Label: LAB_0060fa36
// 0060fa37: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 0060fa3e: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_0060fa3e
// 0060fa42: PUSH EDX
// 0060fa43: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 0060fa4a: MOV EAX,ESI
// 0060fa4c: ADD ESP,0x38
//   Label: LAB_0060fa4c
// 0060fa4f: POP EBP
// 0060fa50: POP ES
// 0060fa51: POP EDI
// 0060fa52: POP ESI
// 0060fa53: POP EBX
// 0060fa54: RET
