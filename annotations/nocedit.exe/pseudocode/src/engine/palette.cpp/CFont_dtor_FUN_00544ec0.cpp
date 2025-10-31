// Name: engine_palette.cpp_CFont_dtor_FUN_00544ec0
// Address: 00544ec0
// Address Range: [[00544ec0, 00544eca]]
// Convention: __cdecl
// Signature: CFont * engine_palette.cpp_CFont_dtor_FUN_00544ec0(CFont * this_ptr)
// Cross-references:
//   engine_winfont.cpp_CWinFont_dtor_FUN_005f2390 (005f2390) at 005f23ae [UNCONDITIONAL_CALL]
// Globals:
//   CFont_vtable g_CFontVTable

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_00544ec0(CFont *this_ptr)

{
  this_ptr->vtable = &g_CFontVTable;
  return this_ptr;
}


// Assembly code:
// 00544ec0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_palette.cpp_CFont_dtor_FUN_00544ec0
//   XREF to: Stack[0x4] (READ)
// 00544ec4: MOV dword ptr [EAX],0x661eec
//   XREF to: 00661eec (DATA)
// 00544eca: RET
