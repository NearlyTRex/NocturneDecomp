// Name: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
// Address: 00473a20
// Address Range: [[00473a20, 00473f55] [00473f6c, 00473f87]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c8a3 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061f14b = 0.00390625
//   double DOUBLE_0061f153 = 65536
//   float FLOAT_0065c900 = 256
//   undefined4 DAT_0066fef0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight *this_ptr)

{
  CVector3i *world_position;
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  float fVar2;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  byte bVar3;
  float10 fVar4;
  double dVar5;
  int aiStackY_1054 [989];
  CVector3i *in_stack_ffffff34;
  CDemonRenderer *local_a8;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined1 auStack_74 [12];
  int local_68 [2];
  float local_60;
  float local_5c;
  float local_58;
  int local_54 [3];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  CVector3i aCStack_2c [2];
  
  bVar3 = 0;
  if (this_ptr->field17_0x1cbc == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)world_position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,&fStack_30);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,aCStack_2c,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff34);
  local_58 = (float)auStack_74._8_4_;
  local_54[(uint)bVar3 * -2] = local_68[(uint)bVar3 * -2];
  local_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_58 = (float)DOUBLE_0061f14b;
  local_60 = (float)local_54[0] * local_58;
  local_5c = (float)local_54[1] * local_58;
  local_58 = (float)local_54[2] * local_58;
  local_90 = (float)world_position->x - local_60;
  local_8c = (float)(this_ptr->base).base.position.y - local_5c;
  local_88 = (float)(this_ptr->base).base.position.z - local_58;
  if (&local_48 != &local_90) {
    local_48 = local_90;
    local_44 = local_8c;
    local_40 = local_88;
  }
  local_3c = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
  local_38 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
  local_34 = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
  fVar2 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
  if (fVar2 <= 0.0) {
    local_44 = 0.0;
    local_48 = 0.0;
    local_40 = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    local_48 = local_48 * fVar2;
    local_44 = local_44 * fVar2;
    local_40 = local_40 * fVar2;
  }
  fVar4 = -((float10)local_40 * (float10)local_34 +
           (float10)local_48 * (float10)local_3c + (float10)local_44 * (float10)local_38);
  fVar2 = (float)fVar4;
  fVar4 = fVar4 * (float10)fVar2 * (float10)fVar2 * (float10)fVar2 * (float10)DOUBLE_0061f153;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(0xffff,(int)g_PerspectiveReciprocal / 2));
  lVar1 = (longlong)((int)((ulonglong)dVar5 >> 0x20) - SUB84(dVar5,0)) * (longlong)(int)ROUND(fVar4)
  ;
  fVar2 = (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (0.0 < unaff_ESI) {
    local_90 = -0.5;
    aCStack_2c[0].x = (int)ROUND(FLOAT_0065c900 * 0.5);
    aCStack_2c[0].y = (int)ROUND(FLOAT_0065c900 * 0.5);
    aCStack_2c[0].z = (int)ROUND(FLOAT_0065c900 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,aCStack_2c);
    local_90 = 0.5;
    local_8c = -0.5;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xfffffff0);
    local_90 = -0.5;
    local_8c = -0.5;
    local_88 = -0.5;
    auStack_74._8_4_ = (undefined4)ROUND(FLOAT_0065c900 * -0.5);
    local_68[0] = (int)ROUND(FLOAT_0065c900 * -0.5);
    local_68[1] = (int)ROUND(FLOAT_0065c900 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(auStack_74 + 8));
    local_8c = 0.5;
    local_84 = 0xbf000000;
    local_88 = -0.5;
    auStack_74._0_4_ = (undefined4)ROUND(FLOAT_0065c900 * 0.5);
    auStack_74._4_4_ = (undefined4)ROUND(FLOAT_0065c900 * -0.5);
    auStack_74._8_4_ = (undefined4)ROUND(FLOAT_0065c900 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)auStack_74);
    this_ptr_00 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr->w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr[1].w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[2].w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[3].w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr->color = 0xffff;
    this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,g_LightTextures + 1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    local_90 = 0.0;
    local_84 = 3;
    local_8c = 1.4013e-45;
    local_88 = 2.8026e-45;
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&local_a8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  local_a8 = g_CDemonRendererPtr;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  local_a8 = (CDemonRenderer *)0x473f62;
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(this_ptr);
  return;
}


