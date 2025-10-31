// Name: engine_font.cpp_CBitFont_free_FUN_004cd4e0
// Address: 004cd4e0
// Address Range: [[004cd4e0, 004cd530]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_free_FUN_004cd4e0(CBitFont * this_ptr)
// Cross-references:
//   engine_font.cpp_CBitFont_dtor_FUN_004cceb0 (004cceb0) at 004cceb6 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280 (004cd280) at 004cd288 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_font_cpp_0062a5bd
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   engine_font.cpp_CBitFont_reset_FUN_004cced0

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_free_FUN_004cd4e0(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  char (*pacVar2) [80];
  
  pCVar1 = this_ptr;
  do {
    pacVar2 = pCVar1->bitmap_files;
    g_CurrentDebugFilename = "..\\engine\\font.cpp";
    g_CurrentDebugLine = 0x173;
    crt_memory_c_free_FUN_005fe659(pCVar1->bitmap_data[0]);
    pCVar1->bitmap_data[0] = (void *)0x0;
    pCVar1 = (CBitFont *)pacVar2;
  } while (pacVar2 != (char (*) [80])(this_ptr->bitmap_files[0] + 0xc));
  engine_font_cpp_CBitFont_reset_FUN_004cced0(this_ptr);
  return;
}


// Assembly code:
// 004cd4e0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_free_FUN_004cd4e0
// 004cd4e1: PUSH ESI
// 004cd4e2: PUSH EDI
// 004cd4e3: PUSH EBP
// 004cd4e4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cd4e8: MOV EBX,EDI
// 004cd4ea: LEA ESI,[EDI + 0x10]
// 004cd4ed: MOV EDX,0x62a5bd
//   Label: LAB_004cd4ed
//   XREF to: 0062a5bd (PARAM)
// 004cd4f2: MOV ECX,0x173
// 004cd4f7: MOV EBP,dword ptr [EBX + 0x144]
// 004cd4fd: ADD EBX,0x4
// 004cd500: PUSH EBP
// 004cd501: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 004cd507: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 004cd50d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004cd512: ADD ESP,0x4
// 004cd515: MOV dword ptr [EBX + 0x140],0x0
// 004cd51f: CMP EBX,ESI
// 004cd521: JNZ 0x004cd4ed
//   XREF to: 004cd4ed (CONDITIONAL_JUMP)
// 004cd523: PUSH EDI
// 004cd524: CALL engine_font.cpp_CBitFont_reset_FUN_004cced0
//   XREF to: 004cced0 (UNCONDITIONAL_CALL)
// 004cd529: ADD ESP,0x4
// 004cd52c: POP EBP
// 004cd52d: POP EDI
// 004cd52e: POP ESI
// 004cd52f: POP EBX
// 004cd530: RET
