// Name: core_actor.cpp_FUN_0040d470
// Address: 0040d470
// Address Range: [[0040d470, 0040d936]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040d470()
// Globals:
//   float FLOAT_00614454 = 0.2000000
//   float FLOAT_00614458 = 0.8000000
//   float FLOAT_006597b0 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
// Function calls:
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void core_actor_cpp_FUN_0040d470(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  CBoundingBox3D *in_stack_00000004;
  CBoundingBox3D *in_stack_00000008;
  CBoundingBox3D *in_stack_00000018;
  CBoundingBox3D *in_stack_0000001c;
  CBoundingBox3D *in_stack_0000002c;
  SRenderVertex *in_stack_fffffe80;
  SRenderVertex *in_stack_fffffe84;
  SRenderVertex *in_stack_fffffe94;
  SRenderVertex *in_stack_fffffe98;
  SRenderVertex *in_stack_fffffea8;
  SRenderVertex *in_stack_fffffeac;
  int aiStack_150 [4];
  undefined4 uStack_140;
  CVector3i local_e4;
  undefined1 auStack_d8 [20];
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  CVector3f local_ac;
  CVector3i aCStack_98 [2];
  undefined1 local_80 [28];
  CVector3i local_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar7 = 0;
  corner_index = 0;
  g_ActiveRenderColor = (int)in_stack_00000008;
  do {
    uStack_140 = 0x40d49f;
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_00000004,(CVector3f *)(auStack_d8 + 8),corner_index ^ 1);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_00000008,(CVector3f *)auStack_d8,corner_index);
    local_64.z = (int)pCVar2->x;
    local_58 = pCVar2->y;
    local_54 = pCVar2->z;
    local_44 = pCVar2->x * FLOAT_00614458;
    local_40 = pCVar2->y * FLOAT_00614458;
    local_3c = FLOAT_00614458 * pCVar2->z;
    local_e4.y = (int)(local_44 + pCVar1->x * FLOAT_00614454);
    local_e4.z = (int)(local_40 + pCVar1->y * FLOAT_00614454);
    auStack_d8._0_4_ = local_3c + FLOAT_00614454 * pCVar1->z;
    local_14 = (int)ROUND((float)local_64.z * FLOAT_006597b0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_14);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xfffffee8);
    pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    piVar6 = aiStack_150;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    piVar6 = (int *)&stack0xfffffe80;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe80,in_stack_fffffe84);
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_00000018,(CVector3f *)&stack0xfffffee4,corner_index ^ 2);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000001c,&local_ac,corner_index);
    local_64.y = (int)pCVar2->x;
    local_64.z = (int)pCVar2->y;
    local_58 = pCVar2->z;
    local_e4.x = (int)(pCVar1->x * FLOAT_00614454);
    local_e4.y = (int)(pCVar1->y * FLOAT_00614454);
    local_e4.z = (int)(FLOAT_00614454 * pCVar1->z);
    local_24 = pCVar2->x * FLOAT_00614458;
    local_20 = pCVar2->y * FLOAT_00614458;
    local_1c = FLOAT_00614458 * pCVar2->z;
    local_54 = local_24 + (float)local_e4.x;
    local_50 = local_20 + (float)local_e4.y;
    local_4c = local_1c + (float)local_e4.z;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)&stack0xfffffff4);
    aCStack_98[0].x = (int)ROUND(local_50 * FLOAT_006597b0);
    aCStack_98[0].y = (int)ROUND(local_4c * FLOAT_006597b0);
    aCStack_98[0].z = (int)ROUND(local_48 * FLOAT_006597b0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,aCStack_98);
    pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    piVar6 = (int *)&stack0xfffffec4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    piVar6 = (int *)&stack0xfffffe94;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe94,in_stack_fffffe98);
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000002c,(CVector3f *)(local_80 + 8),corner_index ^ 4);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000002c,(CVector3f *)local_80,corner_index);
    local_28 = pCVar2->x;
    local_24 = pCVar2->y;
    local_20 = pCVar2->z;
    local_58 = pCVar1->x * FLOAT_00614454;
    local_54 = pCVar1->y * FLOAT_00614454;
    local_50 = FLOAT_00614454 * pCVar1->z;
    in_stack_00000004 = (CBoundingBox3D *)(FLOAT_00614458 * pCVar2->z);
    local_c4 = pCVar2->x * FLOAT_00614458 + local_58;
    fStack_c0 = pCVar2->y * FLOAT_00614458 + local_54;
    fStack_bc = (float)in_stack_00000004 + local_50;
    local_64.x = (int)ROUND(local_28 * FLOAT_006597b0);
    local_64.y = (int)ROUND(local_24 * FLOAT_006597b0);
    local_64.z = (int)ROUND(local_20 * FLOAT_006597b0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_64);
    local_e4.x = (int)ROUND(fStack_c0 * FLOAT_006597b0);
    local_e4.y = (int)ROUND(fStack_bc * FLOAT_006597b0);
    local_e4.z = (int)ROUND(local_b8 * FLOAT_006597b0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_e4);
    pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    piVar6 = (int *)&stack0xfffffed8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    corner_index = corner_index + 1;
    piVar6 = (int *)&stack0xfffffea8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffea8,in_stack_fffffeac);
  } while ((int)corner_index < 8);
  return;
}


