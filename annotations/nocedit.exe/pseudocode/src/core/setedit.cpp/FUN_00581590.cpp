// Name: core_setedit.cpp_FUN_00581590
// Address: 00581590
// Address Range: [[00581590, 005817cd]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581590()
// Globals:
//   TerminatedCString s_Show_this_help_screen_00648a3a
//   TerminatedCString s_F1_00648a50
//   TerminatedCString s_Set_default_room_size_fo_00648a53
//   TerminatedCString s_S_00648a71
//   TerminatedCString s_Next_room_00648a73
//   TerminatedCString s_TAB_00648a7d
//   TerminatedCString s_Previous_room_00648a81
//   TerminatedCString s_SHIFT_TAB_00648a8f
//   TerminatedCString s_Insert_room_00648a99
//   TerminatedCString s_I_00648aa5
//   TerminatedCString s_Delete_room_00648aa7
//   TerminatedCString s_D_00648ab3
//   TerminatedCString s_Deselect_room_00648ab5
//   TerminatedCString s_N_00648ac3
//   TerminatedCString s_To_position_the_selected_00648ac5
//   TerminatedCString s_To_size_the_selected_box_00648afd
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

void core_setedit_cpp_FUN_00581590(void)

{
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("F1",0,0);
  engine_2d_c_drawText_FUN_00401fd0("Show this help screen",g_WindowWidth / 10,0);
  engine_2d_c_drawText_FUN_00401fd0("S",0,0xb);
  engine_2d_c_drawText_FUN_00401fd0("Set default room size for set",g_WindowWidth / 10,0xb);
  engine_2d_c_drawText_FUN_00401fd0("TAB",0,0x16);
  engine_2d_c_drawText_FUN_00401fd0("Next room",g_WindowWidth / 10,0x16);
  engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",0,0x21);
  engine_2d_c_drawText_FUN_00401fd0("Previous room",g_WindowWidth / 10,0x21);
  engine_2d_c_drawText_FUN_00401fd0("I",0,0x2c);
  engine_2d_c_drawText_FUN_00401fd0("Insert room",g_WindowWidth / 10,0x2c);
  engine_2d_c_drawText_FUN_00401fd0("D",0,0x37);
  engine_2d_c_drawText_FUN_00401fd0("Delete room",g_WindowWidth / 10,0x37);
  engine_2d_c_drawText_FUN_00401fd0("N",0,0x42);
  engine_2d_c_drawText_FUN_00401fd0("Deselect room",g_WindowWidth / 10,0x42);
  engine_2d_c_drawText_FUN_00401fd0("To position the selected box, use the normal slew keys.",0,0x58);
  engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,99);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 00581590: PUSH EBX
