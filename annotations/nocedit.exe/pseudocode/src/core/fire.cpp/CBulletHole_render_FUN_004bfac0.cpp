// Name: core_fire.cpp_CBulletHole_render_FUN_004bfac0
// Address: 004bfac0
// Address Range: [[004bfac0, 004bfd2c] [004bfd38, 004bfdf2]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletHole_render_FUN_004bfac0(CBulletHole * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c74a0 (004c74a0) at 004c75b1 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c7287 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0065dca8 = 256
//   float FLOAT_0065dcac = 65536
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].light
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
//   undefined4 DAT_00780000
//   CDemonRenderer g_CDemonRendererInstance
//   SMRGLPrimitiveQuadIndex g_BillboardPrimitive
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_render_FUN_004bfac0(CBulletHole *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CVector3i *rotation;
  CVector3i local_38;
  int local_2c;
  int local_28;
  float local_18;
  float local_14;
  
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&this_ptr->position);
    rotation = (CVector3i *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr->actor_ptr);
    rotation = (CVector3i *)&this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr->surface_normal,rotation);
  iVar3 = (this_ptr->texture_index & 1U) * 0x800000;
  g_RenderVertexBuffer[0].u = (float)(iVar3 + 0x80000);
  iVar2 = (this_ptr->texture_index & 2U) * 0x400000;
  g_RenderVertexBuffer[1].u = (float)(iVar3 + 0x780000);
  g_RenderVertexBuffer[0].v = (float)(iVar2 + 0x780000);
  g_RenderVertexBuffer[2].v = (float)(iVar2 + 0x80000);
  local_38.x = (int)ROUND(FLOAT_0065dca8 * -0.17);
  local_38.y = (int)ROUND(FLOAT_0065dca8 * -0.17);
  local_38.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
  g_RenderVertexBuffer[1].v = g_RenderVertexBuffer[0].v;
  g_RenderVertexBuffer[2].u = g_RenderVertexBuffer[1].u;
  g_RenderVertexBuffer[3].u = g_RenderVertexBuffer[0].u;
  g_RenderVertexBuffer[3].v = g_RenderVertexBuffer[2].v;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_38);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0xffffff9c);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)&stack0xfffffff4);
  local_14 = (float)(int)ROUND(FLOAT_0065dca8 * -0.17);
  fVar1 = FLOAT_0065dca8 * 0.17;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&local_14);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
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
    g_RenderVertexBuffer[0].light = 9.18341e-41;
  }
  else {
    core_actor_cpp_CDemonActor_FUN_00408e80(this_ptr->actor_ptr);
    local_38.z = (int)ROUND(local_18 * FLOAT_0065dcac);
    local_2c = (int)ROUND(local_14 * FLOAT_0065dcac);
    local_28 = (int)ROUND((float)(int)ROUND(fVar1) * FLOAT_0065dcac);
    core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
  }
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr->actor_ptr);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004bfac0: PUSH EBX
//   Label: core_fire.cpp_CBulletHole_render_FUN_004bfac0
// 004bfac1: PUSH ESI
// 004bfac2: PUSH EDI
// 004bfac3: PUSH EBP
// 004bfac4: SUB ESP,0x60
// 004bfac7: MOV ESI,dword ptr [ESP + 0x74]
// 004bfacb: MOV EDX,dword ptr [ESI + 0x10]
// 004bface: LEA EBX,[ESI + 0x14]
// 004bfad1: TEST EDX,EDX
// 004bfad3: JZ 0x004bfd38
//   XREF to: 004bfd38 (CONDITIONAL_JUMP)
// 004bfad9: PUSH EDX
// 004bfada: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004bfadf: ADD ESP,0x4
// 004bfae2: LEA EAX,[ESI + 0x24]
// 004bfae5: PUSH EAX
// 004bfae6: PUSH EBX
// 004bfae7: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfaed: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004bfaee: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   Label: LAB_004bfaee
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004bfaf3: ADD ESP,0xc
// 004bfaf6: MOV EBX,dword ptr [ESI + 0x20]
// 004bfaf9: MOV EAX,dword ptr [ESI + 0x20]
// 004bfafc: XOR ECX,ECX
// 004bfafe: AND EBX,0x1
// 004bfb01: AND EAX,0x2
// 004bfb04: SHL EBX,0x17
// 004bfb07: MOV dword ptr [ESP + 0x20],ECX
// 004bfb0b: LEA EDX,[EBX + 0x80000]
// 004bfb11: SHL EAX,0x16
// 004bfb14: MOV dword ptr [0x0068802c],EDX
//   XREF to: 0068802c (WRITE)
// 004bfb1a: ADD EBX,0x780000
//   XREF to: 00780000 (DATA)
// 004bfb20: LEA EDX,[EAX + 0x780000]
//   XREF to: 00780000 (DATA)
// 004bfb26: MOV dword ptr [0x0068805c],EBX
//   XREF to: 0068805c (WRITE)
// 004bfb2c: ADD EAX,0x80000
// 004bfb31: MOV dword ptr [0x0068808c],EBX
//   XREF to: 0068808c (WRITE)
// 004bfb37: MOV [0x00688090],EAX
//   XREF to: 00688090 (WRITE)
// 004bfb3c: MOV EAX,[0x0068802c]
//   XREF to: 0068802c (READ)
// 004bfb41: LEA EBX,[ESP + 0x30]
// 004bfb45: MOV [0x006880bc],EAX
//   XREF to: 006880bc (WRITE)
// 004bfb4a: MOV EAX,[0x00688090]
//   XREF to: 00688090 (READ)
// 004bfb4f: MOV dword ptr [0x00688030],EDX
//   XREF to: 00688030 (WRITE)
// 004bfb55: MOV [0x006880c0],EAX
//   XREF to: 006880c0 (WRITE)
// 004bfb5a: MOV EAX,0xbe2e147b
// 004bfb5f: MOV dword ptr [0x00688060],EDX
//   XREF to: 00688060 (WRITE)
// 004bfb65: MOV dword ptr [ESP + 0x18],EAX
// 004bfb69: MOV dword ptr [ESP + 0x1c],EAX
// 004bfb6d: LEA EAX,[ESP + 0x18]
// 004bfb71: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfb77: FLD float ptr [EAX]
// 004bfb79: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfb7f: FISTP dword ptr [EBX]
// 004bfb81: FLD float ptr [EAX + 0x4]
// 004bfb84: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfb8a: FISTP dword ptr [EBX + 0x4]
// 004bfb8d: FLD float ptr [EAX + 0x8]
// 004bfb90: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfb96: FISTP dword ptr [EBX + 0x8]
// 004bfb99: LEA EAX,[ESP + 0x30]
// 004bfb9d: PUSH EAX
// 004bfb9e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bfba0: PUSH EAX
// 004bfba1: MOV EDI,0xbe2e147b
// 004bfba6: XOR EBP,EBP
// 004bfba8: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bfbad: MOV EBX,0x3e2e147b
// 004bfbb2: LEA EAX,[ESP + 0x20]
// 004bfbb6: ADD ESP,0x8
// 004bfbb9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfbbf: MOV dword ptr [ESP + 0x18],EBX
// 004bfbc3: MOV dword ptr [ESP + 0x1c],EDI
// 004bfbc7: MOV EBX,ESP
// 004bfbc9: MOV dword ptr [ESP + 0x20],EBP
// 004bfbcd: FLD float ptr [EAX]
// 004bfbcf: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfbd5: FISTP dword ptr [EBX]
// 004bfbd7: FLD float ptr [EAX + 0x4]
// 004bfbda: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfbe0: FISTP dword ptr [EBX + 0x4]
// 004bfbe3: FLD float ptr [EAX + 0x8]
// 004bfbe6: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfbec: FISTP dword ptr [EBX + 0x8]
// 004bfbef: MOV EAX,ESP
// 004bfbf1: PUSH EAX
// 004bfbf2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bfbf4: ADD EAX,0x30
// 004bfbf7: PUSH EAX
// 004bfbf8: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bfbfd: MOV EAX,0x3e2e147b
// 004bfc02: LEA EBX,[ESP + 0x5c]
// 004bfc06: ADD ESP,0x8
// 004bfc09: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfc0f: MOV dword ptr [ESP + 0x18],EAX
// 004bfc13: MOV dword ptr [ESP + 0x1c],EAX
// 004bfc17: LEA EAX,[ESP + 0x18]
// 004bfc1b: MOV dword ptr [ESP + 0x20],EBP
// 004bfc1f: FLD float ptr [EAX]
// 004bfc21: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfc27: FISTP dword ptr [EBX]
// 004bfc29: FLD float ptr [EAX + 0x4]
// 004bfc2c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfc32: FISTP dword ptr [EBX + 0x4]
// 004bfc35: FLD float ptr [EAX + 0x8]
// 004bfc38: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfc3e: FISTP dword ptr [EBX + 0x8]
// 004bfc41: LEA EAX,[ESP + 0x54]
// 004bfc45: PUSH EAX
// 004bfc46: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bfc48: ADD EAX,0x60
// 004bfc4b: PUSH EAX
// 004bfc4c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bfc51: LEA EBX,[ESP + 0x50]
// 004bfc55: LEA EAX,[ESP + 0x20]
// 004bfc59: ADD ESP,0x8
// 004bfc5c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfc62: MOV dword ptr [ESP + 0x18],EDI
// 004bfc66: MOV EDI,0x3e2e147b
// 004bfc6b: MOV dword ptr [ESP + 0x20],EBP
// 004bfc6f: MOV dword ptr [ESP + 0x1c],EDI
// 004bfc73: FLD float ptr [EAX]
// 004bfc75: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfc7b: FISTP dword ptr [EBX]
// 004bfc7d: FLD float ptr [EAX + 0x4]
// 004bfc80: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfc86: FISTP dword ptr [EBX + 0x4]
// 004bfc89: FLD float ptr [EAX + 0x8]
// 004bfc8c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfc92: FISTP dword ptr [EBX + 0x8]
// 004bfc95: LEA EAX,[ESP + 0x48]
// 004bfc99: PUSH EAX
// 004bfc9a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bfc9c: ADD EAX,0x90
// 004bfca1: PUSH EAX
// 004bfca2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bfca7: MOV EAX,dword ptr [ESI + 0x10]
// 004bfcaa: ADD ESP,0x8
// 004bfcad: TEST EAX,EAX
// 004bfcaf: JNZ 0x004bfd57
//   XREF to: 004bfd57 (CONDITIONAL_JUMP)
// 004bfcb5: MOV EBX,0xffff
// 004bfcba: MOV dword ptr [0x00688038],EBX
//   XREF to: 00688038 (WRITE)
// 004bfcc0: MOV dword ptr [0x0068803c],EBX
//   XREF to: 0068803c (WRITE)
// 004bfcc6: MOV dword ptr [0x00688064],EBX
//   XREF to: 00688064 (WRITE)
// 004bfccc: MOV dword ptr [0x00688068],EBX
//   XREF to: 00688068 (WRITE)
// 004bfcd2: MOV dword ptr [0x0068806c],EBX
//   XREF to: 0068806c (WRITE)
// 004bfcd8: MOV dword ptr [0x00688094],EBX
//   XREF to: 00688094 (WRITE)
// 004bfcde: MOV dword ptr [0x00688098],EBX
//   XREF to: 00688098 (WRITE)
// 004bfce4: MOV dword ptr [0x0068809c],EBX
//   XREF to: 0068809c (WRITE)
// 004bfcea: MOV dword ptr [0x006880c4],EBX
//   XREF to: 006880c4 (WRITE)
// 004bfcf0: MOV dword ptr [0x006880c8],EBX
//   XREF to: 006880c8 (WRITE)
// 004bfcf6: MOV dword ptr [0x006880cc],EBX
//   XREF to: 006880cc (WRITE)
// 004bfcfc: MOV dword ptr [0x00688034],EBX
//   XREF to: 00688034 (WRITE)
// 004bfd02: PUSH 0x2d12dcc
//   Label: LAB_004bfd02
//   XREF to: 02d12dcc (DATA)
// 004bfd07: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfd0d: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004bfd0e: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004bfd13: MOV EDI,dword ptr [ESI + 0x10]
// 004bfd16: ADD ESP,0x8
// 004bfd19: TEST EDI,EDI
// 004bfd1b: JNZ 0x004bfddf
//   XREF to: 004bfddf (CONDITIONAL_JUMP)
// 004bfd21: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfd27: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004bfd28: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004bfd38: PUSH ESI
//   Label: LAB_004bfd38
// 004bfd39: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfd3f: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004bfd40: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004bfd45: ADD ESP,0x8
// 004bfd48: PUSH 0x0
// 004bfd4a: PUSH EBX
// 004bfd4b: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfd51: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004bfd52: JMP 0x004bfaee
//   XREF to: 004bfaee (UNCONDITIONAL_JUMP)
// 004bfd57: LEA EAX,[ESI + 0x30]
//   Label: LAB_004bfd57
// 004bfd5a: PUSH EAX
// 004bfd5b: LEA EAX,[ESP + 0x40]
// 004bfd5f: PUSH EAX
// 004bfd60: MOV EDX,dword ptr [ESI + 0x10]
// 004bfd63: PUSH EDX
// 004bfd64: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004bfd69: ADD ESP,0xc
// 004bfd6c: LEA EBX,[ESP + 0xc]
// 004bfd70: MOV EAX,ESI
// 004bfd72: FLD float ptr [EAX]
// 004bfd74: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfd7a: FISTP dword ptr [EBX]
// 004bfd7c: FLD float ptr [EAX + 0x4]
// 004bfd7f: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfd85: FISTP dword ptr [EBX + 0x4]
// 004bfd88: FLD float ptr [EAX + 0x8]
// 004bfd8b: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bfd91: FISTP dword ptr [EBX + 0x8]
// 004bfd94: LEA EBX,[ESP + 0x24]
// 004bfd98: LEA EAX,[ESP + 0x3c]
// 004bfd9c: FLD float ptr [EAX]
// 004bfd9e: FMUL float ptr [0x0065dcac]
//   XREF to: 0065dcac (READ)
// 004bfda4: FISTP dword ptr [EBX]
// 004bfda6: FLD float ptr [EAX + 0x4]
// 004bfda9: FMUL float ptr [0x0065dcac]
//   XREF to: 0065dcac (READ)
// 004bfdaf: FISTP dword ptr [EBX + 0x4]
// 004bfdb2: FLD float ptr [EAX + 0x8]
// 004bfdb5: FMUL float ptr [0x0065dcac]
//   XREF to: 0065dcac (READ)
// 004bfdbb: FISTP dword ptr [EBX + 0x8]
// 004bfdbe: PUSH 0x4
// 004bfdc0: PUSH EBP
// 004bfdc1: LEA EAX,[ESP + 0x2c]
// 004bfdc5: PUSH EAX
// 004bfdc6: LEA EAX,[ESP + 0x18]
// 004bfdca: PUSH EAX
// 004bfdcb: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004bfdd1: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004bfdd2: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 004bfdd7: ADD ESP,0x14
// 004bfdda: JMP 0x004bfd02
//   XREF to: 004bfd02 (UNCONDITIONAL_JUMP)
// 004bfddf: PUSH EDI
//   Label: LAB_004bfddf
// 004bfde0: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004bfde5: ADD ESP,0x4
// 004bfde8: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfded: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004bfdee: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
