// Name: core_fire.cpp_CTrail_FUN_004c5e90
// Address: 004c5e90
// Address Range: [[004c5e90, 004c6149]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_FUN_004c5e90(CTrail * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c741d [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065dca8
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 g_RenderVertexBuffer[3].light
//   undefined4 g_RenderVertexBuffer[3].color
//   undefined4 g_RenderVertexBuffer[3].fog
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CTrail_FUN_004c5e90(CTrail *this_ptr)

{
  BADSPACEBASE *in_ESP;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  CVector3i local_2c;
  float local_20;
  float fStack_1c;
  undefined1 auStack_18 [8];
  float local_10;
  int local_c;
  
  if (*(float *)(this_ptr->field0_0x0 + 0x10) <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,*(SMRGLTextureBasic **)(this_ptr->field0_0x0 + 0x20));
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
            (g_CDemonRendererPtr,*(float *)(this_ptr->field0_0x0 + 0x14));
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,&local_10);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&local_c,(CVector3i *)0x0);
  local_2c.z = 0;
  local_2c.x = (int)(*(float *)(this_ptr->field0_0x0 + 0xc) *
                    *(float *)(this_ptr->field0_0x0 + 0x14));
  auStack_18._4_4_ = (undefined4)ROUND((float)local_2c.x * _DAT_0065dca8);
  local_10 = (float)(int)ROUND((float)local_2c.x * _DAT_0065dca8);
  local_c = (int)ROUND(_DAT_0065dca8 * 0.0);
  local_2c.y = local_2c.x;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(auStack_18 + 4)
            );
  local_2c.y = (int)-(float)local_2c.y;
  iStack00000008 = (int)ROUND((float)local_2c.y * _DAT_0065dca8);
  iStack0000000c = (int)ROUND((float)local_2c.z * _DAT_0065dca8);
  iStack00000010 = (int)ROUND(local_20 * _DAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0x00000008);
  local_20 = -local_20;
  auStack_18._0_4_ = (undefined4)ROUND((float)local_2c.z * _DAT_0065dca8);
  auStack_18._4_4_ = (undefined4)ROUND(local_20 * _DAT_0065dca8);
  local_10 = (float)(int)ROUND(fStack_1c * _DAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)auStack_18);
  local_20 = -local_20;
  local_2c.x = (int)ROUND(local_20 * _DAT_0065dca8);
  local_2c.y = (int)ROUND(fStack_1c * _DAT_0065dca8);
  local_2c.z = (int)ROUND((float)auStack_18._0_4_ * _DAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_2c);
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  g_RenderVertexBuffer[0].light = 9.18341e-41;
  g_RenderVertexBuffer[0].color = 0xffff;
  g_RenderVertexBuffer[0].fog = 9.18341e-41;
  g_RenderVertexBuffer[1].light = 9.18341e-41;
  g_RenderVertexBuffer[1].color = 0xffff;
  g_RenderVertexBuffer[1].fog = 9.18341e-41;
  g_RenderVertexBuffer[2].light = 9.18341e-41;
  g_RenderVertexBuffer[2].color = 0xffff;
  g_RenderVertexBuffer[2].fog = 9.18341e-41;
  g_RenderVertexBuffer[3].light = 9.18341e-41;
  g_RenderVertexBuffer[3].color = 0xffff;
  g_RenderVertexBuffer[3].fog = 9.18341e-41;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 004c5e90: PUSH EBX
