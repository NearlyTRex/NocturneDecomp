// Name: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// Address: 00473f90
// Address Range: [[00473f90, 004746e3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c916 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061f15b = 18
//   double DOUBLE_0061f163 = 2
//   float FLOAT_0061f16b = 0.00001525902
//   double DOUBLE_0061f173 = 65535
//   float FLOAT_0061f17b = 0.1111111
//   double DOUBLE_0061f183 = 0.5
//   double DOUBLE_0061f18b = 0.25
//   float FLOAT_0065c900 = 256
//   float FLOAT_0065c908 = 0.00390625
//   undefined4 DAT_0066ff08
//   undefined4 DAT_0066ff24
//   undefined4 DAT_0066ff28
//   undefined4 DAT_0066ff2c
//   undefined4 DAT_0066ff30
//   undefined4 DAT_0066ff34
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  undefined4 extraout_EDX;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  byte bVar4;
  float in_stack_0000001c;
  int in_stack_00000028;
  int aiStackY_10c8 [990];
  CDemonRenderer *this_ptr_00;
  int in_stack_fffffec8;
  CDemonRenderer *in_stack_fffffee8;
  SMRGLHeaderPrimitive local_100;
  float fStack_e8;
  float fStack_e4;
  undefined4 local_e0;
  int local_dc [5];
  CVector3f local_c8;
  CVector3f local_bc;
  undefined1 local_b0 [8];
  int iStack_a8;
  undefined4 local_9c;
  int local_98 [3];
  CVector3i local_8c;
  CVector3f local_80;
  CDemonRenderer *local_74;
  undefined1 local_70 [8];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_50 [2];
  CVector3i CStack_34;
  float local_28;
  CVector3i local_24;
  
  bVar4 = 0;
  if (this_ptr->field17_0x1cbc != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr,(float *)&local_74);
    local_70._0_4_ = (float)local_70._0_4_ - (float)(this_ptr->base).base.position.x;
    local_70._4_4_ = (float)local_70._4_4_ - (float)(this_ptr->base).base.position.y;
    local_68 = local_68 - (float)(this_ptr->base).base.position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                        (CVector3f *)(local_b0 + 4),(CVector3f *)local_70);
    if ((CVector3f *)(local_70 + 4) != pCVar3) {
      local_70._4_4_ = pCVar3->x;
      local_68 = pCVar3->y;
      local_64 = pCVar3->z;
    }
    if (local_64 <= (this_ptr->base).max_distance) {
      local_28 = local_68 * local_68;
      local_24.z = (int)(((local_64 * (float)DOUBLE_0061f15b) /
                         (this_ptr->base).base.projection_scale) * (float)DOUBLE_0061f163);
      local_24.y = (int)((float)local_70._4_4_ * (float)local_70._4_4_ + local_28);
      local_24.x = (int)((float)local_24.z * (float)local_24.z);
      if ((float)local_24.y <= (float)local_24.x) {
        engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                  (g_CDemonRendererPtr,(CVector3i *)(1.0 - (float)local_24.y / (float)local_24.x));
        local_9c = local_e0;
        local_98[(uint)bVar4 * -2] = local_dc[(uint)bVar4 * -2];
        local_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        local_100.surface_normal.C = (int)((float)local_98[0] * FLOAT_0065c908);
        local_100.surface_normal.D = (int)((float)local_98[1] * FLOAT_0065c908);
        fStack_e8 = (float)local_98[2] * FLOAT_0065c908;
        fVar1 = (float)local_100.surface_normal.D - (float)(this_ptr->base).base.position.x;
        fVar2 = fStack_e8 - (float)(this_ptr->base).base.position.y;
        fStack_e4 = fStack_e4 - (float)(this_ptr->base).base.position.z;
        local_70._4_4_ = SQRT(fStack_e4 * fStack_e4 + fVar1 * fVar1 + fVar2 * fVar2);
        if (0.0 < (float)local_70._4_4_) {
          local_70._4_4_ = 1.0 / (float)local_70._4_4_;
          local_74 = (CDemonRenderer *)(fVar1 * (float)local_70._4_4_);
          local_70._0_4_ = fVar2 * (float)local_70._4_4_;
          local_70._4_4_ = fStack_e4 * (float)local_70._4_4_;
          local_80.x = 0.0;
          local_80.y = 0.0;
          local_80.z = 1.0;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_bc,
                              &local_80);
          fVar1 = (local_68 * pCVar3->z +
                  (float)local_70._0_4_ * pCVar3->x + (float)local_70._4_4_ * pCVar3->y) * unaff_EBX
                  * FLOAT_0061f16b;
          if (0.0 < fVar1) {
            this_ptr_00 = (CDemonRenderer *)&DAT_00000001;
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44(extraout_EDX,
                                        CONCAT22((short)((uint)pCVar3 >> 0x10),
                                                 (ushort)(0.0 < fVar1) << 8 |
                                                 (ushort)NAN(fVar1) << 10 |
                                                 (ushort)(fVar1 == 0.0) << 0xe)));
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
                      (this_ptr_00,in_stack_fffffec8);
            texture = g_LightTextures;
            do {
              texture = texture + 2;
              local_100.surface_normal.A = (int)fRam00000018;
              fStack_e4 = FLOAT_0061f17b * 0.0 * fRam00000140 * (float)DOUBLE_0061f18b;
              local_100.surface_normal.B = (int)fRam00000024;
              local_100.surface_normal.D = (int)(fRam00000018 * fStack_e4);
              fStack_e8 = fRam00000024 * fStack_e4;
              local_100.surface_normal.C = (int)fRam00000030;
              fStack_e4 = fRam00000030 * fStack_e4;
              local_50[0].x =
                   (float)(this_ptr->base).base.position.x + (float)local_100.surface_normal.D;
              local_50[0].y = (float)(this_ptr->base).base.position.y + fStack_e8;
              local_50[0].z = (float)(this_ptr->base).base.position.z + fStack_e4;
              if (&local_c8 != local_50) {
                local_c8.x = local_50[0].x;
                local_c8.y = local_50[0].y;
                local_c8.z = local_50[0].z;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                        (g_CDemonRendererPtr,&local_c8);
              engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                        (g_CDemonRendererPtr,&local_28);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                        (g_CDemonRendererPtr,&local_24,(CVector3i *)0x0);
              local_70._4_4_ = 0.0;
              local_b0._0_4_ = (undefined4)ROUND((float)in_stack_fffffee8 * FLOAT_0065c900);
              local_b0._4_4_ = (undefined4)ROUND((float)in_stack_fffffee8 * FLOAT_0065c900);
              iStack_a8 = (int)ROUND(FLOAT_0065c900 * 0.0);
              local_74 = in_stack_fffffee8;
              local_70._0_4_ = in_stack_fffffee8;
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                         (CVector3i *)local_b0);
              local_70._0_4_ = -(float)local_70._0_4_;
              CStack_34.x = (int)ROUND((float)local_70._0_4_ * FLOAT_0065c900);
              CStack_34.y = (int)ROUND((float)local_70._4_4_ * FLOAT_0065c900);
              CStack_34.z = (int)ROUND(local_68 * FLOAT_0065c900);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_34);
              local_68 = -local_68;
              local_24.x = (int)ROUND((float)local_70._4_4_ * FLOAT_0065c900);
              local_24.y = (int)ROUND(local_68 * FLOAT_0065c900);
              local_24.z = (int)ROUND(local_64 * FLOAT_0065c900);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_24);
              local_68 = -local_68;
              local_8c.x = (int)ROUND(local_68 * FLOAT_0065c900);
              local_8c.y = (int)ROUND(local_64 * FLOAT_0065c900);
              local_8c.z = (int)ROUND(local_60 * FLOAT_0065c900);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_8c);
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,texture);
              in_stack_fffffee8 = g_CDemonRendererPtr;
              local_100.base.count = 4;
              local_100.surface_normal.D = 0;
              local_100.surface_normal.C = 0;
              local_100.surface_normal.B = 0;
              local_100.surface_normal.A = 0;
              fStack_e8 = 0.0;
              g_CDemonRendererPtr->vertex_buffer_ptr->u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr->v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr->w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr->light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr->color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr->fog = 9.18341e-41;
              fStack_e4 = 1.4013e-45;
              in_stack_fffffee8->vertex_buffer_ptr[1].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[1].v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[1].w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr[1].light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr[1].color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr[1].fog = 9.18341e-41;
              local_e0 = 2;
              in_stack_fffffee8->vertex_buffer_ptr[2].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[2].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[2].w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr[2].light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr[2].color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr[2].fog = 9.18341e-41;
              local_dc[0] = 3;
              in_stack_fffffee8->vertex_buffer_ptr[3].u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[3].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[3].w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr[3].light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr[3].color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr[3].fog = 9.18341e-41;
              engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
                        (in_stack_fffffee8,&local_100);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
              in_stack_00000028 = in_stack_00000028 + 1;
            } while (in_stack_00000028 < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
            return;
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00473f90: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// 00473f91: PUSH ESI
// 00473f92: PUSH EDI
// 00473f93: PUSH EBP
// 00473f94: MOV EBP,ESP
// 00473f96: SUB ESP,0x138
// 00473f9c: AND ESP,0xfffffff8
// 00473f9f: MOV EAX,dword ptr [EBP + 0x14]
// 00473fa2: CMP dword ptr [EAX + 0x1cbc],0x0
// 00473fa9: JNZ 0x00473fb2
//   XREF to: 00473fb2 (CONDITIONAL_JUMP)
// 00473fab: MOV ESP,EBP
//   Label: LAB_00473fab
// 00473fad: POP EBP
// 00473fae: POP EDI
// 00473faf: POP ESI
// 00473fb0: POP EBX
// 00473fb1: RET
// 00473fb2: LEA EAX,[ESP + 0xd4]
//   Label: LAB_00473fb2
// 00473fb9: PUSH EAX
// 00473fba: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473fc0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00473fc1: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 00473fc6: ADD ESP,0x8
// 00473fc9: MOV EAX,dword ptr [EBP + 0x14]
// 00473fcc: FLD float ptr [ESP + 0xd4]
// 00473fd3: FSUB float ptr [EAX + 0x4]
// 00473fd6: FLD float ptr [ESP + 0xd8]
// 00473fdd: FXCH
// 00473fdf: FSTP float ptr [ESP + 0xd4]
// 00473fe6: FSUB float ptr [EAX + 0x8]
// 00473fe9: FLD float ptr [ESP + 0xdc]
// 00473ff0: FXCH
// 00473ff2: FSTP float ptr [ESP + 0xd8]
// 00473ff9: FSUB float ptr [EAX + 0xc]
// 00473ffc: LEA EAX,[ESP + 0xd4]
// 00474003: PUSH EAX
// 00474004: LEA EAX,[ESP + 0x9c]
// 0047400b: PUSH EAX
// 0047400c: MOV EAX,dword ptr [EBP + 0x14]
// 0047400f: ADD EAX,0x10
// 00474012: PUSH EAX
// 00474013: FSTP float ptr [ESP + 0xe8]
// 0047401a: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0047401f: MOV EDX,EAX
// 00474021: LEA EAX,[ESP + 0xe0]
// 00474028: ADD ESP,0xc
// 0047402b: CMP EAX,EDX
// 0047402d: JZ 0x0047404c
//   XREF to: 0047404c (CONDITIONAL_JUMP)
// 0047402f: MOV EAX,dword ptr [EDX]
// 00474031: MOV dword ptr [ESP + 0xd4],EAX
// 00474038: MOV EAX,dword ptr [EDX + 0x4]
// 0047403b: MOV dword ptr [ESP + 0xd8],EAX
// 00474042: MOV EAX,dword ptr [EDX + 0x8]
// 00474045: MOV dword ptr [ESP + 0xdc],EAX
// 0047404c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0047404c
// 0047404f: FLD float ptr [ESP + 0xdc]
// 00474056: FCOMP float ptr [EAX + 0x140]
// 0047405c: FNSTSW AX
// 0047405e: SAHF
// 0047405f: JA 0x00473fab
//   XREF to: 00473fab (CONDITIONAL_JUMP)
// 00474065: FLD float ptr [ESP + 0xdc]
// 0047406c: FMUL double ptr [0x0061f15b]
//   XREF to: 0061f15b (READ)
// 00474072: MOV EAX,dword ptr [EBP + 0x14]
// 00474075: FDIV float ptr [EAX + 0x38]
// 00474078: FLD float ptr [ESP + 0xd8]
// 0047407f: FMUL ST0
// 00474081: FLD float ptr [ESP + 0xd4]
// 00474088: FMUL ST0
// 0047408a: FXCH ST2
// 0047408c: FMUL double ptr [0x0061f163]
//   XREF to: 0061f163 (READ)
// 00474092: FXCH
// 00474094: FSTP float ptr [ESP + 0x118]
// 0047409b: FXCH
// 0047409d: FADD float ptr [ESP + 0x118]
// 004740a4: FXCH
// 004740a6: FST float ptr [ESP + 0x124]
// 004740ad: FMUL float ptr [ESP + 0x124]
// 004740b4: FXCH
// 004740b6: FST float ptr [ESP + 0x120]
// 004740bd: FXCH
// 004740bf: FSTP float ptr [ESP + 0x11c]
// 004740c6: FCOMP float ptr [ESP + 0x11c]
// 004740cd: FNSTSW AX
// 004740cf: SAHF
// 004740d0: JA 0x00473fab
//   XREF to: 00473fab (CONDITIONAL_JUMP)
// 004740d6: FLD float ptr [ESP + 0x120]
// 004740dd: FDIV float ptr [ESP + 0x11c]
// 004740e4: LEA ESI,[ESP + 0x5c]
// 004740e8: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004740ee: LEA EDI,[ESP + 0xa4]
// 004740f5: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004740f6: FLD1
// 004740f8: FSUBRP
// 004740fa: LEA EBX,[ESP + 0x54]
// 004740fe: FSTP float ptr [ESP + 0x4]
// 00474102: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 00474107: LEA ESI,[ESP + 0x60]
// 0047410b: ADD ESP,0x4
// 0047410e: LEA EAX,[ESP + 0xa4]
// 00474115: MOVSD ES:EDI,ESI
// 00474116: MOVSD ES:EDI,ESI
// 00474117: MOVSD ES:EDI,ESI
// 00474118: FILD dword ptr [EAX]
// 0047411a: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 00474120: FSTP float ptr [EBX]
// 00474122: FILD dword ptr [EAX + 0x4]
// 00474125: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 0047412b: FSTP float ptr [EBX + 0x4]
// 0047412e: FILD dword ptr [EAX + 0x8]
// 00474131: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 00474137: FSTP float ptr [EBX + 0x8]
// 0047413a: MOV EBX,dword ptr [EBP + 0x14]
// 0047413d: FLD float ptr [ESP + 0x50]
// 00474141: FSUB float ptr [EBX + 0x4]
// 00474144: FLD float ptr [ESP + 0x54]
// 00474148: FXCH
// 0047414a: FSTP float ptr [ESP + 0xc8]
// 00474151: FSUB float ptr [EBX + 0x8]
// 00474154: FST float ptr [ESP + 0xcc]
// 0047415b: FMUL float ptr [ESP + 0xcc]
// 00474162: FLD float ptr [ESP + 0xc8]
// 00474169: FMUL ST0
// 0047416b: FLD float ptr [ESP + 0x58]
// 0047416f: FSUB float ptr [EBX + 0xc]
// 00474172: FXCH
// 00474174: FADDP ST2,ST0
// 00474176: FST float ptr [ESP + 0xd0]
// 0047417d: FMUL float ptr [ESP + 0xd0]
// 00474184: FADDP
// 00474186: FSQRT
// 00474188: ADD EBX,0x4
// 0047418b: FST float ptr [ESP + 0x8]
// 0047418f: FLDZ
// 00474191: FCOMPP
// 00474193: FNSTSW AX
// 00474195: SAHF
// 00474196: JNC 0x00473fab
//   XREF to: 00473fab (CONDITIONAL_JUMP)
// 0047419c: FLD1
// 0047419e: FLD float ptr [ESP + 0xc8]
// 004741a5: FXCH
// 004741a7: FDIV float ptr [ESP + 0x8]
// 004741ab: FXCH
// 004741ad: FMUL ST1
// 004741af: FLD float ptr [ESP + 0xcc]
// 004741b6: FMUL ST2
// 004741b8: FLD float ptr [ESP + 0xd0]
// 004741bf: FMULP ST3
// 004741c1: MOV EAX,0xffff
// 004741c6: MOV EDX,0x3f800000
// 004741cb: MOV ESI,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004741d1: XOR EDI,EDI
// 004741d3: SUB EAX,ESI
// 004741d5: MOV dword ptr [ESP + 0xbc],EDI
// 004741dc: MOV dword ptr [ESP + 0x134],EAX
// 004741e3: LEA EAX,[ESP + 0xbc]
// 004741ea: MOV dword ptr [ESP + 0xc0],EDI
// 004741f1: PUSH EAX
// 004741f2: LEA EAX,[ESP + 0x84]
// 004741f9: MOV dword ptr [ESP + 0xc8],EDX
// 00474200: PUSH EAX
// 00474201: MOV EAX,dword ptr [EBP + 0x14]
// 00474204: FILD dword ptr [ESP + 0x13c]
// 0047420b: ADD EAX,0x10
// 0047420e: FSTP float ptr [ESP + 0x13c]
// 00474215: PUSH EAX
// 00474216: FXCH
// 00474218: FSTP float ptr [ESP + 0xd4]
// 0047421f: FSTP float ptr [ESP + 0xd8]
// 00474226: FSTP float ptr [ESP + 0xdc]
// 0047422d: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00474232: ADD ESP,0xc
// 00474235: FLD float ptr [ESP + 0xcc]
// 0047423c: FMUL float ptr [EAX + 0x4]
// 0047423f: FLD float ptr [ESP + 0xc8]
// 00474246: FMUL float ptr [EAX]
// 00474248: FADDP
// 0047424a: FLD float ptr [ESP + 0xd0]
// 00474251: FMUL float ptr [EAX + 0x8]
// 00474254: FADDP
// 00474256: FMUL float ptr [ESP + 0x134]
// 0047425d: FMUL float ptr [0x0061f16b]
//   XREF to: 0061f16b (READ)
// 00474263: FLDZ
// 00474265: FCOMPP
// 00474267: FNSTSW AX
// 00474269: SAHF
// 0047426a: JNC 0x00473fab
//   XREF to: 00473fab (CONDITIONAL_JUMP)
// 00474270: FLD float ptr [ESP]
// 00474273: PUSH 0x1
// 00474275: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047427b: FMUL double ptr [0x0061f173]
//   XREF to: 0061f173 (READ)
// 00474281: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00474282: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00474287: FISTP dword ptr [ESP + 0x134]
// 0047428e: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00474293: ADD ESP,0x8
// 00474296: MOV dword ptr [ESP + 0x130],EDI
// 0047429d: MOV dword ptr [ESP + 0x128],EBX
// 004742a4: MOV EDI,0x66ff08
//   XREF to: 0066ff08 (DATA)
// 004742a9: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_004742a9
// 004742b0: MOV dword ptr [ESP + 0x134],EAX
// 004742b7: FILD dword ptr [ESP + 0x134]
// 004742be: FMUL float ptr [0x0061f17b]
//   XREF to: 0061f17b (READ)
// 004742c4: MOV EAX,dword ptr [EBP + 0x14]
// 004742c7: FMUL float ptr [EAX + 0x140]
// 004742cd: FLD float ptr [EAX + 0x38]
// 004742d0: FXCH
// 004742d2: FLD ST0
// 004742d4: FMUL double ptr [0x0061f15b]
//   XREF to: 0061f15b (READ)
// 004742da: FDIVRP ST2,ST0
// 004742dc: FLD float ptr [EDI + 0x1c]
//   XREF to: 0066ff24 (READ)
// 004742df: FMUL double ptr [0x0061f183]
//   XREF to: 0061f183 (READ)
// 004742e5: MOV EAX,dword ptr [EAX + 0x18]
// 004742e8: FXCH
// 004742ea: FMUL double ptr [0x0061f18b]
//   XREF to: 0061f18b (READ)
// 004742f0: MOV dword ptr [ESP + 0x38],EAX
// 004742f4: MOV EAX,dword ptr [EBP + 0x14]
// 004742f7: FLD float ptr [ESP + 0x38]
// 004742fb: MOV EAX,dword ptr [EAX + 0x24]
// 004742fe: FXCH
// 00474300: FSTP float ptr [ESP + 0x4]
// 00474304: MOV dword ptr [ESP + 0x3c],EAX
// 00474308: FMUL float ptr [ESP + 0x4]
// 0047430c: FLD float ptr [ESP + 0x3c]
// 00474310: MOV EAX,dword ptr [EBP + 0x14]
// 00474313: FMUL float ptr [ESP + 0x4]
// 00474317: MOV EAX,dword ptr [EAX + 0x30]
// 0047431a: MOV dword ptr [ESP + 0x40],EAX
// 0047431e: FXCH ST3
// 00474320: FMUL double ptr [0x0061f163]
//   XREF to: 0061f163 (READ)
// 00474326: FLD float ptr [ESP + 0x40]
// 0047432a: FMUL float ptr [ESP + 0x4]
// 0047432e: FXCH
// 00474330: FXCH ST3
// 00474332: FMUL ST3
// 00474334: FXCH ST2
// 00474336: FSTP float ptr [ESP + 0x44]
// 0047433a: FXCH ST3
// 0047433c: FSTP float ptr [ESP + 0x48]
// 00474340: MOV EAX,dword ptr [ESP + 0x128]
// 00474347: FXCH ST2
// 00474349: FSTP float ptr [ESP + 0x4c]
// 0047434d: FLD float ptr [EAX]
// 0047434f: FADD float ptr [ESP + 0x44]
// 00474353: LEA EDX,[ESP + 0x68]
// 00474357: FSTP float ptr [ESP + 0xe0]
// 0047435e: FLD float ptr [EAX + 0x4]
// 00474361: FADD float ptr [ESP + 0x48]
// 00474365: MOV ESI,EDI
// 00474367: FSTP float ptr [ESP + 0xe4]
// 0047436e: FLD float ptr [EAX + 0x8]
// 00474371: FADD float ptr [ESP + 0x4c]
// 00474375: LEA EAX,[ESP + 0xe0]
// 0047437c: FSTP float ptr [ESP + 0xe8]
// 00474383: FXCH
// 00474385: FSTP ST1
// 00474387: FSTP float ptr [ESP + 0xc]
// 0047438b: CMP EDX,EAX
// 0047438d: JZ 0x004743b0
//   XREF to: 004743b0 (CONDITIONAL_JUMP)
// 0047438f: MOV EAX,dword ptr [ESP + 0xe0]
// 00474396: MOV dword ptr [ESP + 0x68],EAX
// 0047439a: MOV EAX,dword ptr [ESP + 0xe4]
// 004743a1: MOV dword ptr [ESP + 0x6c],EAX
// 004743a5: MOV EAX,dword ptr [ESP + 0xe8]
// 004743ac: MOV dword ptr [ESP + 0x70],EAX
// 004743b0: LEA EAX,[ESP + 0x68]
//   Label: LAB_004743b0
// 004743b4: PUSH EAX
// 004743b5: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004743ba: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004743bb: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004743c0: ADD ESP,0x8
// 004743c3: LEA EAX,[ESP + 0x104]
// 004743ca: PUSH EAX
// 004743cb: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004743d1: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004743d2: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 004743d7: ADD ESP,0x8
// 004743da: PUSH 0x0
// 004743dc: LEA EAX,[ESP + 0x108]
// 004743e3: PUSH EAX
// 004743e4: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004743ea: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004743eb: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004743f0: ADD ESP,0xc
// 004743f3: XOR EBX,EBX
// 004743f5: MOV EAX,dword ptr [ESP + 0xc]
// 004743f9: MOV dword ptr [ESP + 0xb8],EBX
// 00474400: LEA EBX,[ESP + 0x74]
// 00474404: MOV dword ptr [ESP + 0xb0],EAX
// 0047440b: MOV dword ptr [ESP + 0xb4],EAX
// 00474412: LEA EAX,[ESP + 0xb0]
// 00474419: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047441f: FLD float ptr [EAX]
// 00474421: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474427: FISTP dword ptr [EBX]
// 00474429: FLD float ptr [EAX + 0x4]
// 0047442c: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474432: FISTP dword ptr [EBX + 0x4]
// 00474435: FLD float ptr [EAX + 0x8]
// 00474438: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047443e: FISTP dword ptr [EBX + 0x8]
// 00474441: LEA EAX,[ESP + 0x74]
// 00474445: PUSH EAX
// 00474446: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474448: PUSH EAX
// 00474449: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0047444e: ADD ESP,0x8
// 00474451: MOV AH,byte ptr [ESP + 0xb3]
// 00474458: XOR AH,0x80
// 0047445b: LEA EBX,[ESP + 0xec]
// 00474462: MOV byte ptr [ESP + 0xb3],AH
// 00474469: LEA EAX,[ESP + 0xb0]
// 00474470: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474476: FLD float ptr [EAX]
// 00474478: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047447e: FISTP dword ptr [EBX]
// 00474480: FLD float ptr [EAX + 0x4]
// 00474483: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474489: FISTP dword ptr [EBX + 0x4]
// 0047448c: FLD float ptr [EAX + 0x8]
// 0047448f: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474495: FISTP dword ptr [EBX + 0x8]
// 00474498: LEA EAX,[ESP + 0xec]
// 0047449f: PUSH EAX
// 004744a0: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004744a2: ADD EAX,0x30
// 004744a5: PUSH EAX
// 004744a6: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004744ab: ADD ESP,0x8
// 004744ae: MOV DL,byte ptr [ESP + 0xb7]
// 004744b5: LEA EBX,[ESP + 0xf8]
// 004744bc: XOR DL,0x80
// 004744bf: LEA EAX,[ESP + 0xb0]
// 004744c6: MOV byte ptr [ESP + 0xb7],DL
// 004744cd: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004744d3: FLD float ptr [EAX]
// 004744d5: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004744db: FISTP dword ptr [EBX]
// 004744dd: FLD float ptr [EAX + 0x4]
// 004744e0: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004744e6: FISTP dword ptr [EBX + 0x4]
// 004744e9: FLD float ptr [EAX + 0x8]
// 004744ec: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004744f2: FISTP dword ptr [EBX + 0x8]
// 004744f5: LEA EAX,[ESP + 0xf8]
// 004744fc: PUSH EAX
// 004744fd: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004744ff: ADD EAX,0x60
// 00474502: PUSH EAX
// 00474503: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00474508: ADD ESP,0x8
// 0047450b: MOV DH,byte ptr [ESP + 0xb3]
// 00474512: LEA EBX,[ESP + 0x8c]
// 00474519: XOR DH,0x80
// 0047451c: LEA EAX,[ESP + 0xb0]
// 00474523: MOV byte ptr [ESP + 0xb3],DH
// 0047452a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474530: FLD float ptr [EAX]
// 00474532: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474538: FISTP dword ptr [EBX]
// 0047453a: FLD float ptr [EAX + 0x4]
// 0047453d: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474543: FISTP dword ptr [EBX + 0x4]
// 00474546: FLD float ptr [EAX + 0x8]
// 00474549: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047454f: FISTP dword ptr [EBX + 0x8]
// 00474552: LEA EAX,[ESP + 0x8c]
// 00474559: PUSH EAX
// 0047455a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047455c: ADD EAX,0x90
// 00474561: PUSH EAX
// 00474562: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00474567: ADD ESP,0x8
// 0047456a: PUSH ESI
//   XREF to: 0066ff08 (DATA)
// 0047456b: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00474570: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00474571: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00474576: MOV EDX,0x4
// 0047457b: ADD ESP,0x8
// 0047457e: XOR ECX,ECX
// 00474580: MOV dword ptr [ESP + 0x14],EDX
// 00474584: MOV dword ptr [ESP + 0x24],ECX
// 00474588: MOV dword ptr [ESP + 0x20],ECX
// 0047458c: MOV dword ptr [ESP + 0x1c],ECX
// 00474590: MOV dword ptr [ESP + 0x18],ECX
// 00474594: MOV dword ptr [ESP + 0x28],ECX
// 00474598: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047459e: MOV EBX,dword ptr [ESI + 0x20]
//   XREF to: 0066ff28 (READ)
// 004745a1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745a3: SHL EBX,0x10
// 004745a6: MOV dword ptr [EAX + 0x18],EBX
// 004745a9: MOV EAX,dword ptr [ESI + 0x24]
//   XREF to: 0066ff2c (READ)
// 004745ac: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745ae: SHL EAX,0x10
// 004745b1: MOV dword ptr [EBX + 0x1c],EAX
// 004745b4: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745b6: MOV EAX,dword ptr [ESP + 0x12c]
// 004745bd: MOV dword ptr [EBX + 0x2c],EAX
// 004745c0: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745c2: MOV dword ptr [EAX + 0x20],0xffff
// 004745c9: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745cb: MOV dword ptr [EAX + 0x24],0xffff
// 004745d2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745d4: MOV EBX,0x1
// 004745d9: MOV dword ptr [EAX + 0x28],0xffff
// 004745e0: MOV dword ptr [ESP + 0x2c],EBX
// 004745e4: MOV EBX,dword ptr [ESI + 0x28]
//   XREF to: 0066ff30 (READ)
// 004745e7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745e9: SHL EBX,0x10
// 004745ec: MOV dword ptr [EAX + 0x48],EBX
//   XREF to: 00f80000 (DATA)
// 004745ef: MOV EAX,dword ptr [ESI + 0x24]
//   XREF to: 0066ff2c (READ)
// 004745f2: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745f4: SHL EAX,0x10
// 004745f7: MOV dword ptr [EBX + 0x4c],EAX
// 004745fa: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004745fc: MOV EAX,dword ptr [ESP + 0x12c]
// 00474603: MOV dword ptr [EBX + 0x5c],EAX
// 00474606: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474608: MOV dword ptr [EAX + 0x50],0xffff
// 0047460f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474611: MOV dword ptr [EAX + 0x54],0xffff
// 00474618: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047461a: MOV dword ptr [EAX + 0x58],0xffff
// 00474621: MOV dword ptr [ESP + 0x30],0x2
// 00474629: MOV EAX,dword ptr [ESI + 0x28]
//   XREF to: 0066ff30 (READ)
// 0047462c: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047462e: SHL EAX,0x10
// 00474631: MOV dword ptr [EBX + 0x78],EAX
//   XREF to: 00f80000 (DATA)
// 00474634: MOV EAX,dword ptr [ESI + 0x2c]
//   XREF to: 0066ff34 (READ)
// 00474637: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474639: SHL EAX,0x10
// 0047463c: MOV dword ptr [EBX + 0x7c],EAX
//   XREF to: 00f80000 (DATA)
// 0047463f: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474641: MOV EAX,dword ptr [ESP + 0x12c]
// 00474648: MOV dword ptr [EBX + 0x8c],EAX
// 0047464e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474650: MOV dword ptr [EAX + 0x80],0xffff
// 0047465a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047465c: MOV dword ptr [EAX + 0x84],0xffff
// 00474666: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474668: MOV ECX,0x3
// 0047466d: MOV dword ptr [EAX + 0x88],0xffff
// 00474677: MOV dword ptr [ESP + 0x34],ECX
// 0047467b: MOV EBX,dword ptr [ESI + 0x20]
//   XREF to: 0066ff28 (READ)
// 0047467e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474680: SHL EBX,0x10
// 00474683: MOV dword ptr [EAX + 0xa8],EBX
// 00474689: MOV EAX,dword ptr [ESI + 0x2c]
//   XREF to: 0066ff34 (READ)
// 0047468c: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047468e: SHL EAX,0x10
// 00474691: MOV dword ptr [EBX + 0xac],EAX
//   XREF to: 00f80000 (DATA)
// 00474697: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474699: MOV EAX,dword ptr [ESP + 0x12c]
// 004746a0: MOV dword ptr [EBX + 0xbc],EAX
// 004746a6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004746a8: MOV dword ptr [EAX + 0xb0],0xffff
// 004746b2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004746b4: MOV dword ptr [EAX + 0xb4],0xffff
// 004746be: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004746c0: MOV dword ptr [EAX + 0xb8],0xffff
// 004746ca: LEA EAX,[ESP + 0x10]
// 004746ce: PUSH EAX
// 004746cf: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004746d0: CALL engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
//   XREF to: 0048bf10 (UNCONDITIONAL_CALL)
// 004746d5: ADD ESP,0x8
// 004746d8: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004746de: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004746df: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
