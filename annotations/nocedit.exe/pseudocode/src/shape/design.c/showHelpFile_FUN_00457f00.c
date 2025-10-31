// Name: shape_design.c_showHelpFile_FUN_00457f00
// Address: 00457f00
// Address Range: [[00457f00, 00457fc4]]
// Convention: __cdecl
// Signature: void shape_design.c_showHelpFile_FUN_00457f00(char * help_filename)
// Cross-references:
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045ca6e [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f66a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_0061a868
//   TerminatedCString s_help_0061a86b
//   TerminatedCString s_shape_design_c_0061a870
//   int g_WindowHeight = 0xc8
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_showHelpFile_FUN_00457f00(char *help_filename)

{
  FILE *stream;
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  int local_14;
  
  local_14 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  stream = engine_dosio_c_getFile_FUN_00481a50("help",help_filename,"rt");
  if (stream != (FILE *)0x0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    while (pcVar1 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff98,0x4f,stream),
          pcVar1 != (char *)0x0) {
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff98,0,local_14);
      local_14 = local_14 + 0xb;
      if (g_WindowHeight + -0xb < local_14) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        local_14 = 0;
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\shape\\design.c",0x186);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 00457f00: PUSH EBX
//   Label: shape_design.c_showHelpFile_FUN_00457f00
// 00457f01: PUSH ESI
// 00457f02: PUSH EDI
// 00457f03: PUSH EBP
// 00457f04: MOV EBP,ESP
// 00457f06: SUB ESP,0x58
// 00457f0c: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00457f13: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00457f18: MOV EAX,0x61a868
//   XREF to: 0061a868 (DATA)
// 00457f1d: PUSH EAX
//   XREF to: 0061a868 (DATA)
// 00457f1e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457f21: PUSH EAX
// 00457f22: MOV EAX,0x61a86b
//   XREF to: 0061a86b (PARAM)
// 00457f27: PUSH EAX
//   XREF to: 0061a86b (DATA)
// 00457f28: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00457f2d: ADD ESP,0xc
// 00457f30: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00457f33: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 00457f37: JZ 0x00457fb9
//   XREF to: 00457fb9 (CONDITIONAL_JUMP)
// 00457f3d: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00457f42: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00457f42
//   XREF to: Stack[-0x18] (READ)
// 00457f45: PUSH EAX
// 00457f46: PUSH 0x4f
// 00457f48: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 00457f4b: PUSH EAX
// 00457f4c: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00457f51: ADD ESP,0xc
// 00457f54: TEST EAX,EAX
// 00457f56: JZ 0x00457f98
//   XREF to: 00457f98 (CONDITIONAL_JUMP)
// 00457f58: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00457f5b: PUSH EAX
// 00457f5c: PUSH 0x0
// 00457f5e: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 00457f61: PUSH EAX
// 00457f62: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00457f67: ADD ESP,0xc
// 00457f6a: ADD dword ptr [EBP + -0x4],0xb
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00457f6e: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00457f73: SUB EAX,0xb
// 00457f76: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00457f79: JGE 0x00457f96
//   XREF to: 00457f96 (CONDITIONAL_JUMP)
// 00457f7b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00457f80: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00457f85: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00457f8a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00457f8f: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00457f96: JMP 0x00457f42
//   Label: LAB_00457f96
//   XREF to: 00457f42 (UNCONDITIONAL_JUMP)
// 00457f98: PUSH 0x186
//   Label: LAB_00457f98
// 00457f9d: MOV EAX,0x61a870
//   XREF to: 0061a870 (DATA)
// 00457fa2: PUSH EAX
//   XREF to: 0061a870 (DATA)
// 00457fa3: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00457fa6: PUSH EAX
// 00457fa7: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00457fac: ADD ESP,0xc
// 00457faf: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00457fb4: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00457fb9: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_00457fb9
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00457fbe: MOV ESP,EBP
// 00457fc0: POP EBP
// 00457fc1: POP EDI
// 00457fc2: POP ESI
// 00457fc3: POP EBX
// 00457fc4: RET
