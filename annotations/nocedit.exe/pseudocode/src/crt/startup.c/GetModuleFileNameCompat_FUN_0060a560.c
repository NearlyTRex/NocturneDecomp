// Name: crt_startup.c_GetModuleFileNameCompat_FUN_0060a560
// Address: 0060a560
// Address Range: [[0060a560, 0060a603]]
// Convention: __cdecl
// Signature: DWORD crt_startup.c_GetModuleFileNameCompat_FUN_0060a560(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
// Cross-references:
//   crt_startup.c_initialize_runtime_FUN_0060245c (0060245c) at 00602540 [UNCONDITIONAL_CALL]
// Globals:
//   GetModuleFileNameA* GetModuleFileNameA = 00211f42
//   GetModuleFileNameW* PTR_GetModuleFileNameW_006115b0 = 00211f58
//   GetVersion* PTR_GetVersion_006115c8 = 00211fca
//   MultiByteToWideChar* PTR_MultiByteToWideChar_006115f4 = 00212092
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_string.c_wcslen_FUN_0060cd30

#include "nocturne.h"

DWORD __cdecl
crt_startup_c_GetModuleFileNameCompat_FUN_0060a560(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  ulong lpFilename_00;
  int iVar2;
  
  DVar1 = (*PTR_GetVersion_006115c8)();
  if ((ushort)(DVar1 >> 0x10) < 0x8000) {
    DVar1 = (*PTR_GetModuleFileNameW_006115b0)(hModule,lpFilename,nSize);
    return DVar1;
  }
  lpFilename_00 = (ulong)crt_memory_c_malloc_FUN_00601bb0(0x208);
  if (lpFilename_00 != 0) {
    DVar1 = (*GetModuleFileNameA)(hModule,(LPSTR)lpFilename_00,0x208);
    if (DVar1 == 0) {
      crt_memory_c_free_FUN_00601cd0((void *)lpFilename_00);
      return 0;
    }
    iVar2 = (*PTR_MultiByteToWideChar_006115f4)(1,1,(LPCSTR)lpFilename_00,-1,lpFilename,nSize);
    crt_memory_c_free_FUN_00601cd0((void *)lpFilename_00);
    if (iVar2 == 0) {
      return 0;
    }
    lpFilename[nSize - 1] = L'\0';
    lpFilename_00 = crt_string_c_wcslen_FUN_0060cd30(lpFilename);
  }
  return lpFilename_00;
}


// Assembly code:
// 0060a560: PUSH EBX
//   Label: crt_startup.c_GetModuleFileNameCompat_FUN_0060a560
// 0060a561: PUSH ESI
// 0060a562: PUSH EDI
// 0060a563: PUSH EBP
// 0060a564: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060a568: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060a56c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060a570: CALL dword ptr CS:[0x6115c8]
//   XREF to: 006115c8 (READ)
// 0060a577: SHR EAX,0x10
// 0060a57a: AND EAX,0xffff
// 0060a57f: CMP AX,0x8000
// 0060a583: JNC 0x0060a594
//   XREF to: 0060a594 (CONDITIONAL_JUMP)
// 0060a585: PUSH EBP
// 0060a586: PUSH ESI
// 0060a587: PUSH EDI
// 0060a588: CALL dword ptr CS:[0x6115b0]
//   XREF to: 006115b0 (READ)
// 0060a58f: POP EBP
// 0060a590: POP EDI
// 0060a591: POP ESI
// 0060a592: POP EBX
// 0060a593: RET
// 0060a594: PUSH 0x208
//   Label: LAB_0060a594
// 0060a599: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060a59e: MOV EBX,EAX
// 0060a5a0: ADD ESP,0x4
// 0060a5a3: TEST EAX,EAX
// 0060a5a5: JZ 0x0060a5ff
//   XREF to: 0060a5ff (CONDITIONAL_JUMP)
// 0060a5a7: PUSH 0x208
// 0060a5ac: PUSH EAX
// 0060a5ad: PUSH EDI
// 0060a5ae: CALL dword ptr CS:[0x6115ac]
//   XREF to: 006115ac (READ)
// 0060a5b5: TEST EAX,EAX
// 0060a5b7: JNZ 0x0060a5c9
//   XREF to: 0060a5c9 (CONDITIONAL_JUMP)
// 0060a5b9: PUSH EBX
// 0060a5ba: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060a5bf: ADD ESP,0x4
// 0060a5c2: XOR EAX,EAX
// 0060a5c4: POP EBP
// 0060a5c5: POP EDI
// 0060a5c6: POP ESI
// 0060a5c7: POP EBX
// 0060a5c8: RET
// 0060a5c9: PUSH EBP
//   Label: LAB_0060a5c9
// 0060a5ca: PUSH ESI
// 0060a5cb: PUSH -0x1
// 0060a5cd: PUSH EBX
// 0060a5ce: PUSH 0x1
// 0060a5d0: PUSH 0x1
// 0060a5d2: CALL dword ptr CS:[0x6115f4]
//   XREF to: 006115f4 (READ)
// 0060a5d9: PUSH EBX
// 0060a5da: MOV EDI,EAX
// 0060a5dc: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060a5e1: ADD ESP,0x4
// 0060a5e4: TEST EDI,EDI
// 0060a5e6: JNZ 0x0060a5ef
//   XREF to: 0060a5ef (CONDITIONAL_JUMP)
// 0060a5e8: XOR EAX,EAX
// 0060a5ea: POP EBP
// 0060a5eb: POP EDI
// 0060a5ec: POP ESI
// 0060a5ed: POP EBX
// 0060a5ee: RET
// 0060a5ef: PUSH ESI
//   Label: LAB_0060a5ef
// 0060a5f0: MOV word ptr [ESI + EBP*0x2 + -0x2],0x0
// 0060a5f7: CALL crt_string.c_wcslen_FUN_0060cd30
//   XREF to: 0060cd30 (UNCONDITIONAL_CALL)
// 0060a5fc: ADD ESP,0x4
// 0060a5ff: POP EBP
//   Label: LAB_0060a5ff
// 0060a600: POP EDI
// 0060a601: POP ESI
// 0060a602: POP EBX
// 0060a603: RET
