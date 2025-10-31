// Name: wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
// Address: 005ede20
// Address Range: [[005ede20, 005ede31]]
// Convention: __cdecl
// Signature: FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
// Cross-references:
//   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 (005b5ec0) at 005b5ef6 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 (005b6750) at 005b6ac0 [UNCONDITIONAL_CALL]
// Globals:
//   GetProcAddress* GetProcAddress = 00211f8e
// Function calls:
//   GetProcAddress

#include "nocturne.h"

FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
  pFVar1 = (*GetProcAddress)(hModule,lpProcName);
  return pFVar1;
}


// Assembly code:
// 005ede20: MOV EDX,dword ptr [ESP + 0x8]
//   Label: wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
//   XREF to: Stack[0x8] (READ)
// 005ede24: PUSH EDX
// 005ede25: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ede29: PUSH ECX
// 005ede2a: CALL dword ptr CS:[0x6115bc]
//   XREF to: EXTERNAL:0000007a (COMPUTED_CALL)
//   XREF to: 006115bc (READ)
// 005ede31: RET