//   Label: core_fire.cpp_CTrail_FUN_004c5e90
// 004c5e91: PUSH EBP
// 004c5e92: SUB ESP,0x70
// 004c5e95: MOV EBX,dword ptr [ESP + 0x7c]
// 004c5e99: FLD float ptr [EBX + 0x10]
// 004c5e9c: FLDZ
// 004c5e9e: FCOMPP
// 004c5ea0: FNSTSW AX
// 004c5ea2: SAHF
// 004c5ea3: JC 0x004c5eab
//   XREF to: 004c5eab (CONDITIONAL_JUMP)
// 004c5ea5: ADD ESP,0x70
// 004c5ea8: POP EBP
// 004c5ea9: POP EBX
// 004c5eaa: RET
// 004c5eab: PUSH EDI
//   Label: LAB_004c5eab
// 004c5eac: PUSH ESI
// 004c5ead: MOV EDX,dword ptr [EBX + 0x20]
// 004c5eb0: PUSH EDX
// 004c5eb1: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5eb7: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c5eb8: MOV ESI,0x4
// 004c5ebd: MOV EBP,0x3
// 004c5ec2: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c5ec7: ADD ESP,0x8
// 004c5eca: XOR EDI,EDI
// 004c5ecc: MOV dword ptr [ESP + 0xc],ESI
// 004c5ed0: MOV dword ptr [ESP + 0x1c],EDI
// 004c5ed4: MOV dword ptr [ESP + 0x18],EDI
// 004c5ed8: MOV dword ptr [ESP + 0x14],EDI
// 004c5edc: MOV dword ptr [ESP + 0x10],EDI
// 004c5ee0: MOV dword ptr [ESP + 0x20],EDI
// 004c5ee4: MOV dword ptr [ESP + 0x2c],EBP
// 004c5ee8: MOV ESI,0x1
// 004c5eed: MOV EDI,0x2
// 004c5ef2: MOV dword ptr [ESP + 0x24],ESI
// 004c5ef6: MOV dword ptr [ESP + 0x28],EDI
// 004c5efa: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5eff: PUSH dword ptr [EBX + 0x14]
// 004c5f02: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c5f03: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
//   XREF to: 0048ca70 (UNCONDITIONAL_CALL)
// 004c5f08: ADD ESP,0x8
// 004c5f0b: PUSH ESI
// 004c5f0c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5f12: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c5f13: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c5f18: ADD ESP,0x8
// 004c5f1b: PUSH EBX
// 004c5f1c: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5f22: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c5f23: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c5f28: ADD ESP,0x8
// 004c5f2b: LEA EAX,[ESP + 0x60]
// 004c5f2f: PUSH EAX
// 004c5f30: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5f36: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c5f37: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 004c5f3c: ADD ESP,0x8
// 004c5f3f: PUSH 0x0
// 004c5f41: LEA EAX,[ESP + 0x64]
// 004c5f45: PUSH EAX
// 004c5f46: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5f4c: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c5f4d: XOR EBP,EBP
// 004c5f4f: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c5f54: ADD ESP,0xc
// 004c5f57: MOV dword ptr [ESP + 0x3c],EBP
// 004c5f5b: MOV dword ptr [ESP + 0x40],EBP
// 004c5f5f: MOV dword ptr [ESP + 0x44],EBP
// 004c5f63: FLD float ptr [EBX + 0xc]
// 004c5f66: FMUL float ptr [EBX + 0x14]
// 004c5f69: FSTP float ptr [ESP + 0x3c]
// 004c5f6d: MOV EAX,dword ptr [ESP + 0x3c]
// 004c5f71: LEA EBX,[ESP + 0x54]
// 004c5f75: MOV dword ptr [ESP + 0x40],EAX
// 004c5f79: LEA EAX,[ESP + 0x3c]
// 004c5f7d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5f83: FLD float ptr [EAX]
// 004c5f85: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5f8b: FISTP dword ptr [EBX]
// 004c5f8d: FLD float ptr [EAX + 0x4]
// 004c5f90: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5f96: FISTP dword ptr [EBX + 0x4]
// 004c5f99: FLD float ptr [EAX + 0x8]
// 004c5f9c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5fa2: FISTP dword ptr [EBX + 0x8]
// 004c5fa5: LEA EAX,[ESP + 0x54]
// 004c5fa9: PUSH EAX
// 004c5faa: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5fac: PUSH EAX
// 004c5fad: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c5fb2: ADD ESP,0x8
// 004c5fb5: MOV AH,byte ptr [ESP + 0x3f]
// 004c5fb9: XOR AH,0x80
// 004c5fbc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5fc2: MOV byte ptr [ESP + 0x3f],AH
// 004c5fc6: POP ESI
// 004c5fc7: POP EDI
// 004c5fc8: LEA EBX,[ESP + 0x64]
// 004c5fcc: LEA EAX,[ESP + 0x34]
// 004c5fd0: FLD float ptr [EAX]
// 004c5fd2: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5fd8: FISTP dword ptr [EBX]
// 004c5fda: FLD float ptr [EAX + 0x4]
// 004c5fdd: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5fe3: FISTP dword ptr [EBX + 0x4]
// 004c5fe6: FLD float ptr [EAX + 0x8]
// 004c5fe9: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5fef: FISTP dword ptr [EBX + 0x8]
// 004c5ff2: LEA EAX,[ESP + 0x64]
// 004c5ff6: PUSH EAX
// 004c5ff7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5ff9: ADD EAX,0x30
// 004c5ffc: PUSH EAX
// 004c5ffd: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c6002: ADD ESP,0x8
// 004c6005: MOV DL,byte ptr [ESP + 0x3b]
// 004c6009: LEA EBX,[ESP + 0x40]
// 004c600d: XOR DL,0x80
// 004c6010: LEA EAX,[ESP + 0x34]
// 004c6014: MOV byte ptr [ESP + 0x3b],DL
// 004c6018: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c601e: FLD float ptr [EAX]
// 004c6020: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6026: FISTP dword ptr [EBX]
// 004c6028: FLD float ptr [EAX + 0x4]
// 004c602b: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6031: FISTP dword ptr [EBX + 0x4]
// 004c6034: FLD float ptr [EAX + 0x8]
// 004c6037: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c603d: FISTP dword ptr [EBX + 0x8]
// 004c6040: LEA EAX,[ESP + 0x40]
// 004c6044: PUSH EAX
// 004c6045: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c6047: ADD EAX,0x60
// 004c604a: PUSH EAX
// 004c604b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c6050: ADD ESP,0x8
// 004c6053: MOV DH,byte ptr [ESP + 0x37]
// 004c6057: LEA EBX,[ESP + 0x28]
// 004c605b: XOR DH,0x80
// 004c605e: LEA EAX,[ESP + 0x34]
// 004c6062: MOV byte ptr [ESP + 0x37],DH
// 004c6066: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c606c: FLD float ptr [EAX]
// 004c606e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c6074: FISTP dword ptr [EBX]
// 004c6076: FLD float ptr [EAX + 0x4]
// 004c6079: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c607f: FISTP dword ptr [EBX + 0x4]
// 004c6082: FLD float ptr [EAX + 0x8]
// 004c6085: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c608b: FISTP dword ptr [EBX + 0x8]
// 004c608e: LEA EAX,[ESP + 0x28]
// 004c6092: PUSH EAX
// 004c6093: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c6095: ADD EAX,0x90
// 004c609a: PUSH EAX
// 004c609b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c60a0: MOV ECX,0x80000
// 004c60a5: MOV EBX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004c60aa: LEA EAX,[ESP + 0x8]
// 004c60ae: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c60b4: ADD ESP,0x8
// 004c60b7: MOV dword ptr [0x0068802c],ECX
//   XREF to: 0068802c (WRITE)
// 004c60bd: MOV dword ptr [0x00688030],EBX
//   XREF to: 00688030 (WRITE)
// 004c60c3: MOV dword ptr [0x0068805c],EBX
//   XREF to: 0068805c (WRITE)
// 004c60c9: MOV dword ptr [0x00688060],EBX
//   XREF to: 00688060 (WRITE)
// 004c60cf: MOV dword ptr [0x0068808c],EBX
//   XREF to: 0068808c (WRITE)
// 004c60d5: MOV dword ptr [0x00688090],ECX
//   XREF to: 00688090 (WRITE)
// 004c60db: MOV dword ptr [0x006880bc],ECX
//   XREF to: 006880bc (WRITE)
// 004c60e1: PUSH EAX
// 004c60e2: MOV dword ptr [0x006880c0],ECX
//   XREF to: 006880c0 (WRITE)
// 004c60e8: MOV EBX,0xffff
// 004c60ed: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c60ee: MOV dword ptr [0x00688034],EBX
//   XREF to: 00688034 (WRITE)
// 004c60f4: MOV dword ptr [0x00688038],EBX
//   XREF to: 00688038 (WRITE)
// 004c60fa: MOV dword ptr [0x0068803c],EBX
//   XREF to: 0068803c (WRITE)
// 004c6100: MOV dword ptr [0x00688064],EBX
//   XREF to: 00688064 (WRITE)
// 004c6106: MOV dword ptr [0x00688068],EBX
//   XREF to: 00688068 (WRITE)
// 004c610c: MOV dword ptr [0x0068806c],EBX
//   XREF to: 0068806c (WRITE)
// 004c6112: MOV dword ptr [0x00688094],EBX
//   XREF to: 00688094 (WRITE)
// 004c6118: MOV dword ptr [0x00688098],EBX
//   XREF to: 00688098 (WRITE)
// 004c611e: MOV dword ptr [0x0068809c],EBX
//   XREF to: 0068809c (WRITE)
// 004c6124: MOV dword ptr [0x006880c4],EBX
//   XREF to: 006880c4 (WRITE)
// 004c612a: MOV dword ptr [0x006880c8],EBX
//   XREF to: 006880c8 (WRITE)
// 004c6130: MOV dword ptr [0x006880cc],EBX
//   XREF to: 006880cc (WRITE)
// 004c6136: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004c613b: ADD ESP,0x8
// 004c613e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c6144: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c6145: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
