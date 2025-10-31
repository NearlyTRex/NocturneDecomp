// Name: core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880
// Address: 00554880
// Address Range: [[00554880, 005548f9]]
// Convention: unknown
// Signature: undefined core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880()
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507a26 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Procedural_texture_menu_00640a38
//   TerminatedCString s_s_1_Water_00640a50
//   TerminatedCString s_Well_what_s_it_gonna_be_00640a59
// Function calls:
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005548f1) */

void core_procedur_cpp_ProceduralTextureMenuPrompt_FUN_00554880(void)

{
  uint uVar1;
  
  do {
    while( true ) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Procedural texture menu",0,0);
      engine_2d_c_drawText_FUN_00401fd0("1. Water",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("Well, what's it gonna be?",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      if ((uVar1 & 0xff) != 0x31) break;
      core_procedur_cpp_CreateProceduralWaterFrame_FUN_005542b0();
    }
  } while ((uVar1 & 0xff) != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 00554880: PUSH EBX
//   Label: core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880
// 00554881: PUSH ESI
// 00554882: PUSH EDI
// 00554883: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00554887: XOR EDI,EDI
// 00554889: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00554889
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0055488e: PUSH EDI
// 0055488f: PUSH EDI
// 00554890: PUSH 0x640a38
//   XREF to: 00640a38 (DATA)
// 00554895: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0055489a: ADD ESP,0xc
// 0055489d: PUSH 0x16
// 0055489f: PUSH EDI
// 005548a0: PUSH 0x640a50
//   XREF to: 00640a50 (DATA)
// 005548a5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005548aa: ADD ESP,0xc
// 005548ad: PUSH 0x2c
// 005548af: PUSH EDI
// 005548b0: PUSH 0x640a59
//   XREF to: 00640a59 (DATA)
// 005548b5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005548ba: ADD ESP,0xc
// 005548bd: XOR EBX,EBX
// 005548bf: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005548c4: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005548c9: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 005548ce: MOV BL,AL
// 005548d0: CMP EBX,0x31
// 005548d3: JZ 0x005548e3
//   XREF to: 005548e3 (CONDITIONAL_JUMP)
// 005548d5: CMP EBX,0x1b
// 005548d8: JNZ 0x00554889
//   XREF to: 00554889 (CONDITIONAL_JUMP)
// 005548da: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005548df: POP EDI
// 005548e0: POP ESI
// 005548e1: POP EBX
// 005548e2: RET
// 005548e3: PUSH ESI
//   Label: LAB_005548e3
// 005548e4: CALL core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0
//   XREF to: 005542b0 (UNCONDITIONAL_CALL)
// 005548e9: ADD ESP,0x4
// 005548ec: CMP EBX,0x1b
// 005548ef: JNZ 0x00554889
//   XREF to: 00554889 (CONDITIONAL_JUMP)
// 005548f1: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005548f6: POP EDI
// 005548f7: POP ESI
// 005548f8: POP EBX
// 005548f9: RET
