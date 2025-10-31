// Name: core_fire.cpp_CRainDrop_render_FUN_004c6830
// Address: 004c6830
// Address Range: [[004c6830, 004c6bc3]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CRainDrop_render_FUN_004c6830(CRainDrop * this_ptr)
// Globals:
//   double DOUBLE_00629ffb = 4
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_FireEffectRainDropTexture
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[1].w_recip
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[2].w_recip
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 g_RenderVertexBuffer[3].w_recip
//   undefined4 DAT_00800000
//   CDemonCamera* g_CurrentSceneCamera
//   undefined4 CHAR_ARRAY_00900000
//   undefined4 DAT_00d00000
//   undefined4 DAT_00dc0000
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   CVector3i g_BillboardCameraUp
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_EDI;
  byte bVar2;
  float10 fVar3;
  double dVar4;
  float afStackY_1020 [984];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  float afStack_1c [3];
  int iStack_10;
  
  bVar2 = 0;
  vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_68.x = (int)ROUND((this_ptr->base).position.x * FLOAT_0065dca8);
  local_68.y = (int)ROUND((this_ptr->base).position.y * FLOAT_0065dca8);
  local_68.z = (int)ROUND((this_ptr->base).position.z * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,unaff_EDI);
  rotation = (CVector3i *)0x0;
  local_38.x = local_20;
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + 4) = afStack_1c[(uint)bVar2 * -2];
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,&local_38,rotation);
  local_5c = 0xbe000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_50.x = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_50.y = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_50.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_50);
  local_5c = 0x3e000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_80.x = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_80.y = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_80.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_80);
  local_5c = 0x3e000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_74.x = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_74.y = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_74.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_74);
  local_5c = 0xbe000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_44.x = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_44.y = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_44.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectRainDropTexture);
  (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  afStack_1c[2] = (float)(0xffff - (int)g_PerspectiveReciprocal);
  fVar3 = (float10)(int)afStack_1c[2] *
          (float10)(this_ptr->base).lifetime_remaining * (float10)DOUBLE_00629ffb;
  g_RenderVertexBuffer[1].u = 1.9101783e-38;
  g_RenderVertexBuffer[0].u = 1.1754944e-38;
  g_RenderVertexBuffer[0].v = 2.0203809e-38;
  g_RenderVertexBuffer[1].v = 2.0203809e-38;
  g_RenderVertexBuffer[2].u = 1.1754944e-38;
  g_RenderVertexBuffer[3].u = 1.1754944e-38;
  g_RenderVertexBuffer[2].v = (float)((int)g_CameraLoadImageReadBuffer + 0x771b0);
  iStack_10 = (int)afStack_1c[2];
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(g_CameraLoadImageReadBuffer + 0x771b0,afStack_1c[2]));
  g_RenderVertexBuffer[3].v = (float)((ulonglong)dVar4 >> 0x20);
  g_RenderVertexBuffer[0].w_recip = (float)(int)ROUND(fVar3);
  iStack_2c = (int)ROUND((this_ptr->base).position.x * FLOAT_0065dca8);
  iStack_28 = (int)ROUND((this_ptr->base).position.y * FLOAT_0065dca8);
  iStack_24 = (int)ROUND((this_ptr->base).position.z * FLOAT_0065dca8);
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  afStack_1c[2] = g_RenderVertexBuffer[0].w_recip;
  core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  SStack_a8.surface_normal.D = 0;
  SStack_a8.surface_normal.C = 0;
  SStack_a8.surface_normal.B = 0;
  SStack_a8.surface_normal.A = 0;
  uStack_90 = 0;
  uStack_84 = 3;
  SStack_a8.base.count = 4;
  uStack_8c = 1;
  uStack_88 = 2;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,&SStack_a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c6830: PUSH EBX