// Assembly code:
// 0040d470: PUSH EBX
//   Label: core_actor.cpp_FUN_0040d470
// 0040d471: PUSH ESI
// 0040d472: PUSH EDI
// 0040d473: PUSH EBP
// 0040d474: SUB ESP,0x120
// 0040d47a: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[0x8] (READ)
// 0040d481: XOR EBP,EBP
// 0040d483: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0040d488: MOV EAX,EBP
//   Label: LAB_0040d488
// 0040d48a: XOR AL,0x1
// 0040d48c: PUSH EAX
// 0040d48d: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0xd0] (DATA)
// 0040d491: PUSH EAX
// 0040d492: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 0040d499: PUSH EDX
// 0040d49a: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d49f: ADD ESP,0xc
// 0040d4a2: PUSH EBP
// 0040d4a3: MOV EBX,EAX
// 0040d4a5: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0xdc] (DATA)
// 0040d4a9: PUSH EAX
// 0040d4aa: MOV ECX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 0040d4b1: PUSH ECX
// 0040d4b2: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d4b7: MOV EDX,EAX
// 0040d4b9: ADD ESP,0xc
// 0040d4bc: MOV EAX,dword ptr [EAX]
// 0040d4be: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0040d4c5: LEA EAX,[EDX + 0x4]
// 0040d4c8: MOV EAX,dword ptr [EAX]
// 0040d4ca: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0040d4d1: LEA EAX,[EDX + 0x8]
// 0040d4d4: MOV EAX,dword ptr [EAX]
// 0040d4d6: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0040d4dd: FLD float ptr [0x00614454]
//   XREF to: 00614454 (READ)
// 0040d4e3: FLD float ptr [EBX]
// 0040d4e5: FMUL ST1
// 0040d4e7: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10c] (WRITE)
// 0040d4eb: FLD float ptr [EBX + 0x4]
// 0040d4ee: FMUL ST1
// 0040d4f0: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x108] (WRITE)
// 0040d4f4: FMUL float ptr [EBX + 0x8]
// 0040d4f7: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x104] (WRITE)
// 0040d4fb: FLD float ptr [0x00614458]
//   XREF to: 00614458 (READ)
// 0040d501: FLD float ptr [EDX]
// 0040d503: FMUL ST1
// 0040d505: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x4c] (WRITE)
// 0040d50c: FLD float ptr [EDX + 0x4]
// 0040d50f: FMUL ST1
// 0040d511: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x48] (WRITE)
// 0040d518: FMUL float ptr [EDX + 0x8]
// 0040d51b: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x64] (DATA)
// 0040d522: LEA EBX,[ESP + 0x114]
//   XREF to: Stack[-0x1c] (DATA)
// 0040d529: FLD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x4c] (READ)
// 0040d530: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10c] (READ)
// 0040d534: FLD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x48] (READ)
// 0040d53b: FXCH
// 0040d53d: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0xe8] (WRITE)
// 0040d541: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d547: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x108] (READ)
// 0040d54b: FXCH
// 0040d54d: FST float ptr [ESP + 0xec]
//   XREF to: Stack[-0x44] (WRITE)
// 0040d554: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x104] (READ)
// 0040d558: FXCH
// 0040d55a: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xe4] (WRITE)
// 0040d55e: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0xe0] (WRITE)
// 0040d562: FLD float ptr [EAX]
//   XREF to: Stack[-0x64] (DATA)
// 0040d564: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d56a: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 0040d56c: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x60] (READ)
// 0040d56f: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d575: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 0040d578: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x5c] (READ)
// 0040d57b: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d581: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0040d584: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x1c] (DATA)
// 0040d58b: PUSH EAX
// 0040d58c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d58e: PUSH EAX
// 0040d58f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d594: LEA EBX,[ESP + 0x14]
//   XREF to: Stack[-0x124] (DATA)
// 0040d598: ADD ESP,0x8
// 0040d59b: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0xe8] (DATA)
// 0040d59f: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d5a5: FLD float ptr [EAX]
//   XREF to: Stack[-0xe8] (DATA)
// 0040d5a7: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d5ad: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x124] (DATA)
// 0040d5af: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xe4] (READ)
// 0040d5b2: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d5b8: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x120] (WRITE)
// 0040d5bb: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xe0] (READ)
// 0040d5be: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d5c4: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x11c] (WRITE)
// 0040d5c7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x124] (DATA)
// 0040d5cb: PUSH EAX
// 0040d5cc: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d5ce: ADD EAX,0x30
// 0040d5d1: PUSH EAX
// 0040d5d2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d5d7: ADD ESP,0x8
// 0040d5da: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d5df: SUB ESP,0x30
// 0040d5e2: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040d5e4: MOV ECX,0xc
// 0040d5e9: MOV EDI,ESP
// 0040d5eb: LEA ESI,[EAX + 0x30]
// 0040d5ee: MOVSD.REP ES:EDI,ESI
// 0040d5f0: SUB ESP,0x30
// 0040d5f3: MOV ECX,0xc
// 0040d5f8: MOV EDI,ESP
// 0040d5fa: MOV ESI,EAX
// 0040d5fc: MOVSD.REP ES:EDI,ESI
// 0040d5fe: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0040d603: MOV EAX,EBP
// 0040d605: ADD ESP,0x60
// 0040d608: XOR AL,0x2
// 0040d60a: PUSH EAX
// 0040d60b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x130] (DATA)
// 0040d60f: PUSH EAX
// 0040d610: MOV EBX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 0040d617: PUSH EBX
// 0040d618: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d61d: ADD ESP,0xc
// 0040d620: PUSH EBP
// 0040d621: MOV EBX,EAX
// 0040d623: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0xc4] (DATA)
// 0040d627: PUSH EAX
// 0040d628: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 0040d62f: PUSH ESI
// 0040d630: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d635: MOV EDX,EAX
// 0040d637: ADD ESP,0xc
// 0040d63a: MOV EAX,dword ptr [EAX]
// 0040d63c: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0040d643: LEA EAX,[EDX + 0x4]
// 0040d646: MOV EAX,dword ptr [EAX]
// 0040d648: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0040d64f: LEA EAX,[EDX + 0x8]
// 0040d652: MOV EAX,dword ptr [EAX]
// 0040d654: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0040d65b: FLD float ptr [0x00614454]
//   XREF to: 00614454 (READ)
// 0040d661: FLD float ptr [EBX]
// 0040d663: FMUL ST1
// 0040d665: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x100] (WRITE)
// 0040d669: FLD float ptr [EBX + 0x4]
// 0040d66c: FMUL ST1
// 0040d66e: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0xfc] (WRITE)
// 0040d672: FMUL float ptr [EBX + 0x8]
// 0040d675: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xf8] (WRITE)
// 0040d679: FLD float ptr [0x00614458]
//   XREF to: 00614458 (READ)
// 0040d67f: FLD float ptr [EDX]
// 0040d681: FMUL ST1
// 0040d683: FSTP float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x40] (WRITE)
// 0040d68a: FLD float ptr [EDX + 0x4]
// 0040d68d: FMUL ST1
// 0040d68f: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0040d696: FMUL float ptr [EDX + 0x8]
// 0040d699: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x7c] (DATA)
// 0040d6a0: LEA EBX,[ESP + 0x108]
//   XREF to: Stack[-0x28] (DATA)
// 0040d6a7: FLD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x40] (READ)
// 0040d6ae: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x100] (READ)
// 0040d6b2: FLD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (READ)
// 0040d6b9: FXCH
// 0040d6bb: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x70] (WRITE)
// 0040d6c2: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d6c8: FADD float ptr [ESP + 0x34]
//   XREF to: Stack[-0xfc] (READ)
// 0040d6cc: FXCH
// 0040d6ce: FST float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x38] (WRITE)
// 0040d6d5: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0xf8] (READ)
// 0040d6d9: FXCH
// 0040d6db: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x6c] (WRITE)
// 0040d6e2: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x68] (WRITE)
// 0040d6e9: FLD float ptr [EAX]
//   XREF to: Stack[-0x7c] (DATA)
// 0040d6eb: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d6f1: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 0040d6f3: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x78] (READ)
// 0040d6f6: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d6fc: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 0040d6ff: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x74] (READ)
// 0040d702: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d708: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0040d70b: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x28] (DATA)
// 0040d712: PUSH EAX
// 0040d713: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d715: PUSH EAX
// 0040d716: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d71b: LEA EBX,[ESP + 0x80]
//   XREF to: Stack[-0xb8] (DATA)
// 0040d722: ADD ESP,0x8
// 0040d725: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x70] (DATA)
// 0040d72c: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d732: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 0040d734: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d73a: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xb8] (DATA)
// 0040d73c: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 0040d73f: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d745: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xb4] (WRITE)
// 0040d748: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 0040d74b: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d751: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xb0] (WRITE)
// 0040d754: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0xb8] (DATA)
// 0040d758: PUSH EAX
// 0040d759: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d75b: ADD EAX,0x30
// 0040d75e: PUSH EAX
// 0040d75f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d764: ADD ESP,0x8
// 0040d767: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d76c: SUB ESP,0x30
// 0040d76f: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040d771: MOV ECX,0xc
// 0040d776: MOV EDI,ESP
// 0040d778: LEA ESI,[EAX + 0x30]
// 0040d77b: MOVSD.REP ES:EDI,ESI
// 0040d77d: SUB ESP,0x30
// 0040d780: MOV ECX,0xc
// 0040d785: MOV EDI,ESP
// 0040d787: MOV ESI,EAX
// 0040d789: MOVSD.REP ES:EDI,ESI
// 0040d78b: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0040d790: MOV EAX,EBP
// 0040d792: ADD ESP,0x60
// 0040d795: XOR AL,0x4
// 0040d797: PUSH EAX
// 0040d798: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0xa0] (DATA)
// 0040d79f: PUSH EAX
// 0040d7a0: MOV EDI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 0040d7a7: PUSH EDI
// 0040d7a8: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d7ad: ADD ESP,0xc
// 0040d7b0: PUSH EBP
// 0040d7b1: MOV EBX,EAX
// 0040d7b3: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0xac] (DATA)
// 0040d7ba: PUSH EAX
// 0040d7bb: PUSH EDI
// 0040d7bc: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d7c1: MOV EDX,EAX
// 0040d7c3: ADD ESP,0xc
// 0040d7c6: MOV EAX,dword ptr [EAX]
// 0040d7c8: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0040d7cf: LEA EAX,[EDX + 0x4]
// 0040d7d2: MOV EAX,dword ptr [EAX]
// 0040d7d4: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0040d7db: LEA EAX,[EDX + 0x8]
// 0040d7de: MOV EAX,dword ptr [EAX]
// 0040d7e0: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0040d7e7: FLD float ptr [0x00614454]
//   XREF to: 00614454 (READ)
// 0040d7ed: FLD float ptr [EBX]
// 0040d7ef: FMUL ST1
// 0040d7f1: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (WRITE)
// 0040d7f8: FLD float ptr [EBX + 0x4]
// 0040d7fb: FMUL ST1
// 0040d7fd: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x84] (WRITE)
// 0040d804: FMUL float ptr [EBX + 0x8]
// 0040d807: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x80] (WRITE)
// 0040d80e: FLD float ptr [0x00614458]
//   XREF to: 00614458 (READ)
// 0040d814: FLD float ptr [EDX]
// 0040d816: FMUL ST1
// 0040d818: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (WRITE)
// 0040d81f: FLD float ptr [EDX + 0x4]
// 0040d822: FMUL ST1
// 0040d824: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (WRITE)
// 0040d82b: FMUL float ptr [EDX + 0x8]
// 0040d82e: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x58] (DATA)
// 0040d835: LEA EBX,[ESP + 0x9c]
//   XREF to: Stack[-0x94] (DATA)
// 0040d83c: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (READ)
// 0040d843: FADD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (READ)
// 0040d84a: FLD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (READ)
// 0040d851: FXCH
// 0040d853: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xf4] (WRITE)
// 0040d857: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d85d: FADD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x84] (READ)
// 0040d864: FXCH
// 0040d866: FST float ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (WRITE)
// 0040d86d: FADD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x80] (READ)
// 0040d874: FXCH
// 0040d876: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0xf0] (WRITE)
// 0040d87a: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0xec] (WRITE)
// 0040d87e: FLD float ptr [EAX]
//   XREF to: Stack[-0x58] (DATA)
// 0040d880: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d886: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x94] (DATA)
// 0040d888: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 0040d88b: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d891: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x90] (WRITE)
// 0040d894: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0040d897: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d89d: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8c] (WRITE)
// 0040d8a0: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x94] (DATA)
// 0040d8a7: PUSH EAX
// 0040d8a8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d8aa: PUSH EAX
// 0040d8ab: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d8b0: LEA EBX,[ESP + 0x20]
//   XREF to: Stack[-0x118] (DATA)
// 0040d8b4: ADD ESP,0x8
// 0040d8b7: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0xf4] (DATA)
// 0040d8bb: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d8c1: FLD float ptr [EAX]
//   XREF to: Stack[-0xf4] (DATA)
// 0040d8c3: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d8c9: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x118] (DATA)
// 0040d8cb: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xf0] (READ)
// 0040d8ce: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d8d4: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x114] (WRITE)
// 0040d8d7: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xec] (READ)
// 0040d8da: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d8e0: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x110] (WRITE)
// 0040d8e3: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x118] (DATA)
// 0040d8e7: PUSH EAX
// 0040d8e8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d8ea: ADD EAX,0x30
// 0040d8ed: PUSH EAX
// 0040d8ee: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d8f3: ADD ESP,0x8
// 0040d8f6: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d8fb: SUB ESP,0x30
// 0040d8fe: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040d900: MOV ECX,0xc
// 0040d905: MOV EDI,ESP
// 0040d907: LEA ESI,[EAX + 0x30]
// 0040d90a: MOVSD.REP ES:EDI,ESI
// 0040d90c: SUB ESP,0x30
// 0040d90f: MOV ECX,0xc
// 0040d914: MOV EDI,ESP
// 0040d916: MOV ESI,EAX
// 0040d918: INC EBP
// 0040d919: MOVSD.REP ES:EDI,ESI
// 0040d91b: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0040d920: ADD ESP,0x60
// 0040d923: CMP EBP,0x8
// 0040d926: JL 0x0040d488
//   XREF to: 0040d488 (CONDITIONAL_JUMP)
// 0040d92c: ADD ESP,0x120
// 0040d932: POP EBP
// 0040d933: POP EDI
// 0040d934: POP ESI
// 0040d935: POP EBX
// 0040d936: RET
