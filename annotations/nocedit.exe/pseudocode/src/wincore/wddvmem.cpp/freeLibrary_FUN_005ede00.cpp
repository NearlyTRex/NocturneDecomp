// Name: wincore_wddvmem.cpp_freeLibrary_FUN_005ede00
// Address: 005ede00
// Address Range: [[005ede00, 005ede0c]]
// Convention: __cdecl
// Signature: BOOL wincore_wddvmem.cpp_freeLibrary_FUN_005ede00(HMODULE hLibModule)
// Cross-references:
//   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 (005b5d20) at 005b5e9b [UNCONDITIONAL_CALL]
// Globals:
//   FreeLibrary* PTR_FreeLibrary_0061155c = 00211dd4
// Function calls:
//   FreeLibrary

#include "nocturne.h"

BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_005ede00(HMODULE hLibModule)

{
  BOOL BVar1;
  
  BVar1 = (*PTR_FreeLibrary_0061155c)(hLibModule);
  return BVar1;
}


// Assembly code:
// 005ede00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: wincore_wddvmem.cpp_freeLibrary_FUN_005ede00
//   XREF to: Stack[0x4] (READ)
// 005ede04: PUSH EDX
// 005ede05: CALL dword ptr CS:[0x61155c]
//   XREF to: EXTERNAL:00000062 (COMPUTED_CALL)
//   XREF to: 0061155c (READ)
// 005ede0c: RET
