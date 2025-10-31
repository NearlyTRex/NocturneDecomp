// Name: core_fire.cpp_CGunFlame_FUN_004c50b0
// Address: 004c50b0
// Address Range: [[004c50b0, 004c55ef]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_FUN_004c50b0(CGunFlame * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c73e7 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629f63 = 4
//   double DOUBLE_00629f6b = 0.400000000000000
//   double DOUBLE_00629f73 = 2.5
//   double DOUBLE_00629f7b = 2
//   float FLOAT_00629f83 = 128
//   double DOUBLE_00629f8b = 0.00390625
//   double DOUBLE_00629f93 = 128
//   float FLOAT_00629f9b = 32768
//   float FLOAT_00629f9f = 2
//   float FLOAT_00629fa3 = 255
//   float FLOAT_00629fa7 = 200
//   float FLOAT_00629fab = 256
//   float FLOAT_00629faf = 150
//   float FLOAT_00629fb3 = 50
//   undefined4 DAT_0065dca8
//   undefined4 DAT_0065dcc4
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00fe0000
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d13cd4
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_FUN_004c50b0(CGunFlame *this_ptr)

{
  float fVar1;
  undefined4 in_EAX;
  float *pfVar2;
  undefined4 in_EDX;
  undefined4 *puVar3;
  CDemonRenderer *pCVar4;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  int iStack00000014;
  float fStack00000018;
  float fStack0000001c;
  float fStack00000020;
  undefined4 uVar13;
  float fVar14;
  float local_ac;
  float in_stack_ffffff60;
  undefined1 auStack_88 [24];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [12];
  int iStack_3c;
  undefined1 auStack_38 [12];
  int iStack_2c;
  int local_28;
  int local_24;
  
  fVar1 = *(float *)this_ptr->field0_0x0;
  if (0.0 >= fVar1) {
    return;
  }
  fVar5 = (float10)*(float *)(this_ptr->field0_0x0 + 0x1c);
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44(in_EDX,CONCAT22((short)((uint)in_EAX >> 0x10),
                                              (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10
                                              | (ushort)(fVar1 == 0.0) << 0xe)));
  local_24 = (int)ROUND(fVar5);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(&DAT_02d13cd4 + local_24 * 0x18));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 4));
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)(auStack_88 + 0x10));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(auStack_88 + 0x14),(CVector3i *)0x0);
  fVar5 = ((float10)_DAT_0065dcc4 - (float10)*(float *)this_ptr->field0_0x0) /
          (float10)_DAT_0065dcc4;
  fVar1 = (float)fVar5;
  uVar13 = (undefined4)((ulonglong)(double)fVar5 >> 0x20);
  fVar14 = (float)(fVar5 * (float10)DOUBLE_00629f63 + (float10)DOUBLE_00629f6b);
  if ((float10)(double)fVar5 < (float10)DOUBLE_00629f6b) {
    pfVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                       (g_CDemonRendererPtr,(float *)(auStack_88 + 0xc));
    auStack_88._4_4_ = *pfVar2 - ((CVector3f *)(this_ptr->field0_0x0 + 4))->x;
    fVar5 = (float10)pfVar2[1] - (float10)*(float *)(this_ptr->field0_0x0 + 8);
    auStack_88._8_4_ = (undefined4)fVar5;
    fVar6 = (float10)pfVar2[2] - (float10)*(float *)(this_ptr->field0_0x0 + 0xc);
    auStack_88._12_4_ = (undefined4)fVar6;
    fVar7 = (float10)*(float *)(this_ptr->field0_0x0 + 0x10);
    fVar14 = (float)(((float10)1 +
                     ((float10)1 -
                     ABS((float10)(float)auStack_88._12_4_ *
                         (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                         (float10)(float)auStack_88._4_4_ *
                         (float10)*(float *)(this_ptr->field0_0x0 + 0x10) +
                         (float10)(float)auStack_88._8_4_ *
                         (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) /
                     (SQRT((float10)*(float *)(this_ptr->field0_0x0 + 0x18) *
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                           fVar7 * fVar7 +
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x14) *
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) *
                     SQRT(fVar6 * (float10)(float)auStack_88._12_4_ +
                          (float10)(float)auStack_88._4_4_ * (float10)(float)auStack_88._4_4_ +
                          fVar5 * (float10)(float)auStack_88._8_4_))) *
                     ((float10)1 -
                     (float10)(double)CONCAT44(fVar14,uVar13) * (float10)DOUBLE_00629f73) *
                     (float10)DOUBLE_00629f7b) * (float10)fVar1);
  }
  local_5c = fVar1 * FLOAT_00629f83 * (float)DOUBLE_00629f8b;
  local_60 = -fVar14 * FLOAT_00629f83 * (float)DOUBLE_00629f8b;
  local_58 = 0.0;
  auStack_38._8_4_ = (undefined4)ROUND(local_60 * _DAT_0065dca8);
  iStack_2c = (int)ROUND(local_5c * _DAT_0065dca8);
  local_28 = (int)ROUND(_DAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(auStack_38 + 8)
            );
  local_5c = fVar1 * (float)DOUBLE_00629f93 * (float)DOUBLE_00629f8b;
  auStack_38._0_4_ = (undefined4)ROUND(local_5c * _DAT_0065dca8);
  auStack_38._4_4_ = (undefined4)ROUND(local_58 * _DAT_0065dca8);
  auStack_38._8_4_ = (undefined4)ROUND(local_54 * _DAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)auStack_38);
  local_54 = -local_ac * (float)DOUBLE_00629f93 * (float)DOUBLE_00629f8b;
  local_48._8_4_ = (undefined4)ROUND(local_58 * _DAT_0065dca8);
  iStack_3c = (int)ROUND(local_54 * _DAT_0065dca8);
  auStack_38._0_4_ = (undefined4)ROUND(local_50 * _DAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)(local_48 + 8)
            );
  local_48._0_4_ = (undefined4)ROUND(unaff_EBX * _DAT_0065dca8);
  local_48._4_4_ = (undefined4)ROUND(local_50 * _DAT_0065dca8);
  local_48._8_4_ = (undefined4)ROUND(local_4c * _DAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_48);
  pCVar4 = g_CDemonRendererPtr;
  fVar5 = (float10)in_stack_ffffff60;
  fVar11 = ((float10)FLOAT_00629f9f - fVar5) * fVar5;
  fVar8 = ((float10)1 - fVar5) * (float10)FLOAT_00629f9b;
  fVar5 = (float10)FLOAT_00629fa7;
  fVar6 = (float10)FLOAT_00629faf;
  fVar7 = (float10)FLOAT_00629fb3;
  g_CDemonRendererPtr->vertex_buffer_ptr->u = 1.83671e-40;
  fVar9 = ((float10)1 - fVar11) * (float10)FLOAT_00629fa3;
  pCVar4->vertex_buffer_ptr->v = 1.83671e-40;
  fVar10 = (float10)FLOAT_00629fab;
  fVar5 = (fVar11 * fVar5 + fVar9) * fVar10;
  pCVar4->vertex_buffer_ptr[1].u = 2.3326216e-38;
  fVar6 = (fVar11 * fVar6 + fVar9) * fVar10;
  pCVar4->vertex_buffer_ptr[1].v = 1.83671e-40;
  fVar10 = fVar10 * (fVar11 * fVar7 + fVar9);
  pCVar4->vertex_buffer_ptr[2].u = 2.3326216e-38;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar4,pCVar4->vertex_buffer_ptr));
  *(undefined4 *)(SUB84(dVar12,0) + 0x7c) = 0xfe0000;
  dVar12 = crt_math_c_round_FUN_005fe6b0(dVar12);
  puVar3 = (undefined4 *)((ulonglong)dVar12 >> 0x20);
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(puVar3,*puVar3));
  *(undefined4 *)(SUB84(dVar12,0) + 0xa8) = 0x20000;
  dVar12 = crt_math_c_round_FUN_005fe6b0(dVar12);
  pCVar4 = (CDemonRenderer *)((ulonglong)dVar12 >> 0x20);
  fStack00000018 = (float)(int)ROUND(fVar5);
  pCVar4->vertex_buffer_ptr[3].v = 2.3326216e-38;
  iStack00000014 = (int)ROUND(fVar6);
  pCVar4->vertex_buffer_ptr->light = fStack00000018;
  fStack00000020 = (float)(int)ROUND(fVar10);
  pCVar4->vertex_buffer_ptr->color = iStack00000014;
  fStack0000001c = (float)(int)ROUND(fVar8);
  pCVar4->vertex_buffer_ptr->fog = fStack00000020;
  pCVar4->vertex_buffer_ptr->w_recip = fStack0000001c;
  pCVar4->vertex_buffer_ptr[1].light = fStack00000018;
  pCVar4->vertex_buffer_ptr[1].color = iStack00000014;
  pCVar4->vertex_buffer_ptr[1].fog = fStack00000020;
  pCVar4->vertex_buffer_ptr[1].w_recip = fStack0000001c;
  pCVar4->vertex_buffer_ptr[2].light = fStack00000018;
  pCVar4->vertex_buffer_ptr[2].color = iStack00000014;
  pCVar4->vertex_buffer_ptr[2].fog = fStack00000020;
  pCVar4->vertex_buffer_ptr[2].w_recip = fStack0000001c;
  pCVar4->vertex_buffer_ptr[3].light = fStack00000018;
  pCVar4->vertex_buffer_ptr[3].color = iStack00000014;
  pCVar4->vertex_buffer_ptr[3].fog = fStack00000020;
  pCVar4->vertex_buffer_ptr[3].w_recip = fStack0000001c;
  auStack_88._16_4_ = 0;
  auStack_88._12_4_ = 0;
  auStack_88._8_4_ = 0;
  auStack_88._4_4_ = 0;
  auStack_88._20_4_ = 0;
  local_6c = 2;
  auStack_88._0_4_ = 4;
  local_68 = 3;
  local_70 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_88);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c50b0: PUSH EBX
