// Name: wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
// Address: 005ede10
// Address Range: [[005ede10, 005ede1c]]
// Convention: __cdecl
// Signature: HMODULE wincore_wddvmem.cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName)
// Cross-references:
//   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 (005b5ec0) at 005b5ecf [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 (005b6750) at 005b678e [UNCONDITIONAL_CALL]
// Globals:
//   LoadLibraryA* PTR_LoadLibraryA_006115e8 = 0021205c
// Function calls:
//   LoadLibraryA

#include "nocturne.h"

HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
  pHVar1 = (*PTR_LoadLibraryA_006115e8)(lpLibFileName);
  return pHVar1;
}


// Assembly code:
// 005ede10: MOV EDX,dword ptr [ESP + 0x4]
//   Label: wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
//   XREF to: Stack[0x4] (READ)
// 005ede14: PUSH EDX
// 005ede15: CALL dword ptr CS:[0x6115e8]
//   XREF to: EXTERNAL:00000085 (COMPUTED_CALL)
//   XREF to: 006115e8 (READ)
// 005ede1c: RET
