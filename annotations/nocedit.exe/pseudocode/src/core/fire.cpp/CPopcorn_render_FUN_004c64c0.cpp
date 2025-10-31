// Name: core_fire.cpp_CPopcorn_render_FUN_004c64c0
// Address: 004c64c0
// Address Range: [[004c64c0, 004c6819]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CPopcorn_render_FUN_004c64c0(CPopcorn * this_ptr)
// Globals:
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_FireEffectPopcornTexture
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
//   CDemonCamera* g_CurrentSceneCamera
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   CVector3i g_BillboardCameraUp
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
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

void __cdecl core_fire_cpp_CPopcorn_render_FUN_004c64c0(CPopcorn *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_EDI;
  byte bVar2;
  int aiStackY_1060 [1002];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a0;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int aiStack_74 [2];
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  CVector3i local_18;
  
  bVar2 = 0;
  vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_48.x = (int)ROUND((this_ptr->base).position.x * FLOAT_0065dca8);
  local_48.y = (int)ROUND((this_ptr->base).position.y * FLOAT_0065dca8);
  local_48.z = (int)ROUND((this_ptr->base).position.z * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_48);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,unaff_EDI);
  rotation = (CVector3i *)0x0;
  local_60.x = local_78;
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + 4) = aiStack_74[(uint)bVar2 * -2];
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       aiStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,&local_60,rotation);
  local_30 = 0xbe000000;
  local_2c = 0xbe000000;
  local_28 = 0;
  local_18.x = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_18.y = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_18.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_18);
  local_30 = 0x3e000000;
  local_2c = 0xbe000000;
  local_28 = 0;
  local_3c.x = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_3c.y = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_3c.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_3c);
  local_30 = 0x3e000000;
  local_2c = 0x3e000000;
  local_28 = 0;
  local_6c.x = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_6c.y = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_6c.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_6c);
  local_30 = 0xbe000000;
  local_2c = 0x3e000000;
  local_28 = 0;
  local_54.x = (int)ROUND(FLOAT_0065dca8 * -0.125);
  local_54.y = (int)ROUND(FLOAT_0065dca8 * 0.125);
  local_54.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectPopcornTexture);
  (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[0].w_recip = (float)(0xffff - (int)g_PerspectiveReciprocal);
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  iStack_24 = (int)ROUND((this_ptr->base).position.x * FLOAT_0065dca8);
  iStack_20 = (int)ROUND((this_ptr->base).position.y * FLOAT_0065dca8);
  iStack_1c = (int)ROUND((this_ptr->base).position.z * FLOAT_0065dca8);
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  SStack_a0.surface_normal.D = 0;
  SStack_a0.surface_normal.C = 0;
  SStack_a0.surface_normal.B = 0;
  SStack_a0.surface_normal.A = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  SStack_a0.base.count = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,&SStack_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c64c0: PUSH EBX
//   Label: core_fire.cpp_CPopcorn_render_FUN_004c64c0
// 004c64c1: PUSH ESI
// 004c64c2: PUSH EBP
// 004c64c3: SUB ESP,0x94
// 004c64c9: MOV EBP,dword ptr [ESP + 0xa4]
// 004c64d0: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c64d6: LEA EBX,[ESP + 0x58]
// 004c64da: MOV EAX,EBP
// 004c64dc: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c64de: FLD float ptr [EAX]
// 004c64e0: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c64e6: FISTP dword ptr [EBX]
// 004c64e8: FLD float ptr [EAX + 0x4]
// 004c64eb: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c64f1: FISTP dword ptr [EBX + 0x4]
// 004c64f4: FLD float ptr [EAX + 0x8]
// 004c64f7: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c64fd: FISTP dword ptr [EBX + 0x8]
// 004c6500: LEA EAX,[ESP + 0x58]
// 004c6504: PUSH EAX
// 004c6505: PUSH ESI
// 004c6506: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c650b: ADD ESP,0x8
// 004c650e: PUSH ESI
// 004c650f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6515: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c6516: CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   XREF to: 0048dc50 (UNCONDITIONAL_CALL)
// 004c651b: ADD ESP,0x8
// 004c651e: TEST EAX,EAX
// 004c6520: JNZ 0x004c652c
//   XREF to: 004c652c (CONDITIONAL_JUMP)
// 004c6522: ADD ESP,0x94
// 004c6528: POP EBP
// 004c6529: POP ESI
// 004c652a: POP EBX
// 004c652b: RET
// 004c652c: PUSH EDI
//   Label: LAB_004c652c
// 004c652d: PUSH EBP
// 004c652e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6534: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c6535: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c653a: ADD ESP,0x8
// 004c653d: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6543: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c6544: LEA ESI,[ESP + 0x30]
// 004c6548: LEA EDI,[ESP + 0x48]
// 004c654c: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004c6551: ADD ESP,0x4
// 004c6554: LEA ESI,[ESP + 0x2c]
// 004c6558: LEA EAX,[ESP + 0x44]
// 004c655c: PUSH 0x0
// 004c655e: MOVSD ES:EDI,ESI
// 004c655f: MOVSD ES:EDI,ESI
// 004c6560: MOVSD ES:EDI,ESI
// 004c6561: PUSH EAX
// 004c6562: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6568: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c6569: LEA EBX,[ESP + 0x98]
// 004c6570: MOV EDI,0xbe000000
// 004c6575: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004c657a: LEA EAX,[ESP + 0x80]
// 004c6581: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6587: ADD ESP,0xc
// 004c658a: XOR EDX,EDX
// 004c658c: MOV dword ptr [ESP + 0x74],EDI
// 004c6590: MOV dword ptr [ESP + 0x78],EDI
// 004c6594: MOV dword ptr [ESP + 0x7c],EDX
// 004c6598: FLD float ptr [EAX]
// 004c659a: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c65a0: FISTP dword ptr [EBX]
// 004c65a2: FLD float ptr [EAX + 0x4]
// 004c65a5: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c65ab: FISTP dword ptr [EBX + 0x4]
// 004c65ae: FLD float ptr [EAX + 0x8]
// 004c65b1: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c65b7: FISTP dword ptr [EBX + 0x8]
// 004c65ba: LEA EAX,[ESP + 0x8c]
// 004c65c1: PUSH EAX
// 004c65c2: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c65c4: PUSH EAX
// 004c65c5: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c65ca: XOR ESI,ESI
// 004c65cc: MOV ECX,0x3e000000
// 004c65d1: LEA EBX,[ESP + 0x70]
// 004c65d5: ADD ESP,0x8
// 004c65d8: LEA EAX,[ESP + 0x74]
// 004c65dc: MOV dword ptr [ESP + 0x74],ECX
// 004c65e0: MOV dword ptr [ESP + 0x78],EDI
// 004c65e4: MOV dword ptr [ESP + 0x7c],ESI
// 004c65e8: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c65ee: FLD float ptr [EAX]
// 004c65f0: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c65f6: FISTP dword ptr [EBX]
// 004c65f8: FLD float ptr [EAX + 0x4]
// 004c65fb: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6601: FISTP dword ptr [EBX + 0x4]
// 004c6604: FLD float ptr [EAX + 0x8]
// 004c6607: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c660d: FISTP dword ptr [EBX + 0x8]
// 004c6610: LEA EAX,[ESP + 0x68]
// 004c6614: PUSH EAX
// 004c6615: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c6617: ADD EAX,0x30
// 004c661a: PUSH EAX
// 004c661b: MOV EDI,0x3e000000
// 004c6620: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c6625: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c662b: ADD ESP,0x8
// 004c662e: XOR EDX,EDX
// 004c6630: MOV dword ptr [ESP + 0x74],EDI
// 004c6634: MOV dword ptr [ESP + 0x78],EDI
// 004c6638: MOV dword ptr [ESP + 0x7c],EDX
// 004c663c: LEA EBX,[ESP + 0x38]
// 004c6640: LEA EAX,[ESP + 0x74]
// 004c6644: FLD float ptr [EAX]
// 004c6646: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c664c: FISTP dword ptr [EBX]
// 004c664e: FLD float ptr [EAX + 0x4]
// 004c6651: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6657: FISTP dword ptr [EBX + 0x4]
// 004c665a: FLD float ptr [EAX + 0x8]
// 004c665d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6663: FISTP dword ptr [EBX + 0x8]
// 004c6666: LEA EAX,[ESP + 0x38]
// 004c666a: PUSH EAX
// 004c666b: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c666d: ADD EAX,0x60
// 004c6670: PUSH EAX
// 004c6671: XOR ESI,ESI
// 004c6673: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c6678: MOV ECX,0xbe000000
// 004c667d: LEA EBX,[ESP + 0x58]
// 004c6681: ADD ESP,0x8
// 004c6684: LEA EAX,[ESP + 0x74]
// 004c6688: MOV dword ptr [ESP + 0x74],ECX
// 004c668c: MOV dword ptr [ESP + 0x78],EDI
// 004c6690: MOV dword ptr [ESP + 0x7c],ESI
// 004c6694: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c669a: FLD float ptr [EAX]
// 004c669c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c66a2: FISTP dword ptr [EBX]
// 004c66a4: FLD float ptr [EAX + 0x4]
// 004c66a7: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c66ad: FISTP dword ptr [EBX + 0x4]
// 004c66b0: FLD float ptr [EAX + 0x8]
// 004c66b3: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c66b9: FISTP dword ptr [EBX + 0x8]
// 004c66bc: LEA EAX,[ESP + 0x50]
// 004c66c0: PUSH EAX
// 004c66c1: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c66c3: ADD EAX,0x90
// 004c66c8: PUSH EAX
// 004c66c9: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c66ce: ADD ESP,0x8
// 004c66d1: PUSH 0x67ae84
//   XREF to: 0067ae84 (DATA)
// 004c66d6: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c66dc: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c66dd: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c66e2: ADD ESP,0x8
// 004c66e5: PUSH 0x0
// 004c66e7: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 004c66ec: PUSH EBP
// 004c66ed: MOV EBX,dword ptr [EAX + 0x3c]
// 004c66f0: PUSH EAX
// 004c66f1: CALL dword ptr [EBX + 0x4]
// 004c66f4: MOV EAX,0xffff
// 004c66f9: MOV ECX,0x80000
// 004c66fe: MOV EBX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004c6703: MOV EDX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004c6709: ADD ESP,0xc
// 004c670c: MOV dword ptr [0x0068802c],ECX
//   XREF to: 0068802c (WRITE)
// 004c6712: MOV dword ptr [0x00688030],EBX
//   XREF to: 00688030 (WRITE)
// 004c6718: MOV dword ptr [0x0068805c],EBX
//   XREF to: 0068805c (WRITE)
// 004c671e: MOV dword ptr [0x00688060],EBX
//   XREF to: 00688060 (WRITE)
// 004c6724: MOV dword ptr [0x0068808c],EBX
//   XREF to: 0068808c (WRITE)
// 004c672a: MOV dword ptr [0x00688090],ECX
//   XREF to: 00688090 (WRITE)
// 004c6730: MOV dword ptr [0x006880bc],ECX
//   XREF to: 006880bc (WRITE)
// 004c6736: SUB EAX,EDX
// 004c6738: LEA EBX,[ESP + 0x80]
// 004c673f: MOV [0x00688040],EAX
//   XREF to: 00688040 (WRITE)
// 004c6744: MOV [0x00688070],EAX
//   XREF to: 00688070 (WRITE)
// 004c6749: MOV [0x006880a0],EAX
//   XREF to: 006880a0 (WRITE)
// 004c674e: MOV [0x006880d0],EAX
//   XREF to: 006880d0 (WRITE)
// 004c6753: MOV EAX,EBP
// 004c6755: MOV dword ptr [0x006880c0],ECX
//   XREF to: 006880c0 (WRITE)
// 004c675b: FLD float ptr [EAX]
// 004c675d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6763: FISTP dword ptr [EBX]
// 004c6765: FLD float ptr [EAX + 0x4]
// 004c6768: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c676e: FISTP dword ptr [EBX + 0x4]
// 004c6771: FLD float ptr [EAX + 0x8]
// 004c6774: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c677a: FISTP dword ptr [EBX + 0x8]
// 004c677d: PUSH 0x4
// 004c677f: PUSH 0x0
// 004c6781: PUSH 0x2d12dc0
//   XREF to: 02d12dc0 (DATA)
// 004c6786: LEA EAX,[ESP + 0x8c]
// 004c678d: PUSH EAX
// 004c678e: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004c6794: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004c6795: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 004c679a: ADD ESP,0x14
// 004c679d: PUSH 0x1
// 004c679f: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c67a5: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c67a6: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c67ab: ADD ESP,0x8
// 004c67ae: XOR EAX,EAX
// 004c67b0: MOV EBP,0x4
// 004c67b5: MOV dword ptr [ESP + 0x18],EAX
// 004c67b9: MOV dword ptr [ESP + 0x14],EAX
// 004c67bd: MOV dword ptr [ESP + 0x10],EAX
// 004c67c1: MOV dword ptr [ESP + 0xc],EAX
// 004c67c5: MOV dword ptr [ESP + 0x1c],EAX
// 004c67c9: MOV EAX,0x3
// 004c67ce: MOV EDI,0x1
// 004c67d3: MOV dword ptr [ESP + 0x28],EAX
// 004c67d7: LEA EAX,[ESP + 0x4]
// 004c67db: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c67e1: PUSH EAX
// 004c67e2: MOV dword ptr [ESP + 0xc],EBP
// 004c67e6: MOV EBP,0x2
// 004c67eb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c67ec: MOV dword ptr [ESP + 0x28],EDI
// 004c67f0: MOV dword ptr [ESP + 0x2c],EBP
// 004c67f4: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 004c67f9: ADD ESP,0x8
// 004c67fc: XOR EBX,EBX
// 004c67fe: PUSH EBX
// 004c67ff: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6805: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c6806: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c680b: ADD ESP,0x8
// 004c680e: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6814: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c6815: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
