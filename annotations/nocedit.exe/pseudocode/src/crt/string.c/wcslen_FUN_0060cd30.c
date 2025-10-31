// Name: crt_string.c_wcslen_FUN_0060cd30
// Address: 0060cd30
// Address Range: [[0060cd30, 0060cd50]]
// Convention: __cdecl
// Signature: ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
// Cross-references:
//   crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 (0060a560) at 0060a5f7 [UNCONDITIONAL_CALL]
//   crt_string.c_wcsdup_FUN_0060a660 (0060a660) at 0060a667 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fbc8 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_006107f0 (006107f0) at 0061081a [UNCONDITIONAL_CALL]

#include "nocturne.h"

ulong __cdecl crt_string_c_wcslen_FUN_0060cd30(LPWSTR str)

{
  WCHAR *pWVar1;
  WCHAR WVar2;
  LPWSTR pWVar3;
  
  WVar2 = *str;
  pWVar3 = str;
  while (WVar2 != L'\0') {
    pWVar1 = pWVar3 + 1;
    pWVar3 = pWVar3 + 1;
    WVar2 = *pWVar1;
  }
  return (int)pWVar3 - (int)str >> 1;
}


// Assembly code:
// 0060cd30: PUSH EBX
//   Label: crt_string.c_wcslen_FUN_0060cd30
// 0060cd31: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060cd35: MOV BX,word ptr [EDX]
// 0060cd38: MOV EAX,EDX
// 0060cd3a: TEST BX,BX
// 0060cd3d: JZ 0x0060cd4b
//   XREF to: 0060cd4b (CONDITIONAL_JUMP)
// 0060cd3f: MOV CX,word ptr [EAX + 0x2]
//   Label: LAB_0060cd3f
// 0060cd43: ADD EAX,0x2
// 0060cd46: TEST CX,CX
// 0060cd49: JNZ 0x0060cd3f
//   XREF to: 0060cd3f (CONDITIONAL_JUMP)
// 0060cd4b: SUB EAX,EDX
//   Label: LAB_0060cd4b
// 0060cd4d: SAR EAX,0x1
// 0060cd4f: POP EBX
// 0060cd50: RET
