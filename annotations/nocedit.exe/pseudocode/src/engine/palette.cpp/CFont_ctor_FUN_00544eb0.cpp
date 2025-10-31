// Name: engine_palette.cpp_CFont_ctor_FUN_00544eb0
// Address: 00544eb0
// Address Range: [[00544eb0, 00544eba]]
// Convention: __cdecl
// Signature: CFont * engine_palette.cpp_CFont_ctor_FUN_00544eb0(CFont * this_ptr)
// Cross-references:
//   engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0 (005f22e0) at 005f22e6 [UNCONDITIONAL_CALL]
// Globals:
//   CFont_vtable g_CFontVTable

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00544eb0(CFont *this_ptr)

{
  this_ptr->vtable = &g_CFontVTable;
  return this_ptr;
}


// Assembly code:
// 00544eb0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_palette.cpp_CFont_ctor_FUN_00544eb0
//   XREF to: Stack[0x4] (READ)
// 00544eb4: MOV dword ptr [EAX],0x661eec
//   XREF to: 00661eec (DATA)
// 00544eba: RET
