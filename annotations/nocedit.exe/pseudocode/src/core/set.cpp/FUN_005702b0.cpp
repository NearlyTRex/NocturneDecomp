// Name: core_set.cpp_FUN_005702b0
// Address: 005702b0
// Address Range: [[005702b0, 005706f4]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_005702b0()
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_00570870 (00570870) at 005708d3 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00662850 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_CurrentAlphaValue = 0xff
//   CGame* g_CGamePtr = 02d81a9c
//   SMRGLTextureBasic DAT_006813e4
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   undefined4 DAT_02d81c90
//   undefined4 DAT_032c1c68
//   undefined4 DAT_032c1c6c
//   undefined4 DAT_032c1c70
//   CVector3i[20000] g_TransformedVertexArray
//   undefined4 DAT_032cd850
//   undefined4 DAT_032cd854
//   CVector3f[20000] g_VertexNormalArray
//   undefined4 DAT_033081d0
//   undefined4 DAT_033081d4
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0

#include "nocturne.h"

void core_set_cpp_FUN_005702b0(void)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  byte bVar6;
  int in_stack_00000004;
  ushort *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int aiStackY_1010 [956];
  CVector3i *in_stack_fffffef4;
  SSurfaceNormal local_108;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  CVector3i aCStack_40 [2];
  int local_28;
  int local_24 [4];
  int local_14;
  
  bVar6 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_006813e4);
  if (g_CGamePtr->field62_0x1f4 == 2) {
    in_stack_00000010 = g_CurrentAlphaValue << 8;
  }
  else {
    lVar2 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)in_stack_00000010;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_fffffef4);
  if (0 < in_stack_0000000c) {
    do {
      local_108.dot_product = 0;
      local_108.normal_z = 0;
      local_108.normal_y = 0;
      local_108.normal_x = 0;
      local_108.vertex_count = 3;
      local_108.vertex_index_1 = (uint)*in_stack_00000008;
      local_108.vertex_index_2 = (uint)in_stack_00000008[1];
      local_108.vertex_index_3 = (uint)in_stack_00000008[2];
      iVar3 = (uint)in_stack_00000008[3] << 8;
      local_108.field7_0x1c[0] = (char)iVar3;
      local_108.field7_0x1c[1] = (char)((uint)iVar3 >> 8);
      local_108.field7_0x1c[2] = (char)((uint)iVar3 >> 0x10);
      local_108.field7_0x1c[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[4] << 8;
      local_108.field9_0x28[0] = (char)iVar3;
      local_108.field9_0x28[1] = (char)((uint)iVar3 >> 8);
      local_108.field9_0x28[2] = (char)((uint)iVar3 >> 0x10);
      local_108.field9_0x28[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[5] << 8;
      local_108.field11_0x34[0] = (char)iVar3;
      local_108.field11_0x34[1] = (char)((uint)iVar3 >> 8);
      local_108.field11_0x34[2] = (char)((uint)iVar3 >> 0x10);
      local_108.field11_0x34[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[6] << 8;
      local_108.field7_0x1c[4] = (char)iVar3;
      local_108.field7_0x1c[5] = (char)((uint)iVar3 >> 8);
      local_108.field7_0x1c[6] = (char)((uint)iVar3 >> 0x10);
      local_108.field7_0x1c[7] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[7] << 8;
      local_108.field9_0x28[4] = (char)iVar3;
      local_108.field9_0x28[5] = (char)((uint)iVar3 >> 8);
      local_108.field9_0x28[6] = (char)((uint)iVar3 >> 0x10);
      local_108.field9_0x28[7] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[8] << 8;
      local_108.field11_0x34[4] = (char)iVar3;
      local_108.field11_0x34[5] = (char)((uint)iVar3 >> 8);
      local_108.field11_0x34[6] = (char)((uint)iVar3 >> 0x10);
      local_108.field11_0x34[7] = (char)((uint)iVar3 >> 0x18);
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(g_TransformedVertexArray,&local_108);
      }
      iVar3 = 0;
      if (0 < local_108.vertex_count) {
        unaff_EDI = 0;
        iVar5 = 0;
        do {
          iVar4 = *(int *)(local_108.field7_0x1c + unaff_EDI + -4);
          if ((((*(int *)(in_stack_00000004 + 0x15ae84) == 0) ||
               (1.0 <= ABS(g_VertexNormalArray[iVar4].x))) ||
              (1.0 <= ABS(g_VertexNormalArray[iVar4].y))) ||
             (1.0 <= ABS(g_VertexNormalArray[iVar4].z))) {
            local_24[2] = (int)ROUND(g_VertexNormalArray[iVar4].x);
            local_24[3] = (int)ROUND(g_VertexNormalArray[iVar4].y);
            local_14 = (int)ROUND(g_VertexNormalArray[iVar4].z);
          }
          else {
            aCStack_40[0].x =
                 (int)ROUND(DAT_032c1c68 * FLOAT_00662850) - g_TransformedVertexArray[iVar4].x;
            aCStack_40[0].y =
                 (int)ROUND(DAT_032c1c6c * FLOAT_00662850) - g_TransformedVertexArray[iVar4].y;
            aCStack_40[0].z =
                 (int)ROUND(DAT_032c1c70 * FLOAT_00662850) - g_TransformedVertexArray[iVar4].z;
            engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(aCStack_40);
            local_24[2] = local_28;
            local_24[(uint)bVar6 * -2 + 3] = local_24[(uint)bVar6 * -2];
            local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          }
          iVar3 = iVar3 + 1;
          iVar4 = 0x8000 - local_24[3];
          *(int *)((int)&uStack_c0 + iVar5) = local_24[2] + 0x8000;
          *(int *)((int)&uStack_80 + iVar5) = iVar4;
          unaff_EDI = unaff_EDI + 0xc;
          iVar5 = iVar5 + 4;
        } while (iVar3 < local_108.vertex_count);
      }
      if (1 < local_108.vertex_count) {
        iVar3 = 4;
        do {
          if ((0x8000 < uStack_c0) && (*(int *)((int)&uStack_c0 + iVar3) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_c0 + iVar3 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_c0 < -0x8000) && (0x8000 < *(int *)((int)&uStack_c0 + iVar3))) {
            *(int *)((int)&uStack_c0 + iVar3) = *(int *)((int)&uStack_c0 + iVar3) + -0x10000;
          }
          if ((0x8000 < uStack_80) && (*(int *)((int)&uStack_80 + iVar3) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_80 + iVar3 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_80 < -0x8000) && (0x8000 < *(int *)((int)&uStack_80 + iVar3))) {
            *(int *)((int)&uStack_80 + iVar3) = *(int *)((int)&uStack_80 + iVar3) + -0x10000;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < local_108.vertex_count * 4);
      }
      iVar3 = 0;
      if (0 < local_108.vertex_count) {
        iVar4 = 0;
        iVar5 = 0;
        do {
          *(int *)(local_108.field7_0x1c + iVar5) = *(int *)((int)&uStack_c0 + iVar4) << 8;
          *(int *)(local_108.field7_0x1c + iVar5 + 4) = *(int *)((int)&uStack_80 + iVar4) << 8;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
          iVar5 = iVar5 + 0xc;
        } while (iVar3 < local_108.vertex_count);
      }
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        local_108.normal_z = 0;
        local_108.normal_y = 0;
        local_108.normal_x = 0;
        local_108.dot_product = 0;
      }
      if (in_stack_00000010 < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&local_108);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&local_108);
      }
      in_stack_00000008 = in_stack_00000008 + 9;
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 005702b0: PUSH EBX
//   Label: core_set.cpp_FUN_005702b0
// 005702b1: PUSH ESI
// 005702b2: PUSH EDI
// 005702b3: PUSH EBP
// 005702b4: MOV EBP,ESP
// 005702b6: SUB ESP,0x108
// 005702bc: AND ESP,0xfffffff8
// 005702bf: PUSH 0x6813e4
//   XREF to: 006813e4 (DATA)
// 005702c4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005702ca: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005702cb: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005702d0: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005702d5: MOV ECX,dword ptr [EAX + 0x1f4]
//   XREF to: 02d81c90 (READ)
// 005702db: ADD ESP,0x8
// 005702de: CMP ECX,0x2
// 005702e1: JNZ 0x00570672
//   XREF to: 00570672 (CONDITIONAL_JUMP)
// 005702e7: MOV EAX,[0x006793b4]
//   XREF to: 006793b4 (READ)
// 005702ec: SHL EAX,0x8
// 005702ef: MOV dword ptr [EBP + 0x20],EAX
//   XREF to: Stack[0x10] (WRITE)
// 005702f2: MOV EAX,[0x006703ec]
//   Label: LAB_005702f2
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005702f7: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005702f8: LEA ESI,[ESP + 0xd8]
//   XREF to: Stack[-0x44] (DATA)
// 005702ff: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 00570304: ADD ESP,0x4
// 00570307: XOR EDX,EDX
// 00570309: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0057030c: MOV dword ptr [ESP + 0xf8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00570313: TEST ECX,ECX
// 00570315: JLE 0x0057066b
//   XREF to: 0057066b (CONDITIONAL_JUMP)
// 0057031b: XOR EDX,EDX
//   Label: LAB_0057031b
// 0057031d: MOV EAX,0x3
// 00570322: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x104] (WRITE)
// 00570326: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x108] (WRITE)
// 0057032a: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x10c] (WRITE)
// 0057032e: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x110] (WRITE)
// 00570332: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00570335: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 00570339: XOR EAX,EAX
// 0057033b: MOV AX,word ptr [EDX]
// 0057033e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 00570342: XOR EAX,EAX
// 00570344: MOV AX,word ptr [EDX + 0x2]
// 00570348: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 0057034c: XOR EAX,EAX
// 0057034e: MOV AX,word ptr [EDX + 0x4]
// 00570352: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 00570356: XOR EAX,EAX
// 00570358: MOV AX,word ptr [EDX + 0x6]
// 0057035c: SHL EAX,0x8
// 0057035f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 00570363: XOR EAX,EAX
// 00570365: MOV AX,word ptr [EDX + 0x8]
// 00570369: SHL EAX,0x8
// 0057036c: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 00570370: XOR EAX,EAX
// 00570372: MOV AX,word ptr [EDX + 0xa]
// 00570376: SHL EAX,0x8
// 00570379: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 0057037d: XOR EAX,EAX
// 0057037f: MOV AX,word ptr [EDX + 0xc]
// 00570383: SHL EAX,0x8
// 00570386: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 0057038a: XOR EAX,EAX
// 0057038c: MOV AX,word ptr [EDX + 0xe]
// 00570390: SHL EAX,0x8
// 00570393: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 00570397: XOR EAX,EAX
// 00570399: MOV AX,word ptr [EDX + 0x10]
// 0057039d: SHL EAX,0x8
// 005703a0: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005703a4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005703a7: CMP dword ptr [EAX + 0x15ae84],0x0
// 005703ae: JNZ 0x005706ae
//   XREF to: 005706ae (CONDITIONAL_JUMP)
// 005703b4: XOR EAX,EAX
//   Label: LAB_005703b4
// 005703b6: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x114] (READ)
// 005703ba: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005703c1: TEST EDX,EDX
// 005703c3: JLE 0x0057052f
//   XREF to: 0057052f (CONDITIONAL_JUMP)
// 005703c9: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005703d0: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005703d7: MOV ECX,dword ptr [ESP + 0xfc]
//   Label: LAB_005703d7
//   XREF to: Stack[-0x1c] (READ)
// 005703de: MOV ECX,dword ptr [ESP + ECX*0x1 + 0x18]
// 005703e2: IMUL ECX,ECX,0xc
// 005703e5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005703e8: MOV EDX,0x33081cc
//   XREF to: 033081cc (DATA)
// 005703ed: MOV EBX,dword ptr [EAX + 0x15ae84]
// 005703f3: ADD EDX,ECX
// 005703f5: TEST EBX,EBX
// 005703f7: JZ 0x005706c3
//   XREF to: 005706c3 (CONDITIONAL_JUMP)
// 005703fd: FLD float ptr [EDX]
//   XREF to: 033081cc (DATA)
// 005703ff: FABS
// 00570401: FLD1
// 00570403: FCOMPP
// 00570405: FNSTSW AX
// 00570407: SAHF
// 00570408: JBE 0x005706c3
//   XREF to: 005706c3 (CONDITIONAL_JUMP)
// 0057040e: FLD float ptr [EDX + 0x4]
//   XREF to: 033081d0 (DATA)
// 00570411: FABS
// 00570413: FLD1
// 00570415: FCOMPP
// 00570417: FNSTSW AX
// 00570419: SAHF
// 0057041a: JBE 0x005706c3
//   XREF to: 005706c3 (CONDITIONAL_JUMP)
// 00570420: FLD float ptr [EDX + 0x8]
//   XREF to: 033081d4 (DATA)
// 00570423: FABS
// 00570425: FLD1
// 00570427: FCOMPP
// 00570429: FNSTSW AX
// 0057042b: SAHF
// 0057042c: JBE 0x005706c3
//   XREF to: 005706c3 (CONDITIONAL_JUMP)
// 00570432: LEA EBX,[ESP + 0xc8]
//   XREF to: Stack[-0x50] (DATA)
// 00570439: MOV EAX,0x32c1c68
//   XREF to: 032c1c68 (DATA)
// 0057043e: FLD float ptr [EAX]
//   XREF to: 032c1c68 (READ)
// 00570440: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 00570446: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x50] (DATA)
// 00570448: FLD float ptr [EAX + 0x4]
//   XREF to: 032c1c6c (READ)
// 0057044b: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 00570451: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 00570454: FLD float ptr [EAX + 0x8]
//   XREF to: 032c1c70 (READ)
// 00570457: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0057045d: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 00570460: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x50] (READ)
// 00570467: MOV EDI,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x4c] (READ)
// 0057046e: MOV EAX,dword ptr [ECX + 0x32cd84c]
//   XREF to: 032cd84c (DATA)
// 00570474: MOV EDX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x48] (READ)
// 0057047b: SUB ESI,EAX
// 0057047d: MOV EAX,dword ptr [ECX + 0x32cd850]
//   XREF to: 032cd850 (DATA)
// 00570483: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 0057048a: SUB EDI,EAX
// 0057048c: MOV EAX,dword ptr [ECX + 0x32cd854]
//   XREF to: 032cd854 (DATA)
// 00570492: LEA ESI,[ESP + 0xe0]
//   XREF to: Stack[-0x38] (DATA)
// 00570499: SUB EDX,EAX
// 0057049b: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0x50] (DATA)
// 005704a2: MOV dword ptr [ESP + 0xcc],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 005704a9: PUSH EAX
// 005704aa: LEA EDI,[ESP + 0xf0]
//   XREF to: Stack[-0x2c] (DATA)
// 005704b1: MOV dword ptr [ESP + 0xd4],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 005704b8: CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)
// 005704bd: LEA ESI,[ESP + 0xe4]
//   XREF to: Stack[-0x38] (DATA)
// 005704c4: ADD ESP,0x4
// 005704c7: MOVSD ES:EDI,ESI
// 005704c8: MOVSD ES:EDI,ESI
// 005704c9: MOVSD ES:EDI,ESI
// 005704ca: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_005704ca
//   XREF to: Stack[-0x28] (READ)
// 005704d1: MOV EDX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x2c] (READ)
// 005704d8: MOV ECX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 005704df: MOV ESI,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x18] (READ)
// 005704e6: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x114] (READ)
// 005704ea: NEG EAX
// 005704ec: ADD EDX,0x8000
// 005704f2: MOV EBX,ECX
// 005704f4: INC ESI
// 005704f5: ADD EAX,0x8000
// 005704fa: ADD EBX,0x4
// 005704fd: MOV dword ptr [ESP + ECX*0x1 + 0x48],EDX
// 00570501: MOV dword ptr [ESP + ECX*0x1 + 0x88],EAX
// 00570508: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 0057050f: MOV dword ptr [ESP + 0x100],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00570516: ADD ECX,0xc
// 00570519: MOV dword ptr [ESP + 0x104],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00570520: MOV dword ptr [ESP + 0xfc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00570527: CMP ESI,EDI
// 00570529: JL 0x005703d7
//   XREF to: 005703d7 (CONDITIONAL_JUMP)
// 0057052f: CMP dword ptr [ESP + 0x4],0x1
//   Label: LAB_0057052f
//   XREF to: Stack[-0x114] (READ)
// 00570534: JLE 0x005705d5
//   XREF to: 005705d5 (CONDITIONAL_JUMP)
// 0057053a: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x114] (READ)
// 0057053e: MOV EAX,0x4
// 00570543: SHL ECX,0x2
// 00570546: CMP dword ptr [ESP + 0x48],0x8000
//   Label: LAB_00570546
//   XREF to: Stack[-0xd0] (READ)
// 0057054e: JLE 0x0057055f
//   XREF to: 0057055f (CONDITIONAL_JUMP)
// 00570550: CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000
// 00570558: JGE 0x0057055f
//   XREF to: 0057055f (CONDITIONAL_JUMP)
// 0057055a: INC word ptr [ESP + EAX*0x1 + 0x4a]
// 0057055f: CMP dword ptr [ESP + 0x48],0xffff8000
//   Label: LAB_0057055f
//   XREF to: Stack[-0xd0] (READ)
// 00570567: JGE 0x0057057f
//   XREF to: 0057057f (CONDITIONAL_JUMP)
// 00570569: MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48]
// 0057056d: CMP EBX,0x8000
// 00570573: JLE 0x0057057f
//   XREF to: 0057057f (CONDITIONAL_JUMP)
// 00570575: LEA ESI,[EBX + 0xffff0000]
// 0057057b: MOV dword ptr [ESP + EAX*0x1 + 0x48],ESI
// 0057057f: CMP dword ptr [ESP + 0x88],0x8000
//   Label: LAB_0057057f
//   XREF to: Stack[-0x90] (READ)
// 0057058a: JLE 0x005705a1
//   XREF to: 005705a1 (CONDITIONAL_JUMP)
// 0057058c: CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000
// 00570597: JGE 0x005705a1
//   XREF to: 005705a1 (CONDITIONAL_JUMP)
// 00570599: INC word ptr [ESP + EAX*0x1 + 0x8a]
// 005705a1: CMP dword ptr [ESP + 0x88],0xffff8000
//   Label: LAB_005705a1
//   XREF to: Stack[-0x90] (READ)
// 005705ac: JGE 0x005705ca
//   XREF to: 005705ca (CONDITIONAL_JUMP)
// 005705ae: MOV ESI,dword ptr [ESP + EAX*0x1 + 0x88]
// 005705b5: CMP ESI,0x8000
// 005705bb: JLE 0x005705ca
//   XREF to: 005705ca (CONDITIONAL_JUMP)
// 005705bd: LEA EDI,[ESI + 0xffff0000]
// 005705c3: MOV dword ptr [ESP + EAX*0x1 + 0x88],EDI
// 005705ca: ADD EAX,0x4
//   Label: LAB_005705ca
// 005705cd: CMP EAX,ECX
// 005705cf: JL 0x00570546
//   XREF to: 00570546 (CONDITIONAL_JUMP)
// 005705d5: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_005705d5
//   XREF to: Stack[-0x114] (READ)
// 005705d9: XOR ECX,ECX
// 005705db: TEST EBX,EBX
// 005705dd: JLE 0x0057060b
//   XREF to: 0057060b (CONDITIONAL_JUMP)
// 005705df: XOR EAX,EAX
// 005705e1: XOR EDX,EDX
// 005705e3: MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48]
//   Label: LAB_005705e3
// 005705e7: SHL EBX,0x8
// 005705ea: MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX
// 005705ee: MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88]
// 005705f5: ADD EDX,0xc
// 005705f8: SHL EBX,0x8
// 005705fb: MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX
// 005705ff: INC ECX
// 00570600: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x114] (READ)
// 00570604: ADD EAX,0x4
// 00570607: CMP ECX,EBX
// 00570609: JL 0x005705e3
//   XREF to: 005705e3 (CONDITIONAL_JUMP)
// 0057060b: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057060b
//   XREF to: Stack[0x4] (READ)
// 0057060e: CMP dword ptr [EAX + 0x15ae84],0x0
// 00570615: JZ 0x00570629
//   XREF to: 00570629 (CONDITIONAL_JUMP)
// 00570617: XOR EDI,EDI
// 00570619: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x108] (WRITE)
// 0057061d: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x10c] (WRITE)
// 00570621: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x110] (WRITE)
// 00570625: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x104] (WRITE)
// 00570629: CMP dword ptr [EBP + 0x20],0xfde8
//   Label: LAB_00570629
//   XREF to: Stack[0x10] (READ)
// 00570630: JLE 0x005706e1
//   XREF to: 005706e1 (CONDITIONAL_JUMP)
// 00570636: MOV EAX,ESP
// 00570638: PUSH EAX
// 00570639: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0057063f: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00570640: CALL engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)
// 00570645: ADD ESP,0x8
//   Label: LAB_00570645
// 00570648: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057064b: MOV ESI,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x20] (READ)
// 00570652: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00570655: ADD EBX,0x12
// 00570658: INC ESI
// 00570659: MOV dword ptr [EBP + 0x18],EBX
//   XREF to: Stack[0x8] (WRITE)
// 0057065c: MOV dword ptr [ESP + 0xf8],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00570663: CMP ESI,EDI
// 00570665: JL 0x0057031b
//   XREF to: 0057031b (CONDITIONAL_JUMP)
// 0057066b: MOV ESP,EBP
//   Label: LAB_0057066b
// 0057066d: POP EBP
// 0057066e: POP EDI
// 0057066f: POP ESI
// 00570670: POP EBX
// 00570671: RET
// 00570672: MOV EAX,0xffff
//   Label: LAB_00570672
// 00570677: MOV EBX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0057067d: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00570680: SUB EAX,EBX
// 00570682: IMUL EDX
// 00570684: SHRD EAX,EDX,0x10
// 00570688: PUSH EAX
// 00570689: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0057068f: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00570690: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00570695: ADD ESP,0x8
// 00570698: PUSH 0x0
// 0057069a: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005706a0: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005706a1: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005706a6: ADD ESP,0x8
// 005706a9: JMP 0x005702f2
//   XREF to: 005702f2 (UNCONDITIONAL_JUMP)
// 005706ae: MOV EAX,ESP
//   Label: LAB_005706ae
// 005706b0: PUSH EAX
// 005706b1: PUSH 0x32cd84c
//   XREF to: 032cd84c (DATA)
// 005706b6: CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
// 005706bb: ADD ESP,0x8
// 005706be: JMP 0x005703b4
//   XREF to: 005703b4 (UNCONDITIONAL_JUMP)
// 005706c3: LEA EBX,[ESP + 0xec]
//   Label: LAB_005706c3
//   XREF to: Stack[-0x2c] (DATA)
// 005706ca: MOV EAX,EDX
// 005706cc: FLD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 005706ce: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 005706d0: FLD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 005706d3: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 005706d6: FLD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 005706d9: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x24] (WRITE)
// 005706dc: JMP 0x005704ca
//   XREF to: 005704ca (UNCONDITIONAL_JUMP)
// 005706e1: MOV EAX,ESP
//   Label: LAB_005706e1
// 005706e3: PUSH EAX
// 005706e4: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005706ea: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005706eb: CALL engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
//   XREF to: 0048b970 (UNCONDITIONAL_CALL)
// 005706f0: JMP 0x00570645
//   XREF to: 00570645 (UNCONDITIONAL_JUMP)
