// Name: shape_design.c_turnModelInsideOut_FUN_004671e0
// Address: 004671e0
// Address Range: [[004671e0, 0046734e]]
// Convention: __cdecl
// Signature: void shape_design.c_turnModelInsideOut_FUN_004671e0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6a5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Model_turned_inside_out__0061c93c
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_design.c_swapDWords_FUN_00462130
//   shape_design.c_swapFloats_FUN_00462160
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_turnModelInsideOut_FUN_004671e0(void)

{
  uint uVar1;
  float *value2_ptr;
  float *pfVar2;
  int iVar3;
  
  for (pfVar2 = (float *)0x0; (int)pfVar2 < g_PolygonCount; pfVar2 = (float *)((int)pfVar2 + 1)) {
    uVar1 = g_ModelPolygonData[(int)pfVar2].vertex_indices_count;
    iVar3 = 0;
    while (iVar3 < (int)uVar1 / 2) {
      shape_design_c_swapDWords_FUN_00462130
                ((uint *)((int)pfVar2 * 0x184 + 0x16e99c8 + iVar3 * 4),
                 (uint *)((int)pfVar2 * 0x184 + (uVar1 - iVar3) * 4 + 0x16e99c4));
      pfVar2 = (float *)((int)pfVar2 * 0x184 + (uVar1 - iVar3) * 4 + 0x16e9a04);
      shape_design_c_swapFloats_FUN_00462160
                ((float *)((int)pfVar2 * 0x184 + 0x16e9a08 + iVar3 * 4),pfVar2);
      value2_ptr = (float *)((int)pfVar2 * 0x184 + (uVar1 - iVar3) * 4 + 0x16e9a44);
      pfVar2 = (float *)((int)pfVar2 * 0x184 + 0x16e9a48 + (int)value2_ptr * 4);
      shape_design_c_swapFloats_FUN_00462160(pfVar2,value2_ptr);
      iVar3 = (int)value2_ptr + 1;
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Model turned inside out.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}


// Assembly code:
// 004671e0: PUSH EBX
//   Label: shape_design.c_turnModelInsideOut_FUN_004671e0
// 004671e1: PUSH ESI
// 004671e2: PUSH EDI
// 004671e3: PUSH EBP
// 004671e4: MOV EBP,ESP
// 004671e6: SUB ESP,0xc
// 004671ec: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 004671f3: JMP 0x004671fb
//   XREF to: 004671fb (UNCONDITIONAL_JUMP)
// 004671f5: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004671f5
//   XREF to: Stack[-0x1c] (READ)
// 004671f8: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004671fb: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004671fb
//   XREF to: Stack[-0x1c] (READ)
// 004671fe: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00467204: JGE 0x00467327
//   XREF to: 00467327 (CONDITIONAL_JUMP)
// 0046720a: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00467211: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00467217: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046721a: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00467221: JMP 0x00467229
//   XREF to: 00467229 (UNCONDITIONAL_JUMP)
// 00467223: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00467223
//   XREF to: Stack[-0x18] (READ)
// 00467226: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00467229: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00467229
//   XREF to: Stack[-0x14] (READ)
// 0046722c: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046722f: SAR EDX,0x1f
// 00467232: SUB EAX,EDX
// 00467234: SAR EAX,0x1
// 00467236: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467239: JLE 0x00467322
//   XREF to: 00467322 (CONDITIONAL_JUMP)
// 0046723f: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467242: SUB EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467245: LEA ECX,[EAX*0x4 + 0x0]
// 0046724c: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00467253: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00467258: ADD EAX,EDX
// 0046725a: LEA EDX,[ECX + -0x4]
// 0046725d: ADD EAX,0xb8
// 00467262: ADD EAX,EDX
// 00467264: PUSH EAX
// 00467265: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046726c: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00467271: ADD EAX,EDX
// 00467273: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467276: SHL EDX,0x2
// 00467279: ADD EAX,0xb8
// 0046727e: ADD EAX,EDX
// 00467280: PUSH EAX
// 00467281: CALL shape_design.c_swapDWords_FUN_00462130
//   XREF to: 00462130 (UNCONDITIONAL_CALL)
// 00467286: ADD ESP,0x8
// 00467289: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046728c: SUB EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046728f: LEA ECX,[EAX*0x4 + 0x0]
// 00467296: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046729d: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004672a2: ADD EAX,EDX
// 004672a4: SUB ECX,0x4
// 004672a7: ADD EAX,0xf8
// 004672ac: ADD EAX,ECX
// 004672ae: PUSH EAX
// 004672af: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004672b6: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004672bb: ADD EAX,EDX
// 004672bd: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004672c0: SHL EDX,0x2
// 004672c3: ADD EAX,0xf8
// 004672c8: ADD EAX,EDX
// 004672ca: PUSH EAX
// 004672cb: CALL shape_design.c_swapFloats_FUN_00462160
//   XREF to: 00462160 (UNCONDITIONAL_CALL)
// 004672d0: ADD ESP,0x8
// 004672d3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004672d6: SUB EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004672d9: LEA ECX,[EAX*0x4 + 0x0]
// 004672e0: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004672e7: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004672ec: ADD EAX,EDX
// 004672ee: LEA EDX,[ECX + -0x4]
// 004672f1: ADD EAX,0x138
// 004672f6: ADD EAX,EDX
// 004672f8: PUSH EAX
// 004672f9: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00467300: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00467305: ADD EAX,EDX
// 00467307: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046730a: SHL EDX,0x2
// 0046730d: ADD EAX,0x138
// 00467312: ADD EAX,EDX
// 00467314: PUSH EAX
// 00467315: CALL shape_design.c_swapFloats_FUN_00462160
//   XREF to: 00462160 (UNCONDITIONAL_CALL)
// 0046731a: ADD ESP,0x8
// 0046731d: JMP 0x00467223
//   XREF to: 00467223 (UNCONDITIONAL_JUMP)
// 00467322: JMP 0x004671f5
//   Label: LAB_00467322
//   XREF to: 004671f5 (UNCONDITIONAL_JUMP)
// 00467327: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00467327
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046732c: PUSH 0x0
// 0046732e: PUSH 0x0
// 00467330: MOV EAX,0x61c93c
//   XREF to: 0061c93c (PARAM)
// 00467335: PUSH EAX
//   XREF to: 0061c93c (DATA)
// 00467336: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046733b: ADD ESP,0xc
// 0046733e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00467343: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00467348: MOV ESP,EBP
// 0046734a: POP EBP
// 0046734b: POP EDI
// 0046734c: POP ESI
// 0046734d: POP EBX
// 0046734e: RET
