// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
// Address Range: [[004a2050, 004a250a]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools * this_ptr, CVector3f * corner1, CVector3f * corner2, int color_value)
// Cross-references:
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581da5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583571 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510 (004a2510) at 004a256e [UNCONDITIONAL_CALL]
// Globals:
//   float g_CubeEdgeScale1 = 0.2000000
//   float g_CubeEdgeScale2 = 0.8000000
//   WatcomTypeInfo g_CVectorTypeInfo
//   float g_WorldToScreenScale2 = 256
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 DAT_00688044
//   undefined4 DAT_00688048
//   int g_ActiveRenderColor
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_matrix.c_transformToCache_FUN_0050cd70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
          (CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  uint uVar1;
  int iVar2;
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  SRenderVertex *pSVar4;
  float fVar5;
  int *piVar6;
  byte bVar7;
  int in_stack_00000014;
  SRenderVertex *in_stack_fffffe9c;
  SRenderVertex *in_stack_fffffea0;
  SRenderVertex *in_stack_fffffea8;
  SRenderVertex *in_stack_fffffeac;
  SRenderVertex *in_stack_fffffeb4;
  SRenderVertex *in_stack_fffffeb8;
  int aiStack_134 [3];
  int aiStack_128 [2];
  undefined4 uStack_120;
  float afStack_f0 [20];
  undefined1 local_a0 [8];
  int local_98;
  int local_94;
  undefined1 local_88 [8];
  float local_80;
  float local_7c;
  float local_60;
  float local_5c;
  float local_58;
  float local_3c;
  float local_38;
  undefined1 local_34 [8];
  float local_2c;
  float local_28;
  uint local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  uStack_120 = 0x4a2079;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffef0,8,&g_CVectorTypeInfo);
  pfVar3 = (float *)&stack0xfffffef4;
  uVar1 = 0;
  do {
    local_18 = corner2->x;
    iVar2 = uVar1 * 0xc;
    while( true ) {
      *(float *)((int)afStack_f0 + iVar2 + -0x1c) = local_18;
      if ((uVar1 & 2) == 0) {
        fVar5 = corner2->y;
      }
      else {
        fVar5 = corner1->y;
      }
      *(float *)((int)afStack_f0 + iVar2 + -0x18) = fVar5;
      if ((uVar1 & 4) == 0) {
        local_14 = corner2->z;
      }
      else {
        local_14 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)((int)afStack_f0 + iVar2 + -0x14) = local_14;
      if (7 < (int)uVar1) {
        local_1c = 0;
        g_ActiveRenderColor = in_stack_00000014;
        do {
          uVar1 = local_1c ^ 1;
          local_88._0_4_ = (int)ROUND(*pfVar3 * g_WorldToScreenScale2);
          local_88._4_4_ = (int)ROUND(pfVar3[1] * g_WorldToScreenScale2);
          local_80 = (float)(int)ROUND(pfVar3[2] * g_WorldToScreenScale2);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_88);
          local_60 = afStack_f0[uVar1 * 3 + -7] * g_CubeEdgeScale1;
          local_5c = afStack_f0[uVar1 * 3 + -6] * g_CubeEdgeScale1;
          local_58 = afStack_f0[uVar1 * 3 + -5] * g_CubeEdgeScale1;
          local_34._4_4_ = *pfVar3 * g_CubeEdgeScale2;
          local_2c = pfVar3[1] * g_CubeEdgeScale2;
          local_28 = pfVar3[2] * g_CubeEdgeScale2;
          local_3c = *pfVar3 * g_CubeEdgeScale2 + afStack_f0[uVar1 * 3 + -7] * g_CubeEdgeScale1;
          local_38 = pfVar3[1] * g_CubeEdgeScale2 + afStack_f0[uVar1 * 3 + -6] * g_CubeEdgeScale1;
          local_34._0_4_ = local_28 + afStack_f0[uVar1 * 3 + -5] * g_CubeEdgeScale1;
          local_88._4_4_ = (undefined4)ROUND(local_3c * g_WorldToScreenScale2);
          local_80 = (float)(int)ROUND(local_38 * g_WorldToScreenScale2);
          local_7c = (float)(int)ROUND((float)local_34._0_4_ * g_WorldToScreenScale2);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)(local_88 + 4));
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = aiStack_134;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffe9c;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe9c,in_stack_fffffea0);
          uVar1 = (uint)fVar5 ^ 2;
          local_a0._0_4_ = (int)ROUND(*pfVar3 * g_WorldToScreenScale2);
          local_a0._4_4_ = (int)ROUND(pfVar3[1] * g_WorldToScreenScale2);
          local_98 = (int)ROUND(pfVar3[2] * g_WorldToScreenScale2);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_a0);
          local_88._4_4_ = afStack_f0[uVar1 * 3 + -4] * g_CubeEdgeScale1;
          local_80 = afStack_f0[uVar1 * 3 + -3] * g_CubeEdgeScale1;
          local_7c = afStack_f0[uVar1 * 3 + -2] * g_CubeEdgeScale1;
          local_60 = *pfVar3 * g_CubeEdgeScale2;
          local_5c = pfVar3[1] * g_CubeEdgeScale2;
          local_58 = pfVar3[2] * g_CubeEdgeScale2;
          local_18 = *pfVar3 * g_CubeEdgeScale2 + afStack_f0[uVar1 * 3 + -4] * g_CubeEdgeScale1;
          local_14 = pfVar3[1] * g_CubeEdgeScale2 + afStack_f0[uVar1 * 3 + -3] * g_CubeEdgeScale1;
          fVar5 = local_58 + afStack_f0[uVar1 * 3 + -2] * g_CubeEdgeScale1;
          local_a0._4_4_ = (undefined4)ROUND(local_18 * g_WorldToScreenScale2);
          local_98 = (int)ROUND(local_14 * g_WorldToScreenScale2);
          local_94 = (int)ROUND(fVar5 * g_WorldToScreenScale2);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)(local_a0 + 4));
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = aiStack_128;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffea8;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffea8,in_stack_fffffeac);
          uVar1 = unaff_EBX ^ 4;
          local_34._0_4_ = (int)ROUND(*pfVar3 * g_WorldToScreenScale2);
          local_34._4_4_ = (int)ROUND(pfVar3[1] * g_WorldToScreenScale2);
          local_2c = (float)(int)ROUND(pfVar3[2] * g_WorldToScreenScale2);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_34);
          local_60 = afStack_f0[uVar1 * 3 + -1] * g_CubeEdgeScale1;
          local_5c = afStack_f0[uVar1 * 3] * g_CubeEdgeScale1;
          local_58 = g_CubeEdgeScale1 * afStack_f0[uVar1 * 3 + 1];
          local_88._4_4_ = *pfVar3 * g_CubeEdgeScale2;
          local_80 = pfVar3[1] * g_CubeEdgeScale2;
          local_7c = g_CubeEdgeScale2 * pfVar3[2];
          local_3c = *pfVar3 * g_CubeEdgeScale2 + afStack_f0[uVar1 * 3 + -1] * g_CubeEdgeScale1;
          local_38 = pfVar3[1] * g_CubeEdgeScale2 + afStack_f0[uVar1 * 3] * g_CubeEdgeScale1;
          local_34._0_4_ = local_7c + g_CubeEdgeScale1 * afStack_f0[uVar1 * 3 + 1];
          local_34._4_4_ = (undefined4)ROUND(local_3c * g_WorldToScreenScale2);
          local_2c = (float)(int)ROUND(local_38 * g_WorldToScreenScale2);
          local_28 = (float)(int)ROUND((float)local_34._0_4_ * g_WorldToScreenScale2);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)(local_34 + 4));
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = (int *)&stack0xfffffee4;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffeb4;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb4,in_stack_fffffeb8);
          corner1 = (CVector3f *)((int)&corner1->x + 1);
          pfVar3 = pfVar3 + 3;
        } while ((int)corner1 < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      local_18 = corner1->x;
      iVar2 = iVar2 + 0xc;
    }
  } while( true );
}