// Assembly code:
// 00473a20: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
// 00473a21: PUSH ESI
// 00473a22: PUSH EDI
// 00473a23: PUSH EBP
// 00473a24: MOV EBP,ESP
// 00473a26: SUB ESP,0xc8
// 00473a2c: AND ESP,0xfffffff8
// 00473a2f: MOV EAX,dword ptr [EBP + 0x14]
// 00473a32: CMP dword ptr [EAX + 0x1cbc],0x0
// 00473a39: JNZ 0x00473a42
//   XREF to: 00473a42 (CONDITIONAL_JUMP)
// 00473a3b: MOV ESP,EBP
// 00473a3d: POP EBP
// 00473a3e: POP EDI
// 00473a3f: POP ESI
// 00473a40: POP EBX
// 00473a41: RET
// 00473a42: LEA EBX,[EAX + 0x4]
//   Label: LAB_00473a42
// 00473a45: PUSH EBX
// 00473a46: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473a4c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00473a4d: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00473a52: ADD ESP,0x8
// 00473a55: LEA EAX,[ESP + 0xa4]
// 00473a5c: PUSH EAX
// 00473a5d: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473a63: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00473a64: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 00473a69: ADD ESP,0x8
// 00473a6c: PUSH 0x0
// 00473a6e: LEA EAX,[ESP + 0xa8]
// 00473a75: PUSH EAX
// 00473a76: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473a7c: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00473a7d: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00473a82: ADD ESP,0xc
// 00473a85: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00473a8a: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00473a8b: LEA ESI,[ESP + 0x60]
// 00473a8f: LEA EDI,[ESP + 0x78]
// 00473a93: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 00473a98: LEA ESI,[ESP + 0x60]
// 00473a9c: ADD ESP,0x4
// 00473a9f: MOVSD ES:EDI,ESI
// 00473aa0: MOVSD ES:EDI,ESI
// 00473aa1: MOVSD ES:EDI,ESI
// 00473aa2: MOV EAX,dword ptr [ESP + 0x74]
// 00473aa6: MOV dword ptr [ESP + 0xc4],EAX
// 00473aad: FILD dword ptr [ESP + 0xc4]
// 00473ab4: MOV EAX,dword ptr [ESP + 0x78]
// 00473ab8: FLD double ptr [0x0061f14b]
//   XREF to: 0061f14b (READ)
// 00473abe: FXCH
// 00473ac0: FMUL ST1
// 00473ac2: MOV dword ptr [ESP + 0xc4],EAX
// 00473ac9: MOV EAX,dword ptr [ESP + 0x7c]
// 00473acd: FILD dword ptr [ESP + 0xc4]
// 00473ad4: MOV dword ptr [ESP + 0xc4],EAX
// 00473adb: FMUL ST2
// 00473add: FILD dword ptr [ESP + 0xc4]
// 00473ae4: FMULP ST3
// 00473ae6: FXCH
// 00473ae8: FSTP float ptr [ESP + 0x68]
// 00473aec: FSTP float ptr [ESP + 0x6c]
// 00473af0: FSTP float ptr [ESP + 0x70]
// 00473af4: FLD float ptr [EBX]
// 00473af6: FSUB float ptr [ESP + 0x68]
// 00473afa: FSTP float ptr [ESP + 0x38]
// 00473afe: FLD float ptr [EBX + 0x4]
// 00473b01: FSUB float ptr [ESP + 0x6c]
// 00473b05: LEA EDX,[ESP + 0x80]
// 00473b0c: FSTP float ptr [ESP + 0x3c]
// 00473b10: FLD float ptr [EBX + 0x8]
// 00473b13: FSUB float ptr [ESP + 0x70]
// 00473b17: LEA EAX,[ESP + 0x38]
// 00473b1b: FSTP float ptr [ESP + 0x40]
// 00473b1f: CMP EDX,EAX
// 00473b21: JZ 0x00473b44
//   XREF to: 00473b44 (CONDITIONAL_JUMP)
// 00473b23: MOV EAX,dword ptr [ESP + 0x38]
// 00473b27: MOV dword ptr [ESP + 0x80],EAX
// 00473b2e: MOV EAX,dword ptr [ESP + 0x3c]
// 00473b32: MOV dword ptr [ESP + 0x84],EAX
// 00473b39: MOV EAX,dword ptr [ESP + 0x40]
// 00473b3d: MOV dword ptr [ESP + 0x88],EAX
// 00473b44: FLD float ptr [ESP + 0x84]
//   Label: LAB_00473b44
// 00473b4b: MOV EAX,dword ptr [EBP + 0x14]
// 00473b4e: FMUL float ptr [ESP + 0x84]
// 00473b55: MOV EAX,dword ptr [EAX + 0x18]
// 00473b58: FLD float ptr [ESP + 0x80]
// 00473b5f: FMUL ST0
// 00473b61: MOV dword ptr [ESP + 0x8c],EAX
// 00473b68: MOV EAX,dword ptr [EBP + 0x14]
// 00473b6b: FADDP
// 00473b6d: MOV EAX,dword ptr [EAX + 0x24]
// 00473b70: FLD float ptr [ESP + 0x88]
// 00473b77: MOV dword ptr [ESP + 0x90],EAX
// 00473b7e: MOV EAX,dword ptr [EBP + 0x14]
// 00473b81: FMUL float ptr [ESP + 0x88]
// 00473b88: MOV EAX,dword ptr [EAX + 0x30]
// 00473b8b: FADDP
// 00473b8d: MOV dword ptr [ESP + 0x94],EAX
// 00473b94: FSQRT
// 00473b96: FST float ptr [ESP]
// 00473b99: FLDZ
// 00473b9b: FCOMPP
// 00473b9d: FNSTSW AX
// 00473b9f: SAHF
// 00473ba0: JNC 0x00473f6c
//   XREF to: 00473f6c (CONDITIONAL_JUMP)
// 00473ba6: FLD1
// 00473ba8: FLD float ptr [ESP + 0x80]
// 00473baf: FXCH
// 00473bb1: FDIV float ptr [ESP]
// 00473bb4: FXCH
// 00473bb6: FMUL ST1
// 00473bb8: FLD float ptr [ESP + 0x84]
// 00473bbf: FMUL ST2
// 00473bc1: FLD float ptr [ESP + 0x88]
// 00473bc8: FMULP ST3
// 00473bca: FXCH
// 00473bcc: FSTP float ptr [ESP + 0x80]
// 00473bd3: FSTP float ptr [ESP + 0x84]
// 00473bda: FSTP float ptr [ESP + 0x88]
// 00473be1: MOV EAX,[0x02d051f4]
//   Label: LAB_00473be1
//   XREF to: 02d051f4 (READ)
// 00473be6: MOV EDX,EAX
// 00473be8: SAR EDX,0x1f
// 00473beb: SUB EAX,EDX
// 00473bed: SAR EAX,0x1
// 00473bef: FLD float ptr [ESP + 0x84]
// 00473bf6: FMUL float ptr [ESP + 0x90]
// 00473bfd: FLD float ptr [ESP + 0x80]
// 00473c04: FMUL float ptr [ESP + 0x8c]
// 00473c0b: FADDP
// 00473c0d: FLD float ptr [ESP + 0x88]
// 00473c14: FMUL float ptr [ESP + 0x94]
// 00473c1b: FADDP
// 00473c1d: FCHS
// 00473c1f: FST float ptr [ESP + 0xbc]
// 00473c26: FMUL float ptr [ESP + 0xbc]
// 00473c2d: FMUL float ptr [ESP + 0xbc]
// 00473c34: FMUL float ptr [ESP + 0xbc]
// 00473c3b: FMUL double ptr [0x0061f153]
//   XREF to: 0061f153 (READ)
// 00473c41: MOV EDX,0xffff
// 00473c46: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00473c4b: SUB EDX,EAX
// 00473c4d: FISTP dword ptr [ESP + 0xc0]
// 00473c54: MOV EAX,EDX
// 00473c56: MOV EDX,dword ptr [ESP + 0xc0]
// 00473c5d: IMUL EDX
// 00473c5f: SHRD EAX,EDX,0x10
// 00473c63: FLDZ
// 00473c65: MOV ESI,EAX
// 00473c67: FCOMP float ptr [ESP + 0xbc]
// 00473c6e: FNSTSW AX
// 00473c70: SAHF
// 00473c71: JNC 0x00473f3a
//   XREF to: 00473f3a (CONDITIONAL_JUMP)
// 00473c77: MOV EDI,0x3f000000
// 00473c7c: MOV EDX,0xbf000000
// 00473c81: LEA EBX,[ESP + 0x98]
// 00473c88: LEA EAX,[ESP + 0x2c]
// 00473c8c: MOV dword ptr [ESP + 0x2c],EDI
// 00473c90: MOV dword ptr [ESP + 0x30],EDI
// 00473c94: MOV dword ptr [ESP + 0x34],EDX
// 00473c98: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473c9e: FLD float ptr [EAX]
// 00473ca0: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473ca6: FISTP dword ptr [EBX]
// 00473ca8: FLD float ptr [EAX + 0x4]
// 00473cab: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473cb1: FISTP dword ptr [EBX + 0x4]
// 00473cb4: FLD float ptr [EAX + 0x8]
// 00473cb7: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473cbd: FISTP dword ptr [EBX + 0x8]
// 00473cc0: LEA EAX,[ESP + 0x98]
// 00473cc7: PUSH EAX
// 00473cc8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00473cca: PUSH EAX
// 00473ccb: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00473cd0: MOV ECX,0xbf000000
// 00473cd5: LEA EBX,[ESP + 0xb8]
// 00473cdc: LEA EAX,[ESP + 0x34]
// 00473ce0: ADD ESP,0x8
// 00473ce3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473ce9: MOV dword ptr [ESP + 0x2c],ECX
// 00473ced: MOV dword ptr [ESP + 0x30],EDI
// 00473cf1: MOV dword ptr [ESP + 0x34],ECX
// 00473cf5: FLD float ptr [EAX]
// 00473cf7: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473cfd: FISTP dword ptr [EBX]
// 00473cff: FLD float ptr [EAX + 0x4]
// 00473d02: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473d08: FISTP dword ptr [EBX + 0x4]
// 00473d0b: FLD float ptr [EAX + 0x8]
// 00473d0e: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473d14: FISTP dword ptr [EBX + 0x8]
// 00473d17: LEA EAX,[ESP + 0xb0]
// 00473d1e: PUSH EAX
// 00473d1f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00473d21: ADD EAX,0x30
// 00473d24: PUSH EAX
// 00473d25: MOV EDI,ECX
// 00473d27: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00473d2c: ADD ESP,0x8
// 00473d2f: MOV EAX,EDI
// 00473d31: LEA EBX,[ESP + 0x50]
// 00473d35: MOV dword ptr [ESP + 0x2c],EAX
// 00473d39: MOV dword ptr [ESP + 0x30],EAX
// 00473d3d: MOV dword ptr [ESP + 0x34],EAX
// 00473d41: LEA EAX,[ESP + 0x2c]
// 00473d45: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473d4b: FLD float ptr [EAX]
// 00473d4d: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473d53: FISTP dword ptr [EBX]
// 00473d55: FLD float ptr [EAX + 0x4]
// 00473d58: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473d5e: FISTP dword ptr [EBX + 0x4]
// 00473d61: FLD float ptr [EAX + 0x8]
// 00473d64: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473d6a: FISTP dword ptr [EBX + 0x8]
// 00473d6d: LEA EAX,[ESP + 0x50]
// 00473d71: PUSH EAX
// 00473d72: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00473d74: ADD EAX,0x60
// 00473d77: PUSH EAX
// 00473d78: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00473d7d: MOV EBX,0x3f000000
// 00473d82: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473d88: ADD ESP,0x8
// 00473d8b: MOV EAX,EDI
// 00473d8d: MOV dword ptr [ESP + 0x2c],EBX
// 00473d91: MOV dword ptr [ESP + 0x34],EAX
// 00473d95: LEA EBX,[ESP + 0x44]
// 00473d99: LEA EAX,[ESP + 0x2c]
// 00473d9d: MOV dword ptr [ESP + 0x30],EDI
// 00473da1: FLD float ptr [EAX]
// 00473da3: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473da9: FISTP dword ptr [EBX]
// 00473dab: FLD float ptr [EAX + 0x4]
// 00473dae: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473db4: FISTP dword ptr [EBX + 0x4]
// 00473db7: FLD float ptr [EAX + 0x8]
// 00473dba: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473dc0: FISTP dword ptr [EBX + 0x8]
// 00473dc3: LEA EAX,[ESP + 0x44]
// 00473dc7: PUSH EAX
// 00473dc8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00473dca: ADD EAX,0x90
// 00473dcf: PUSH EAX
// 00473dd0: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00473dd5: ADD ESP,0x8
// 00473dd8: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00473ddd: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473ddf: MOV dword ptr [EBX + 0x18],0xf80000
//   XREF to: 00f80000 (DATA)
// 00473de6: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473de8: MOV dword ptr [EBX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00473def: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473df1: MOV dword ptr [EBX + 0x2c],ESI
// 00473df4: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473df6: MOV dword ptr [EBX + 0x48],0x80000
// 00473dfd: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473dff: MOV dword ptr [EBX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00473e06: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e08: MOV dword ptr [EDX + 0x5c],ESI
// 00473e0b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e0d: MOV dword ptr [EDX + 0x78],0x80000
// 00473e14: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e16: MOV dword ptr [EBX + 0x7c],0x80000
// 00473e1d: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e1f: MOV dword ptr [EBX + 0x8c],ESI
// 00473e25: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e27: MOV dword ptr [EBX + 0xa8],0xf80000
//   XREF to: 00f80000 (DATA)
// 00473e31: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e33: MOV dword ptr [EBX + 0xac],0x80000
// 00473e3d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e3f: MOV dword ptr [EDX + 0xbc],ESI
// 00473e45: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e47: MOV dword ptr [EDX + 0x20],0xffff
// 00473e4e: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e50: MOV dword ptr [EDX + 0x24],0xffff
// 00473e57: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e59: MOV dword ptr [EBX + 0x28],0xffff
// 00473e60: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e62: MOV dword ptr [EBX + 0x50],0xffff
// 00473e69: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e6b: MOV dword ptr [EBX + 0x54],0xffff
// 00473e72: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e74: MOV dword ptr [EDX + 0x58],0xffff
// 00473e7b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e7d: MOV dword ptr [EDX + 0x80],0xffff
// 00473e87: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e89: MOV dword ptr [EDX + 0x84],0xffff
// 00473e93: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473e95: MOV dword ptr [EDX + 0x88],0xffff
// 00473e9f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473ea1: MOV dword ptr [EBX + 0xb0],0xffff
// 00473eab: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473ead: MOV dword ptr [EDX + 0xb4],0xffff
// 00473eb7: PUSH 0x66fef0
//   XREF to: 0066fef0 (DATA)
// 00473ebc: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00473ebe: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00473ebf: MOV dword ptr [EDX + 0xb8],0xffff
// 00473ec9: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00473ece: ADD ESP,0x8
// 00473ed1: PUSH 0x1
// 00473ed3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473ed9: MOV EDI,0xffff0001
// 00473ede: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00473edf: MOV ESI,0x3
// 00473ee4: XOR EBX,EBX
// 00473ee6: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00473eeb: MOV ECX,0x4
// 00473ef0: ADD ESP,0x8
// 00473ef3: MOV EAX,0xffff8001
// 00473ef8: MOV dword ptr [ESP + 0x8],ECX
// 00473efc: MOV dword ptr [ESP + 0xc],EBX
// 00473f00: MOV dword ptr [ESP + 0x10],EBX
// 00473f04: MOV dword ptr [ESP + 0x14],EDI
// 00473f08: MOV dword ptr [ESP + 0x18],EAX
// 00473f0c: MOV dword ptr [ESP + 0x1c],EBX
// 00473f10: MOV dword ptr [ESP + 0x28],ESI
// 00473f14: LEA EAX,[ESP + 0x4]
// 00473f18: MOV ECX,0x1
// 00473f1d: PUSH EAX
// 00473f1e: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473f24: MOV EBX,0x2
// 00473f29: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00473f2a: MOV dword ptr [ESP + 0x28],ECX
// 00473f2e: MOV dword ptr [ESP + 0x2c],EBX
// 00473f32: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 00473f37: ADD ESP,0x8
// 00473f3a: PUSH 0x0
//   Label: LAB_00473f3a
// 00473f3c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00473f41: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00473f42: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00473f47: ADD ESP,0x8
// 00473f4a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473f50: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00473f51: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00473f6c: XOR EDX,EDX
//   Label: LAB_00473f6c
// 00473f6e: MOV dword ptr [ESP + 0x84],EDX
// 00473f75: MOV dword ptr [ESP + 0x80],EDX
// 00473f7c: MOV dword ptr [ESP + 0x88],EDX
// 00473f83: JMP 0x00473be1
//   XREF to: 00473be1 (UNCONDITIONAL_JUMP)
