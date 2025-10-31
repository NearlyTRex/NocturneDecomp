// Name: shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0
// Address: 004481d0
// Address Range: [[004481d0, 00448251]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0(FILE * output_file)
// Globals:
//   TerminatedCString s_s_2d_5dx_5d_Page_d_5d_5d_00619753
//   TerminatedCString s_ux_u_square_found_using__00619790
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 DAT_0083c1e0
//   undefined4 DAT_0083c208
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c218
//   undefined4 DAT_0083c220
//   undefined4 DAT_0083c228
//   undefined4 DAT_0083c22c
//   undefined4 DAT_0083c254
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   undefined4 DAT_0083c26c
//   uint g_CramTextureCount
//   int g_CramPaddingCalculation
//   int g_CramCurrentAcceptableSize
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_printAtlasLayoutReport_FUN_004481d0(FILE *output_file)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  SCramWorkingEntry *pSVar9;
  int iVar10;
  int iVar11;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x40);
  if (0 < (int)g_CramTextureCount) {
    pSVar9 = g_CramSortedTextureEntries;
    iVar10 = 0;
    do {
      piVar1 = &pSVar9->rotation_applied;
      piVar2 = &pSVar9->final_bottom;
      piVar3 = &pSVar9->final_right;
      piVar4 = &pSVar9->final_top;
      piVar5 = &pSVar9->final_left;
      piVar6 = &pSVar9->working_map_id;
      piVar7 = &pSVar9->height;
      piVar8 = &pSVar9->width;
      pSVar9 = pSVar9 + 1;
      iVar11 = iVar10 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n","%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n"
                 ,iVar10,*piVar8,*piVar7,*piVar6,*piVar5,*piVar4,*piVar3,*piVar2,*piVar1);
      iVar10 = iVar11;
    } while (iVar11 < (int)g_CramTextureCount);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0
            (output_file,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
             g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
  return;
}


// Assembly code:
// 004481d0: PUSH 0x40
//   Label: shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0
// 004481d5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 004481da: PUSH EBX
// 004481db: PUSH ESI
// 004481dc: PUSH EDI
// 004481dd: PUSH EBP
// 004481de: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004481e2: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004481e8: XOR ESI,ESI
// 004481ea: TEST EDX,EDX
// 004481ec: JLE 0x00448230
//   XREF to: 00448230 (CONDITIONAL_JUMP)
// 004481ee: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004481f3: MOV ECX,dword ptr [EBX + 0x44]
//   Label: LAB_004481f3
//   XREF to: 0083c220 (READ)
//   XREF to: 0083c26c (READ)
// 004481f6: PUSH ECX
// 004481f7: MOV EBP,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 004481fa: PUSH EBP
// 004481fb: MOV EAX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 004481fe: PUSH EAX
// 004481ff: MOV EDX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00448202: PUSH EDX
// 00448203: MOV ECX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00448206: PUSH ECX
// 00448207: MOV EBP,dword ptr [EBX + 0x2c]
//   XREF to: 0083c208 (READ)
//   XREF to: 0083c254 (READ)
// 0044820a: PUSH EBP
// 0044820b: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 0044820e: PUSH EAX
// 0044820f: MOV EDX,dword ptr [EBX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00448211: PUSH EDX
// 00448212: PUSH ESI
// 00448213: PUSH 0x619753
//   XREF to: 00619753 (DATA)
// 00448218: PUSH EDI
// 00448219: ADD EBX,0x4c
// 0044821c: INC ESI
// 0044821d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00448222: MOV ECX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00448228: ADD ESP,0x2c
// 0044822b: CMP ESI,ECX
// 0044822d: JL 0x004481f3
//   XREF to: 004481f3 (CONDITIONAL_JUMP)
// 0044822f: NOP
// 00448230: MOV EBX,dword ptr [0x0084a880]
//   Label: LAB_00448230
//   XREF to: 0084a880 (READ)
// 00448236: PUSH EBX
// 00448237: MOV ESI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 0044823d: PUSH ESI
// 0044823e: PUSH ESI
// 0044823f: PUSH 0x619790
//   XREF to: 00619790 (DATA)
// 00448244: PUSH EDI
// 00448245: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044824a: ADD ESP,0x14
// 0044824d: POP EBP
// 0044824e: POP EDI
// 0044824f: POP ESI
// 00448250: POP EBX
// 00448251: RET
