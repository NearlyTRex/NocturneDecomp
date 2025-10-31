// Name: shape_design.c_showModelPartsList_FUN_0045dbe0
// Address: 0045dbe0
// Address Range: [[0045dbe0, 0045dcbd]]
// Convention: unknown
// Signature: undefined shape_design.c_showModelPartsList_FUN_0045dbe0()
// Globals:
//   TerminatedCString s_Part_d_s_0061b43b
//   int g_WindowHeight = 0xc8
//   SModelPartName[500] g_ModelPartNames
//   int g_PartsCount
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void shape_design_c_showModelPartsList_FUN_0045dbe0(void)

{
  BADSPACEBASE *in_ESP;
  int local_20;
  int local_1c;
  int local_18;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  for (local_20 = 0; local_20 < g_PartsCount; local_20 = local_20 + g_WindowHeight / 0xb) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_1c = 0;
    for (local_18 = local_20; local_18 < g_WindowHeight / 0xb + local_20; local_18 = local_18 + 1) {
      if (local_18 < g_PartsCount) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff34,"Part %d : %s");
        engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff34,0,local_1c);
        local_1c = local_1c + 0xb;
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0045dbe0: PUSH EBX
//   Label: shape_design.c_showModelPartsList_FUN_0045dbe0
// 0045dbe1: PUSH ESI
// 0045dbe2: PUSH EDI
// 0045dbe3: PUSH EBP
// 0045dbe4: MOV EBP,ESP
// 0045dbe6: SUB ESP,0xbc
// 0045dbec: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045dbf1: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0045dbf8: JMP 0x0045dc12
//   XREF to: 0045dc12 (UNCONDITIONAL_JUMP)
// 0045dbfa: MOV ECX,0xb
//   Label: LAB_0045dbfa
// 0045dbff: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045dc04: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045dc0a: SAR EDX,0x1f
// 0045dc0d: IDIV ECX
// 0045dc0f: ADD dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0045dc12: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0045dc12
//   XREF to: Stack[-0x20] (READ)
// 0045dc15: CMP EAX,dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ)
// 0045dc1b: JGE 0x0045dcb2
//   XREF to: 0045dcb2 (CONDITIONAL_JUMP)
// 0045dc21: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045dc26: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045dc2d: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045dc30: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045dc33: JMP 0x0045dc3b
//   XREF to: 0045dc3b (UNCONDITIONAL_JUMP)
// 0045dc35: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045dc35
//   XREF to: Stack[-0x18] (READ)
// 0045dc38: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045dc3b: MOV ECX,0xb
//   Label: LAB_0045dc3b
// 0045dc40: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045dc45: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045dc4b: SAR EDX,0x1f
// 0045dc4e: IDIV ECX
// 0045dc50: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045dc53: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045dc56: JLE 0x0045dca3
//   XREF to: 0045dca3 (CONDITIONAL_JUMP)
// 0045dc58: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045dc5b: CMP EAX,dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ)
// 0045dc61: JGE 0x0045dca1
//   XREF to: 0045dca1 (CONDITIONAL_JUMP)
// 0045dc63: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 0045dc67: MOV EDX,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0045dc6c: ADD EAX,EDX
// 0045dc6e: PUSH EAX
// 0045dc6f: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045dc72: PUSH EAX
// 0045dc73: MOV EAX,0x61b43b
//   XREF to: 0061b43b (DATA)
// 0045dc78: PUSH EAX
//   XREF to: 0061b43b (DATA)
// 0045dc79: LEA EAX,[EBP + 0xffffff44]
//   XREF to: Stack[-0xcc] (DATA)
// 0045dc7f: PUSH EAX
// 0045dc80: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045dc85: ADD ESP,0x10
// 0045dc88: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045dc8b: PUSH EAX
// 0045dc8c: PUSH 0x0
// 0045dc8e: LEA EAX,[EBP + 0xffffff44]
//   XREF to: Stack[-0xcc] (DATA)
// 0045dc94: PUSH EAX
// 0045dc95: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045dc9a: ADD ESP,0xc
// 0045dc9d: ADD dword ptr [EBP + -0xc],0xb
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045dca1: JMP 0x0045dc35
//   Label: LAB_0045dca1
//   XREF to: 0045dc35 (UNCONDITIONAL_JUMP)
// 0045dca3: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0045dca3
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045dca8: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045dcad: JMP 0x0045dbfa
//   XREF to: 0045dbfa (UNCONDITIONAL_JUMP)
// 0045dcb2: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0045dcb2
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045dcb7: MOV ESP,EBP
// 0045dcb9: POP EBP
// 0045dcba: POP EDI
// 0045dcbb: POP ESI
// 0045dcbc: POP EBX
// 0045dcbd: RET
