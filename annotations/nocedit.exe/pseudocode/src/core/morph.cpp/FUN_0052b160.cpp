// Name: core_morph.cpp_FUN_0052b160
// Address: 0052b160
// Address Range: [[0052b160, 0052b270]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b160()
// Cross-references:
//   core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30 (0052af30) at 0052af60 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063a437
//   undefined4 DAT_0063a43f
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_morph.cpp_FUN_0052b160(undefined4 param_1, undefined4 param_2) */

void core_morph_cpp_FUN_0052b160(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 extraout_EDX;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive *polygon_info;
  float10 fVar5;
  double dVar6;
  int in_stack_00000004;
  float in_stack_00000010;
  int iVar7;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  fVar5 = (float10)in_stack_00000010 * (float10)_DAT_0063a437 *
          ((float10)_DAT_0063a43f - (float10)in_stack_00000010);
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(extraout_EDX,0xffff - (int)g_PerspectiveReciprocal));
  lVar2 = (longlong)SUB84(dVar6,0) * (longlong)(int)ROUND(fVar5);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x5c)) {
    iVar7 = in_stack_00000004 + 0x68;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(in_stack_00000004 + 0x60));
      if (iVar1 != -1) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (g_CDemonRendererPtr,(SMRGLTextureBasic *)(iVar1 * 0x48 + iVar7));
        iVar7 = iVar1;
      }
      polygon_info = (SMRGLHeaderPrimitive *)(*(int *)(in_stack_00000004 + 0x60) + iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr,polygon_info,0x267);
    } while (iVar4 < *(int *)(in_stack_00000004 + 0x5c));
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}


// Assembly code:
// 0052b160: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b160
// 0052b161: PUSH ESI
// 0052b162: PUSH EDI
// 0052b163: PUSH EBP
// 0052b164: SUB ESP,0xc
// 0052b167: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0052b16b: PUSH 0x0
// 0052b16d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052b173: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0052b174: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 0052b179: ADD ESP,0x8
// 0052b17c: PUSH 0x1
// 0052b17e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052b184: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052b185: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0052b18a: ADD ESP,0x8
// 0052b18d: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0052b191: FLD ST0
// 0052b193: FMUL double ptr [0x0063a437]
//   XREF to: 0063a437 (READ)
// 0052b199: MOV EAX,0xffff
// 0052b19e: FLD float ptr [0x0063a43f]
//   XREF to: 0063a43f (READ)
// 0052b1a4: FSUBRP ST2,ST0
// 0052b1a6: MOV EBX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0052b1ac: FMULP
// 0052b1ae: SUB EAX,EBX
// 0052b1b0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052b1b5: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0052b1b8: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0052b1bb: IMUL EDX
// 0052b1bd: SHRD EAX,EDX,0x10
// 0052b1c1: PUSH EAX
// 0052b1c2: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052b1c8: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0052b1c9: MOV EBP,0xffffffff
// 0052b1ce: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0052b1d3: ADD ESP,0x8
// 0052b1d6: MOV EAX,dword ptr [EDI + 0x5c]
// 0052b1d9: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0052b1dd: XOR EBP,EBP
// 0052b1df: TEST EAX,EAX
// 0052b1e1: JLE 0x0052b238
//   XREF to: 0052b238 (CONDITIONAL_JUMP)
// 0052b1e3: LEA EAX,[EDI + 0x68]
// 0052b1e6: XOR EBX,EBX
// 0052b1e8: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052b1ec: MOV EAX,dword ptr [EDI + 0x60]
//   Label: LAB_0052b1ec
// 0052b1ef: MOV ESI,dword ptr [EBX + EAX*0x1]
// 0052b1f2: CMP ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0052b1f6: JZ 0x0052b213
//   XREF to: 0052b213 (CONDITIONAL_JUMP)
// 0052b1f8: IMUL EAX,ESI,0x48
// 0052b1fb: ADD EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0052b1ff: PUSH EAX
// 0052b200: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052b206: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052b207: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0052b20c: ADD ESP,0x8
// 0052b20f: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0052b213: MOV ESI,dword ptr [EDI + 0x60]
//   Label: LAB_0052b213
// 0052b216: PUSH 0x267
// 0052b21b: ADD ESI,EBX
// 0052b21d: PUSH ESI
// 0052b21e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052b224: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0052b225: INC EBP
// 0052b226: ADD EBX,0x3c
// 0052b229: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 0052b22e: MOV ECX,dword ptr [EDI + 0x5c]
// 0052b231: ADD ESP,0xc
// 0052b234: CMP EBP,ECX
// 0052b236: JL 0x0052b1ec
//   XREF to: 0052b1ec (CONDITIONAL_JUMP)
// 0052b238: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_0052b238
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052b23e: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0052b23f: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 0052b244: ADD ESP,0x4
// 0052b247: PUSH 0x0
// 0052b249: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052b24f: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0052b250: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0052b255: ADD ESP,0x8
// 0052b258: PUSH 0x1
// 0052b25a: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052b260: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0052b261: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0052b266: ADD ESP,0x8
// 0052b269: ADD ESP,0xc
// 0052b26c: POP EBP
// 0052b26d: POP EDI
// 0052b26e: POP ESI
// 0052b26f: POP EBX
// 0052b270: RET
