// Name: core_fire.cpp_CExplosion_FUN_004c3b10
// Address: 004c3b10
// Address Range: [[004c3b10, 004c3e82]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CExplosion_FUN_004c3b10(CExplosion * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c73ae [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629dab = 27
//   float FLOAT_00629db3 = 108
//   double DOUBLE_00629dbb = 0.00390625
//   double DOUBLE_00629dc3 = 148
//   float FLOAT_00629dcb = 143
//   double DOUBLE_00629dd3 = 113
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic[54] g_FireEffectExplosionTextures
//   undefined4 DAT_00fe0000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_FUN_004c3b10(CExplosion *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  undefined4 in_EAX;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  float fStack00000008;
  int iStack0000000c;
  float fStack00000010;
  float fStack00000014;
  undefined1 local_5c [24];
  undefined4 local_44;
  undefined4 local_40;
  CVector3i local_3c;
  CVector3i local_2c;
  CVector3i local_1c;
  float local_10;
  float local_c;
  
  if ((*(uint *)(this_ptr->field0_0x0 + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  fVar3 = ((float10)1 - (float10)*(float *)(this_ptr->field0_0x0 + 0xc)) * (float10)DOUBLE_00629dab;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_EAX));
  local_1c.y = (int)ROUND(fVar3);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectExplosionTextures + local_1c.y * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)(local_5c + 0x10));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(local_5c + 0x14),(CVector3i *)0x0);
  fVar3 = (float10)*(float *)(this_ptr->field0_0x0 + 0x10) * (float10)DOUBLE_00629dc3 *
          (float10)DOUBLE_00629dbb;
  fVar4 = -(float10)*(float *)(this_ptr->field0_0x0 + 0x10) * (float10)FLOAT_00629db3 *
          (float10)DOUBLE_00629dbb;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(extraout_EDX,*(undefined4 *)(this_ptr->field0_0x0 + 0x18)));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  iStack0000000c = (int)ROUND(fVar3);
  fStack00000008 = (float)(int)ROUND(fVar4);
  if (SUB84(dVar5,0) != 0) {
    iStack0000000c = -iStack0000000c;
    fStack00000008 = (float)-(int)fStack00000008;
  }
  fStack00000010 = fStack00000008;
  local_1c.y = (int)(float)(int)fStack00000008;
  local_1c.z = (int)(*(float *)(this_ptr->field0_0x0 + 0x10) * FLOAT_00629dcb *
                    (float)DOUBLE_00629dbb);
  local_10 = 0.0;
  local_c = (float)(int)ROUND((float)local_1c.y * FLOAT_0065dca8);
  fVar1 = (float)local_1c.z * FLOAT_0065dca8;
  fVar2 = FLOAT_0065dca8 * 0.0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_c);
  fStack00000014 = fStack00000010;
  local_1c.z = (int)(float)(int)fStack00000010;
  local_2c.x = (int)ROUND((float)local_1c.z * FLOAT_0065dca8);
  local_2c.y = (int)ROUND(local_10 * FLOAT_0065dca8);
  local_2c.z = (int)ROUND(local_c * FLOAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_2c);
  local_c = -*(float *)(this_ptr->field0_0x0 + 0x10) * (float)DOUBLE_00629dd3 *
            (float)DOUBLE_00629dbb;
  local_1c.x = (int)ROUND(local_10 * FLOAT_0065dca8);
  local_1c.y = (int)ROUND(local_c * FLOAT_0065dca8);
  local_1c.z = (int)ROUND((float)(int)ROUND(fVar1) * FLOAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_c = fStack00000010;
  local_3c.x = (int)ROUND(fStack00000010 * FLOAT_0065dca8);
  local_3c.y = (int)ROUND((float)(int)ROUND(fVar1) * FLOAT_0065dca8);
  local_3c.z = (int)ROUND((float)(int)ROUND(fVar2) * FLOAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_3c);
  this_ptr_00 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->u = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr->v = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr[1].u = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr[1].v = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr[2].u = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr[2].v = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr[3].u = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr[3].v = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr->w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[1].w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[2].w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[3].w_recip = 4.59177e-41;
  local_5c._0_4_ = 4;
  local_5c._16_4_ = 0;
  local_5c._12_4_ = 0;
  local_5c._8_4_ = 0;
  local_5c._4_4_ = 0;
  local_5c._20_4_ = 0;
  local_3c.x = 3;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_5c,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c3b10: PUSH ESI
//   Label: core_fire.cpp_CExplosion_FUN_004c3b10
// 004c3b11: PUSH EBP
// 004c3b12: SUB ESP,0x84
// 004c3b18: MOV ESI,dword ptr [ESP + 0x90]
// 004c3b1f: TEST dword ptr [ESI + 0xc],0x7fffffff
// 004c3b26: JNZ 0x004c3b31
//   XREF to: 004c3b31 (CONDITIONAL_JUMP)
// 004c3b28: ADD ESP,0x84
// 004c3b2e: POP EBP
// 004c3b2f: POP ESI
// 004c3b30: RET
// 004c3b31: PUSH EDI
//   Label: LAB_004c3b31
// 004c3b32: PUSH EBX
// 004c3b33: FLD float ptr [ESI + 0xc]
// 004c3b36: FLD1
// 004c3b38: FSUBRP
// 004c3b3a: FMUL double ptr [0x00629dab]
//   XREF to: 00629dab (READ)
// 004c3b40: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c3b45: FISTP dword ptr [ESP + 0x78]
// 004c3b49: MOV EDX,dword ptr [ESP + 0x78]
// 004c3b4d: LEA EAX,[EDX*0x4 + 0x0]
// 004c3b54: SUB EAX,EDX
// 004c3b56: SHL EAX,0x4
// 004c3b59: ADD EAX,0x67a86c
//   XREF to: 0067a86c (DATA)
// 004c3b5e: PUSH EAX
// 004c3b5f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3b65: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c3b66: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c3b6b: ADD ESP,0x8
// 004c3b6e: PUSH ESI
// 004c3b6f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3b75: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c3b76: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c3b7b: ADD ESP,0x8
// 004c3b7e: LEA EAX,[ESP + 0x3c]
// 004c3b82: PUSH EAX
// 004c3b83: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3b89: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c3b8a: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 004c3b8f: ADD ESP,0x8
// 004c3b92: PUSH 0x0
// 004c3b94: LEA EAX,[ESP + 0x40]
// 004c3b98: PUSH EAX
// 004c3b99: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3b9f: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004c3ba0: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c3ba5: FLD float ptr [ESI + 0x10]
// 004c3ba8: FMUL double ptr [0x00629dc3]
//   XREF to: 00629dc3 (READ)
// 004c3bae: FLD float ptr [ESI + 0x10]
// 004c3bb1: FCHS
// 004c3bb3: FMUL float ptr [0x00629db3]
//   XREF to: 00629db3 (READ)
// 004c3bb9: FXCH
// 004c3bbb: FLD double ptr [0x00629dbb]
//   XREF to: 00629dbb (READ)
// 004c3bc1: FXCH
// 004c3bc3: FMUL ST1
// 004c3bc5: FXCH ST2
// 004c3bc7: FMULP
// 004c3bc9: ADD ESP,0xc
// 004c3bcc: MOV EAX,dword ptr [ESI + 0x18]
// 004c3bcf: FXCH
// 004c3bd1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c3bd6: FXCH
// 004c3bd8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c3bdd: FXCH
// 004c3bdf: FISTP dword ptr [ESP + 0x84]
// 004c3be6: FISTP dword ptr [ESP + 0x80]
// 004c3bed: TEST EAX,EAX
// 004c3bef: JZ 0x004c3c11
//   XREF to: 004c3c11 (CONDITIONAL_JUMP)
// 004c3bf1: MOV ECX,dword ptr [ESP + 0x84]
// 004c3bf8: MOV EDX,dword ptr [ESP + 0x80]
// 004c3bff: NEG ECX
// 004c3c01: NEG EDX
// 004c3c03: MOV dword ptr [ESP + 0x84],ECX
// 004c3c0a: MOV dword ptr [ESP + 0x80],EDX
// 004c3c11: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_004c3c11
// 004c3c18: MOV dword ptr [ESP + 0x88],EAX
// 004c3c1f: FILD dword ptr [ESP + 0x88]
// 004c3c26: FSTP float ptr [ESP + 0x7c]
// 004c3c2a: MOV EAX,dword ptr [ESP + 0x7c]
// 004c3c2e: MOV dword ptr [ESP + 0x60],EAX
// 004c3c32: FLD float ptr [ESI + 0x10]
// 004c3c35: FMUL float ptr [0x00629dcb]
//   XREF to: 00629dcb (READ)
// 004c3c3b: FMUL double ptr [0x00629dbb]
//   XREF to: 00629dbb (READ)
// 004c3c41: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3c47: XOR EBX,EBX
// 004c3c49: LEA EAX,[ESP + 0x60]
// 004c3c4d: MOV dword ptr [ESP + 0x68],EBX
// 004c3c51: LEA EBX,[ESP + 0x6c]
// 004c3c55: FSTP float ptr [ESP + 0x64]
// 004c3c59: FLD float ptr [EAX]
// 004c3c5b: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3c61: FISTP dword ptr [EBX]
// 004c3c63: FLD float ptr [EAX + 0x4]
// 004c3c66: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3c6c: FISTP dword ptr [EBX + 0x4]
// 004c3c6f: FLD float ptr [EAX + 0x8]
// 004c3c72: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3c78: FISTP dword ptr [EBX + 0x8]
// 004c3c7b: LEA EAX,[ESP + 0x6c]
// 004c3c7f: PUSH EAX
// 004c3c80: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c3c82: PUSH EAX
// 004c3c83: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c3c88: ADD ESP,0x8
// 004c3c8b: MOV EAX,dword ptr [ESP + 0x84]
// 004c3c92: LEA EBX,[ESP + 0x48]
// 004c3c96: MOV dword ptr [ESP + 0x88],EAX
// 004c3c9d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3ca3: FILD dword ptr [ESP + 0x88]
// 004c3caa: LEA EAX,[ESP + 0x60]
// 004c3cae: FSTP float ptr [ESP + 0x60]
// 004c3cb2: FLD float ptr [EAX]
// 004c3cb4: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3cba: FISTP dword ptr [EBX]
// 004c3cbc: FLD float ptr [EAX + 0x4]
// 004c3cbf: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3cc5: FISTP dword ptr [EBX + 0x4]
// 004c3cc8: FLD float ptr [EAX + 0x8]
// 004c3ccb: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3cd1: FISTP dword ptr [EBX + 0x8]
// 004c3cd4: LEA EAX,[ESP + 0x48]
// 004c3cd8: PUSH EAX
// 004c3cd9: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c3cdb: ADD EAX,0x30
// 004c3cde: PUSH EAX
// 004c3cdf: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c3ce4: FLD float ptr [ESI + 0x10]
// 004c3ce7: FCHS
// 004c3ce9: FMUL double ptr [0x00629dd3]
//   XREF to: 00629dd3 (READ)
// 004c3cef: FMUL double ptr [0x00629dbb]
//   XREF to: 00629dbb (READ)
// 004c3cf5: LEA EBX,[ESP + 0x5c]
// 004c3cf9: LEA EAX,[ESP + 0x68]
// 004c3cfd: ADD ESP,0x8
// 004c3d00: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3d06: FSTP float ptr [ESP + 0x64]
// 004c3d0a: FLD float ptr [EAX]
// 004c3d0c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3d12: FISTP dword ptr [EBX]
// 004c3d14: FLD float ptr [EAX + 0x4]
// 004c3d17: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3d1d: FISTP dword ptr [EBX + 0x4]
// 004c3d20: FLD float ptr [EAX + 0x8]
// 004c3d23: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3d29: FISTP dword ptr [EBX + 0x8]
// 004c3d2c: LEA EAX,[ESP + 0x54]
// 004c3d30: PUSH EAX
// 004c3d31: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c3d33: ADD EAX,0x60
// 004c3d36: PUSH EAX
// 004c3d37: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c3d3c: ADD ESP,0x8
// 004c3d3f: MOV EAX,dword ptr [ESP + 0x7c]
// 004c3d43: LEA EBX,[ESP + 0x30]
// 004c3d47: MOV dword ptr [ESP + 0x60],EAX
// 004c3d4b: LEA EAX,[ESP + 0x60]
// 004c3d4f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3d55: FLD float ptr [EAX]
// 004c3d57: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3d5d: FISTP dword ptr [EBX]
// 004c3d5f: FLD float ptr [EAX + 0x4]
// 004c3d62: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3d68: FISTP dword ptr [EBX + 0x4]
// 004c3d6b: FLD float ptr [EAX + 0x8]
// 004c3d6e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3d74: FISTP dword ptr [EBX + 0x8]
// 004c3d77: LEA EAX,[ESP + 0x30]
// 004c3d7b: PUSH EAX
// 004c3d7c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c3d7e: ADD EAX,0x90
// 004c3d83: PUSH EAX
// 004c3d84: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c3d89: ADD ESP,0x8
// 004c3d8c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3d91: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3d93: MOV dword ptr [EDX + 0x18],0x20000
// 004c3d9a: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3d9c: MOV dword ptr [EDX + 0x1c],0x20000
// 004c3da3: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3da5: MOV dword ptr [EDX + 0x48],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c3dac: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3dae: MOV dword ptr [EDX + 0x4c],0x20000
// 004c3db5: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3db7: MOV dword ptr [EDX + 0x78],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c3dbe: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3dc0: MOV dword ptr [EDX + 0x7c],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c3dc7: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3dc9: MOV dword ptr [EDX + 0xa8],0x20000
// 004c3dd3: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3dd5: MOV dword ptr [EDX + 0xac],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c3ddf: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3de1: MOV dword ptr [EDX + 0x2c],0x8000
// 004c3de8: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3dea: MOV dword ptr [EDX + 0x5c],0x8000
// 004c3df1: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3df3: MOV dword ptr [EDX + 0x8c],0x8000
// 004c3dfd: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3dff: MOV ESI,0x4
// 004c3e04: MOV EBP,0x3
// 004c3e09: MOV dword ptr [EDX + 0xbc],0x8000
// 004c3e13: XOR EDI,EDI
// 004c3e15: MOV dword ptr [ESP + 0xc],ESI
// 004c3e19: MOV dword ptr [ESP + 0x1c],EDI
// 004c3e1d: MOV dword ptr [ESP + 0x18],EDI
// 004c3e21: MOV dword ptr [ESP + 0x14],EDI
// 004c3e25: MOV dword ptr [ESP + 0x10],EDI
// 004c3e29: MOV ESI,0x1
// 004c3e2e: MOV dword ptr [ESP + 0x20],EDI
// 004c3e32: PUSH ESI
// 004c3e33: MOV dword ptr [ESP + 0x30],EBP
// 004c3e37: MOV EDI,0x2
// 004c3e3c: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c3e3d: MOV dword ptr [ESP + 0x2c],ESI
// 004c3e41: MOV dword ptr [ESP + 0x30],EDI
// 004c3e45: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c3e4a: ADD ESP,0x8
// 004c3e4d: PUSH 0x123
// 004c3e52: LEA EAX,[ESP + 0xc]
// 004c3e56: PUSH EAX
// 004c3e57: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3e5c: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c3e5d: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 004c3e62: ADD ESP,0xc
// 004c3e65: XOR EBX,EBX
// 004c3e67: PUSH EBX
// 004c3e68: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3e6e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c3e6f: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c3e74: ADD ESP,0x8
// 004c3e77: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3e7d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c3e7e: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
