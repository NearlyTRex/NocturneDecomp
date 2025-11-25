// Name: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
// Address: 00517000
// Address Range: [[00517000, 005172b8]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 (00516d50) at 00516dd7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 (0051b8a0) at 0051b8f9 [UNCONDITIONAL_CALL]
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
//   shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
//   shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh *this_ptr)

{
  CLodMesh *pCVar1;
  float fVar2;
  SLodSamplePoint *pSVar3;
  SLodSamplePoint *pSVar4;
  CVector3f *pCVar5;
  undefined4 *puVar6;
  CLodVert *pCVar7;
  float fVar8;
  int *piVar9;
  CLodVert *pCVar10;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar11;
  int sample_point_index;
  CVector3f *pCVar12;
  char *pcVar13;
  float *pfVar14;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x56f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::createOrigSamplePoints unless we have an original mesh!");
  }
  pCVar1 = this_ptr->next_lod;
  fVar8 = (float)(pCVar1->vertex_count + pCVar1->edge_count + pCVar1->tri_count);
  this_ptr->sample_point_count = (int)fVar8;
  pSVar3 = (SLodSamplePoint *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar8 * 0x1c + 4,"..\\shape\\meshlod.cpp",0x577);
  pSVar4 = pSVar3;
  if (pSVar3 != (SLodSamplePoint *)0x0) {
    pSVar4 = (SLodSamplePoint *)&(pSVar3->position).y;
    (pSVar3->position).x = fVar8;
  }
  this_ptr->sample_points_ptr = pSVar4;
  if (pSVar4 == (SLodSamplePoint *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x578;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  sample_point_index = 0;
  iVar11 = 0;
  local_18 = 0;
  while (0 < this_ptr->next_lod->vertex_count) {
    pcVar13 = this_ptr->next_lod->vertex_data->lod_workspace + iVar11 + -0x10;
    puVar6 = (undefined4 *)((int)&(this_ptr->sample_points_ptr->position).x + local_18);
    if ((char *)puVar6 != pcVar13) {
      *puVar6 = *(undefined4 *)pcVar13;
      puVar6[1] = *(undefined4 *)(pcVar13 + 4);
      puVar6[2] = *(undefined4 *)(pcVar13 + 8);
    }
    iVar11 = iVar11 + 0x4c4;
    puVar6[6] = 0x3f800000;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_14 = local_14 + 0x1c;
  }
  iVar11 = 0;
  local_14 = sample_point_index * 0x1c;
  local_1c = 0;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->edge_count <= iVar11) break;
    piVar9 = (int *)((int)pCVar1->edges_ptr->adjacent_tri_indices + local_1c + -0x28);
    pfVar14 = (float *)((int)&(this_ptr->sample_points_ptr->position).x + local_14);
    pCVar7 = pCVar1->vertex_data + piVar9[1];
    pCVar10 = pCVar1->vertex_data + *piVar9;
    fVar8 = ((pCVar10->position).y + (pCVar7->position).y) * FLOAT_00637779;
    fVar2 = ((pCVar10->position).z + (pCVar7->position).z) * FLOAT_00637779;
    if (pfVar14 != (float *)&stack0xffffffbc) {
      *pfVar14 = ((pCVar10->position).x + (pCVar7->position).x) / FLOAT_0063777d;
      pfVar14[1] = fVar8;
      pfVar14[2] = fVar2;
    }
    iVar11 = iVar11 + 1;
    pfVar14[6] = 0.9;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_18 = local_18 + 0xf0;
    local_14 = unaff_EBP + 0x1c;
  }
  iVar11 = 0;
  local_20 = sample_point_index * 0x1c;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->tri_count < 1) break;
    pCVar12 = (CVector3f *)((int)&(this_ptr->sample_points_ptr->position).x + local_20);
    pCVar5 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                       (pCVar1,&local_2c,
                        (CLodFace *)((int)pCVar1->tri_data->attribute_indices + iVar11));
    if (pCVar12 != pCVar5) {
      pCVar12->x = pCVar5->x;
      pCVar12->y = pCVar5->y;
      pCVar12->z = pCVar5->z;
    }
    iVar11 = iVar11 + 0x8c;
    pCVar12[2].x = 0.8;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_20 = local_18 + 0x1c;
  }
  if (sample_point_index == this_ptr->sample_point_count) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x5c8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
  return;
}


// Assembly code:
// 00517000: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
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
// 005170e0: CALL shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
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
// 005170ff: CALL shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
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
// 0051719a: CALL shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
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
// 0051724a: CALL shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
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
