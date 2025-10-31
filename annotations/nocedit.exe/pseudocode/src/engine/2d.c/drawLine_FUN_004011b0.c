// Name: engine_2d.c_drawLine_FUN_004011b0
// Address: 004011b0
// Address Range: [[004011b0, 00401283]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
// Cross-references:
//   cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0 (004335f0) at 004336b5 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043da26 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50 (004d7e50) at 004d7e62 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536cd0 (00536cd0) at 00536d81 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536989 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c70a [UNCONDITIONAL_CALL]
//   engine_2d.c_clipAndDrawLine_FUN_00402ca0 (00402ca0) at 00402ec5 [UNCONDITIONAL_CALL]
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 (00407d70) at 00407fde [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_render_FUN_00441b00 (00441b00) at 00441c20 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d091d [UNCONDITIONAL_CALL]
//   shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0 (0045bbc0) at 0045bca4 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c8e3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049dafd [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a4e77 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051dde5 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine_FUN_004011b0(int x1,int y1,int x2,int y2)

{
  int unaff_EBP;
  int iVar1;
  int x;
  int iVar2;
  int local_20;
  int local_18;
  int local_14;
  
  local_20 = 1;
  x = x1;
  local_14 = y2;
  if (y2 < y1) {
    x = x2;
    x2 = x1;
    local_14 = y1;
    y1 = y2;
  }
  local_14 = local_14 - y1;
  iVar1 = x2 - x;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
    local_20 = -1;
  }
  if (local_14 < iVar1) {
    iVar2 = local_14 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        engine_2d_c_plotPixel_FUN_00401140(x,y1);
        if (0 < iVar2) {
          y1 = y1 + 1;
          iVar2 = iVar2 - iVar1;
        }
        local_14 = local_14 + 1;
        x = x + local_20;
        iVar2 = iVar2 + unaff_EBP;
      } while (local_14 <= iVar1);
    }
  }
  else {
    iVar2 = iVar1 * 2 - local_14;
    if (-1 < local_14) {
      do {
        engine_2d_c_plotPixel_FUN_00401140(x,y1);
        if (0 < iVar2) {
          iVar2 = iVar2 - unaff_EBP;
          x = x + local_20;
        }
        y1 = y1 + 1;
        local_18 = local_18 + 1;
        iVar2 = iVar2 + iVar1;
      } while (local_18 <= unaff_EBP);
    }
  }
  return;
}


// Assembly code:
// 004011b0: PUSH EBX
//   Label: engine_2d.c_drawLine_FUN_004011b0
// 004011b1: PUSH ESI
// 004011b2: PUSH EDI
// 004011b3: PUSH EBP
// 004011b4: SUB ESP,0x10
// 004011b7: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004011bb: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004011bf: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 004011c3: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 004011c7: MOV dword ptr [ESP],0x1
//   XREF to: Stack[-0x20] (DATA)
// 004011ce: CMP EDI,ESI
// 004011d0: JLE 0x004011de
//   XREF to: 004011de (CONDITIONAL_JUMP)
// 004011d2: MOV EBX,EAX
// 004011d4: MOV EAX,EBP
// 004011d6: MOV EBP,EBX
// 004011d8: MOV EBX,EDI
// 004011da: MOV EDI,ESI
// 004011dc: MOV ESI,EBX
// 004011de: SUB ESI,EDI
//   Label: LAB_004011de
// 004011e0: SUB EBP,EAX
// 004011e2: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004011e6: TEST EBP,EBP
// 004011e8: JL 0x00401235
//   XREF to: 00401235 (CONDITIONAL_JUMP)
// 004011ea: MOV EBX,EDI
//   Label: LAB_004011ea
// 004011ec: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004011f0: MOV ESI,EAX
// 004011f2: CMP EBP,EDI
// 004011f4: JLE 0x00401241
//   XREF to: 00401241 (CONDITIONAL_JUMP)
// 004011f6: XOR EAX,EAX
// 004011f8: ADD EDI,EDI
// 004011fa: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004011fe: SUB EDI,EBP
// 00401200: TEST EBP,EBP
// 00401202: JL 0x0040122d
//   XREF to: 0040122d (CONDITIONAL_JUMP)
// 00401204: PUSH EBX
//   Label: LAB_00401204
// 00401205: PUSH ESI
// 00401206: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0040120b: ADD ESP,0x8
// 0040120e: TEST EDI,EDI
// 00401210: JLE 0x00401215
//   XREF to: 00401215 (CONDITIONAL_JUMP)
// 00401212: INC EBX
// 00401213: SUB EDI,EBP
// 00401215: MOV ECX,dword ptr [ESP]
//   Label: LAB_00401215
//   XREF to: Stack[-0x20] (DATA)
// 00401218: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0040121c: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00401220: INC EDX
// 00401221: ADD ESI,ECX
// 00401223: ADD EDI,EAX
// 00401225: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00401229: CMP EBP,EDX
// 0040122b: JGE 0x00401204
//   XREF to: 00401204 (CONDITIONAL_JUMP)
// 0040122d: ADD ESP,0x10
//   Label: LAB_0040122d
// 00401230: POP EBP
// 00401231: POP EDI
// 00401232: POP ESI
// 00401233: POP EBX
// 00401234: RET
// 00401235: MOV ECX,0xffffffff
//   Label: LAB_00401235
// 0040123a: NEG EBP
// 0040123c: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 0040123f: JMP 0x004011ea
//   XREF to: 004011ea (UNCONDITIONAL_JUMP)
// 00401241: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00401241
//   XREF to: Stack[-0x14] (READ)
// 00401245: XOR EDX,EDX
// 00401247: LEA EDI,[EBP + EBP*0x1]
// 0040124b: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0040124f: SUB EDI,EAX
// 00401251: TEST EAX,EAX
// 00401253: JL 0x0040122d
//   XREF to: 0040122d (CONDITIONAL_JUMP)
// 00401255: PUSH EBX
//   Label: LAB_00401255
// 00401256: PUSH ESI
// 00401257: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0040125c: ADD ESP,0x8
// 0040125f: TEST EDI,EDI
// 00401261: JLE 0x0040126e
//   XREF to: 0040126e (CONDITIONAL_JUMP)
// 00401263: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00401267: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040126a: SUB EDI,EDX
// 0040126c: ADD ESI,EAX
// 0040126e: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_0040126e
//   XREF to: Stack[-0x1c] (READ)
// 00401272: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00401276: INC EBX
// 00401277: INC EDX
// 00401278: ADD EDI,EBP
// 0040127a: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0040127e: CMP EDX,ECX
// 00401280: JG 0x0040122d
//   XREF to: 0040122d (CONDITIONAL_JUMP)
// 00401282: JMP 0x00401255
//   XREF to: 00401255 (UNCONDITIONAL_JUMP)