// Assembly code:
// 004a2050: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// 004a2051: PUSH ESI
// 004a2052: PUSH EDI
// 004a2053: PUSH EBP
// 004a2054: SUB ESP,0x100
// 004a205a: MOV EBX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 004a2061: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0xc] (READ)
// 004a2068: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004a206d: PUSH 0x8
// 004a206f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 004a2073: PUSH EAX
// 004a2074: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004a2079: ADD ESP,0xc
// 004a207c: XOR EAX,EAX
// 004a207e: MOV EDX,dword ptr [ESI]
//   Label: LAB_004a207e
// 004a2080: MOV dword ptr [ESP + 0xf4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a2087: IMUL EDX,EAX,0xc
// 004a208a: MOV EDI,dword ptr [ESP + 0xf4]
//   Label: LAB_004a208a
//   XREF to: Stack[-0x1c] (READ)
// 004a2091: MOV dword ptr [ESP + EDX*0x1],EDI
//   XREF to: Stack[-0x110] (DATA)
// 004a2094: TEST AL,0x2
// 004a2096: JNZ 0x004a24fb
//   XREF to: 004a24fb (CONDITIONAL_JUMP)
// 004a209c: MOV EDI,dword ptr [ESI + 0x4]
// 004a209f: MOV dword ptr [ESP + 0xfc],EDI
//   Label: LAB_004a209f
//   XREF to: Stack[-0x14] (WRITE)
// 004a20a6: MOV EDI,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 004a20ad: MOV dword ptr [ESP + EDX*0x1 + 0x4],EDI
// 004a20b1: TEST AL,0x4
// 004a20b3: JZ 0x004a2503
//   XREF to: 004a2503 (CONDITIONAL_JUMP)
// 004a20b9: MOV EDI,dword ptr [EBX + 0x8]
// 004a20bc: MOV dword ptr [ESP + 0xf8],EDI
//   Label: LAB_004a20bc
//   XREF to: Stack[-0x18] (WRITE)
// 004a20c3: ADD EDX,0xc
// 004a20c6: MOV EDI,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 004a20cd: INC EAX
// 004a20ce: MOV dword ptr [ESP + EDX*0x1 + -0x4],EDI
// 004a20d2: CMP EAX,0x8
// 004a20d5: JL 0x004a24e5
//   XREF to: 004a24e5 (CONDITIONAL_JUMP)
// 004a20db: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x10] (READ)
// 004a20e2: XOR EDX,EDX
// 004a20e4: MOV EBP,ESP
// 004a20e6: MOV dword ptr [ESP + 0xf0],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004a20ed: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a20f2: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_004a20f2
//   XREF to: Stack[-0x20] (READ)
// 004a20f9: XOR AL,0x1
// 004a20fb: IMUL EAX,EAX,0xc
// 004a20fe: MOV ESI,ESP
// 004a2100: LEA EBX,[ESP + 0x84]
//   XREF to: Stack[-0x8c] (DATA)
// 004a2107: ADD ESI,EAX
// 004a2109: MOV EAX,EBP
// 004a210b: FLD float ptr [EAX]
//   XREF to: Stack[-0x110] (DATA)
// 004a210d: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2113: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x8c] (DATA)
// 004a2115: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 004a2118: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a211e: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x88] (WRITE)
// 004a2121: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 004a2124: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a212a: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x84] (WRITE)
// 004a212d: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x8c] (DATA)
// 004a2134: PUSH EAX
// 004a2135: PUSH 0x0
// 004a2137: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a213c: FLD float ptr [ESI]
// 004a213e: FMUL float ptr [0x006235c6]
//   XREF to: 006235c6 (READ)
// 004a2144: ADD ESP,0x8
// 004a2147: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (WRITE)
// 004a214e: FLD float ptr [ESI + 0x4]
// 004a2151: FMUL float ptr [0x006235c6]
//   XREF to: 006235c6 (READ)
// 004a2157: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x64] (WRITE)
// 004a215e: FLD float ptr [ESI + 0x8]
// 004a2161: FMUL float ptr [0x006235c6]
//   XREF to: 006235c6 (READ)
// 004a2167: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x60] (WRITE)
// 004a216e: FLD float ptr [EBP]
//   XREF to: Stack[-0x110] (DATA)
// 004a2171: FMUL float ptr [0x006235ca]
//   XREF to: 006235ca (READ)
// 004a2177: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x38] (WRITE)
// 004a217e: FLD float ptr [EBP + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 004a2181: FMUL float ptr [0x006235ca]
//   XREF to: 006235ca (READ)
// 004a2187: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (WRITE)
// 004a218e: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 004a2191: FMUL float ptr [0x006235ca]
//   XREF to: 006235ca (READ)
// 004a2197: LEA EBX,[ESP + 0x84]
//   XREF to: Stack[-0x8c] (DATA)
// 004a219e: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x44] (DATA)
// 004a21a5: FLD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x38] (READ)
// 004a21ac: FADD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (READ)
// 004a21b3: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 004a21ba: FXCH
// 004a21bc: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x44] (WRITE)
// 004a21c3: FADD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x64] (READ)
// 004a21ca: FXCH
// 004a21cc: FST float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x30] (WRITE)
// 004a21d3: FADD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x60] (READ)
// 004a21da: FXCH
// 004a21dc: FSTP float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x40] (WRITE)
// 004a21e3: FSTP float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x3c] (WRITE)
// 004a21ea: FLD float ptr [EAX]
//   XREF to: Stack[-0x44] (DATA)
// 004a21ec: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a21f2: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x8c] (DATA)
// 004a21f4: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x40] (READ)
// 004a21f7: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a21fd: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x88] (WRITE)
// 004a2200: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x3c] (READ)
// 004a2203: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2209: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x84] (WRITE)
// 004a220c: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x8c] (DATA)
// 004a2213: PUSH EAX
// 004a2214: PUSH 0x1
// 004a2216: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a221b: ADD ESP,0x8
// 004a221e: MOV ESI,0x688044
//   XREF to: 00688044 (DATA)
// 004a2223: SUB ESP,0x30
// 004a2226: MOV ECX,0xc
// 004a222b: MOV EDI,ESP
// 004a222d: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688044 (READ)
//   XREF to: 00688048 (READ)
// 004a222f: SUB ESP,0x30
// 004a2232: MOV ECX,0xc
// 004a2237: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004a223c: MOV EDI,ESP
// 004a223e: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (READ)
//   XREF to: 00688018 (READ)
// 004a2240: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004a2245: ADD ESP,0x60
// 004a2248: MOV ESI,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x20] (READ)
// 004a224f: XOR SI,0x2
// 004a2253: IMUL ESI,ESI,0xc
// 004a2256: MOV EAX,ESP
// 004a2258: LEA EBX,[ESP + 0x60]
//   XREF to: Stack[-0xb0] (DATA)
// 004a225c: ADD ESI,EAX
// 004a225e: MOV EAX,EBP
// 004a2260: FLD float ptr [EAX]
//   XREF to: Stack[-0x110] (DATA)
// 004a2262: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2268: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xb0] (DATA)
// 004a226a: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 004a226d: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2273: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xac] (WRITE)
// 004a2276: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 004a2279: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a227f: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xa8] (WRITE)
// 004a2282: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0xb0] (DATA)
// 004a2286: PUSH EAX
// 004a2287: PUSH 0x0
// 004a2289: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a228e: FLD float ptr [ESI]
// 004a2290: FMUL float ptr [0x006235c6]
//   XREF to: 006235c6 (READ)
// 004a2296: ADD ESP,0x8
// 004a2299: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x98] (WRITE)
// 004a229d: FLD float ptr [ESI + 0x4]
// 004a22a0: FMUL float ptr [0x006235c6]
//   XREF to: 006235c6 (READ)
// 004a22a6: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x94] (WRITE)
// 004a22aa: FLD float ptr [ESI + 0x8]
// 004a22ad: FMUL float ptr [0x006235c6]
//   XREF to: 006235c6 (READ)
// 004a22b3: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x90] (WRITE)
// 004a22ba: FLD float ptr [EBP]
//   XREF to: Stack[-0x110] (DATA)
// 004a22bd: FMUL float ptr [0x006235ca]
//   XREF to: 006235ca (READ)
// 004a22c3: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x74] (WRITE)
// 004a22ca: FLD float ptr [EBP + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 004a22cd: FMUL float ptr [0x006235ca]
//   XREF to: 006235ca (READ)
// 004a22d3: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (WRITE)
// 004a22da: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 004a22dd: FMUL float ptr [0x006235ca]
//   XREF to: 006235ca (READ)
// 004a22e3: FLD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x74] (READ)
// 004a22ea: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x98] (READ)
// 004a22ee: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (READ)
// 004a22f5: FXCH
// 004a22f7: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x2c] (WRITE)
// 004a22fe: FADD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x94] (READ)
// 004a2302: FXCH
// 004a2304: FST float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x6c] (WRITE)
// 004a230b: FADD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x90] (READ)
// 004a2312: FXCH
// 004a2314: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (WRITE)
// 004a231b: FSTP float ptr [ESP + 0xec]
//   XREF to: Stack[-0x24] (WRITE)
// 004a2322: LEA EBX,[ESP + 0x60]
//   XREF to: Stack[-0xb0] (DATA)
// 004a2326: LEA EAX,[ESP + 0xe4]
//   XREF to: Stack[-0x2c] (DATA)
// 004a232d: FLD float ptr [EAX]
//   XREF to: Stack[-0x2c] (DATA)
// 004a232f: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2335: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xb0] (DATA)
// 004a2337: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 004a233a: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2340: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xac] (WRITE)
// 004a2343: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 004a2346: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a234c: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xa8] (WRITE)
// 004a234f: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0xb0] (DATA)
// 004a2353: PUSH EAX
// 004a2354: PUSH 0x1
// 004a2356: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a235b: ADD ESP,0x8
// 004a235e: MOV ESI,0x688044
//   XREF to: 00688044 (DATA)
// 004a2363: SUB ESP,0x30
// 004a2366: MOV ECX,0xc
// 004a236b: MOV EDI,ESP
// 004a236d: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688044 (READ)
//   XREF to: 00688048 (READ)
// 004a236f: SUB ESP,0x30
// 004a2372: MOV ECX,0xc
// 004a2377: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004a237c: MOV EDI,ESP
// 004a237e: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (READ)
//   XREF to: 00688018 (READ)
// 004a2380: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004a2385: ADD ESP,0x60
// 004a2388: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x20] (READ)
// 004a238f: XOR AL,0x4
// 004a2391: IMUL EAX,EAX,0xc
// 004a2394: MOV ESI,ESP
// 004a2396: LEA EBX,[ESP + 0xc0]
//   XREF to: Stack[-0x50] (DATA)
// 004a239d: ADD ESI,EAX
// 004a239f: MOV EAX,EBP
// 004a23a1: FLD float ptr [EAX]
//   XREF to: Stack[-0x110] (DATA)
// 004a23a3: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a23a9: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x50] (DATA)
// 004a23ab: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 004a23ae: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a23b4: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 004a23b7: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 004a23ba: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a23c0: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 004a23c3: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x50] (DATA)
// 004a23ca: PUSH EAX
// 004a23cb: PUSH 0x0
// 004a23cd: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a23d2: FLD float ptr [0x006235c6]
//   XREF to: 006235c6 (READ)
// 004a23d8: FLD float ptr [ESI]
// 004a23da: FMUL ST1
// 004a23dc: ADD ESP,0x8
// 004a23df: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x80] (WRITE)
// 004a23e6: FLD float ptr [ESI + 0x4]
// 004a23e9: FMUL ST1
// 004a23eb: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x7c] (WRITE)
// 004a23f2: FMUL float ptr [ESI + 0x8]
// 004a23f5: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x78] (WRITE)
// 004a23fc: FLD float ptr [0x006235ca]
//   XREF to: 006235ca (READ)
// 004a2402: FLD float ptr [EBP]
//   XREF to: Stack[-0x110] (DATA)
// 004a2405: FMUL ST1
// 004a2407: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xa4] (WRITE)
// 004a240b: FLD float ptr [EBP + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 004a240e: FMUL ST1
// 004a2410: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (WRITE)
// 004a2414: FMUL float ptr [EBP + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 004a2417: LEA EBX,[ESP + 0xc0]
//   XREF to: Stack[-0x50] (DATA)
// 004a241e: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x5c] (DATA)
// 004a2425: FLD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xa4] (READ)
// 004a2429: FADD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x80] (READ)
// 004a2430: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0xa0] (READ)
// 004a2434: FXCH
// 004a2436: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x5c] (WRITE)
// 004a243d: FADD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x7c] (READ)
// 004a2444: FXCH
// 004a2446: FST float ptr [ESP + 0x74]
//   XREF to: Stack[-0x9c] (WRITE)
// 004a244a: FADD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x78] (READ)
// 004a2451: FXCH
// 004a2453: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x58] (WRITE)
// 004a245a: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x54] (WRITE)
// 004a2461: FLD float ptr [EAX]
//   XREF to: Stack[-0x5c] (DATA)
// 004a2463: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2469: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x50] (DATA)
// 004a246b: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x58] (READ)
// 004a246e: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2474: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 004a2477: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x54] (READ)
// 004a247a: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2480: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 004a2483: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x50] (DATA)
// 004a248a: PUSH EAX
// 004a248b: PUSH 0x1
// 004a248d: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a2492: ADD ESP,0x8
// 004a2495: MOV ESI,0x688044
//   XREF to: 00688044 (DATA)
// 004a249a: SUB ESP,0x30
// 004a249d: MOV ECX,0xc
// 004a24a2: MOV EDI,ESP
// 004a24a4: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688044 (READ)
//   XREF to: 00688048 (READ)
// 004a24a6: SUB ESP,0x30
// 004a24a9: MOV ECX,0xc
// 004a24ae: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004a24b3: MOV EDI,ESP
// 004a24b5: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (READ)
//   XREF to: 00688018 (READ)
// 004a24b7: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004a24bc: ADD ESP,0x60
// 004a24bf: MOV ECX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x20] (READ)
// 004a24c6: INC ECX
// 004a24c7: ADD EBP,0xc
// 004a24ca: MOV dword ptr [ESP + 0xf0],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004a24d1: CMP ECX,0x8
// 004a24d4: JL 0x004a20f2
//   XREF to: 004a20f2 (CONDITIONAL_JUMP)
// 004a24da: ADD ESP,0x100
// 004a24e0: POP EBP
// 004a24e1: POP EDI
// 004a24e2: POP ESI
// 004a24e3: POP EBX
// 004a24e4: RET
// 004a24e5: TEST AL,0x1
//   Label: LAB_004a24e5
// 004a24e7: JZ 0x004a207e
//   XREF to: 004a207e (CONDITIONAL_JUMP)
// 004a24ed: MOV EDI,dword ptr [EBX]
// 004a24ef: MOV dword ptr [ESP + 0xf4],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004a24f6: JMP 0x004a208a
//   XREF to: 004a208a (UNCONDITIONAL_JUMP)
// 004a24fb: MOV EDI,dword ptr [EBX + 0x4]
//   Label: LAB_004a24fb
// 004a24fe: JMP 0x004a209f
//   XREF to: 004a209f (UNCONDITIONAL_JUMP)
// 004a2503: MOV EDI,dword ptr [ESI + 0x8]
//   Label: LAB_004a2503
// 004a2506: JMP 0x004a20bc
//   XREF to: 004a20bc (UNCONDITIONAL_JUMP)