//   Label: core_fire.cpp_CRainDrop_render_FUN_004c6830
// 004c6831: PUSH ESI
// 004c6832: PUSH EBP
// 004c6833: SUB ESP,0x9c
// 004c6839: MOV EBP,dword ptr [ESP + 0xac]
// 004c6840: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6846: LEA EBX,[ESP + 0x40]
// 004c684a: MOV EAX,EBP
// 004c684c: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c684e: FLD float ptr [EAX]
// 004c6850: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6856: FISTP dword ptr [EBX]
// 004c6858: FLD float ptr [EAX + 0x4]
// 004c685b: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6861: FISTP dword ptr [EBX + 0x4]
// 004c6864: FLD float ptr [EAX + 0x8]
// 004c6867: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c686d: FISTP dword ptr [EBX + 0x8]
// 004c6870: LEA EAX,[ESP + 0x40]
// 004c6874: PUSH EAX
// 004c6875: PUSH ESI
// 004c6876: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c687b: ADD ESP,0x8
// 004c687e: PUSH ESI
// 004c687f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6885: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c6886: CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   XREF to: 0048dc50 (UNCONDITIONAL_CALL)
// 004c688b: ADD ESP,0x8
// 004c688e: TEST EAX,EAX
// 004c6890: JNZ 0x004c689c
//   XREF to: 004c689c (CONDITIONAL_JUMP)
// 004c6892: ADD ESP,0x9c
// 004c6898: POP EBP
// 004c6899: POP ESI
// 004c689a: POP EBX
// 004c689b: RET
// 004c689c: PUSH EDI
//   Label: LAB_004c689c
// 004c689d: PUSH EBP
// 004c689e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c68a4: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c68a5: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c68aa: ADD ESP,0x8
// 004c68ad: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c68b3: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c68b4: LEA ESI,[ESP + 0x90]
// 004c68bb: LEA EDI,[ESP + 0x78]
// 004c68bf: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004c68c4: ADD ESP,0x4
// 004c68c7: LEA ESI,[ESP + 0x8c]
// 004c68ce: LEA EAX,[ESP + 0x74]
// 004c68d2: PUSH 0x0
// 004c68d4: MOVSD ES:EDI,ESI
// 004c68d5: MOVSD ES:EDI,ESI
// 004c68d6: MOVSD ES:EDI,ESI
// 004c68d7: PUSH EAX
// 004c68d8: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c68de: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c68df: LEA EBX,[ESP + 0x68]
// 004c68e3: MOV EDI,0xbe000000
// 004c68e8: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004c68ed: LEA EAX,[ESP + 0x5c]
// 004c68f1: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c68f7: ADD ESP,0xc
// 004c68fa: XOR EDX,EDX
// 004c68fc: MOV dword ptr [ESP + 0x50],EDI
// 004c6900: MOV dword ptr [ESP + 0x54],EDI
// 004c6904: MOV dword ptr [ESP + 0x58],EDX
// 004c6908: FLD float ptr [EAX]
// 004c690a: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6910: FISTP dword ptr [EBX]
// 004c6912: FLD float ptr [EAX + 0x4]
// 004c6915: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c691b: FISTP dword ptr [EBX + 0x4]
// 004c691e: FLD float ptr [EAX + 0x8]
// 004c6921: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6927: FISTP dword ptr [EBX + 0x8]
// 004c692a: LEA EAX,[ESP + 0x5c]
// 004c692e: PUSH EAX
// 004c692f: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c6931: PUSH EAX
// 004c6932: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c6937: XOR ESI,ESI
// 004c6939: MOV ECX,0x3e000000
// 004c693e: LEA EBX,[ESP + 0x34]
// 004c6942: ADD ESP,0x8
// 004c6945: LEA EAX,[ESP + 0x50]
// 004c6949: MOV dword ptr [ESP + 0x50],ECX
// 004c694d: MOV dword ptr [ESP + 0x54],EDI
// 004c6951: MOV dword ptr [ESP + 0x58],ESI
// 004c6955: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c695b: FLD float ptr [EAX]
// 004c695d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6963: FISTP dword ptr [EBX]
// 004c6965: FLD float ptr [EAX + 0x4]
// 004c6968: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c696e: FISTP dword ptr [EBX + 0x4]
// 004c6971: FLD float ptr [EAX + 0x8]
// 004c6974: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c697a: FISTP dword ptr [EBX + 0x8]
// 004c697d: LEA EAX,[ESP + 0x2c]
// 004c6981: PUSH EAX
// 004c6982: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c6984: ADD EAX,0x30
// 004c6987: PUSH EAX
// 004c6988: MOV EDI,0x3e000000
// 004c698d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c6992: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6998: ADD ESP,0x8
// 004c699b: XOR EDX,EDX
// 004c699d: MOV dword ptr [ESP + 0x50],EDI
// 004c69a1: MOV dword ptr [ESP + 0x54],EDI
// 004c69a5: MOV dword ptr [ESP + 0x58],EDX
// 004c69a9: LEA EBX,[ESP + 0x38]
// 004c69ad: LEA EAX,[ESP + 0x50]
// 004c69b1: FLD float ptr [EAX]
// 004c69b3: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c69b9: FISTP dword ptr [EBX]
// 004c69bb: FLD float ptr [EAX + 0x4]
// 004c69be: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c69c4: FISTP dword ptr [EBX + 0x4]
// 004c69c7: FLD float ptr [EAX + 0x8]
// 004c69ca: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c69d0: FISTP dword ptr [EBX + 0x8]
// 004c69d3: LEA EAX,[ESP + 0x38]
// 004c69d7: PUSH EAX
// 004c69d8: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c69da: ADD EAX,0x60
// 004c69dd: PUSH EAX
// 004c69de: XOR ESI,ESI
// 004c69e0: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c69e5: MOV ECX,0xbe000000
// 004c69ea: LEA EBX,[ESP + 0x70]
// 004c69ee: ADD ESP,0x8
// 004c69f1: LEA EAX,[ESP + 0x50]
// 004c69f5: MOV dword ptr [ESP + 0x50],ECX
// 004c69f9: MOV dword ptr [ESP + 0x54],EDI
// 004c69fd: MOV dword ptr [ESP + 0x58],ESI
// 004c6a01: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6a07: FLD float ptr [EAX]
// 004c6a09: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6a0f: FISTP dword ptr [EBX]
// 004c6a11: FLD float ptr [EAX + 0x4]
// 004c6a14: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6a1a: FISTP dword ptr [EBX + 0x4]
// 004c6a1d: FLD float ptr [EAX + 0x8]
// 004c6a20: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6a26: FISTP dword ptr [EBX + 0x8]
// 004c6a29: LEA EAX,[ESP + 0x68]
// 004c6a2d: PUSH EAX
// 004c6a2e: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c6a30: ADD EAX,0x90
// 004c6a35: PUSH EAX
// 004c6a36: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c6a3b: ADD ESP,0x8
// 004c6a3e: PUSH 0x67ae9c
//   XREF to: 0067ae9c (DATA)
// 004c6a43: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6a49: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c6a4a: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c6a4f: ADD ESP,0x8
// 004c6a52: PUSH 0x0
// 004c6a54: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 004c6a59: PUSH EBP
// 004c6a5a: MOV EBX,dword ptr [EAX + 0x3c]
// 004c6a5d: PUSH EAX
// 004c6a5e: CALL dword ptr [EBX + 0x4]
// 004c6a61: FLD float ptr [EBP + 0x18]
// 004c6a64: FMUL double ptr [0x00629ffb]
//   XREF to: 00629ffb (READ)
// 004c6a6a: MOV EAX,0xffff
// 004c6a6f: MOV EDX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004c6a75: ADD ESP,0xc
// 004c6a78: SUB EAX,EDX
// 004c6a7a: MOV dword ptr [ESP + 0x9c],EAX
// 004c6a81: FILD dword ptr [ESP + 0x9c]
// 004c6a88: FMULP
// 004c6a8a: MOV ESI,0xd00000
//   XREF to: 00d00000 (DATA)
// 004c6a8f: MOV ECX,0x800000
//   XREF to: 00800000 (PARAM)
// 004c6a94: MOV EBX,0xdc0000
//   XREF to: 00dc0000 (DATA)
// 004c6a99: MOV dword ptr [0x0068805c],ESI
//   XREF to: 0068805c (WRITE)
// 004c6a9f: MOV dword ptr [0x0068802c],ECX
//   XREF to: 0068802c (WRITE)
// 004c6aa5: MOV dword ptr [0x00688030],EBX
//   XREF to: 00688030 (WRITE)
// 004c6aab: MOV dword ptr [0x00688060],EBX
//   XREF to: 00688060 (WRITE)
// 004c6ab1: MOV dword ptr [0x0068808c],ECX
//   XREF to: 0068808c (WRITE)
// 004c6ab7: MOV dword ptr [0x006880bc],ECX
//   XREF to: 006880bc (WRITE)
// 004c6abd: MOV EDX,0x900000
//   XREF to: 00900000 (PARAM)
// 004c6ac2: MOV dword ptr [ESP + 0x98],EAX
// 004c6ac9: MOV dword ptr [0x00688090],EDX
//   XREF to: 00688090 (WRITE)
// 004c6acf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c6ad4: FISTP dword ptr [ESP + 0x98]
// 004c6adb: MOV EAX,dword ptr [ESP + 0x98]
// 004c6ae2: MOV dword ptr [0x006880c0],EDX
//   XREF to: 006880c0 (WRITE)
// 004c6ae8: MOV [0x00688040],EAX
//   XREF to: 00688040 (WRITE)
// 004c6aed: MOV [0x00688070],EAX
//   XREF to: 00688070 (WRITE)
// 004c6af2: MOV [0x006880a0],EAX
//   XREF to: 006880a0 (WRITE)
// 004c6af7: MOV [0x006880d0],EAX
//   XREF to: 006880d0 (WRITE)
// 004c6afc: LEA EBX,[ESP + 0x80]
// 004c6b03: MOV EAX,EBP
// 004c6b05: FLD float ptr [EAX]
// 004c6b07: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6b0d: FISTP dword ptr [EBX]
// 004c6b0f: FLD float ptr [EAX + 0x4]
// 004c6b12: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6b18: FISTP dword ptr [EBX + 0x4]
// 004c6b1b: FLD float ptr [EAX + 0x8]
// 004c6b1e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6b24: FISTP dword ptr [EBX + 0x8]
// 004c6b27: PUSH 0x4
// 004c6b29: PUSH 0x0
// 004c6b2b: PUSH 0x2d12dc0
//   XREF to: 02d12dc0 (DATA)
// 004c6b30: LEA EAX,[ESP + 0x8c]
// 004c6b37: PUSH EAX
// 004c6b38: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004c6b3e: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004c6b3f: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 004c6b44: ADD ESP,0x14
// 004c6b47: PUSH 0x1
// 004c6b49: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6b4f: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c6b50: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c6b55: ADD ESP,0x8
// 004c6b58: XOR EAX,EAX
// 004c6b5a: MOV EBP,0x4
// 004c6b5f: MOV dword ptr [ESP + 0x18],EAX
// 004c6b63: MOV dword ptr [ESP + 0x14],EAX
// 004c6b67: MOV dword ptr [ESP + 0x10],EAX
// 004c6b6b: MOV dword ptr [ESP + 0xc],EAX
// 004c6b6f: MOV dword ptr [ESP + 0x1c],EAX
// 004c6b73: MOV EAX,0x3
// 004c6b78: MOV EDI,0x1
// 004c6b7d: MOV dword ptr [ESP + 0x28],EAX
// 004c6b81: LEA EAX,[ESP + 0x4]
// 004c6b85: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6b8b: PUSH EAX
// 004c6b8c: MOV dword ptr [ESP + 0xc],EBP
// 004c6b90: MOV EBP,0x2
// 004c6b95: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c6b96: MOV dword ptr [ESP + 0x28],EDI
// 004c6b9a: MOV dword ptr [ESP + 0x2c],EBP
// 004c6b9e: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 004c6ba3: ADD ESP,0x8
// 004c6ba6: XOR EBX,EBX
// 004c6ba8: PUSH EBX
// 004c6ba9: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6baf: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c6bb0: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c6bb5: ADD ESP,0x8
// 004c6bb8: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6bbe: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c6bbf: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
