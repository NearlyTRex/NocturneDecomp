// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
// Address: 004a2660
// Address Range: [[004a2660, 004a2894]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660(CEditorTools * this_ptr, int start_x, int start_y, int length)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0 (004a28a0) at 004a2906 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004a2660
          (CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  int in_stack_00000014;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < g_WindowWidth)) &&
      ((start_y < g_WindowHeight && (g_ClipLeft <= start_x)))) &&
     ((start_x < g_ClipRight && ((g_ClipTop <= start_y && (start_y < g_ClipBottom)))))) {
    engine_2d_c_plotPixel_FUN_00401140(start_x,start_y);
  }
  y_00 = length + -in_stack_00000014;
  x = -in_stack_00000014 + start_x;
  x_00 = in_stack_00000014 + start_x;
  y = in_stack_00000014 + length;
  while (length < y) {
    if ((((-1 < x) && (-1 < y_00)) && (x < g_WindowWidth)) &&
       (((y_00 < g_WindowHeight && (g_ClipLeft <= x)) &&
        ((x < g_ClipRight && ((g_ClipTop <= y_00 && (y_00 < g_ClipBottom)))))))) {
      engine_2d_c_plotPixel_FUN_00401140(x,y_00);
    }
    if (((((-1 < x_00) && (-1 < y_00)) && (x_00 < g_WindowWidth)) &&
        ((y_00 < g_WindowHeight && (g_ClipLeft <= x_00)))) &&
       ((x_00 < g_ClipRight && ((g_ClipTop <= y_00 && (y_00 < g_ClipBottom)))))) {
      engine_2d_c_plotPixel_FUN_00401140(x_00,y_00);
    }
    if ((((((-1 < x) && (-1 < y)) && (x < g_WindowWidth)) &&
         ((y < g_WindowHeight && (g_ClipLeft <= x)))) && (x < g_ClipRight)) &&
       ((g_ClipTop <= y && (y < g_ClipBottom)))) {
      engine_2d_c_plotPixel_FUN_00401140(x,y);
    }
    if ((((x_00 < 0) || (y < 0)) || (g_WindowWidth <= x_00)) ||
       (((g_WindowHeight <= y || (x_00 < g_ClipLeft)) ||
        ((g_ClipRight <= x_00 || ((y < g_ClipTop || (g_ClipBottom <= y)))))))) {
      x = x + 1;
      x_00 = x_00 + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_2d_c_plotPixel_FUN_00401140(x_00,y);
      x = x + 1;
      x_00 = x_00 + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}


// Assembly code:
// 004a2660: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
// 004a2661: PUSH ESI
// 004a2662: PUSH EDI
// 004a2663: PUSH EBP
// 004a2664: SUB ESP,0x4
// 004a2667: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004a266b: TEST EBX,EBX
// 004a266d: JL 0x004a2683
//   XREF to: 004a2683 (CONDITIONAL_JUMP)
// 004a266f: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a2673: TEST EDX,EDX
// 004a2675: JL 0x004a2683
//   XREF to: 004a2683 (CONDITIONAL_JUMP)
// 004a2677: CMP EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a267d: JL 0x004a270d
//   XREF to: 004a270d (CONDITIONAL_JUMP)
// 004a2683: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_004a2683
//   XREF to: Stack[0x10] (READ)
// 004a2687: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a268b: NEG ESI
// 004a268d: ADD EDI,ESI
// 004a268f: LEA EBP,[ESI + EBX*0x1]
// 004a2692: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004a2696: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a269a: ADD ESI,EBX
// 004a269c: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004a26a0: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004a26a3: ADD EBX,EAX
// 004a26a5: CMP EBX,dword ptr [ESP]
//   Label: LAB_004a26a5
//   XREF to: Stack[-0x14] (DATA)
// 004a26a8: JLE 0x004a109c
//   XREF to: 004a109c (CONDITIONAL_JUMP)
// 004a26ae: TEST EBP,EBP
// 004a26b0: JL 0x004a26c2
//   XREF to: 004a26c2 (CONDITIONAL_JUMP)
// 004a26b2: TEST EDI,EDI
// 004a26b4: JL 0x004a26c2
//   XREF to: 004a26c2 (CONDITIONAL_JUMP)
// 004a26b6: CMP EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a26bc: JL 0x004a275c
//   XREF to: 004a275c (CONDITIONAL_JUMP)
// 004a26c2: TEST ESI,ESI
//   Label: LAB_004a26c2
// 004a26c4: JL 0x004a26d6
//   XREF to: 004a26d6 (CONDITIONAL_JUMP)
// 004a26c6: TEST EDI,EDI
// 004a26c8: JL 0x004a26d6
//   XREF to: 004a26d6 (CONDITIONAL_JUMP)
// 004a26ca: CMP ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a26d0: JL 0x004a27a7
//   XREF to: 004a27a7 (CONDITIONAL_JUMP)
// 004a26d6: TEST EBP,EBP
//   Label: LAB_004a26d6
// 004a26d8: JL 0x004a26ea
//   XREF to: 004a26ea (CONDITIONAL_JUMP)
// 004a26da: TEST EBX,EBX
// 004a26dc: JL 0x004a26ea
//   XREF to: 004a26ea (CONDITIONAL_JUMP)
// 004a26de: CMP EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a26e4: JL 0x004a27f2
//   XREF to: 004a27f2 (CONDITIONAL_JUMP)
// 004a26ea: TEST ESI,ESI
//   Label: LAB_004a26ea
// 004a26ec: JL 0x004a26fe
//   XREF to: 004a26fe (CONDITIONAL_JUMP)
// 004a26ee: TEST EBX,EBX
// 004a26f0: JL 0x004a26fe
//   XREF to: 004a26fe (CONDITIONAL_JUMP)
// 004a26f2: CMP ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a26f8: JL 0x004a283d
//   XREF to: 004a283d (CONDITIONAL_JUMP)
// 004a26fe: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_004a26fe
//   XREF to: Stack[0x10] (READ)
// 004a2702: INC EBP
// 004a2703: DEC ESI
// 004a2704: DEC EBX
// 004a2705: DEC ECX
// 004a2706: INC EDI
// 004a2707: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[0x10] (WRITE)
// 004a270b: JMP 0x004a26a5
//   XREF to: 004a26a5 (UNCONDITIONAL_JUMP)
// 004a270d: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_004a270d
//   XREF to: 00679398 (READ)
// 004a2713: JGE 0x004a2683
//   XREF to: 004a2683 (CONDITIONAL_JUMP)
// 004a2719: CMP EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a271f: JL 0x004a2683
//   XREF to: 004a2683 (CONDITIONAL_JUMP)
// 004a2725: CMP EBX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a272b: JGE 0x004a2683
//   XREF to: 004a2683 (CONDITIONAL_JUMP)
// 004a2731: MOV EAX,EDX
// 004a2733: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a2739: JL 0x004a2683
//   XREF to: 004a2683 (CONDITIONAL_JUMP)
// 004a273f: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a2745: JGE 0x004a2683
//   XREF to: 004a2683 (CONDITIONAL_JUMP)
// 004a274b: MOV ESI,EAX
// 004a274d: PUSH ESI
// 004a274e: PUSH EBX
// 004a274f: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a2754: ADD ESP,0x8
// 004a2757: JMP 0x004a2683
//   XREF to: 004a2683 (UNCONDITIONAL_JUMP)
// 004a275c: CMP EDI,dword ptr [0x00679398]
//   Label: LAB_004a275c
//   XREF to: 00679398 (READ)
// 004a2762: JGE 0x004a26c2
//   XREF to: 004a26c2 (CONDITIONAL_JUMP)
// 004a2768: CMP EBP,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a276e: JL 0x004a26c2
//   XREF to: 004a26c2 (CONDITIONAL_JUMP)
// 004a2774: CMP EBP,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a277a: JGE 0x004a26c2
//   XREF to: 004a26c2 (CONDITIONAL_JUMP)
// 004a2780: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a2786: JL 0x004a26c2
//   XREF to: 004a26c2 (CONDITIONAL_JUMP)
// 004a278c: CMP EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a2792: JGE 0x004a26c2
//   XREF to: 004a26c2 (CONDITIONAL_JUMP)
// 004a2798: PUSH EDI
// 004a2799: PUSH EBP
// 004a279a: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a279f: ADD ESP,0x8
// 004a27a2: JMP 0x004a26c2
//   XREF to: 004a26c2 (UNCONDITIONAL_JUMP)
// 004a27a7: CMP EDI,dword ptr [0x00679398]
//   Label: LAB_004a27a7
//   XREF to: 00679398 (READ)
// 004a27ad: JGE 0x004a26d6
//   XREF to: 004a26d6 (CONDITIONAL_JUMP)
// 004a27b3: CMP ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a27b9: JL 0x004a26d6
//   XREF to: 004a26d6 (CONDITIONAL_JUMP)
// 004a27bf: CMP ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a27c5: JGE 0x004a26d6
//   XREF to: 004a26d6 (CONDITIONAL_JUMP)
// 004a27cb: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a27d1: JL 0x004a26d6
//   XREF to: 004a26d6 (CONDITIONAL_JUMP)
// 004a27d7: CMP EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a27dd: JGE 0x004a26d6
//   XREF to: 004a26d6 (CONDITIONAL_JUMP)
// 004a27e3: PUSH EDI
// 004a27e4: PUSH ESI
// 004a27e5: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a27ea: ADD ESP,0x8
// 004a27ed: JMP 0x004a26d6
//   XREF to: 004a26d6 (UNCONDITIONAL_JUMP)
// 004a27f2: CMP EBX,dword ptr [0x00679398]
//   Label: LAB_004a27f2
//   XREF to: 00679398 (READ)
// 004a27f8: JGE 0x004a26ea
//   XREF to: 004a26ea (CONDITIONAL_JUMP)
// 004a27fe: CMP EBP,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a2804: JL 0x004a26ea
//   XREF to: 004a26ea (CONDITIONAL_JUMP)
// 004a280a: CMP EBP,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a2810: JGE 0x004a26ea
//   XREF to: 004a26ea (CONDITIONAL_JUMP)
// 004a2816: CMP EBX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a281c: JL 0x004a26ea
//   XREF to: 004a26ea (CONDITIONAL_JUMP)
// 004a2822: CMP EBX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a2828: JGE 0x004a26ea
//   XREF to: 004a26ea (CONDITIONAL_JUMP)
// 004a282e: PUSH EBX
// 004a282f: PUSH EBP
// 004a2830: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a2835: ADD ESP,0x8
// 004a2838: JMP 0x004a26ea
//   XREF to: 004a26ea (UNCONDITIONAL_JUMP)
// 004a283d: CMP EBX,dword ptr [0x00679398]
//   Label: LAB_004a283d
//   XREF to: 00679398 (READ)
// 004a2843: JGE 0x004a26fe
//   XREF to: 004a26fe (CONDITIONAL_JUMP)
// 004a2849: CMP ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a284f: JL 0x004a26fe
//   XREF to: 004a26fe (CONDITIONAL_JUMP)
// 004a2855: CMP ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a285b: JGE 0x004a26fe
//   XREF to: 004a26fe (CONDITIONAL_JUMP)
// 004a2861: CMP EBX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a2867: JL 0x004a26fe
//   XREF to: 004a26fe (CONDITIONAL_JUMP)
// 004a286d: CMP EBX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a2873: JGE 0x004a26fe
//   XREF to: 004a26fe (CONDITIONAL_JUMP)
// 004a2879: PUSH EBX
// 004a287a: PUSH ESI
// 004a287b: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a2880: ADD ESP,0x8
// 004a2883: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004a2887: INC EBP
// 004a2888: DEC ESI
// 004a2889: DEC EBX
// 004a288a: DEC ECX
// 004a288b: INC EDI
// 004a288c: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[0x10] (WRITE)
// 004a2890: JMP 0x004a26a5
//   XREF to: 004a26a5 (UNCONDITIONAL_JUMP)
