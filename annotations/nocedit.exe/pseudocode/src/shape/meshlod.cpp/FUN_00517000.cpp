// Name: shape_meshlod.cpp_FUN_00517000
// Address: 00517000
// Address Range: [[00517000, 005172b8]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00517000()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516d50 (00516d50) at 00516dd7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b8a0 (0051b8a0) at 0051b8f9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_006376c3
//   TerminatedCString s_Can_t_call_LodMesh_creat_006376d8
//   TerminatedCString s_shape_meshlod_cpp_00637724
//   TerminatedCString s_shape_meshlod_cpp_00637739
//   TerminatedCString s_Out_of_memory_0063774e
//   TerminatedCString s_shape_meshlod_cpp_0063775d
//   TerminatedCString s_Bug_00637772
//   float FLOAT_00637779 = 0.5
//   float FLOAT_0063777d = 2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_meshlod.cpp_FUN_00518300
//   shape_meshlod.cpp_FUN_00518870

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00517000(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float fVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int in_stack_00000004;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(in_stack_00000004 + 0x34) == 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x56f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::createOrigSamplePoints unless we have an original mesh!");
  }
  piVar6 = *(int **)(in_stack_00000004 + 0x34);
  iVar5 = *piVar6 + piVar6[0x11] + piVar6[2];
  *(int *)(in_stack_00000004 + 0x5c) = iVar5;
  piVar2 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            (iVar5 * 0x1c + 4,"..\\shape\\meshlod.cpp",0x577);
  piVar6 = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar6 = piVar2 + 1;
    *piVar2 = iVar5;
  }
  *(int **)(in_stack_00000004 + 0x60) = piVar6;
  if (piVar6 == (int *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x578;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  fVar8 = 0.0;
  iVar5 = 0;
  local_18 = 0;
  while (0 < **(int **)(in_stack_00000004 + 0x34)) {
    puVar9 = (undefined4 *)((*(int **)(in_stack_00000004 + 0x34))[1] + iVar5);
    puVar3 = (undefined4 *)(*(int *)(in_stack_00000004 + 0x60) + local_18);
    if (puVar3 != puVar9) {
      *puVar3 = *puVar9;
      puVar3[1] = puVar9[1];
      puVar3[2] = puVar9[2];
    }
    iVar5 = iVar5 + 0x4c4;
    puVar3[6] = 0x3f800000;
    shape_meshlod_cpp_FUN_00518300();
    fVar8 = (float)((int)fVar8 + 1);
    local_14 = local_14 + 0x1c;
  }
  iVar5 = 0;
  local_14 = (int)fVar8 * 0x1c;
  local_1c = 0;
  while( true ) {
    iVar1 = *(int *)(in_stack_00000004 + 0x34);
    if (*(int *)(iVar1 + 0x44) <= iVar5) break;
    piVar6 = (int *)(*(int *)(iVar1 + 0x48) + local_1c);
    pfVar10 = (float *)(*(int *)(in_stack_00000004 + 0x60) + local_14);
    pfVar4 = (float *)(*(int *)(iVar1 + 4) + piVar6[1] * 0x4c4);
    pfVar7 = (float *)(*piVar6 * 0x4c4 + *(int *)(iVar1 + 4));
    local_38 = *pfVar7 + *pfVar4;
    local_44 = local_38 / FLOAT_0063777d;
    fStack_34 = pfVar7[1] + pfVar4[1];
    fStack_30 = pfVar7[2] + pfVar4[2];
    local_40 = fStack_34 * FLOAT_00637779;
    local_3c = fStack_30 * FLOAT_00637779;
    if (pfVar10 != &local_44) {
      *pfVar10 = local_44;
      pfVar10[1] = local_40;
      pfVar10[2] = local_3c;
    }
    iVar5 = iVar5 + 1;
    pfVar10[6] = 0.9;
    shape_meshlod_cpp_FUN_00518300();
    fVar8 = (float)((int)fVar8 + 1);
    local_18 = local_18 + 0xf0;
    local_14 = unaff_EBP + 0x1c;
  }
  local_20 = (int)fVar8 * 0x1c;
  while( true ) {
    if (*(int *)(*(int *)(in_stack_00000004 + 0x34) + 8) < 1) break;
    puVar9 = (undefined4 *)(*(int *)(in_stack_00000004 + 0x60) + local_20);
    puVar3 = (undefined4 *)shape_meshlod_cpp_FUN_00518870();
    if (puVar9 != puVar3) {
      *puVar9 = *puVar3;
      puVar9[1] = puVar3[1];
      puVar9[2] = puVar3[2];
    }
    puVar9[6] = 0x3f4ccccd;
    local_44 = fVar8;
    shape_meshlod_cpp_FUN_00518300();
    fVar8 = (float)((int)fVar8 + 1);
    local_20 = local_18 + 0x1c;
  }
  if (fVar8 == *(float *)(in_stack_00000004 + 0x5c)) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x5c8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
  return;
}


// Assembly code:
// 00517000: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00517000
// 00517001: PUSH ESI
// 00517002: PUSH EDI
// 00517003: PUSH EBP
// 00517004: SUB ESP,0x40
// 00517007: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 0051700b: CMP dword ptr [EBX + 0x34],0x0
// 0051700f: JZ 0x0051711a
//   XREF to: 0051711a (CONDITIONAL_JUMP)
// 00517015: MOV EAX,dword ptr [EBX + 0x34]
//   Label: LAB_00517015
// 00517018: MOV EDX,dword ptr [EAX]
// 0051701a: MOV EDI,dword ptr [EAX + 0x44]
// 0051701d: MOV EAX,dword ptr [EAX + 0x8]
// 00517020: ADD EDX,EDI
// 00517022: ADD EDX,EAX
// 00517024: MOV ESI,EDX
// 00517026: MOV dword ptr [EBX + 0x5c],EDX
// 00517029: LEA EAX,[EDX*0x4 + 0x0]
// 00517030: MOV EDX,EAX
// 00517032: SHL EAX,0x3
// 00517035: PUSH 0x577
// 0051703a: SUB EAX,EDX
// 0051703c: PUSH 0x637724
//   XREF to: 00637724 (DATA)
// 00517041: ADD EAX,0x4
// 00517044: PUSH EAX
// 00517045: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0051704a: ADD ESP,0xc
// 0051704d: TEST EAX,EAX
// 0051704f: JZ 0x00517057
//   XREF to: 00517057 (CONDITIONAL_JUMP)
// 00517051: ADD EAX,0x4
// 00517054: MOV dword ptr [EAX + -0x4],ESI
// 00517057: MOV dword ptr [EBX + 0x60],EAX
//   Label: LAB_00517057
// 0051705a: TEST EAX,EAX
// 0051705c: JZ 0x00517142
//   XREF to: 00517142 (CONDITIONAL_JUMP)
// 00517062: XOR ESI,ESI
//   Label: LAB_00517062
// 00517064: XOR EBP,EBP
// 00517066: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0051706a: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0051706e: MOV EAX,dword ptr [EBX + 0x34]
//   Label: LAB_0051706e
// 00517071: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 00517075: CMP EDX,dword ptr [EAX]
// 00517077: JL 0x00517169
//   XREF to: 00517169 (CONDITIONAL_JUMP)
// 0051707d: LEA EAX,[ESI*0x4 + 0x0]
// 00517084: MOV EDX,EAX
// 00517086: SHL EAX,0x3
// 00517089: XOR EBP,EBP
// 0051708b: SUB EAX,EDX
// 0051708d: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 00517091: MOV dword ptr [ESP + 0x30],EAX
//   Label: LAB_00517091
//   XREF to: Stack[-0x20] (WRITE)
// 00517095: MOV EAX,dword ptr [EBX + 0x34]
// 00517098: CMP EBP,dword ptr [EAX + 0x44]
// 0051709b: JL 0x005171bc
//   XREF to: 005171bc (CONDITIONAL_JUMP)
// 005170a1: LEA EAX,[ESI*0x4 + 0x0]
// 005170a8: XOR ECX,ECX
// 005170aa: MOV EDX,EAX
// 005170ac: SHL EAX,0x3
// 005170af: XOR EBP,EBP
// 005170b1: SUB EAX,EDX
// 005170b3: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005170b7: MOV dword ptr [ESP + 0x24],EAX
//   Label: LAB_005170b7
//   XREF to: Stack[-0x2c] (WRITE)
// 005170bb: MOV EAX,dword ptr [EBX + 0x34]
// 005170be: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 005170c2: CMP EDX,dword ptr [EAX + 0x8]
// 005170c5: JGE 0x00517282
//   XREF to: 00517282 (CONDITIONAL_JUMP)
// 005170cb: MOV EDX,dword ptr [EAX + 0xc]
// 005170ce: ADD EDX,EBP
// 005170d0: PUSH EDX
// 005170d1: LEA EDX,[ESP + 0x1c]
//   XREF to: Stack[-0x38] (DATA)
// 005170d5: PUSH EDX
// 005170d6: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 005170da: MOV EDI,dword ptr [EBX + 0x60]
// 005170dd: PUSH EAX
// 005170de: ADD EDI,ECX
// 005170e0: CALL shape_meshlod.cpp_FUN_00518870
//   XREF to: 00518870 (UNCONDITIONAL_CALL)
// 005170e5: ADD ESP,0xc
// 005170e8: CMP EDI,EAX
// 005170ea: JNZ 0x0051726d
//   XREF to: 0051726d (CONDITIONAL_JUMP)
// 005170f0: PUSH ESI
//   Label: LAB_005170f0
// 005170f1: PUSH EBX
// 005170f2: ADD EBP,0x8c
// 005170f8: MOV dword ptr [EDI + 0x18],0x3f4ccccd
// 005170ff: CALL shape_meshlod.cpp_FUN_00518300
//   XREF to: 00518300 (UNCONDITIONAL_CALL)
// 00517104: ADD ESP,0x8
// 00517107: INC ESI
// 00517108: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 0051710c: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 00517110: INC EDI
// 00517111: ADD EAX,0x1c
// 00517114: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00517118: JMP 0x005170b7
//   XREF to: 005170b7 (UNCONDITIONAL_JUMP)
// 0051711a: MOV ECX,0x6376c3
//   Label: LAB_0051711a
//   XREF to: 006376c3 (DATA)
// 0051711f: MOV ESI,0x56f
// 00517124: PUSH 0x6376d8
//   XREF to: 006376d8 (DATA)
// 00517129: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051712f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00517135: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051713a: ADD ESP,0x4
// 0051713d: JMP 0x00517015
//   XREF to: 00517015 (UNCONDITIONAL_JUMP)
// 00517142: MOV EAX,0x637739
//   Label: LAB_00517142
//   XREF to: 00637739 (DATA)
// 00517147: MOV EDX,0x578
// 0051714c: PUSH 0x63774e
//   XREF to: 0063774e (DATA)
// 00517151: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00517156: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0051715c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00517161: ADD ESP,0x4
// 00517164: JMP 0x00517062
//   XREF to: 00517062 (UNCONDITIONAL_JUMP)
// 00517169: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_00517169
//   XREF to: Stack[-0x24] (READ)
// 0051716d: MOV EDI,dword ptr [EAX + 0x4]
// 00517170: MOV EAX,dword ptr [EBX + 0x60]
// 00517173: ADD EDI,EBP
// 00517175: ADD EAX,EDX
// 00517177: CMP EAX,EDI
// 00517179: JZ 0x0051718b
//   XREF to: 0051718b (CONDITIONAL_JUMP)
// 0051717b: MOV EDX,dword ptr [EDI]
// 0051717d: MOV dword ptr [EAX],EDX
// 0051717f: MOV EDX,dword ptr [EDI + 0x4]
// 00517182: MOV dword ptr [EAX + 0x4],EDX
// 00517185: MOV EDX,dword ptr [EDI + 0x8]
// 00517188: MOV dword ptr [EAX + 0x8],EDX
// 0051718b: PUSH ESI
//   Label: LAB_0051718b
// 0051718c: PUSH EBX
// 0051718d: ADD EBP,0x4c4
// 00517193: MOV dword ptr [EAX + 0x18],0x3f800000
// 0051719a: CALL shape_meshlod.cpp_FUN_00518300
//   XREF to: 00518300 (UNCONDITIONAL_CALL)
// 0051719f: ADD ESP,0x8
// 005171a2: INC ESI
// 005171a3: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 005171a7: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 005171ab: INC ECX
// 005171ac: ADD EDI,0x1c
// 005171af: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005171b3: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005171b7: JMP 0x0051706e
//   XREF to: 0051706e (UNCONDITIONAL_JUMP)
// 005171bc: MOV EDI,dword ptr [ESP + 0x28]
//   Label: LAB_005171bc
//   XREF to: Stack[-0x28] (READ)
// 005171c0: MOV EDX,dword ptr [EAX + 0x48]
// 005171c3: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 005171c7: ADD EDX,EDI
// 005171c9: MOV EDI,dword ptr [EBX + 0x60]
// 005171cc: ADD EDI,ECX
// 005171ce: IMUL ECX,dword ptr [EDX + 0x4],0x4c4
// 005171d5: MOV EAX,dword ptr [EAX + 0x4]
// 005171d8: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005171dc: ADD EAX,ECX
// 005171de: IMUL EDX,dword ptr [EDX],0x4c4
// 005171e4: ADD EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 005171e8: FLD float ptr [EDX]
// 005171ea: FADD float ptr [EAX]
// 005171ec: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 005171f0: FDIV float ptr [0x0063777d]
//   XREF to: 0063777d (READ)
// 005171f6: FLD float ptr [EDX + 0x4]
// 005171f9: FADD float ptr [EAX + 0x4]
// 005171fc: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (WRITE)
// 00517200: FLD float ptr [EDX + 0x8]
// 00517203: FADD float ptr [EAX + 0x8]
// 00517206: FXCH
// 00517208: FLD float ptr [0x00637779]
//   XREF to: 00637779 (READ)
// 0051720e: FXCH
// 00517210: FMUL ST1
// 00517212: FXCH ST2
// 00517214: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 00517218: FMULP
// 0051721a: FXCH
// 0051721c: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 00517220: MOV EAX,ESP
// 00517222: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 00517226: FSTP float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00517229: CMP EDI,EAX
// 0051722b: JZ 0x00517240
//   XREF to: 00517240 (CONDITIONAL_JUMP)
// 0051722d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00517230: MOV dword ptr [EDI],EAX
// 00517232: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00517236: MOV dword ptr [EDI + 0x4],EAX
// 00517239: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0051723d: MOV dword ptr [EDI + 0x8],EAX
// 00517240: PUSH ESI
//   Label: LAB_00517240
// 00517241: PUSH EBX
// 00517242: INC EBP
// 00517243: MOV dword ptr [EDI + 0x18],0x3f666666
// 0051724a: CALL shape_meshlod.cpp_FUN_00518300
//   XREF to: 00518300 (UNCONDITIONAL_CALL)
// 0051724f: ADD ESP,0x8
// 00517252: INC ESI
// 00517253: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 00517257: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0051725b: ADD EDI,0xf0
// 00517261: ADD EAX,0x1c
// 00517264: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00517268: JMP 0x00517091
//   XREF to: 00517091 (UNCONDITIONAL_JUMP)
// 0051726d: MOV EDX,dword ptr [EAX]
//   Label: LAB_0051726d
// 0051726f: MOV dword ptr [EDI],EDX
// 00517271: MOV EDX,dword ptr [EAX + 0x4]
// 00517274: MOV dword ptr [EDI + 0x4],EDX
// 00517277: MOV EDX,dword ptr [EAX + 0x8]
// 0051727a: MOV dword ptr [EDI + 0x8],EDX
// 0051727d: JMP 0x005170f0
//   XREF to: 005170f0 (UNCONDITIONAL_JUMP)
// 00517282: CMP ESI,dword ptr [EBX + 0x5c]
//   Label: LAB_00517282
// 00517285: JNZ 0x0051728f
//   XREF to: 0051728f (CONDITIONAL_JUMP)
// 00517287: ADD ESP,0x40
// 0051728a: POP EBP
// 0051728b: POP EDI
// 0051728c: POP ESI
// 0051728d: POP EBX
// 0051728e: RET
// 0051728f: MOV EBP,0x63775d
//   Label: LAB_0051728f
//   XREF to: 0063775d (DATA)
// 00517294: MOV EAX,0x5c8
// 00517299: PUSH 0x637772
//   XREF to: 00637772 (DATA)
// 0051729e: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005172a4: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005172a9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005172ae: ADD ESP,0x4
// 005172b1: ADD ESP,0x40
// 005172b4: POP EBP
// 005172b5: POP EDI
// 005172b6: POP ESI
// 005172b7: POP EBX
// 005172b8: RET
