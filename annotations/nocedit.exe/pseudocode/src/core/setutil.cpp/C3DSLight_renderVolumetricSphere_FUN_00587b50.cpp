// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
// Address: 00587b50
// Address Range: [[00587b50, 00587de0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight * this_ptr)
// Globals:
//   double DOUBLE_00649aab = 0.25
//   float FLOAT_00649ab3 = 0.0625
//   double DOUBLE_00649abb = 3.14159265350000
//   double DOUBLE_00649ac3 = 2
//   float FLOAT_00649acb = 0.25
//   double DOUBLE_00649ad3 = 0.5
//   float FLOAT_00649adb = 255
//   float FLOAT_00662a40 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic SMRGLTextureBasic_006817fc
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr)

{
  SRenderVertex *pSVar1;
  SRenderVertex *pSVar2;
  int iVar3;
  CDemonRenderer *pCVar4;
  int *piVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  int iStack00000010;
  int iStack00000014;
  int in_stack_00000018;
  undefined1 local_54 [12];
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int local_14;
  int local_8;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->pos);
  local_8 = 0;
  local_14 = 0;
  do {
    iVar8 = -4;
    iVar6 = local_14 + -0xc0;
    do {
      fVar9 = (float10)local_8 * (float10)FLOAT_00649ab3 * (float10)DOUBLE_00649abb *
              (float10)DOUBLE_00649ac3;
      fVar10 = (float10)fsin(fVar9);
      fVar9 = (float10)fcos(fVar9);
      fVar11 = (float10)this_ptr->atten_end * (float10)DOUBLE_00649aab;
      fVar12 = (float10)iVar8 * (float10)FLOAT_00649acb * (float10)DOUBLE_00649abb *
               (float10)DOUBLE_00649ad3;
      fVar13 = (float10)fcos(fVar12);
      fVar12 = (float10)fsin(fVar12);
      fStack_38 = (float)(fVar9 * fVar11 * fVar13);
      local_40 = (float)(fVar10 * fVar11 * fVar13);
      local_3c = (float)(fVar12 * fVar11);
      local_54._8_4_ = (undefined4)ROUND(local_40 * FLOAT_00662a40);
      local_48 = (int)ROUND(local_3c * FLOAT_00662a40);
      local_44 = (int)ROUND(fStack_38 * FLOAT_00662a40);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar6),(CVector3i *)(local_54 + 8));
      pCVar4 = g_CDemonRendererPtr;
      *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar6) = 0x800000;
      pSVar1 = pCVar4->vertex_buffer_ptr;
      *(undefined4 *)((int)&pSVar1->v + iVar6) = 0x800000;
      fVar9 = (float10)(this_ptr->color).r * (float10)FLOAT_00649adb;
      pSVar2 = pCVar4->vertex_buffer_ptr;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar4,pSVar1));
      piVar5 = (int *)((ulonglong)dVar14 >> 0x20);
      *(int *)((int)&pSVar2->light + iVar6) = (int)ROUND(fVar9);
      iVar3 = *piVar5;
      fVar9 = (float10)(this_ptr->color).g * (float10)FLOAT_00649adb;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(piVar5,iVar3));
      piVar5 = (int *)((ulonglong)dVar14 >> 0x20);
      iVar7 = (int)ROUND(fVar9);
      *(int *)(iVar3 + iVar6 + 0x24) = iVar7;
      fVar9 = (float10)(this_ptr->color).b * (float10)FLOAT_00649adb;
      iVar3 = *piVar5;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(piVar5,iVar7));
      iVar8 = iVar8 + 1;
      *(int *)(iVar6 + 0x28 + iVar3) = (int)ROUND(fVar9);
      iVar6 = iVar6 + 0x30;
    } while (iVar8 < 5);
  } while (iVar7 + 1 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            ((CDemonRenderer *)((ulonglong)dVar14 >> 0x20),&SMRGLTextureBasic_006817fc);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  local_54._0_4_ = 4;
  local_44 = 0;
  local_48 = 0;
  local_54._8_4_ = 0;
  local_54._4_4_ = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  iStack00000010 = 10;
  iStack00000014 = 0;
  do {
    iVar8 = iStack00000014;
    iVar6 = iStack00000010;
    iVar7 = -4;
    do {
      local_3c = (float)(iVar8 + iVar7);
      fStack_38 = (float)(iVar6 + iVar7);
      iVar7 = iVar7 + 1;
      iStack_34 = iVar6 + iVar7;
      iStack_30 = iVar8 + iVar7;
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_54);
    } while (iVar7 < 4);
    in_stack_00000018 = in_stack_00000018 + 10;
    iStack00000014 = iStack00000014 + 10;
  } while (in_stack_00000018 != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 00587b50: PUSH EBP
//   Label: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
// 00587b51: SUB ESP,0x74
// 00587b54: MOV EBP,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00587b58: TEST dword ptr [EBP + 0x11d4],0x7fffffff
// 00587b62: JNZ 0x00587b69
//   XREF to: 00587b69 (CONDITIONAL_JUMP)
// 00587b64: ADD ESP,0x74
// 00587b67: POP EBP
// 00587b68: RET
// 00587b69: PUSH EDI
//   Label: LAB_00587b69
// 00587b6a: PUSH ESI
// 00587b6b: PUSH EBX
// 00587b6c: LEA EAX,[EBP + 0x104]
// 00587b72: PUSH EAX
// 00587b73: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587b79: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00587b7a: XOR EBX,EBX
// 00587b7c: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00587b81: ADD ESP,0x8
// 00587b84: MOV dword ptr [ESP + 0x78],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 00587b88: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00587b8c: MOV ESI,dword ptr [ESP + 0x6c]
//   Label: LAB_00587b8c
//   XREF to: Stack[-0x18] (READ)
// 00587b90: MOV EDI,0xfffffffc
// 00587b95: SUB ESI,0xc0
// 00587b9b: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00587b9b
//   XREF to: Stack[-0xc] (READ)
// 00587b9f: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00587ba3: FILD dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (READ)
// 00587ba7: FMUL float ptr [0x00649ab3]
//   XREF to: 00649ab3 (READ)
// 00587bad: FMUL double ptr [0x00649abb]
//   XREF to: 00649abb (READ)
// 00587bb3: FMUL double ptr [0x00649ac3]
//   XREF to: 00649ac3 (READ)
// 00587bb9: FLD ST0
// 00587bbb: FSIN
// 00587bbd: FXCH
// 00587bbf: FCOS
// 00587bc1: MOV dword ptr [ESP + 0x7c],EDI
//   XREF to: Stack[-0x8] (WRITE)
// 00587bc5: FILD dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (READ)
// 00587bc9: FMUL float ptr [0x00649acb]
//   XREF to: 00649acb (READ)
// 00587bcf: FLD float ptr [EBP + 0x11d4]
// 00587bd5: FMUL double ptr [0x00649aab]
//   XREF to: 00649aab (READ)
// 00587bdb: FXCH
// 00587bdd: FMUL double ptr [0x00649abb]
//   XREF to: 00649abb (READ)
// 00587be3: FXCH ST3
// 00587be5: FMUL ST1
// 00587be7: FXCH ST3
// 00587be9: FMUL double ptr [0x00649ad3]
//   XREF to: 00649ad3 (READ)
// 00587bef: FLD ST0
// 00587bf1: FCOS
// 00587bf3: FXCH
// 00587bf5: FSIN
// 00587bf7: FXCH ST3
// 00587bf9: FMUL ST2
// 00587bfb: FMUL ST1
// 00587bfd: FXCH ST4
// 00587bff: FMULP
// 00587c01: FXCH ST2
// 00587c03: FMULP
// 00587c05: LEA EBX,[ESP + 0x34]
//   XREF to: Stack[-0x50] (DATA)
// 00587c09: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587c0f: FXCH ST2
// 00587c11: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x3c] (WRITE)
// 00587c15: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x44] (DATA)
// 00587c19: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x44] (WRITE)
// 00587c1d: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x40] (WRITE)
// 00587c21: FLD float ptr [EAX]
//   XREF to: Stack[-0x44] (DATA)
// 00587c23: FMUL float ptr [0x00662a40]
//   XREF to: 00662a40 (READ)
// 00587c29: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x50] (DATA)
// 00587c2b: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x40] (READ)
// 00587c2e: FMUL float ptr [0x00662a40]
//   XREF to: 00662a40 (READ)
// 00587c34: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 00587c37: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x3c] (READ)
// 00587c3a: FMUL float ptr [0x00662a40]
//   XREF to: 00662a40 (READ)
// 00587c40: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 00587c43: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x50] (DATA)
// 00587c47: PUSH EAX
// 00587c48: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00587c4a: ADD EAX,ESI
// 00587c4c: PUSH EAX
// 00587c4d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00587c52: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587c58: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00587c5a: MOV dword ptr [ESI + EAX*0x1 + 0x18],0x800000
//   XREF to: 00800000 (DATA)
// 00587c62: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00587c64: MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000
//   XREF to: 00800000 (DATA)
// 00587c6c: FLD float ptr [EBP + 0x11c4]
// 00587c72: FMUL float ptr [0x00649adb]
//   XREF to: 00649adb (READ)
// 00587c78: ADD ESP,0x8
// 00587c7b: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00587c7d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00587c82: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (WRITE)
// 00587c86: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (READ)
// 00587c8a: MOV dword ptr [ESI + EBX*0x1 + 0x20],EAX
// 00587c8e: FLD float ptr [EBP + 0x11c8]
// 00587c94: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00587c96: FMUL float ptr [0x00649adb]
//   XREF to: 00649adb (READ)
// 00587c9c: LEA EBX,[EAX + ESI*0x1]
// 00587c9f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00587ca4: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (WRITE)
// 00587ca8: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (READ)
// 00587cac: MOV dword ptr [EBX + 0x24],EAX
// 00587caf: FLD float ptr [EBP + 0x11cc]
// 00587cb5: FMUL float ptr [0x00649adb]
//   XREF to: 00649adb (READ)
// 00587cbb: ADD ESI,0x30
// 00587cbe: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00587cc0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00587cc5: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (WRITE)
// 00587cc9: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x8] (READ)
// 00587ccd: INC EDI
// 00587cce: MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX
// 00587cd2: CMP EDI,0x4
// 00587cd5: JLE 0x00587b9b
//   XREF to: 00587b9b (CONDITIONAL_JUMP)
// 00587cdb: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xc] (READ)
// 00587cdf: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x18] (READ)
// 00587ce3: INC EAX
// 00587ce4: ADD EDI,0x1e0
// 00587cea: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00587cee: MOV dword ptr [ESP + 0x6c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00587cf2: CMP EAX,0x10
// 00587cf5: JLE 0x00587b8c
//   XREF to: 00587b8c (CONDITIONAL_JUMP)
// 00587cfb: PUSH 0x6817fc
//   XREF to: 006817fc (DATA)
// 00587d00: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00587d01: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00587d06: ADD ESP,0x8
// 00587d09: PUSH 0x4000
// 00587d0e: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587d14: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00587d15: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00587d1a: ADD ESP,0x8
// 00587d1d: PUSH 0x0
// 00587d1f: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587d25: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00587d26: MOV EDI,0x4
// 00587d2b: XOR EBP,EBP
// 00587d2d: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00587d32: ADD ESP,0x8
// 00587d35: MOV ESI,0xa
// 00587d3a: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587d40: PUSH 0x1
// 00587d42: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 00587d46: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x64] (WRITE)
// 00587d4a: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x68] (WRITE)
// 00587d4e: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00587d4f: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x6c] (WRITE)
// 00587d53: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x70] (WRITE)
// 00587d57: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00587d5c: ADD ESP,0x8
// 00587d5f: MOV dword ptr [ESP + 0x70],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00587d63: MOV dword ptr [ESP + 0x74],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 00587d67: MOV EDI,dword ptr [ESP + 0x74]
//   Label: LAB_00587d67
//   XREF to: Stack[-0x10] (READ)
// 00587d6b: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 00587d6f: MOV ESI,0xfffffffc
// 00587d74: LEA EAX,[EDI + ESI*0x1]
//   Label: LAB_00587d74
// 00587d77: LEA EDX,[EBX + ESI*0x1]
// 00587d7a: INC ESI
// 00587d7b: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00587d7f: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 00587d83: LEA EBP,[EBX + ESI*0x1]
// 00587d86: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x78] (DATA)
// 00587d8a: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x58] (WRITE)
// 00587d8e: PUSH EAX
// 00587d8f: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587d95: LEA ECX,[EDI + ESI*0x1]
// 00587d98: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00587d99: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00587d9d: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 00587da2: ADD ESP,0x8
// 00587da5: CMP ESI,0x4
// 00587da8: JL 0x00587d74
//   XREF to: 00587d74 (CONDITIONAL_JUMP)
// 00587daa: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x10] (READ)
// 00587dae: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 00587db2: ADD EDX,0xa
// 00587db5: ADD EAX,0xa
// 00587db8: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00587dbc: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00587dc0: CMP EDX,0xa0
// 00587dc6: JNZ 0x00587d67
//   XREF to: 00587d67 (CONDITIONAL_JUMP)
// 00587dc8: PUSH 0x0
// 00587dca: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587dd0: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00587dd1: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00587dd6: ADD ESP,0x8
// 00587dd9: POP EBX
// 00587dda: POP ESI
// 00587ddb: POP EDI
// 00587ddc: ADD ESP,0x74
// 00587ddf: POP EBP
// 00587de0: RET
