// Name: engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80
// Address: 00544f80
// Address Range: [[00544f80, 00544fac]]
// Convention: __cdecl
// Signature: CPaletteManager * engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager * this_ptr)
// Globals:
//   TerminatedCString s_engine_palette_cpp_0063e46c
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

CPaletteManager * __cdecl
engine_palette_cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager *this_ptr)

{
  g_CurrentDebugFilename = "..\\engine\\palette.cpp";
  g_CurrentDebugLine = 0x38;
  crt_memory_c_free_FUN_005fe659((void *)this_ptr->field1_0x4);
  return this_ptr;
}


// Assembly code:
// 00544f80: PUSH EBX
//   Label: engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80
// 00544f81: PUSH ESI
// 00544f82: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00544f86: MOV EDX,0x63e46c
//   XREF to: 0063e46c (DATA)
// 00544f8b: MOV ESI,dword ptr [EBX + 0x4]
// 00544f8e: MOV ECX,0x38
// 00544f93: PUSH ESI
// 00544f94: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00544f9a: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00544fa0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00544fa5: ADD ESP,0x4
// 00544fa8: MOV EAX,EBX
// 00544faa: POP ESI
// 00544fab: POP EBX
// 00544fac: RET
