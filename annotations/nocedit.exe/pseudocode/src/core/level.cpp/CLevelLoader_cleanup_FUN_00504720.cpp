// Name: core_level.cpp_CLevelLoader_cleanup_FUN_00504720
// Address: 00504720
// Address Range: [[00504720, 0050474f]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db316 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gLevelIndicator_Used_d_c_00631038
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   CKeyFramedModel g_LoadingMoonModel
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader *this_ptr)

{
  CConsole *this_ptr_00;
  
  this_ptr_00 = g_CConsolePtr;
  this_ptr->enabled = 0;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (this_ptr_00,"gLevelIndicator: Used %d calls\n",this_ptr->current_frame);
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_LoadingMoonModel);
  return;
}


// Assembly code:
// 00504720: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_level.cpp_CLevelLoader_cleanup_FUN_00504720
//   XREF to: Stack[0x4] (READ)
// 00504724: MOV EDX,dword ptr [EAX]
// 00504726: PUSH EDX
// 00504727: PUSH 0x631038
//   XREF to: 00631038 (DATA)
// 0050472c: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 00504732: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00504733: MOV dword ptr [EAX + 0xc],0x0
// 0050473a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0050473f: ADD ESP,0xc
// 00504742: PUSH 0x2dcd980
//   XREF to: 02dcd980 (DATA)
// 00504747: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 0050474c: ADD ESP,0x4
// 0050474f: RET
