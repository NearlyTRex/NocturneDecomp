// Name: core_setedit.cpp_FUN_00582f30
// Address: 00582f30
// Address Range: [[00582f30, 0058316d]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00582f30()
// Globals:
//   TerminatedCString s_Show_this_help_screen_00648c4d
//   TerminatedCString s_F1_00648c63
//   TerminatedCString s_Next_box_00648c66
//   TerminatedCString s_TAB_00648c6f
//   TerminatedCString s_Previous_box_00648c73
//   TerminatedCString s_SHIFT_TAB_00648c80
//   TerminatedCString s_Insert_box_00648c8a
//   TerminatedCString s_I_00648c95
//   TerminatedCString s_Delete_box_00648c97
//   TerminatedCString s_D_00648ca2
//   TerminatedCString s_Deselect_box_00648ca4
//   TerminatedCString s_N_00648cb1
//   TerminatedCString s_Replicate_box_00648cb3
//   TerminatedCString s_R_00648cc1
//   TerminatedCString s_To_position_the_selected_00648cc3
//   TerminatedCString s_To_size_the_selected_box_00648cfb
//   int g_WindowWidth = 0x140
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void core_setedit_cpp_FUN_00582f30(void)

{
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("F1",0,0);
  engine_2d_c_drawText_FUN_00401fd0("Show this help screen",g_WindowWidth / 10,0);
  engine_2d_c_drawText_FUN_00401fd0("TAB",0,0xb);
  engine_2d_c_drawText_FUN_00401fd0("Next box",g_WindowWidth / 10,0xb);
  engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",0,0x16);
  engine_2d_c_drawText_FUN_00401fd0("Previous box",g_WindowWidth / 10,0x16);
  engine_2d_c_drawText_FUN_00401fd0("I",0,0x21);
  engine_2d_c_drawText_FUN_00401fd0("Insert box",g_WindowWidth / 10,0x21);
  engine_2d_c_drawText_FUN_00401fd0("D",0,0x2c);
  engine_2d_c_drawText_FUN_00401fd0("Delete box",g_WindowWidth / 10,0x2c);
  engine_2d_c_drawText_FUN_00401fd0("N",0,0x37);
  engine_2d_c_drawText_FUN_00401fd0("Deselect box",g_WindowWidth / 10,0x37);
  engine_2d_c_drawText_FUN_00401fd0("R",0,0x42);
  engine_2d_c_drawText_FUN_00401fd0("Replicate box",g_WindowWidth / 10,0x42);
  engine_2d_c_drawText_FUN_00401fd0("To position the selected box, use the normal slew keys.",0,99);
  engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,0x6e);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 00582f30: PUSH EBX
