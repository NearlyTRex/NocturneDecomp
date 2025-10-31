// Name: crt_windows.c_has_active_window_FUN_0060a710
// Address: 0060a710
// Address Range: [[0060a710, 0060a745]]
// Convention: __cdecl
// Signature: BOOL crt_windows.c_has_active_window_FUN_0060a710(void)
// Cross-references:
//   crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4 (0060a7a4) at 0060a7ba [UNCONDITIONAL_CALL]
// Globals:
//   GetProcAddress* GetProcAddress = 00211f8e
//   LoadLibraryA* PTR_LoadLibraryA_006115e8 = 0021205c
//   TerminatedCString s_USER32_DLL_00659110
//   TerminatedCString s_GetActiveWindow_0065911c
// Function calls:
//   GetProcAddress
//   LoadLibraryA

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

BOOL __cdecl crt_windows_c_has_active_window_FUN_0060a710(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = (*PTR_LoadLibraryA_006115e8)("USER32.DLL");
  iVar2 = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = (*GetProcAddress)(hModule,"GetActiveWindow");
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)();
    }
  }
  return (uint)(iVar2 != 0);
}


// Assembly code:
// 0060a710: PUSH EBX
//   Label: crt_windows.c_has_active_window_FUN_0060a710
// 0060a711: PUSH 0x659110
//   XREF to: 00659110 (DATA)
// 0060a716: CALL dword ptr CS:[0x6115e8]
//   XREF to: EXTERNAL:00000085 (COMPUTED_CALL)
//   XREF to: 006115e8 (READ)
// 0060a71d: XOR EBX,EBX
// 0060a71f: TEST EAX,EAX
// 0060a721: JZ 0x0060a73a
//   XREF to: 0060a73a (CONDITIONAL_JUMP)
// 0060a723: PUSH 0x65911c
//   XREF to: 0065911c (DATA)
// 0060a728: PUSH EAX
// 0060a729: CALL dword ptr CS:[0x6115bc]
//   XREF to: EXTERNAL:0000007a (COMPUTED_CALL)
//   XREF to: 006115bc (READ)
// 0060a730: MOV EDX,EAX
// 0060a732: TEST EAX,EAX
// 0060a734: JZ 0x0060a73a
//   XREF to: 0060a73a (CONDITIONAL_JUMP)
// 0060a736: CALL EDX
// 0060a738: MOV EBX,EAX
// 0060a73a: TEST EBX,EBX
//   Label: LAB_0060a73a
// 0060a73c: SETNZ AL
// 0060a73f: AND EAX,0xff
// 0060a744: POP EBX
// 0060a745: RET
