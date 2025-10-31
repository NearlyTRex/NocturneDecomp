// Name: core_game.cpp_FUN_004e3110
// Address: 004e3110
// Address Range: [[004e3110, 004e3181]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e3110()
// Globals:
//   TerminatedCString s_s_3_2f_ms_0062d3e9
//   undefined4 DAT_0062d3fd
//   undefined4 DAT_0062d405
//   double DOUBLE_0062d40d = 1000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   CConsole g_ConsolePtr
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ca8
//   undefined4 g_CGameInstance.delta_time_float
//   int g_ProfileStartTime
// Function calls:
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004e3110(void)

{
  int iVar1;
  undefined4 in_stack_00000008;
  
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s : %3.2f ms\n",in_stack_00000008,
             ((double)(iVar1 - g_ProfileStartTime) * _DAT_0062d3fd * _DAT_0062d405 * DOUBLE_0062d40d
             ) / (double)g_CGamePtr->delta_time_float);
  return;
}


// Assembly code:
// 004e3110: SUB ESP,0xc
//   Label: core_game.cpp_FUN_004e3110
// 004e3113: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (DATA)
// 004e3118: CMP dword ptr [EAX + 0x20c],0x1
//   XREF to: 02d81ca8 (READ)
// 004e311f: JZ 0x004e3125
//   XREF to: 004e3125 (CONDITIONAL_JUMP)
// 004e3121: ADD ESP,0xc
// 004e3124: RET
// 004e3125: PUSH ESI
//   Label: LAB_004e3125
// 004e3126: PUSH EBX
// 004e3127: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e312c: MOV ECX,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e3132: SUB EAX,ECX
// 004e3134: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 004e3138: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4] (READ)
// 004e313c: FMUL double ptr [0x0062d3fd]
//   XREF to: 0062d3fd (READ)
// 004e3142: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004e3147: FMUL double ptr [0x0062d405]
//   XREF to: 0062d405 (READ)
// 004e314d: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e3153: FXCH
// 004e3155: FMUL double ptr [0x0062d40d]
//   XREF to: 0062d40d (READ)
// 004e315b: FDIVRP
// 004e315d: SUB ESP,0x8
// 004e3160: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004e3164: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004e3167: PUSH EBX
// 004e3168: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e316d: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e3173: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 004e3174: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e3179: ADD ESP,0x14
// 004e317c: POP EBX
// 004e317d: POP ESI
// 004e317e: ADD ESP,0xc
// 004e3181: RET