//   Label: core_setedit.cpp_FUN_00582f30
// 00582f31: PUSH ESI
// 00582f32: PUSH EDI
// 00582f33: PUSH EBP
// 00582f34: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00582f39: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00582f3f: IMUL EDX,ECX,0x0
// 00582f42: MOV EAX,EDX
// 00582f44: SAR EDX,0x1f
// 00582f47: SUB EAX,EDX
// 00582f49: SAR EAX,0x1
// 00582f4b: PUSH 0x0
// 00582f4d: PUSH EAX
// 00582f4e: PUSH 0x648c63
//   XREF to: 00648c63 (DATA)
// 00582f53: MOV EBX,EAX
// 00582f55: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582f5a: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00582f5f: MOV EDX,EAX
// 00582f61: MOV ECX,0xa
// 00582f66: SAR EDX,0x1f
// 00582f69: IDIV ECX
// 00582f6b: ADD ESP,0xc
// 00582f6e: PUSH 0x0
// 00582f70: ADD EAX,EBX
// 00582f72: PUSH EAX
// 00582f73: PUSH 0x648c4d
//   XREF to: 00648c4d (DATA)
// 00582f78: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582f7d: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00582f83: IMUL EDX,EBX,0x0
// 00582f86: MOV EAX,EDX
// 00582f88: SAR EDX,0x1f
// 00582f8b: SUB EAX,EDX
// 00582f8d: SAR EAX,0x1
// 00582f8f: ADD ESP,0xc
// 00582f92: PUSH 0xb
// 00582f94: PUSH EAX
// 00582f95: PUSH 0x648c6f
//   XREF to: 00648c6f (DATA)
// 00582f9a: MOV EBX,EAX
// 00582f9c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582fa1: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00582fa6: MOV EDX,EAX
// 00582fa8: MOV ECX,0xa
// 00582fad: SAR EDX,0x1f
// 00582fb0: IDIV ECX
// 00582fb2: ADD ESP,0xc
// 00582fb5: PUSH 0xb
// 00582fb7: ADD EAX,EBX
// 00582fb9: PUSH EAX
// 00582fba: PUSH 0x648c66
//   XREF to: 00648c66 (DATA)
// 00582fbf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582fc4: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00582fca: IMUL EDX,ESI,0x0
// 00582fcd: MOV EAX,EDX
// 00582fcf: SAR EDX,0x1f
// 00582fd2: SUB EAX,EDX
// 00582fd4: SAR EAX,0x1
// 00582fd6: ADD ESP,0xc
// 00582fd9: PUSH 0x16
// 00582fdb: PUSH EAX
// 00582fdc: PUSH 0x648c80
//   XREF to: 00648c80 (DATA)
// 00582fe1: MOV EBX,EAX
// 00582fe3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582fe8: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00582fed: MOV EDX,EAX
// 00582fef: MOV ECX,0xa
// 00582ff4: SAR EDX,0x1f
// 00582ff7: IDIV ECX
// 00582ff9: ADD ESP,0xc
// 00582ffc: PUSH 0x16
// 00582ffe: ADD EAX,EBX
// 00583000: PUSH EAX
// 00583001: PUSH 0x648c73
//   XREF to: 00648c73 (DATA)
// 00583006: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058300b: ADD ESP,0xc
// 0058300e: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583014: IMUL EDX,EDI,0x0
// 00583017: MOV EAX,EDX
// 00583019: SAR EDX,0x1f
// 0058301c: SUB EAX,EDX
// 0058301e: SAR EAX,0x1
// 00583020: PUSH 0x21
// 00583022: PUSH EAX
// 00583023: PUSH 0x648c95
//   XREF to: 00648c95 (DATA)
// 00583028: MOV EBX,EAX
// 0058302a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058302f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583034: MOV EDX,EAX
// 00583036: MOV ECX,0xa
// 0058303b: SAR EDX,0x1f
// 0058303e: IDIV ECX
// 00583040: ADD ESP,0xc
// 00583043: PUSH 0x21
// 00583045: ADD EAX,EBX
// 00583047: PUSH EAX
// 00583048: PUSH 0x648c8a
//   XREF to: 00648c8a (DATA)
// 0058304d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583052: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583058: IMUL EDX,EBP,0x0
// 0058305b: MOV EAX,EDX
// 0058305d: SAR EDX,0x1f
// 00583060: SUB EAX,EDX
// 00583062: SAR EAX,0x1
// 00583064: ADD ESP,0xc
// 00583067: PUSH 0x2c
// 00583069: PUSH EAX
// 0058306a: PUSH 0x648ca2
//   XREF to: 00648ca2 (DATA)
// 0058306f: MOV EBX,EAX
// 00583071: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583076: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0058307b: MOV EDX,EAX
// 0058307d: MOV ECX,0xa
// 00583082: SAR EDX,0x1f
// 00583085: IDIV ECX
// 00583087: ADD ESP,0xc
// 0058308a: PUSH 0x2c
// 0058308c: ADD EAX,EBX
// 0058308e: PUSH EAX
// 0058308f: PUSH 0x648c97
//   XREF to: 00648c97 (DATA)
// 00583094: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583099: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0058309e: IMUL EDX,EAX,0x0
// 005830a1: MOV EAX,EDX
// 005830a3: SAR EDX,0x1f
// 005830a6: SUB EAX,EDX
// 005830a8: SAR EAX,0x1
// 005830aa: ADD ESP,0xc
// 005830ad: PUSH 0x37
// 005830af: PUSH EAX
// 005830b0: PUSH 0x648cb1
//   XREF to: 00648cb1 (DATA)
// 005830b5: MOV EBX,EAX
// 005830b7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005830bc: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005830c1: MOV EDX,EAX
// 005830c3: MOV ECX,0xa
// 005830c8: SAR EDX,0x1f
// 005830cb: IDIV ECX
// 005830cd: ADD ESP,0xc
// 005830d0: PUSH 0x37
// 005830d2: ADD EAX,EBX
// 005830d4: PUSH EAX
// 005830d5: PUSH 0x648ca4
//   XREF to: 00648ca4 (DATA)
// 005830da: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005830df: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005830e5: IMUL EDX,ECX,0x0
// 005830e8: MOV EAX,EDX
// 005830ea: SAR EDX,0x1f
// 005830ed: SUB EAX,EDX
// 005830ef: SAR EAX,0x1
// 005830f1: ADD ESP,0xc
// 005830f4: PUSH 0x42
// 005830f6: PUSH EAX
// 005830f7: PUSH 0x648cc1
//   XREF to: 00648cc1 (DATA)
// 005830fc: MOV EBX,EAX
// 005830fe: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583103: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583108: MOV EDX,EAX
// 0058310a: MOV ECX,0xa
// 0058310f: SAR EDX,0x1f
// 00583112: IDIV ECX
// 00583114: ADD ESP,0xc
// 00583117: PUSH 0x42
// 00583119: ADD EAX,EBX
// 0058311b: PUSH EAX
// 0058311c: PUSH 0x648cb3
//   XREF to: 00648cb3 (DATA)
// 00583121: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583126: ADD ESP,0xc
// 00583129: PUSH 0x63
// 0058312b: PUSH 0x0
// 0058312d: PUSH 0x648cc3
//   XREF to: 00648cc3 (DATA)
// 00583132: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583137: ADD ESP,0xc
// 0058313a: PUSH 0x6e
// 0058313c: PUSH 0x0
// 0058313e: PUSH 0x648cfb
//   XREF to: 00648cfb (DATA)
// 00583143: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583148: ADD ESP,0xc
// 0058314b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00583150: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00583155: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058315b: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 0058315c: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 00583161: ADD ESP,0x4
// 00583164: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00583169: POP EBP
// 0058316a: POP EDI
// 0058316b: POP ESI
// 0058316c: POP EBX
// 0058316d: RET