//   Label: core_setedit.cpp_FUN_00581590
// 00581591: PUSH ESI
// 00581592: PUSH EDI
// 00581593: PUSH EBP
// 00581594: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00581599: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0058159f: IMUL EDX,ECX,0x0
// 005815a2: MOV EAX,EDX
// 005815a4: SAR EDX,0x1f
// 005815a7: SUB EAX,EDX
// 005815a9: SAR EAX,0x1
// 005815ab: PUSH 0x0
// 005815ad: PUSH EAX
// 005815ae: PUSH 0x648a50
//   XREF to: 00648a50 (DATA)
// 005815b3: MOV EBX,EAX
// 005815b5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005815ba: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005815bf: MOV EDX,EAX
// 005815c1: MOV ECX,0xa
// 005815c6: SAR EDX,0x1f
// 005815c9: IDIV ECX
// 005815cb: ADD ESP,0xc
// 005815ce: PUSH 0x0
// 005815d0: ADD EAX,EBX
// 005815d2: PUSH EAX
// 005815d3: PUSH 0x648a3a
//   XREF to: 00648a3a (DATA)
// 005815d8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005815dd: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005815e3: IMUL EDX,EBX,0x0
// 005815e6: MOV EAX,EDX
// 005815e8: SAR EDX,0x1f
// 005815eb: SUB EAX,EDX
// 005815ed: SAR EAX,0x1
// 005815ef: ADD ESP,0xc
// 005815f2: PUSH 0xb
// 005815f4: PUSH EAX
// 005815f5: PUSH 0x648a71
//   XREF to: 00648a71 (DATA)
// 005815fa: MOV EBX,EAX
// 005815fc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00581601: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00581606: MOV EDX,EAX
// 00581608: MOV ECX,0xa
// 0058160d: SAR EDX,0x1f
// 00581610: IDIV ECX
// 00581612: ADD ESP,0xc
// 00581615: PUSH 0xb
// 00581617: ADD EAX,EBX
// 00581619: PUSH EAX
// 0058161a: PUSH 0x648a53
//   XREF to: 00648a53 (DATA)
// 0058161f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00581624: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0058162a: IMUL EDX,ESI,0x0
// 0058162d: MOV EAX,EDX
// 0058162f: SAR EDX,0x1f
// 00581632: SUB EAX,EDX
// 00581634: SAR EAX,0x1
// 00581636: ADD ESP,0xc
// 00581639: PUSH 0x16
// 0058163b: PUSH EAX
// 0058163c: PUSH 0x648a7d
//   XREF to: 00648a7d (DATA)
// 00581641: MOV EBX,EAX
// 00581643: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00581648: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0058164d: MOV EDX,EAX
// 0058164f: MOV ECX,0xa
// 00581654: SAR EDX,0x1f
// 00581657: IDIV ECX
// 00581659: ADD ESP,0xc
// 0058165c: PUSH 0x16
// 0058165e: ADD EAX,EBX
// 00581660: PUSH EAX
// 00581661: PUSH 0x648a73
//   XREF to: 00648a73 (DATA)
// 00581666: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058166b: ADD ESP,0xc
// 0058166e: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00581674: IMUL EDX,EDI,0x0
// 00581677: MOV EAX,EDX
// 00581679: SAR EDX,0x1f
// 0058167c: SUB EAX,EDX
// 0058167e: SAR EAX,0x1
// 00581680: PUSH 0x21
// 00581682: PUSH EAX
// 00581683: PUSH 0x648a8f
//   XREF to: 00648a8f (DATA)
// 00581688: MOV EBX,EAX
// 0058168a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058168f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00581694: MOV EDX,EAX
// 00581696: MOV ECX,0xa
// 0058169b: SAR EDX,0x1f
// 0058169e: IDIV ECX
// 005816a0: ADD ESP,0xc
// 005816a3: PUSH 0x21
// 005816a5: ADD EAX,EBX
// 005816a7: PUSH EAX
// 005816a8: PUSH 0x648a81
//   XREF to: 00648a81 (DATA)
// 005816ad: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005816b2: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005816b8: IMUL EDX,EBP,0x0
// 005816bb: MOV EAX,EDX
// 005816bd: SAR EDX,0x1f
// 005816c0: SUB EAX,EDX
// 005816c2: SAR EAX,0x1
// 005816c4: ADD ESP,0xc
// 005816c7: PUSH 0x2c
// 005816c9: PUSH EAX
// 005816ca: PUSH 0x648aa5
//   XREF to: 00648aa5 (DATA)
// 005816cf: MOV EBX,EAX
// 005816d1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005816d6: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005816db: MOV EDX,EAX
// 005816dd: MOV ECX,0xa
// 005816e2: SAR EDX,0x1f
// 005816e5: IDIV ECX
// 005816e7: ADD ESP,0xc
// 005816ea: PUSH 0x2c
// 005816ec: ADD EAX,EBX
// 005816ee: PUSH EAX
// 005816ef: PUSH 0x648a99
//   XREF to: 00648a99 (DATA)
// 005816f4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005816f9: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005816fe: IMUL EDX,EAX,0x0
// 00581701: MOV EAX,EDX
// 00581703: SAR EDX,0x1f
// 00581706: SUB EAX,EDX
// 00581708: SAR EAX,0x1
// 0058170a: ADD ESP,0xc
// 0058170d: PUSH 0x37
// 0058170f: PUSH EAX
// 00581710: PUSH 0x648ab3
//   XREF to: 00648ab3 (DATA)
// 00581715: MOV EBX,EAX
// 00581717: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058171c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00581721: MOV EDX,EAX
// 00581723: MOV ECX,0xa
// 00581728: SAR EDX,0x1f
// 0058172b: IDIV ECX
// 0058172d: ADD ESP,0xc
// 00581730: PUSH 0x37
// 00581732: ADD EAX,EBX
// 00581734: PUSH EAX
// 00581735: PUSH 0x648aa7
//   XREF to: 00648aa7 (DATA)
// 0058173a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058173f: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00581745: IMUL EDX,ECX,0x0
// 00581748: MOV EAX,EDX
// 0058174a: SAR EDX,0x1f
// 0058174d: SUB EAX,EDX
// 0058174f: SAR EAX,0x1
// 00581751: ADD ESP,0xc
// 00581754: PUSH 0x42
// 00581756: PUSH EAX
// 00581757: PUSH 0x648ac3
//   XREF to: 00648ac3 (DATA)
// 0058175c: MOV EBX,EAX
// 0058175e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00581763: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00581768: MOV EDX,EAX
// 0058176a: MOV ECX,0xa
// 0058176f: SAR EDX,0x1f
// 00581772: IDIV ECX
// 00581774: ADD ESP,0xc
// 00581777: PUSH 0x42
// 00581779: ADD EAX,EBX
// 0058177b: PUSH EAX
// 0058177c: PUSH 0x648ab5
//   XREF to: 00648ab5 (DATA)
// 00581781: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00581786: ADD ESP,0xc
// 00581789: PUSH 0x58
// 0058178b: PUSH 0x0
// 0058178d: PUSH 0x648ac5
//   XREF to: 00648ac5 (DATA)
// 00581792: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00581797: ADD ESP,0xc
// 0058179a: PUSH 0x63
// 0058179c: PUSH 0x0
// 0058179e: PUSH 0x648afd
//   XREF to: 00648afd (DATA)
// 005817a3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005817a8: ADD ESP,0xc
// 005817ab: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005817b0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005817b5: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005817bb: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 005817bc: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 005817c1: ADD ESP,0x4
// 005817c4: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005817c9: POP EBP
// 005817ca: POP EDI
// 005817cb: POP ESI
// 005817cc: POP EBX
// 005817cd: RET
