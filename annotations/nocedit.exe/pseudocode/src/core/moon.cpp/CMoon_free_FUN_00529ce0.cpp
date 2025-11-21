// Name: core_moon.cpp_CMoon_free_FUN_00529ce0
// Address: 00529ce0
// Address Range: [[00529ce0, 00529d50]]
// Convention: __cdecl
// Signature: void core_moon.cpp_CMoon_free_FUN_00529ce0(CMoon * this_ptr)
// Cross-references:
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512f04 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513161 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_dtor_FUN_00529ab0 (00529ab0) at 00529ab6 [UNCONDITIONAL_CALL]
// Globals:
//   CAlphaBitmap g_MoonCloudTexture
//   CAlphaBitmap[30] g_MoonAnimTextures
//   undefined4 DAT_02f37f98
//   int g_MoonCloudScrollX
//   CCourse[3] g_MoonBatCourses
//   undefined4 DAT_02f381f4
//   SBat[30] g_MoonBats
//   CKeyFramedModel g_MoonBatModel
// Function calls:
//   core_course.cpp_CCourse_free_FUN_004426c0
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_free_FUN_00529ce0(CMoon *this_ptr)

{
  CCourse *this_ptr_00;
  CAlphaBitmap *this_ptr_01;
  
  if (this_ptr->is_loaded != 0) {
    this_ptr_01 = g_MoonAnimTextures;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_MoonCloudTexture);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(this_ptr_01);
      this_ptr_01 = this_ptr_01 + 1;
    } while (this_ptr_01 != (CAlphaBitmap *)&g_MoonCloudScrollX);
    this_ptr->is_loaded = 0;
  }
  this_ptr_00 = g_MoonBatCourses;
  do {
    core_course_cpp_CCourse_free_FUN_004426c0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while ((SBat *)this_ptr_00 != g_MoonBats);
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&this_ptr->moon);
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_MoonBatModel);
  return;
}


// Assembly code:
// 00529ce0: PUSH EBX
//   Label: core_moon.cpp_CMoon_free_FUN_00529ce0
// 00529ce1: PUSH ESI
// 00529ce2: PUSH EDI
// 00529ce3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00529ce7: CMP dword ptr [EDI],0x0
// 00529cea: JNZ 0x00529d21
//   XREF to: 00529d21 (CONDITIONAL_JUMP)
// 00529cec: MOV EBX,0x2f381e8
//   Label: LAB_00529cec
//   XREF to: 02f381e8 (PARAM)
// 00529cf1: LEA ESI,[EBX + 0x24]
//   XREF to: 02f3820c (DATA)
// 00529cf4: PUSH EBX
//   Label: LAB_00529cf4
//   XREF to: 02f381e8 (DATA)
//   XREF to: 02f381f4 (DATA)
// 00529cf5: CALL core_course.cpp_CCourse_free_FUN_004426c0
//   XREF to: 004426c0 (UNCONDITIONAL_CALL)
// 00529cfa: ADD EBX,0xc
//   XREF to: 02f381f4 (PARAM)
// 00529cfd: ADD ESP,0x4
// 00529d00: CMP EBX,ESI
// 00529d02: JNZ 0x00529cf4
//   XREF to: 00529cf4 (CONDITIONAL_JUMP)
// 00529d04: LEA EBX,[EDI + 0x8]
// 00529d07: PUSH EBX
// 00529d08: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00529d0d: ADD ESP,0x4
// 00529d10: PUSH 0x2f384dc
//   XREF to: 02f384dc (DATA)
// 00529d15: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00529d1a: ADD ESP,0x4
// 00529d1d: POP EDI
// 00529d1e: POP ESI
// 00529d1f: POP EBX
// 00529d20: RET
// 00529d21: PUSH 0x2f37f70
//   Label: LAB_00529d21
//   XREF to: 02f37f70 (DATA)
// 00529d26: MOV EBX,0x2f37f84
//   XREF to: 02f37f84 (DATA)
// 00529d2b: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 00529d30: ADD ESP,0x4
// 00529d33: LEA ESI,[EBX + 0x258]
//   XREF to: 02f381dc (DATA)
// 00529d39: PUSH EBX
//   Label: LAB_00529d39
//   XREF to: 02f37f84 (DATA)
//   XREF to: 02f37f98 (DATA)
// 00529d3a: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 00529d3f: ADD EBX,0x14
// 00529d42: ADD ESP,0x4
// 00529d45: CMP EBX,ESI
// 00529d47: JNZ 0x00529d39
//   XREF to: 00529d39 (CONDITIONAL_JUMP)
// 00529d49: MOV dword ptr [EDI],0x0
// 00529d4f: JMP 0x00529cec
//   XREF to: 00529cec (UNCONDITIONAL_JUMP)