//   Label: core_fire.cpp_CGunFlame_FUN_004c50b0
// 004c50b1: PUSH ESI
// 004c50b2: PUSH EDI
// 004c50b3: PUSH EBP
// 004c50b4: MOV EBP,ESP
// 004c50b6: SUB ESP,0xc4
// 004c50bc: AND ESP,0xfffffff8
// 004c50bf: MOV ESI,dword ptr [EBP + 0x14]
// 004c50c2: FLD float ptr [ESI]
// 004c50c4: FLDZ
// 004c50c6: FCOMPP
// 004c50c8: FNSTSW AX
// 004c50ca: SAHF
// 004c50cb: JC 0x004c50d4
//   XREF to: 004c50d4 (CONDITIONAL_JUMP)
// 004c50cd: MOV ESP,EBP
// 004c50cf: POP EBP
// 004c50d0: POP EDI
// 004c50d1: POP ESI
// 004c50d2: POP EBX
// 004c50d3: RET
// 004c50d4: FLD float ptr [ESI + 0x1c]
//   Label: LAB_004c50d4
// 004c50d7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c50dc: FISTP dword ptr [ESP + 0xb0]
// 004c50e3: MOV EDX,dword ptr [ESP + 0xb0]
// 004c50ea: LEA EAX,[EDX*0x4 + 0x0]
// 004c50f1: SUB EAX,EDX
// 004c50f3: SHL EAX,0x3
// 004c50f6: ADD EAX,0x2d13cd4
//   XREF to: 02d13cd4 (DATA)
// 004c50fb: PUSH EAX
// 004c50fc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5102: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c5103: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c5108: ADD ESP,0x8
// 004c510b: LEA EBX,[ESI + 0x4]
// 004c510e: PUSH EBX
// 004c510f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5115: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c5116: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c511b: ADD ESP,0x8
// 004c511e: LEA EAX,[ESP + 0x54]
// 004c5122: PUSH EAX
// 004c5123: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5129: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c512a: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 004c512f: ADD ESP,0x8
// 004c5132: PUSH 0x0
// 004c5134: LEA EAX,[ESP + 0x58]
// 004c5138: PUSH EAX
// 004c5139: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c513e: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c513f: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c5144: FLD float ptr [0x0065dcc4]
//   XREF to: 0065dcc4 (READ)
// 004c514a: FLD ST0
// 004c514c: FSUB float ptr [ESI]
// 004c514e: FDIVRP
// 004c5150: ADD ESP,0xc
// 004c5153: FST float ptr [ESP + 0x10]
// 004c5157: FST double ptr [ESP]
// 004c515a: FMUL double ptr [0x00629f63]
//   XREF to: 00629f63 (READ)
// 004c5160: FLD double ptr [0x00629f6b]
//   XREF to: 00629f6b (READ)
// 004c5166: FXCH
// 004c5168: FADD ST0,ST1
// 004c516a: FSTP float ptr [ESP + 0xc]
// 004c516e: MOV EAX,dword ptr [ESP + 0xc]
// 004c5172: FLD double ptr [ESP]
// 004c5175: MOV dword ptr [ESP + 0x8],EAX
// 004c5179: FCOMPP
// 004c517b: FNSTSW AX
// 004c517d: SAHF
// 004c517e: JNC 0x004c522c
//   XREF to: 004c522c (CONDITIONAL_JUMP)
// 004c5184: LEA EAX,[ESP + 0x48]
// 004c5188: PUSH EAX
// 004c5189: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c518f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c5190: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 004c5195: FLD float ptr [EAX]
// 004c5197: FSUB float ptr [EBX]
// 004c5199: ADD ESP,0x8
// 004c519c: FSTP float ptr [ESP + 0x3c]
// 004c51a0: FLD float ptr [EAX + 0x4]
// 004c51a3: FSUB float ptr [EBX + 0x4]
// 004c51a6: FST float ptr [ESP + 0x40]
// 004c51aa: FMUL float ptr [ESP + 0x40]
// 004c51ae: FLD float ptr [ESP + 0x3c]
// 004c51b2: FMUL ST0
// 004c51b4: FLD float ptr [EAX + 0x8]
// 004c51b7: FSUB float ptr [EBX + 0x8]
// 004c51ba: FXCH
// 004c51bc: FADDP ST2,ST0
// 004c51be: FST float ptr [ESP + 0x44]
// 004c51c2: FMUL float ptr [ESP + 0x44]
// 004c51c6: FADDP
// 004c51c8: FSQRT
// 004c51ca: LEA EDX,[ESI + 0x10]
// 004c51cd: FLD float ptr [ESP + 0x40]
// 004c51d1: FMUL float ptr [EDX + 0x4]
// 004c51d4: FLD float ptr [ESP + 0x3c]
// 004c51d8: FMUL float ptr [EDX]
// 004c51da: FADDP
// 004c51dc: FLD float ptr [ESP + 0x44]
// 004c51e0: FMUL float ptr [EDX + 0x8]
// 004c51e3: FADDP
// 004c51e5: FABS
// 004c51e7: FLD float ptr [EDX + 0x4]
// 004c51ea: FMUL ST0
// 004c51ec: FLD float ptr [EDX]
// 004c51ee: FMUL ST0
// 004c51f0: FADDP
// 004c51f2: FLD float ptr [EDX + 0x8]
// 004c51f5: FMUL ST0
// 004c51f7: FADDP
// 004c51f9: FSQRT
// 004c51fb: FMULP ST2
// 004c51fd: FXCH
// 004c51ff: FDIVR ST0,ST1
// 004c5201: FLD double ptr [ESP]
// 004c5204: FMUL double ptr [0x00629f73]
//   XREF to: 00629f73 (READ)
// 004c520a: FLD1
// 004c520c: FLD1
// 004c520e: FSUBRP ST3,ST0
// 004c5210: FSUBRP
// 004c5212: FXCH
// 004c5214: FST ST2
// 004c5216: FMULP
// 004c5218: FSTP ST1
// 004c521a: FMUL double ptr [0x00629f7b]
//   XREF to: 00629f7b (READ)
// 004c5220: FLD1
// 004c5222: FADDP
// 004c5224: FMUL float ptr [ESP + 0xc]
// 004c5228: FSTP float ptr [ESP + 0x8]
// 004c522c: FLD float ptr [0x00629f83]
//   Label: LAB_004c522c
//   XREF to: 00629f83 (READ)
// 004c5232: FLD float ptr [ESP + 0xc]
// 004c5236: FMUL ST1
// 004c5238: FLD float ptr [ESP + 0x8]
// 004c523c: FCHS
// 004c523e: FMULP ST2
// 004c5240: FMUL double ptr [0x00629f8b]
//   XREF to: 00629f8b (READ)
// 004c5246: FXCH
// 004c5248: FMUL double ptr [0x00629f8b]
//   XREF to: 00629f8b (READ)
// 004c524e: LEA EBX,[ESP + 0x90]
// 004c5255: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c525b: XOR ECX,ECX
// 004c525d: FSTP float ptr [ESP + 0xb0]
// 004c5264: MOV EAX,dword ptr [ESP + 0xb0]
// 004c526b: MOV dword ptr [ESP + 0x68],ECX
// 004c526f: MOV dword ptr [ESP + 0x60],EAX
// 004c5273: LEA EAX,[ESP + 0x60]
// 004c5277: FSTP float ptr [ESP + 0x64]
// 004c527b: FLD float ptr [EAX]
// 004c527d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5283: FISTP dword ptr [EBX]
// 004c5285: FLD float ptr [EAX + 0x4]
// 004c5288: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c528e: FISTP dword ptr [EBX + 0x4]
// 004c5291: FLD float ptr [EAX + 0x8]
// 004c5294: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c529a: FISTP dword ptr [EBX + 0x8]
// 004c529d: LEA EAX,[ESP + 0x90]
// 004c52a4: PUSH EAX
// 004c52a5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c52a7: PUSH EAX
// 004c52a8: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c52ad: ADD ESP,0x8
// 004c52b0: FLD float ptr [ESP + 0x8]
// 004c52b4: FMUL double ptr [0x00629f93]
//   XREF to: 00629f93 (READ)
// 004c52ba: FMUL double ptr [0x00629f8b]
//   XREF to: 00629f8b (READ)
// 004c52c0: LEA EBX,[ESP + 0x84]
// 004c52c7: LEA EAX,[ESP + 0x60]
// 004c52cb: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c52d1: FSTP float ptr [ESP + 0x60]
// 004c52d5: FLD float ptr [EAX]
// 004c52d7: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c52dd: FISTP dword ptr [EBX]
// 004c52df: FLD float ptr [EAX + 0x4]
// 004c52e2: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c52e8: FISTP dword ptr [EBX + 0x4]
// 004c52eb: FLD float ptr [EAX + 0x8]
// 004c52ee: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c52f4: FISTP dword ptr [EBX + 0x8]
// 004c52f7: LEA EAX,[ESP + 0x84]
// 004c52fe: PUSH EAX
// 004c52ff: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5301: ADD EAX,0x30
// 004c5304: PUSH EAX
// 004c5305: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c530a: ADD ESP,0x8
// 004c530d: FLD float ptr [ESP + 0xc]
// 004c5311: FCHS
// 004c5313: FMUL double ptr [0x00629f93]
//   XREF to: 00629f93 (READ)
// 004c5319: FMUL double ptr [0x00629f8b]
//   XREF to: 00629f8b (READ)
// 004c531f: LEA EBX,[ESP + 0x78]
// 004c5323: LEA EAX,[ESP + 0x60]
// 004c5327: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c532d: FSTP float ptr [ESP + 0x64]
// 004c5331: FLD float ptr [EAX]
// 004c5333: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5339: FISTP dword ptr [EBX]
// 004c533b: FLD float ptr [EAX + 0x4]
// 004c533e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5344: FISTP dword ptr [EBX + 0x4]
// 004c5347: FLD float ptr [EAX + 0x8]
// 004c534a: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5350: FISTP dword ptr [EBX + 0x8]
// 004c5353: LEA EAX,[ESP + 0x78]
// 004c5357: PUSH EAX
// 004c5358: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c535a: ADD EAX,0x60
// 004c535d: PUSH EAX
// 004c535e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c5363: ADD ESP,0x8
// 004c5366: MOV EAX,dword ptr [ESP + 0xb0]
// 004c536d: LEA EBX,[ESP + 0x6c]
// 004c5371: MOV dword ptr [ESP + 0x60],EAX
// 004c5375: LEA EAX,[ESP + 0x60]
// 004c5379: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c537f: FLD float ptr [EAX]
// 004c5381: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5387: FISTP dword ptr [EBX]
// 004c5389: FLD float ptr [EAX + 0x4]
// 004c538c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5392: FISTP dword ptr [EBX + 0x4]
// 004c5395: FLD float ptr [EAX + 0x8]
// 004c5398: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c539e: FISTP dword ptr [EBX + 0x8]
// 004c53a1: LEA EAX,[ESP + 0x6c]
// 004c53a5: PUSH EAX
// 004c53a6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c53a8: ADD EAX,0x90
// 004c53ad: PUSH EAX
// 004c53ae: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c53b3: ADD ESP,0x8
// 004c53b6: FLD1
// 004c53b8: FLD float ptr [ESP + 0x10]
// 004c53bc: FLD float ptr [0x00629f9f]
//   XREF to: 00629f9f (READ)
// 004c53c2: FSUB ST0,ST1
// 004c53c4: FXCH ST2
// 004c53c6: FSUB ST0,ST1
// 004c53c8: FXCH ST2
// 004c53ca: FMULP
// 004c53cc: FXCH
// 004c53ce: FMUL float ptr [0x00629f9b]
//   XREF to: 00629f9b (READ)
// 004c53d4: FLD ST1
// 004c53d6: FMUL float ptr [0x00629fa7]
//   XREF to: 00629fa7 (READ)
// 004c53dc: FLD ST2
// 004c53de: FMUL float ptr [0x00629faf]
//   XREF to: 00629faf (READ)
// 004c53e4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c53ea: FLD ST3
// 004c53ec: FMUL float ptr [0x00629fb3]
//   XREF to: 00629fb3 (READ)
// 004c53f2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c53f4: FLD1
// 004c53f6: MOV dword ptr [EAX + 0x18],0x20000
// 004c53fd: FSUBRP ST5,ST0
// 004c53ff: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5401: FXCH ST4
// 004c5403: FMUL float ptr [0x00629fa3]
//   XREF to: 00629fa3 (READ)
// 004c5409: MOV dword ptr [EAX + 0x1c],0x20000
// 004c5410: FXCH ST2
// 004c5412: FADD ST0,ST2
// 004c5414: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5416: FLD float ptr [0x00629fab]
//   XREF to: 00629fab (READ)
// 004c541c: FXCH
// 004c541e: FMUL ST1
// 004c5420: MOV dword ptr [EAX + 0x48],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c5427: FXCH ST2
// 004c5429: FADD ST0,ST3
// 004c542b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c542d: FMUL ST1
// 004c542f: MOV dword ptr [EAX + 0x4c],0x20000
// 004c5436: FXCH ST5
// 004c5438: FADDP ST3,ST0
// 004c543a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c543c: FMULP ST2
// 004c543e: MOV dword ptr [EAX + 0x78],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c5445: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5447: FXCH ST2
// 004c5449: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c544e: MOV dword ptr [EAX + 0x7c],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c5455: FXCH ST2
// 004c5457: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c545c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c545e: FXCH ST3
// 004c5460: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c5465: MOV dword ptr [EAX + 0xa8],0x20000
// 004c546f: FXCH
// 004c5471: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c5476: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5478: FXCH ST3
// 004c547a: FISTP dword ptr [ESP + 0xb8]
// 004c5481: MOV dword ptr [EAX + 0xac],0xfe0000
//   XREF to: 00fe0000 (DATA)
// 004c548b: MOV EAX,dword ptr [ESP + 0xb8]
// 004c5492: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5494: FISTP dword ptr [ESP + 0xb4]
// 004c549b: MOV dword ptr [EBX + 0x20],EAX
// 004c549e: MOV EAX,dword ptr [ESP + 0xb4]
// 004c54a5: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c54a7: FXCH
// 004c54a9: FISTP dword ptr [ESP + 0xc0]
// 004c54b0: MOV dword ptr [EBX + 0x24],EAX
// 004c54b3: MOV EAX,dword ptr [ESP + 0xc0]
// 004c54ba: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c54bc: FISTP dword ptr [ESP + 0xbc]
// 004c54c3: MOV dword ptr [EBX + 0x28],EAX
// 004c54c6: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c54c8: MOV EAX,dword ptr [ESP + 0xbc]
// 004c54cf: MOV dword ptr [EBX + 0x2c],EAX
// 004c54d2: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c54d4: MOV EAX,dword ptr [ESP + 0xb8]
// 004c54db: MOV dword ptr [EBX + 0x50],EAX
// 004c54de: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c54e0: MOV EAX,dword ptr [ESP + 0xb4]
// 004c54e7: MOV dword ptr [EBX + 0x54],EAX
// 004c54ea: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c54ec: MOV EAX,dword ptr [ESP + 0xc0]
// 004c54f3: MOV dword ptr [EBX + 0x58],EAX
// 004c54f6: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c54f8: MOV EAX,dword ptr [ESP + 0xbc]
// 004c54ff: MOV dword ptr [EBX + 0x5c],EAX
// 004c5502: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5504: MOV EAX,dword ptr [ESP + 0xb8]
// 004c550b: MOV dword ptr [EBX + 0x80],EAX
// 004c5511: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5513: MOV EAX,dword ptr [ESP + 0xb4]
// 004c551a: MOV dword ptr [EBX + 0x84],EAX
// 004c5520: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5522: MOV EAX,dword ptr [ESP + 0xc0]
// 004c5529: MOV dword ptr [EBX + 0x88],EAX
// 004c552f: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5531: MOV EAX,dword ptr [ESP + 0xbc]
// 004c5538: MOV dword ptr [EBX + 0x8c],EAX
// 004c553e: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5540: MOV EAX,dword ptr [ESP + 0xb8]
// 004c5547: MOV dword ptr [EBX + 0xb0],EAX
// 004c554d: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c554f: MOV EAX,dword ptr [ESP + 0xb4]
// 004c5556: MOV dword ptr [EBX + 0xb4],EAX
// 004c555c: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c555e: MOV EAX,dword ptr [ESP + 0xc0]
// 004c5565: MOV dword ptr [EBX + 0xb8],EAX
// 004c556b: MOV EDI,0x2
// 004c5570: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5572: MOV EAX,dword ptr [ESP + 0xbc]
// 004c5579: XOR ESI,ESI
// 004c557b: MOV dword ptr [EBX + 0xbc],EAX
// 004c5581: MOV EBX,0x4
// 004c5586: MOV dword ptr [ESP + 0x28],ESI
// 004c558a: MOV dword ptr [ESP + 0x24],ESI
// 004c558e: MOV dword ptr [ESP + 0x20],ESI
// 004c5592: MOV dword ptr [ESP + 0x1c],ESI
// 004c5596: MOV dword ptr [ESP + 0x2c],ESI
// 004c559a: MOV ESI,0x1
// 004c559f: MOV EAX,0x3
// 004c55a4: PUSH ESI
// 004c55a5: MOV dword ptr [ESP + 0x38],EDI
// 004c55a9: MOV dword ptr [ESP + 0x1c],EBX
// 004c55ad: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c55ae: MOV dword ptr [ESP + 0x40],EAX
// 004c55b2: MOV dword ptr [ESP + 0x38],ESI
// 004c55b6: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c55bb: ADD ESP,0x8
// 004c55be: LEA EAX,[ESP + 0x14]
// 004c55c2: PUSH EAX
// 004c55c3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c55c9: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c55ca: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 004c55cf: ADD ESP,0x8
// 004c55d2: XOR EBX,EBX
// 004c55d4: PUSH EBX
// 004c55d5: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c55db: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c55dc: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c55e1: ADD ESP,0x8
// 004c55e4: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c55ea: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c55eb: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
