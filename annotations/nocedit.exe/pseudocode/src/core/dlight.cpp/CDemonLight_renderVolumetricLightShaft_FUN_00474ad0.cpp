// Name: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0
// Address: 00474ad0
// Address Range: [[00474ad0, 0047520c]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight * this_ptr)
// Globals:
//   double DOUBLE_0061f1eb = 18
//   double DOUBLE_0061f1f3 = 2
//   float FLOAT_0061f1fb = 0.00001525902
//   float FLOAT_0061f1ff = 0.04000000
//   double DOUBLE_0061f203 = 8192
//   float FLOAT_0065c900 = 256
//   float FLOAT_0065c908 = 0.00390625
//   undefined4 DAT_0066fef0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   CGame g_CGameInstance
//   undefined4 DAT_02d81aa8
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
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight *this_ptr)

{
  float fVar1;
  SRenderVertex *pSVar2;
  CVector3f *pCVar3;
  CDemonRenderer *this_ptr_00;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  double dVar7;
  float in_stack_00000008;
  float afStackY_10b0 [988];
  CVector3i *in_stack_fffffed0;
  float in_stack_fffffefc;
  float in_stack_ffffff04;
  undefined1 local_f8 [8];
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  CVector3f local_e0;
  undefined4 local_d4;
  undefined1 auStack_d0 [8];
  float local_c8;
  float local_c4 [7];
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3i local_9c;
  float fStack_90;
  float local_8c;
  undefined1 local_88 [8];
  float local_80;
  CVector3i local_7c;
  float local_70;
  float local_6c;
  CVector3f CStack_64;
  CVector3i local_54;
  int local_48;
  float local_2c;
  float local_28;
  float local_24;
  CVector3i local_20;
  float local_14;
  
  bVar5 = 0;
  if ((this_ptr->field17_0x1cbc != 0) && (g_CGamePtr->halo_mode == 2)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr,&local_8c);
    local_88._0_4_ = (float)local_88._0_4_ - (float)(this_ptr->base).base.position.x;
    local_88._4_4_ = (float)local_88._4_4_ - (float)(this_ptr->base).base.position.y;
    local_80 = local_80 - (float)(this_ptr->base).base.position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&CStack_64,
                        (CVector3f *)local_88);
    if ((CVector3f *)(local_88 + 4) != pCVar3) {
      local_88._4_4_ = pCVar3->x;
      local_80 = pCVar3->y;
      local_7c.x = (int)pCVar3->z;
    }
    local_20.x = (int)(local_80 * local_80);
    local_20.z = (int)((((float)local_7c.x * (float)DOUBLE_0061f1eb) /
                       (this_ptr->base).base.projection_scale) * (float)DOUBLE_0061f1f3);
    local_14 = (float)local_88._4_4_ * (float)local_88._4_4_ + (float)local_20.x;
    local_20.y = (int)((float)local_20.z * (float)local_20.z);
    if (local_14 <= (float)local_20.y) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                (g_CDemonRendererPtr,in_stack_fffffed0);
      local_54.x = (int)local_c8;
      *(float *)((int)&local_54 + (uint)bVar5 * -8 + 4) = local_c4[(uint)bVar5 * -2];
      *(float *)((int)&local_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           local_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      local_7c.y = (int)((float)local_54.y * FLOAT_0065c908);
      local_7c.z = (int)((float)local_54.z * FLOAT_0065c908);
      local_70 = (float)local_48 * FLOAT_0065c908;
      local_2c = (float)local_7c.z - (float)(this_ptr->base).base.position.x;
      local_28 = local_70 - (float)(this_ptr->base).base.position.y;
      local_6c = local_6c - (float)(this_ptr->base).base.position.z;
      local_24 = SQRT(local_6c * local_6c + local_2c * local_2c + local_28 * local_28);
      if (0.0 < local_24) {
        local_24 = 1.0 / local_24;
        local_2c = local_2c * local_24;
        local_28 = local_28 * local_24;
        local_24 = local_6c * local_24;
        local_e0.x = 0.0;
        local_e0.y = 0.0;
        local_e0.z = 1.0;
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                            (CVector3f *)local_f8,&local_e0);
        if (0.0 < ((float)local_20.x * pCVar3->z + local_28 * pCVar3->x + local_24 * pCVar3->y) *
                  unaff_EBX * FLOAT_0061f1fb) {
          iVar4 = 0;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
          do {
            local_9c.z = (int)((float)iVar4 * FLOAT_0061f1ff * (this_ptr->base).max_distance);
            local_a8 = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
            local_9c.x = (int)(local_a8 * (float)local_9c.z);
            local_a4 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
            local_9c.y = (int)(local_a4 * (float)local_9c.z);
            local_a0 = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
            local_9c.z = (int)(local_a0 * (float)local_9c.z);
            fStack_90 = (float)(this_ptr->base).base.position.x + (float)local_9c.x;
            local_8c = (float)(this_ptr->base).base.position.y + (float)local_9c.y;
            local_88._0_4_ = (float)(this_ptr->base).base.position.z + (float)local_9c.z;
            if ((float *)(auStack_d0 + 4) != &fStack_90) {
              auStack_d0._4_4_ = fStack_90;
              local_c8 = local_8c;
              local_c4[0] = (float)local_88._0_4_;
            }
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                      (g_CDemonRendererPtr,(CVector3f *)(auStack_d0 + 4));
            engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                      (g_CDemonRendererPtr,&local_80);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr,&local_7c,(CVector3i *)0x0);
            local_2c = in_stack_00000008;
            local_28 = 0.0;
            local_54.x = (int)ROUND(in_stack_00000008 * FLOAT_0065c900);
            local_54.y = (int)ROUND(in_stack_00000008 * FLOAT_0065c900);
            local_54.z = (int)ROUND(FLOAT_0065c900 * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_54);
            local_2c = -local_2c;
            local_20.x = (int)ROUND(local_2c * FLOAT_0065c900);
            local_20.y = (int)ROUND(local_28 * FLOAT_0065c900);
            local_20.z = (int)ROUND(local_24 * FLOAT_0065c900);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_20);
            local_24 = -local_24;
            auStack_d0._0_4_ = (undefined4)ROUND(local_28 * FLOAT_0065c900);
            auStack_d0._4_4_ = (undefined4)ROUND(local_24 * FLOAT_0065c900);
            local_c8 = (float)(int)ROUND((float)local_20.x * FLOAT_0065c900);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                       (CVector3i *)auStack_d0);
            local_24 = -local_24;
            local_9c.x = (int)ROUND(local_24 * FLOAT_0065c900);
            local_9c.y = (int)ROUND((float)local_20.x * FLOAT_0065c900);
            local_9c.z = (int)ROUND((float)local_20.y * FLOAT_0065c900);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_9c);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr,g_LightTextures + 1);
            local_f8._4_4_ = 5.60519e-45;
            local_e4 = 0;
            local_e8 = 0;
            local_ec = 0;
            local_f0 = 0.0;
            local_e0.x = 0.0;
            fVar6 = ((((float10)(this_ptr->base).max_distance - (float10)in_stack_fffffefc) *
                     (float10)DOUBLE_0061f203) / (float10)(this_ptr->base).max_distance) *
                    (float10)in_stack_ffffff04;
            pSVar2 = g_CDemonRendererPtr->vertex_buffer_ptr;
            dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,this_ptr));
            this_ptr_00 = (CDemonRenderer *)((ulonglong)dVar7 >> 0x20);
            fVar1 = (float)(int)ROUND(fVar6);
            pSVar2->w_recip = fVar1;
            this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr->color = 0xffff;
            this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
            local_e0.z = 1.4013e-45;
            this_ptr_00->vertex_buffer_ptr[1].w_recip = fVar1;
            this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
            local_d4 = 2;
            this_ptr_00->vertex_buffer_ptr[2].w_recip = fVar1;
            this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
            auStack_d0._0_4_ = 3;
            this_ptr_00->vertex_buffer_ptr[3].w_recip = fVar1;
            this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
            this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
            this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
            this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
            engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                      (this_ptr_00,(SMRGLHeaderPrimitive *)(local_f8 + 4));
            iVar4 = iVar4 + 1;
            in_stack_fffffefc = 6.549704e-39;
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          } while (iVar4 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00474ad0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0
// 00474ad1: PUSH ESI
// 00474ad2: PUSH EDI
// 00474ad3: PUSH EBP
// 00474ad4: MOV EBP,ESP
// 00474ad6: SUB ESP,0x128
// 00474adc: AND ESP,0xfffffff8
// 00474adf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474ae2: CMP dword ptr [EAX + 0x1cbc],0x0
// 00474ae9: JZ 0x00474af6
//   XREF to: 00474af6 (CONDITIONAL_JUMP)
// 00474aeb: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (DATA)
// 00474af0: CMP dword ptr [EAX + 0xc],0x2
//   XREF to: 02d81aa8 (READ)
// 00474af4: JZ 0x00474afd
//   XREF to: 00474afd (CONDITIONAL_JUMP)
// 00474af6: MOV ESP,EBP
//   Label: LAB_00474af6
// 00474af8: POP EBP
// 00474af9: POP EDI
// 00474afa: POP ESI
// 00474afb: POP EBX
// 00474afc: RET
// 00474afd: LEA EAX,[ESP + 0xac]
//   Label: LAB_00474afd
//   XREF to: Stack[-0x8c] (DATA)
// 00474b04: PUSH EAX
// 00474b05: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 00474b0b: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00474b0c: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 00474b11: ADD ESP,0x8
// 00474b14: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474b17: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x8c] (READ)
// 00474b1e: FSUB float ptr [EAX + 0x4]
// 00474b21: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x88] (READ)
// 00474b28: FXCH
// 00474b2a: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x8c] (WRITE)
// 00474b31: FSUB float ptr [EAX + 0x8]
// 00474b34: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x84] (READ)
// 00474b3b: FXCH
// 00474b3d: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x88] (WRITE)
// 00474b44: FSUB float ptr [EAX + 0xc]
// 00474b47: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x8c] (DATA)
// 00474b4e: PUSH EAX
// 00474b4f: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x68] (DATA)
// 00474b56: PUSH EAX
// 00474b57: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474b5a: ADD EAX,0x10
// 00474b5d: PUSH EAX
// 00474b5e: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x84] (WRITE)
// 00474b65: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00474b6a: MOV EDX,EAX
// 00474b6c: LEA EAX,[ESP + 0xb8]
//   XREF to: Stack[-0x8c] (DATA)
// 00474b73: ADD ESP,0xc
// 00474b76: CMP EAX,EDX
// 00474b78: JZ 0x00474b97
//   XREF to: 00474b97 (CONDITIONAL_JUMP)
// 00474b7a: MOV EAX,dword ptr [EDX]
// 00474b7c: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00474b83: MOV EAX,dword ptr [EDX + 0x4]
// 00474b86: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00474b8d: MOV EAX,dword ptr [EDX + 0x8]
// 00474b90: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00474b97: FLD float ptr [ESP + 0xb4]
//   Label: LAB_00474b97
//   XREF to: Stack[-0x84] (READ)
// 00474b9e: FMUL double ptr [0x0061f1eb]
//   XREF to: 0061f1eb (READ)
// 00474ba4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474ba7: FDIV float ptr [EAX + 0x38]
// 00474baa: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x88] (READ)
// 00474bb1: FMUL ST0
// 00474bb3: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x8c] (READ)
// 00474bba: FMUL ST0
// 00474bbc: FXCH ST2
// 00474bbe: FMUL double ptr [0x0061f1f3]
//   XREF to: 0061f1f3 (READ)
// 00474bc4: FXCH
// 00474bc6: FSTP float ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (WRITE)
// 00474bcd: FXCH
// 00474bcf: FADD float ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 00474bd6: FXCH
// 00474bd8: FST float ptr [ESP + 0x118]
//   XREF to: Stack[-0x20] (WRITE)
// 00474bdf: FMUL float ptr [ESP + 0x118]
//   XREF to: Stack[-0x20] (READ)
// 00474be6: FXCH
// 00474be8: FST float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00474bef: FXCH
// 00474bf1: FSTP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x24] (WRITE)
// 00474bf8: FCOMP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x24] (READ)
// 00474bff: FNSTSW AX
// 00474c01: SAHF
// 00474c02: JA 0x00474af6
//   XREF to: 00474af6 (CONDITIONAL_JUMP)
// 00474c08: FLD float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (READ)
// 00474c0f: FDIV float ptr [ESP + 0x114]
//   XREF to: Stack[-0x24] (READ)
// 00474c16: LEA EDI,[ESP + 0xdc]
//   XREF to: Stack[-0x5c] (DATA)
// 00474c1d: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474c23: LEA EBX,[ESP + 0xb8]
//   XREF to: Stack[-0x80] (DATA)
// 00474c2a: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00474c2b: FLD1
// 00474c2d: FSUBRP
// 00474c2f: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0xd4] (DATA)
// 00474c33: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x130] (WRITE)
// 00474c37: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 00474c3c: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0xd4] (DATA)
// 00474c40: ADD ESP,0x4
// 00474c43: LEA EAX,[ESP + 0xdc]
//   XREF to: Stack[-0x5c] (DATA)
// 00474c4a: MOVSD ES:EDI,ESI
// 00474c4b: MOVSD ES:EDI,ESI
// 00474c4c: MOVSD ES:EDI,ESI
// 00474c4d: FILD dword ptr [EAX]
//   XREF to: Stack[-0x5c] (DATA)
// 00474c4f: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 00474c55: FSTP float ptr [EBX]
//   XREF to: Stack[-0x80] (DATA)
// 00474c57: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x58] (READ)
// 00474c5a: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 00474c60: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x7c] (WRITE)
// 00474c63: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x54] (READ)
// 00474c66: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 00474c6c: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x78] (WRITE)
// 00474c6f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474c72: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x80] (READ)
// 00474c79: FSUB float ptr [EDI + 0x4]
// 00474c7c: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x7c] (READ)
// 00474c83: FXCH
// 00474c85: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (WRITE)
// 00474c8c: FSUB float ptr [EDI + 0x8]
// 00474c8f: FST float ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (WRITE)
// 00474c96: FMUL float ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (READ)
// 00474c9d: FLD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (READ)
// 00474ca4: FMUL ST0
// 00474ca6: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x78] (READ)
// 00474cad: FSUB float ptr [EDI + 0xc]
// 00474cb0: FXCH
// 00474cb2: FADDP ST2,ST0
// 00474cb4: FST float ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (WRITE)
// 00474cbb: FMUL float ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (READ)
// 00474cc2: FADDP
// 00474cc4: FSQRT
// 00474cc6: ADD EDI,0x4
// 00474cc9: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x134] (WRITE)
// 00474ccd: FLDZ
// 00474ccf: FCOMPP
// 00474cd1: FNSTSW AX
// 00474cd3: SAHF
// 00474cd4: JNC 0x00474af6
//   XREF to: 00474af6 (CONDITIONAL_JUMP)
// 00474cda: FLD1
// 00474cdc: FLD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (READ)
// 00474ce3: FXCH
// 00474ce5: FDIV float ptr [ESP + 0x4]
//   XREF to: Stack[-0x134] (READ)
// 00474ce9: FXCH
// 00474ceb: FMUL ST1
// 00474ced: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (READ)
// 00474cf4: FMUL ST2
// 00474cf6: FLD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (READ)
// 00474cfd: FMULP ST3
// 00474cff: MOV EAX,0xffff
// 00474d04: MOV ESI,0x3f800000
// 00474d09: MOV EDX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 00474d0f: XOR ECX,ECX
// 00474d11: SUB EAX,EDX
// 00474d13: MOV dword ptr [ESP + 0x4c],ECX
//   XREF to: Stack[-0xec] (WRITE)
// 00474d17: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00474d1e: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0xec] (DATA)
// 00474d22: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0xe8] (WRITE)
// 00474d26: PUSH EAX
// 00474d27: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x104] (DATA)
// 00474d2b: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0xe4] (WRITE)
// 00474d2f: PUSH EAX
// 00474d30: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474d33: FILD dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x14] (READ)
// 00474d3a: ADD EAX,0x10
// 00474d3d: FSTP float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x14] (WRITE)
// 00474d44: PUSH EAX
// 00474d45: FXCH
// 00474d47: FSTP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x38] (WRITE)
// 00474d4e: FSTP float ptr [ESP + 0x110]
//   XREF to: Stack[-0x34] (WRITE)
// 00474d55: FSTP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x30] (WRITE)
// 00474d5c: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00474d61: ADD ESP,0xc
// 00474d64: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (READ)
// 00474d6b: FMUL float ptr [EAX + 0x4]
// 00474d6e: FLD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (READ)
// 00474d75: FMUL float ptr [EAX]
// 00474d77: FADDP
// 00474d79: FLD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (READ)
// 00474d80: FMUL float ptr [EAX + 0x8]
// 00474d83: FADDP
// 00474d85: FMUL float ptr [ESP + 0x124]
//   XREF to: Stack[-0x14] (READ)
// 00474d8c: FMUL float ptr [0x0061f1fb]
//   XREF to: 0061f1fb (READ)
// 00474d92: FLDZ
// 00474d94: FCOMPP
// 00474d96: FNSTSW AX
// 00474d98: SAHF
// 00474d99: JNC 0x00474af6
//   XREF to: 00474af6 (CONDITIONAL_JUMP)
// 00474d9f: PUSH 0x1
// 00474da1: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00474da6: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00474da7: XOR ESI,ESI
// 00474da9: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00474dae: ADD ESP,0x8
// 00474db1: MOV dword ptr [ESP + 0x124],ESI
//   Label: LAB_00474db1
//   XREF to: Stack[-0x14] (WRITE)
// 00474db8: FILD dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x14] (READ)
// 00474dbf: FMUL float ptr [0x0061f1ff]
//   XREF to: 0061f1ff (READ)
// 00474dc5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474dc8: FMUL float ptr [EAX + 0x140]
// 00474dce: FLD float ptr [EAX + 0x38]
// 00474dd1: FXCH
// 00474dd3: FST float ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 00474dd6: FMUL double ptr [0x0061f1eb]
//   XREF to: 0061f1eb (READ)
// 00474ddc: FDIVRP
// 00474dde: MOV EAX,dword ptr [EAX + 0x18]
// 00474de1: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00474de5: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xbc] (READ)
// 00474de9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474dec: FMUL float ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 00474def: MOV EAX,dword ptr [EAX + 0x24]
// 00474df2: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 00474df9: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xb8] (READ)
// 00474e00: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00474e03: FMUL float ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 00474e06: MOV EAX,dword ptr [EAX + 0x30]
// 00474e09: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00474e10: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0xb4] (READ)
// 00474e17: FMUL float ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 00474e1a: FXCH ST2
// 00474e1c: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0xb0] (WRITE)
// 00474e23: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0xac] (WRITE)
// 00474e2a: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0xa8] (WRITE)
// 00474e31: FLD float ptr [EDI]
// 00474e33: FADD float ptr [ESP + 0x88]
//   XREF to: Stack[-0xb0] (READ)
// 00474e3a: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0xa4] (WRITE)
// 00474e41: FLD float ptr [EDI + 0x4]
// 00474e44: FADD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0xac] (READ)
// 00474e4b: LEA EDX,[ESP + 0x94]
//   XREF to: Stack[-0xa4] (DATA)
// 00474e52: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0xa0] (WRITE)
// 00474e59: FLD float ptr [EDI + 0x8]
// 00474e5c: FADD float ptr [ESP + 0x90]
//   XREF to: Stack[-0xa8] (READ)
// 00474e63: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0xe0] (DATA)
// 00474e67: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x9c] (WRITE)
// 00474e6e: FSTP float ptr [ESP + 0x120]
//   XREF to: Stack[-0x18] (WRITE)
// 00474e75: CMP EAX,EDX
// 00474e77: JZ 0x00474e9a
//   XREF to: 00474e9a (CONDITIONAL_JUMP)
// 00474e79: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0xa4] (READ)
// 00474e80: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00474e84: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0xa0] (READ)
// 00474e8b: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00474e8f: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x9c] (READ)
// 00474e96: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 00474e9a: LEA EAX,[ESP + 0x58]
//   Label: LAB_00474e9a
//   XREF to: Stack[-0xe0] (DATA)
// 00474e9e: PUSH EAX
// 00474e9f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474ea5: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00474ea6: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00474eab: ADD ESP,0x8
// 00474eae: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x98] (DATA)
// 00474eb5: PUSH EAX
// 00474eb6: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474ebc: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00474ebd: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 00474ec2: ADD ESP,0x8
// 00474ec5: PUSH 0x0
// 00474ec7: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x98] (DATA)
// 00474ece: PUSH EAX
// 00474ecf: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474ed5: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00474ed6: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00474edb: ADD ESP,0xc
// 00474ede: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x18] (READ)
// 00474ee5: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00474eec: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00474ef3: XOR EAX,EAX
// 00474ef5: LEA EBX,[ESP + 0xc4]
//   XREF to: Stack[-0x74] (DATA)
// 00474efc: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00474f03: LEA EAX,[ESP + 0xe8]
//   XREF to: Stack[-0x50] (DATA)
// 00474f0a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474f10: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 00474f12: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474f18: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x74] (DATA)
// 00474f1a: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00474f1d: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474f23: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x70] (WRITE)
// 00474f26: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 00474f29: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474f2f: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x6c] (WRITE)
// 00474f32: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x74] (DATA)
// 00474f39: PUSH EAX
// 00474f3a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474f3c: PUSH EAX
// 00474f3d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00474f42: ADD ESP,0x8
// 00474f45: MOV AH,byte ptr [ESP + 0xeb]
//   XREF to: Stack[-0x4d] (READ)
// 00474f4c: XOR AH,0x80
// 00474f4f: LEA EBX,[ESP + 0xf4]
//   XREF to: Stack[-0x44] (DATA)
// 00474f56: MOV byte ptr [ESP + 0xeb],AH
//   XREF to: Stack[-0x4d] (WRITE)
// 00474f5d: LEA EAX,[ESP + 0xe8]
//   XREF to: Stack[-0x50] (DATA)
// 00474f64: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474f6a: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 00474f6c: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474f72: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x44] (DATA)
// 00474f74: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00474f77: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474f7d: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x40] (WRITE)
// 00474f80: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 00474f83: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474f89: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x3c] (WRITE)
// 00474f8c: LEA EAX,[ESP + 0xf4]
//   XREF to: Stack[-0x44] (DATA)
// 00474f93: PUSH EAX
// 00474f94: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474f96: ADD EAX,0x30
// 00474f99: PUSH EAX
// 00474f9a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00474f9f: ADD ESP,0x8
// 00474fa2: MOV DL,byte ptr [ESP + 0xef]
//   XREF to: Stack[-0x49] (READ)
// 00474fa9: LEA EBX,[ESP + 0x40]
//   XREF to: Stack[-0xf8] (DATA)
// 00474fad: XOR DL,0x80
// 00474fb0: LEA EAX,[ESP + 0xe8]
//   XREF to: Stack[-0x50] (DATA)
// 00474fb7: MOV byte ptr [ESP + 0xef],DL
//   XREF to: Stack[-0x49] (WRITE)
// 00474fbe: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00474fc4: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 00474fc6: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474fcc: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xf8] (DATA)
// 00474fce: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00474fd1: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474fd7: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xf4] (WRITE)
// 00474fda: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 00474fdd: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00474fe3: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xf0] (WRITE)
// 00474fe6: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0xf8] (DATA)
// 00474fea: PUSH EAX
// 00474feb: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00474fed: ADD EAX,0x60
// 00474ff0: PUSH EAX
// 00474ff1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00474ff6: ADD ESP,0x8
// 00474ff9: MOV DH,byte ptr [ESP + 0xeb]
//   XREF to: Stack[-0x4d] (READ)
// 00475000: LEA EBX,[ESP + 0x70]
//   XREF to: Stack[-0xc8] (DATA)
// 00475004: XOR DH,0x80
// 00475007: LEA EAX,[ESP + 0xe8]
//   XREF to: Stack[-0x50] (DATA)
// 0047500e: MOV byte ptr [ESP + 0xeb],DH
//   XREF to: Stack[-0x4d] (WRITE)
// 00475015: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047501b: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 0047501d: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475023: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xc8] (DATA)
// 00475025: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00475028: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047502e: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc4] (WRITE)
// 00475031: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 00475034: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047503a: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xc0] (WRITE)
// 0047503d: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0xc8] (DATA)
// 00475041: PUSH EAX
// 00475042: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475044: ADD EAX,0x90
// 00475049: PUSH EAX
// 0047504a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0047504f: ADD ESP,0x8
// 00475052: PUSH 0x66fef0
//   XREF to: 0066fef0 (DATA)
// 00475057: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047505d: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0047505e: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00475063: ADD ESP,0x8
// 00475066: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00475069: FLD float ptr [EAX + 0x140]
// 0047506f: FSUB float ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 00475072: FMUL double ptr [0x0061f203]
//   XREF to: 0061f203 (READ)
// 00475078: FDIV float ptr [EAX + 0x140]
// 0047507e: XOR EBX,EBX
// 00475080: MOV ECX,0x4
// 00475085: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047508b: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x128] (WRITE)
// 0047508f: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x118] (WRITE)
// 00475093: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x11c] (WRITE)
// 00475097: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x120] (WRITE)
// 0047509b: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x124] (WRITE)
// 0047509f: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x114] (WRITE)
// 004750a3: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x130] (READ)
// 004750a7: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004750a9: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004750ae: FISTP dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (WRITE)
// 004750b5: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 004750bc: MOV dword ptr [EBX + 0x2c],EAX
// 004750bf: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004750c1: MOV dword ptr [EAX + 0x20],0xffff
// 004750c8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004750ca: MOV dword ptr [EAX + 0x24],0xffff
// 004750d1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004750d3: MOV dword ptr [EAX + 0x28],0xffff
// 004750da: MOV dword ptr [ESP + 0x28],0x1
//   XREF to: Stack[-0x110] (WRITE)
// 004750e2: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004750e4: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 004750eb: MOV dword ptr [EBX + 0x5c],EAX
// 004750ee: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004750f0: MOV dword ptr [EAX + 0x50],0xffff
// 004750f7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004750f9: MOV dword ptr [EAX + 0x54],0xffff
// 00475100: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475102: MOV ECX,0x2
// 00475107: MOV dword ptr [EAX + 0x58],0xffff
// 0047510e: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x10c] (WRITE)
// 00475112: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475114: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 0047511b: MOV dword ptr [EBX + 0x8c],EAX
// 00475121: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475123: MOV dword ptr [EAX + 0x80],0xffff
// 0047512d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047512f: MOV dword ptr [EAX + 0x84],0xffff
// 00475139: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047513b: MOV EBX,0x3
// 00475140: MOV dword ptr [EAX + 0x88],0xffff
// 0047514a: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x108] (WRITE)
// 0047514e: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475150: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 00475157: MOV dword ptr [EBX + 0xbc],EAX
// 0047515d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047515f: MOV dword ptr [EAX + 0xb0],0xffff
// 00475169: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047516b: MOV dword ptr [EAX + 0xb4],0xffff
// 00475175: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475177: MOV dword ptr [EAX + 0xb8],0xffff
// 00475181: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475183: MOV dword ptr [EAX + 0x18],0xf80000
//   XREF to: 00f80000 (DATA)
// 0047518a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047518c: MOV dword ptr [EAX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00475193: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475195: MOV dword ptr [EAX + 0x48],0x80000
// 0047519c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047519e: MOV dword ptr [EAX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 004751a5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004751a7: MOV dword ptr [EAX + 0x78],0x80000
// 004751ae: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004751b0: MOV dword ptr [EAX + 0x7c],0x80000
// 004751b7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004751b9: MOV dword ptr [EAX + 0xa8],0xf80000
//   XREF to: 00f80000 (DATA)
// 004751c3: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004751c5: MOV dword ptr [EAX + 0xac],0x80000
// 004751cf: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x12c] (DATA)
// 004751d3: PUSH EAX
// 004751d4: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004751d5: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 004751da: ADD ESP,0x8
// 004751dd: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004751e2: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004751e3: INC ESI
// 004751e4: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004751e9: ADD ESP,0x4
// 004751ec: CMP ESI,0x19
// 004751ef: JL 0x00474db1
//   XREF to: 00474db1 (CONDITIONAL_JUMP)
// 004751f5: PUSH 0x0
// 004751f7: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004751fd: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004751fe: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00475203: ADD ESP,0x8
// 00475206: MOV ESP,EBP
// 00475208: POP EBP
// 00475209: POP EDI
// 0047520a: POP ESI
// 0047520b: POP EBX
// 0047520c: RET
