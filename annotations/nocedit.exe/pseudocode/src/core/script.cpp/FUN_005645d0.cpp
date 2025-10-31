// Name: core_script.cpp_FUN_005645d0
// Address: 005645d0
// Address Range: [[005645d0, 005647cd]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005645d0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053994d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Ln_d_Col_d_00643d74
//   undefined4 DAT_0068105c
//   int g_ActiveRenderColor
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fce0
//   undefined4 DAT_0310fd0c
//   undefined4 DAT_0310fd40+1
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined1 DAT_0310fdc0
//   undefined4 DAT_031141d0
//   undefined4 DAT_031141d4
//   undefined4 DAT_031141d8
//   undefined4 DAT_031141dc
//   undefined4 DAT_031141e0
//   undefined4 DAT_031141e4
//   undefined4 DAT_031141e8
//   undefined4 DAT_031141ec
//   undefined4 DAT_031141f0
//   undefined4 DAT_031141f4
//   undefined4 DAT_031141f8
//   undefined4 DAT_03114200
//   undefined4 DAT_03114204
//   undefined4 DAT_03114208
// Function calls:
//   core_script.cpp_FUN_00564500
//   core_script.cpp_FUN_005664d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawVLine_FUN_00402ff0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
//   engine_matrix.c_popViewport_FUN_0050e480
//   engine_matrix.c_pushViewport_FUN_0050e320
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005645d0(undefined4 param_1) */

void core_script_cpp_FUN_005645d0(void)

{
  int iVar1;
  int x1;
  BADSPACEBASE *in_ESP;
  int y;
  CDemonRenderer *in_stack_fffffe18;
  CDemonRenderer *in_stack_fffffe28;
  
  core_script_cpp_FUN_00564500();
  engine_matrix_c_pushViewport_FUN_0050e320
            (DAT_031141d0,DAT_031141d4,(DAT_031141d8 - DAT_031141d0) + -1,
             (DAT_031141dc - DAT_031141d4) + -1);
  engine_2d_c_fillRectColor_FUN_00403170
            (DAT_031141d0,DAT_031141d4,DAT_031141d8 + -1,DAT_031141dc + -1,0);
  g_ActiveRenderColor = 7;
  engine_2d_c_drawHLine_FUN_00402ee0(DAT_031141d0,DAT_031141d4,DAT_031141d8 + -1);
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_0310fd0c);
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_0310fcd8);
  engine_matrix_c_pushViewport_FUN_0050e320
            (DAT_031141e0,DAT_031141e4,(DAT_031141e8 - DAT_031141e0) + -1,
             (DAT_031141ec - DAT_031141e4) + -1);
  for (iVar1 = DAT_0310fcd8; iVar1 <= DAT_0310fcd8 + DAT_0310fce0; iVar1 = iVar1 + 1) {
    core_script_cpp_FUN_005664d0();
  }
  if ((DAT_0310fd40._1_1_ & 0x40) == 0) {
    g_ActiveRenderColor = 0xff;
    iVar1 = (DAT_0310fd48 - DAT_0310fcd8) * DAT_03114208 + DAT_031141e4;
    x1 = DAT_03114204 * (DAT_0310fd44 - DAT_0310fd0c) + DAT_031141e0;
    y = iVar1 + DAT_03114208 + -1;
    if (DAT_0068105c == 0) {
      engine_2d_c_drawHLine_FUN_00402ee0(x1,y,DAT_03114204 + x1 + -1);
    }
    else {
      engine_2d_c_drawVLine_FUN_00402ff0(x1,iVar1,y);
    }
  }
  engine_matrix_c_popViewport_FUN_0050e480(in_stack_fffffe18);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffe1c,"Ln %d, Col %d",DAT_0310fd48 + 1,DAT_0310fd44 + 1);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
            (DAT_03114200,DAT_031141f8,DAT_031141f4,0xff,-1,&stack0xfffffe20);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
            (DAT_03114200,DAT_031141f0,DAT_031141f4,0xff,-1,0x310fdc0);
  engine_matrix_c_popViewport_FUN_0050e480(in_stack_fffffe28);
  return;
}


// Assembly code:
// 005645d0: PUSH EBX
//   Label: core_script.cpp_FUN_005645d0
// 005645d1: PUSH ESI
// 005645d2: PUSH EDI
// 005645d3: PUSH EBP
// 005645d4: SUB ESP,0x1f4
// 005645da: MOV ESI,dword ptr [ESP + 0x208]
//   XREF to: Stack[0x4] (READ)
// 005645e1: CALL core_script.cpp_FUN_00564500
//   XREF to: 00564500 (UNCONDITIONAL_CALL)
// 005645e6: MOV EAX,[0x031141dc]
//   XREF to: 031141dc (READ)
// 005645eb: MOV EDX,dword ptr [0x031141d4]
//   XREF to: 031141d4 (READ)
// 005645f1: SUB EAX,EDX
// 005645f3: DEC EAX
// 005645f4: MOV ECX,dword ptr [0x031141d0]
//   XREF to: 031141d0 (READ)
// 005645fa: PUSH EAX
// 005645fb: MOV EAX,[0x031141d8]
//   XREF to: 031141d8 (READ)
// 00564600: SUB EAX,ECX
// 00564602: DEC EAX
// 00564603: PUSH EAX
// 00564604: PUSH EDX
// 00564605: PUSH ECX
// 00564606: CALL engine_matrix.c_pushViewport_FUN_0050e320
//   XREF to: 0050e320 (UNCONDITIONAL_CALL)
// 0056460b: ADD ESP,0x10
// 0056460e: MOV EAX,[0x031141dc]
//   XREF to: 031141dc (READ)
// 00564613: PUSH 0x0
// 00564615: DEC EAX
// 00564616: PUSH EAX
// 00564617: MOV EAX,[0x031141d8]
//   XREF to: 031141d8 (READ)
// 0056461c: DEC EAX
// 0056461d: PUSH EAX
// 0056461e: MOV EBP,dword ptr [0x031141d4]
//   XREF to: 031141d4 (READ)
// 00564624: PUSH EBP
// 00564625: MOV EAX,[0x031141d0]
//   XREF to: 031141d0 (READ)
// 0056462a: PUSH EAX
// 0056462b: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00564630: MOV EAX,[0x031141d8]
//   XREF to: 031141d8 (READ)
// 00564635: ADD ESP,0x14
// 00564638: DEC EAX
// 00564639: PUSH EAX
// 0056463a: MOV ECX,dword ptr [0x031141d4]
//   XREF to: 031141d4 (READ)
// 00564640: PUSH ECX
// 00564641: MOV EBX,dword ptr [0x031141d0]
//   XREF to: 031141d0 (READ)
// 00564647: MOV EDX,0x7
// 0056464c: PUSH EBX
// 0056464d: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 00564653: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 00564658: ADD ESP,0xc
// 0056465b: PUSH 0x310fd0c
//   XREF to: 0310fd0c (DATA)
// 00564660: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 00564665: ADD ESP,0x4
// 00564668: PUSH 0x310fcd8
//   XREF to: 0310fcd8 (DATA)
// 0056466d: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 00564672: MOV EAX,[0x031141ec]
//   XREF to: 031141ec (READ)
// 00564677: MOV EDI,dword ptr [0x031141e4]
//   XREF to: 031141e4 (READ)
// 0056467d: SUB EAX,EDI
// 0056467f: ADD ESP,0x4
// 00564682: DEC EAX
// 00564683: MOV EBP,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 00564689: PUSH EAX
// 0056468a: MOV EAX,[0x031141e8]
//   XREF to: 031141e8 (READ)
// 0056468f: SUB EAX,EBP
// 00564691: DEC EAX
// 00564692: PUSH EAX
// 00564693: PUSH EDI
// 00564694: PUSH EBP
// 00564695: CALL engine_matrix.c_pushViewport_FUN_0050e320
//   XREF to: 0050e320 (UNCONDITIONAL_CALL)
// 0056469a: MOV EBX,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 005646a0: ADD ESP,0x10
// 005646a3: MOV ECX,dword ptr [0x0310fce0]
//   Label: LAB_005646a3
//   XREF to: 0310fce0 (READ)
// 005646a9: MOV EAX,[0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 005646ae: ADD EAX,ECX
// 005646b0: CMP EBX,EAX
// 005646b2: JLE 0x005647a9
//   XREF to: 005647a9 (CONDITIONAL_JUMP)
// 005646b8: TEST byte ptr [0x0310fd41],0x40
//   XREF to: 0310fd41 (READ)
// 005646bf: JNZ 0x00564725
//   XREF to: 00564725 (CONDITIONAL_JUMP)
// 005646c1: MOV EBX,dword ptr [0x0310fd0c]
//   XREF to: 0310fd0c (READ)
// 005646c7: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005646cc: SUB EAX,EBX
// 005646ce: MOV EBX,dword ptr [0x03114204]
//   XREF to: 03114204 (READ)
// 005646d4: IMUL EBX,EAX
// 005646d7: MOV EDI,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 005646dd: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005646e2: MOV EBP,dword ptr [0x03114208]
//   XREF to: 03114208 (READ)
// 005646e8: SUB EAX,EDI
// 005646ea: IMUL EAX,EBP
// 005646ed: MOV ECX,0xff
// 005646f2: MOV ESI,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 005646f8: MOV EDX,dword ptr [0x031141e4]
//   XREF to: 031141e4 (READ)
// 005646fe: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 00564704: ADD EAX,EDX
// 00564706: ADD EBX,ESI
// 00564708: LEA ESI,[EAX + EBP*0x1]
// 0056470b: MOV EDI,dword ptr [0x0068105c]
//   XREF to: 0068105c (READ)
// 00564711: DEC ESI
// 00564712: TEST EDI,EDI
// 00564714: JZ 0x005647b9
//   XREF to: 005647b9 (CONDITIONAL_JUMP)
// 0056471a: PUSH ESI
// 0056471b: PUSH EAX
// 0056471c: PUSH EBX
// 0056471d: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 00564722: ADD ESP,0xc
//   Label: LAB_00564722
// 00564725: CALL engine_matrix.c_popViewport_FUN_0050e480
//   Label: LAB_00564725
//   XREF to: 0050e480 (UNCONDITIONAL_CALL)
// 0056472a: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 0056472f: INC EAX
// 00564730: PUSH EAX
// 00564731: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564736: INC EAX
// 00564737: PUSH EAX
// 00564738: PUSH 0x643d74
//   XREF to: 00643d74 (DATA)
// 0056473d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x204] (DATA)
// 00564741: PUSH EAX
// 00564742: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00564747: ADD ESP,0x10
// 0056474a: MOV EAX,ESP
// 0056474c: PUSH EAX
// 0056474d: PUSH -0x1
// 0056474f: PUSH 0xff
// 00564754: MOV EBP,dword ptr [0x031141f4]
//   XREF to: 031141f4 (READ)
// 0056475a: PUSH EBP
// 0056475b: MOV EAX,[0x031141f8]
//   XREF to: 031141f8 (READ)
// 00564760: PUSH EAX
// 00564761: MOV EDX,dword ptr [0x03114200]
//   XREF to: 03114200 (READ)
// 00564767: PUSH EDX
// 00564768: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
//   XREF to: 004cdce0 (UNCONDITIONAL_CALL)
// 0056476d: ADD ESP,0x18
// 00564770: PUSH 0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 00564775: PUSH -0x1
// 00564777: PUSH 0xff
// 0056477c: MOV ECX,dword ptr [0x031141f4]
//   XREF to: 031141f4 (READ)
// 00564782: PUSH ECX
// 00564783: MOV EBX,dword ptr [0x031141f0]
//   XREF to: 031141f0 (READ)
// 00564789: PUSH EBX
// 0056478a: MOV ESI,dword ptr [0x03114200]
//   XREF to: 03114200 (READ)
// 00564790: PUSH ESI
// 00564791: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
// 00564796: ADD ESP,0x18
// 00564799: CALL engine_matrix.c_popViewport_FUN_0050e480
//   XREF to: 0050e480 (UNCONDITIONAL_CALL)
// 0056479e: ADD ESP,0x1f4
// 005647a4: POP EBP
// 005647a5: POP EDI
// 005647a6: POP ESI
// 005647a7: POP EBX
// 005647a8: RET
// 005647a9: PUSH EBX
//   Label: LAB_005647a9
// 005647aa: PUSH ESI
// 005647ab: CALL core_script.cpp_FUN_005664d0
//   XREF to: 005664d0 (UNCONDITIONAL_CALL)
// 005647b0: INC EBX
// 005647b1: ADD ESP,0x8
// 005647b4: JMP 0x005646a3
//   XREF to: 005646a3 (UNCONDITIONAL_JUMP)
// 005647b9: MOV EAX,[0x03114204]
//   Label: LAB_005647b9
//   XREF to: 03114204 (READ)
// 005647be: ADD EAX,EBX
// 005647c0: DEC EAX
// 005647c1: PUSH EAX
// 005647c2: PUSH ESI
// 005647c3: PUSH EBX
// 005647c4: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 005647c9: JMP 0x00564722
//   XREF to: 00564722 (UNCONDITIONAL_JUMP)
