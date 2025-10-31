// Name: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0
// Address: 004758d0
// Address Range: [[004758d0, 00475fb7]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight * this_ptr)
// Globals:
//   double DOUBLE_0061f24b = 0.100000000000000
//   double DOUBLE_0061f253 = 18
//   double DOUBLE_0061f25b = 2
//   double DOUBLE_0061f263 = 0.5
//   double DOUBLE_0061f26b = 0.0625
//   float FLOAT_0061f273 = 0.0625
//   double DOUBLE_0061f27b = 3.14159265350000
//   double DOUBLE_0061f283 = 0.00390625
//   float FLOAT_0061f28b = 0.25
//   double DOUBLE_0061f293 = 512
//   float FLOAT_0065c900 = 256
//   float FLOAT_0065c908 = 0.00390625
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81aa8
//   undefined4 DAT_0326eee8
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  CVector3f *pCVar3;
  int extraout_ECX;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *this_ptr_01;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  unkbyte10 Var10;
  float10 fVar11;
  double dVar12;
  float afStackY_10d8 [988];
  CVector3i *in_stack_fffffea0;
  undefined4 local_148;
  float in_stack_fffffec8;
  float in_stack_fffffecc;
  float in_stack_fffffed0;
  CVector3i local_12c;
  CVector3f local_120;
  float local_114;
  float local_110;
  float local_10c;
  CVector3f local_108;
  float local_fc;
  float local_f8;
  float local_f4;
  int local_f0;
  float afStack_ec [4];
  float local_dc;
  CVector3i local_d8;
  CVector3f local_cc;
  CVector3i local_c0;
  CVector3f local_b4;
  CVector3i local_a8;
  int local_9c;
  float local_98;
  int local_94;
  int local_78;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  float local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (((this_ptr->field17_0x1cbc != 0) &&
      ((float)DOUBLE_0061f24b <= *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbd0))) &&
     (g_CGamePtr->halo_mode != 0)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
              (g_CDemonRendererPtr,in_stack_fffffea0);
    local_9c = local_f0;
    (&local_98)[(uint)bVar5 * -2] = afStack_ec[(uint)bVar5 * -2];
    (&local_98)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_114 = (float)local_9c * FLOAT_0065c908;
    local_110 = (float)(int)local_98 * FLOAT_0065c908;
    local_10c = (float)local_94 * FLOAT_0065c908;
    afStack_ec[2] = local_114 - (float)(this_ptr->base).base.position.x;
    afStack_ec[3] = local_110 - (float)(this_ptr->base).base.position.y;
    local_dc = local_10c - (float)(this_ptr->base).base.position.z;
    local_54 = SQRT(local_dc * local_dc +
                    afStack_ec[2] * afStack_ec[2] + afStack_ec[3] * afStack_ec[3]);
    if (0.0 < local_54) {
      fVar1 = 1.0 / local_54;
      afStack_ec[2] = afStack_ec[2] * fVar1;
      afStack_ec[3] = afStack_ec[3] * fVar1;
      local_120.x = 0.0;
      local_120.y = 0.0;
      local_120.z = 1.0;
      this_ptr_01 = &(this_ptr->base).base.rotation_matrix;
      local_dc = local_dc * fVar1;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                ((CMatrix3x3f *)this_ptr_01,&local_108,&local_120);
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr,(float *)&stack0xfffffec8);
      in_stack_fffffec8 = in_stack_fffffec8 - (float)(this_ptr->base).base.position.x;
      in_stack_fffffecc = in_stack_fffffecc - (float)(this_ptr->base).base.position.y;
      in_stack_fffffed0 = in_stack_fffffed0 - (float)(this_ptr->base).base.position.z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)this_ptr_01,&local_cc,(CVector3f *)&stack0xfffffec8);
      if ((CVector3f *)&stack0xfffffec8 != pCVar3) {
        in_stack_fffffec8 = pCVar3->x;
        in_stack_fffffecc = pCVar3->y;
        in_stack_fffffed0 = pCVar3->z;
      }
      fVar1 = ((in_stack_fffffed0 * (float)DOUBLE_0061f253) / (this_ptr->base).base.projection_scale
              ) * (float)DOUBLE_0061f25b;
      fVar2 = in_stack_fffffec8 * in_stack_fffffec8 + in_stack_fffffecc * in_stack_fffffecc;
      fVar1 = fVar1 * fVar1;
      local_58 = 1.0 - fVar2 / fVar1;
      if ((fVar1 <= fVar2) || (local_58 <= (float)DOUBLE_0061f263)) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_b4);
        local_50 = 1;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&local_b4,(CVector3i *)0x0);
        do {
          fVar6 = (float10)local_50 *
                  ((float10)DOUBLE_0061f253 / (float10)(this_ptr->base).base.projection_scale) *
                  (float10)DOUBLE_0061f26b;
          local_4c = (float)fVar6;
          Var10 = fpatan(fVar6,(float10)1);
          fVar7 = (float10)fcos(Var10);
          local_48 = 0;
          local_44 = (float)((float10)1 - fVar6);
          local_40 = (float)fVar7;
          do {
            fVar6 = (float10)local_48 * (float10)FLOAT_0061f273 * (float10)DOUBLE_0061f27b *
                    (float10)DOUBLE_0061f25b;
            fVar7 = (float10)fsin(fVar6);
            fVar11 = (float10)(local_48 + 1) * (float10)FLOAT_0061f273 * (float10)DOUBLE_0061f27b *
                     (float10)DOUBLE_0061f25b;
            fVar8 = (float10)fsin(fVar11);
            fVar6 = (float10)fcos(fVar6);
            fVar11 = (float10)fcos(fVar11);
            local_18 = this_ptr->shadow_map_width - (this_ptr->shadow_map_width >> 0x1f) >> 1;
            local_14 = this_ptr->shadow_map_height - (this_ptr->shadow_map_height >> 0x1f) >> 1;
            fVar9 = (float10)local_4c;
            local_30 = (float)(fVar6 * fVar9);
            fVar6 = (float10)local_14 - (float10)local_14 * (float10)local_30;
            local_148 = 0x475c13;
            dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr,local_14));
            local_78 = (int)ROUND(fVar6);
            local_34 = (float)(fVar7 * fVar9);
            fVar6 = (float10)local_18 * (float10)local_34 + (float10)local_18;
            fVar8 = fVar8 * fVar9;
            dVar12 = crt_math_c_round_FUN_005fe6b0
                               ((double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                                 local_78 * extraout_ECX));
            local_70 = (int)ROUND(fVar6);
            local_2c = (float)this_ptr->shadow_depth_buffer[SUB84(dVar12,0) + local_70] *
                       (float)DOUBLE_0061f283;
            local_24 = 0;
            local_3c = (float)fVar8;
            local_38 = (float)(fVar9 * fVar11);
            local_28 = local_2c;
            do {
              local_6c = (this_ptr->base).max_distance;
              local_20 = (float)local_24 * local_40 * local_6c * FLOAT_0061f28b;
              local_14 = local_24 + 1;
              local_1c = (float)local_14 * local_40 * local_6c * FLOAT_0061f28b;
              local_60 = this_ptr->volumetric_intensity *
                         (local_6c - local_20) * (1.0 / local_6c) * (float)DOUBLE_0061f293 *
                         local_44;
              local_5c = local_44 *
                         (local_6c - local_1c) * (1.0 / local_6c) * (float)DOUBLE_0061f293 *
                         this_ptr->volumetric_intensity;
              local_68 = (float)(int)ROUND(local_60);
              local_64 = (float)(int)ROUND(local_5c);
              local_f4 = local_28;
              if (local_20 < local_28) {
                local_f4 = local_20;
              }
              local_fc = local_f4 * local_34;
              local_f8 = local_f4 * local_30;
              local_12c.x = (int)ROUND(local_fc * FLOAT_0065c900);
              local_12c.y = (int)ROUND(local_f8 * FLOAT_0065c900);
              local_12c.z = (int)ROUND(local_f4 * FLOAT_0065c900);
              local_148 = 0x475d82;
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_12c);
              local_f4 = local_2c;
              if (local_20 < local_2c) {
                local_f4 = local_20;
              }
              local_fc = local_f4 * local_3c;
              local_f8 = local_f4 * local_38;
              local_a8.x = (int)ROUND(local_fc * FLOAT_0065c900);
              local_a8.y = (int)ROUND(local_f8 * FLOAT_0065c900);
              local_a8.z = (int)ROUND(local_f4 * FLOAT_0065c900);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_a8);
              local_f4 = local_2c;
              if (local_1c < local_2c) {
                local_f4 = local_1c;
              }
              local_fc = local_f4 * local_3c;
              local_f8 = local_f4 * local_38;
              local_d8.x = (int)ROUND(local_fc * FLOAT_0065c900);
              local_d8.y = (int)ROUND(local_f8 * FLOAT_0065c900);
              local_d8.z = (int)ROUND(local_f4 * FLOAT_0065c900);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_d8);
              local_f4 = local_28;
              if (local_1c < local_28) {
                local_f4 = local_1c;
              }
              local_fc = local_f4 * local_34;
              local_f8 = local_f4 * local_30;
              local_c0.x = (int)ROUND(local_fc * FLOAT_0065c900);
              local_c0.y = (int)ROUND(local_f8 * FLOAT_0065c900);
              local_c0.z = (int)ROUND(local_f4 * FLOAT_0065c900);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_c0);
              this_ptr_00 = g_CDemonRendererPtr;
              g_CDemonRendererPtr->vertex_buffer_ptr->light = local_68;
              this_ptr_00->vertex_buffer_ptr[1].light = local_68;
              this_ptr_00->vertex_buffer_ptr[2].light = local_64;
              this_ptr_00->vertex_buffer_ptr[3].light = local_64;
              iVar4 = local_24 + 1;
              local_148 = 3;
              local_24 = iVar4;
              engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                        (this_ptr_00,(SMRGLHeaderPrimitive *)&stack0xfffffea0,
                         core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440);
            } while (iVar4 < 4);
            local_48 = local_48 + 1;
          } while (local_48 < 0x10);
          local_50 = local_50 + 1;
        } while (local_50 < 0x10);
        local_12c.x = (int)g_CDemonRendererPtr;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004758d0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0
// 004758d1: PUSH ESI
// 004758d2: PUSH EDI
// 004758d3: PUSH EBP
// 004758d4: MOV EBP,ESP
// 004758d6: SUB ESP,0x150
// 004758dc: SUB EBP,0x7e
// 004758df: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004758e5: CMP dword ptr [EAX + 0x1cbc],0x0
// 004758ec: JZ 0x0047590f
//   XREF to: 0047590f (CONDITIONAL_JUMP)
// 004758ee: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004758f3: FLD float ptr [EAX + 0x15ac70]
//   XREF to: 0326eee8 (READ)
// 004758f9: FCOMP double ptr [0x0061f24b]
//   XREF to: 0061f24b (READ)
// 004758ff: FNSTSW AX
// 00475901: SAHF
// 00475902: JC 0x0047590f
//   XREF to: 0047590f (CONDITIONAL_JUMP)
// 00475904: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (DATA)
// 00475909: CMP dword ptr [EAX + 0xc],0x0
//   XREF to: 02d81aa8 (READ)
// 0047590d: JNZ 0x00475917
//   XREF to: 00475917 (CONDITIONAL_JUMP)
// 0047590f: LEA ESP,[EBP + 0x7e]
//   Label: LAB_0047590f
//   XREF to: Stack[-0x10] (DATA)
// 00475912: POP EBP
// 00475913: POP EDI
// 00475914: POP ESI
// 00475915: POP EBX
// 00475916: RET
// 00475917: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_00475917
//   XREF to: 006703ec (READ)
// 0047591d: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0047591e: LEA ESI,[EBP + -0x62]
//   XREF to: Stack[-0xf0] (DATA)
// 00475921: LEA EDI,[EBP + -0xe]
//   XREF to: Stack[-0x9c] (DATA)
// 00475924: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 00475929: LEA ESI,[EBP + -0x62]
//   XREF to: Stack[-0xf0] (DATA)
// 0047592c: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x9c] (DATA)
// 0047592f: LEA EBX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 00475935: ADD ESP,0x4
// 00475938: MOVSD ES:EDI,ESI
// 00475939: MOVSD ES:EDI,ESI
// 0047593a: MOVSD ES:EDI,ESI
// 0047593b: FILD dword ptr [EAX]
//   XREF to: Stack[-0x9c] (DATA)
// 0047593d: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 00475943: FSTP float ptr [EBX]
//   XREF to: Stack[-0x114] (DATA)
// 00475945: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x98] (READ)
// 00475948: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 0047594e: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x110] (WRITE)
// 00475951: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x94] (READ)
// 00475954: FMUL float ptr [0x0065c908]
//   XREF to: 0065c908 (READ)
// 0047595a: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x10c] (WRITE)
// 0047595d: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475963: FLD float ptr [EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (READ)
// 00475969: FSUB float ptr [EBX + 0x4]
// 0047596c: FLD float ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x110] (READ)
// 00475972: FXCH
// 00475974: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe4] (WRITE)
// 00475977: FSUB float ptr [EBX + 0x8]
// 0047597a: FST float ptr [EBP + -0x52]
//   XREF to: Stack[-0xe0] (WRITE)
// 0047597d: FMUL float ptr [EBP + -0x52]
//   XREF to: Stack[-0xe0] (READ)
// 00475980: FLD float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe4] (READ)
// 00475983: FMUL ST0
// 00475985: FLD float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x10c] (READ)
// 00475988: FSUB float ptr [EBX + 0xc]
// 0047598b: FXCH
// 0047598d: FADDP ST2,ST0
// 0047598f: FST float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xdc] (WRITE)
// 00475992: FMUL float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xdc] (READ)
// 00475995: FADDP
// 00475997: FSQRT
// 00475999: ADD EBX,0x4
// 0047599c: FST float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (WRITE)
// 0047599f: FLDZ
// 004759a1: FCOMPP
// 004759a3: FNSTSW AX
// 004759a5: SAHF
// 004759a6: JNC 0x0047590f
//   XREF to: 0047590f (CONDITIONAL_JUMP)
// 004759ac: FLD1
// 004759ae: FLD float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe4] (READ)
// 004759b1: FXCH
// 004759b3: FDIV float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 004759b6: FXCH
// 004759b8: FMUL ST1
// 004759ba: FLD float ptr [EBP + -0x52]
//   XREF to: Stack[-0xe0] (READ)
// 004759bd: FMUL ST2
// 004759bf: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xdc] (READ)
// 004759c2: XOR ESI,ESI
// 004759c4: MOV EAX,0x3f800000
// 004759c9: MOV dword ptr [EBP + 0xffffff6e],ESI
//   XREF to: Stack[-0x120] (WRITE)
// 004759cf: MOV dword ptr [EBP + 0xffffff72],ESI
//   XREF to: Stack[-0x11c] (WRITE)
// 004759d5: MOV dword ptr [EBP + 0xffffff76],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 004759db: LEA EAX,[EBP + 0xffffff6e]
//   XREF to: Stack[-0x120] (DATA)
// 004759e1: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004759e7: PUSH EAX
// 004759e8: LEA EAX,[EBP + -0x7a]
//   XREF to: Stack[-0x108] (DATA)
// 004759eb: ADD ESI,0x10
// 004759ee: PUSH EAX
// 004759ef: FMULP ST3
// 004759f1: PUSH ESI
// 004759f2: FXCH
// 004759f4: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe4] (WRITE)
// 004759f7: FSTP float ptr [EBP + -0x52]
//   XREF to: Stack[-0xe0] (WRITE)
// 004759fa: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xdc] (WRITE)
// 004759fd: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00475a02: ADD ESP,0xc
// 00475a05: LEA EAX,[EBP + 0xffffff56]
//   XREF to: Stack[-0x138] (DATA)
// 00475a0b: PUSH EAX
// 00475a0c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475a12: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00475a13: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 00475a18: FLD float ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x138] (READ)
// 00475a1e: FLD float ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (READ)
// 00475a24: FLD float ptr [EBP + 0xffffff5e]
//   XREF to: Stack[-0x130] (READ)
// 00475a2a: LEA EAX,[EBP + 0xffffff56]
//   XREF to: Stack[-0x138] (DATA)
// 00475a30: ADD ESP,0x8
// 00475a33: FXCH ST2
// 00475a35: FSUB float ptr [EBX]
// 00475a37: PUSH EAX
// 00475a38: FSTP float ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x138] (WRITE)
// 00475a3e: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xcc] (DATA)
// 00475a41: FSUB float ptr [EBX + 0x4]
// 00475a44: PUSH EAX
// 00475a45: FSTP float ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (WRITE)
// 00475a4b: FSUB float ptr [EBX + 0x8]
// 00475a4e: PUSH ESI
// 00475a4f: FSTP float ptr [EBP + 0xffffff5e]
//   XREF to: Stack[-0x130] (WRITE)
// 00475a55: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00475a5a: MOV EDX,EAX
// 00475a5c: LEA EAX,[EBP + 0xffffff56]
//   XREF to: Stack[-0x138] (DATA)
// 00475a62: ADD ESP,0xc
// 00475a65: CMP EAX,EDX
// 00475a67: JZ 0x00475a83
//   XREF to: 00475a83 (CONDITIONAL_JUMP)
// 00475a69: MOV EAX,dword ptr [EDX]
// 00475a6b: MOV dword ptr [EBP + 0xffffff56],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 00475a71: MOV EAX,dword ptr [EDX + 0x4]
// 00475a74: MOV dword ptr [EBP + 0xffffff5a],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 00475a7a: MOV EAX,dword ptr [EDX + 0x8]
// 00475a7d: MOV dword ptr [EBP + 0xffffff5e],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 00475a83: FLD float ptr [EBP + 0xffffff5e]
//   Label: LAB_00475a83
//   XREF to: Stack[-0x130] (READ)
// 00475a89: FMUL double ptr [0x0061f253]
//   XREF to: 0061f253 (READ)
// 00475a8f: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475a95: FDIV float ptr [EAX + 0x38]
// 00475a98: FLD float ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (READ)
// 00475a9e: FMUL ST0
// 00475aa0: FLD float ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x138] (READ)
// 00475aa6: FMUL ST0
// 00475aa8: FXCH ST2
// 00475aaa: FMUL double ptr [0x0061f25b]
//   XREF to: 0061f25b (READ)
// 00475ab0: FXCH ST2
// 00475ab2: FADDP
// 00475ab4: FLD ST0
// 00475ab6: FLD ST2
// 00475ab8: FMULP ST3
// 00475aba: FDIV ST0,ST2
// 00475abc: FLD1
// 00475abe: FSUBRP
// 00475ac0: FSTP float ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (WRITE)
// 00475ac3: FCOMPP
// 00475ac5: FNSTSW AX
// 00475ac7: SAHF
// 00475ac8: JNC 0x00475adc
//   XREF to: 00475adc (CONDITIONAL_JUMP)
// 00475aca: FLD float ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 00475acd: FCOMP double ptr [0x0061f263]
//   XREF to: 0061f263 (READ)
// 00475ad3: FNSTSW AX
// 00475ad5: SAHF
// 00475ad6: JA 0x0047590f
//   XREF to: 0047590f (CONDITIONAL_JUMP)
// 00475adc: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00475adc
//   XREF to: Stack[0x4] (READ)
// 00475ae2: ADD EAX,0x4
// 00475ae5: PUSH EAX
// 00475ae6: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475aec: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00475aed: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00475af2: ADD ESP,0x8
// 00475af5: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb4] (DATA)
// 00475af8: PUSH EAX
// 00475af9: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475aff: ADD EAX,0x10
// 00475b02: PUSH EAX
// 00475b03: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 00475b08: ADD ESP,0x8
// 00475b0b: PUSH 0x0
// 00475b0d: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb4] (DATA)
// 00475b10: PUSH EAX
// 00475b11: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475b17: MOV ESI,0x1
// 00475b1c: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00475b1d: MOV dword ptr [EBP + 0x3e],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 00475b20: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00475b25: ADD ESP,0xc
// 00475b28: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00475b28
//   XREF to: Stack[0x4] (READ)
// 00475b2e: FLD float ptr [EAX + 0x38]
// 00475b31: FDIVR double ptr [0x0061f253]
//   XREF to: 0061f253 (READ)
// 00475b37: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (READ)
// 00475b3a: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00475b3d: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00475b40: FMULP
// 00475b42: FMUL double ptr [0x0061f26b]
//   XREF to: 0061f26b (READ)
// 00475b48: FST float ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (WRITE)
// 00475b4b: FLD ST0
// 00475b4d: FLD1
// 00475b4f: FPATAN
// 00475b51: FCOS
// 00475b53: FLD1
// 00475b55: XOR EDI,EDI
// 00475b57: FSUBRP ST2,ST0
// 00475b59: MOV dword ptr [EBP + 0x46],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 00475b5c: FXCH
// 00475b5e: FSTP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (WRITE)
// 00475b61: FSTP float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (WRITE)
// 00475b64: MOV EAX,dword ptr [EBP + 0x46]
//   Label: LAB_00475b64
//   XREF to: Stack[-0x48] (READ)
// 00475b67: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00475b6a: FLD float ptr [0x0061f273]
//   XREF to: 0061f273 (READ)
// 00475b70: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00475b73: FMUL ST1
// 00475b75: FLD double ptr [0x0061f27b]
//   XREF to: 0061f27b (READ)
// 00475b7b: FXCH
// 00475b7d: FMUL ST1
// 00475b7f: INC EAX
// 00475b80: FLD double ptr [0x0061f25b]
//   XREF to: 0061f25b (READ)
// 00475b86: FXCH
// 00475b88: FMUL ST1
// 00475b8a: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00475b8d: FLD ST0
// 00475b8f: FSIN
// 00475b91: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00475b94: FMULP ST5
// 00475b96: FXCH ST4
// 00475b98: FMULP ST3
// 00475b9a: FXCH ST2
// 00475b9c: FMULP
// 00475b9e: FLD ST0
// 00475ba0: FSIN
// 00475ba2: FXCH ST2
// 00475ba4: FCOS
// 00475ba6: FXCH
// 00475ba8: FCOS
// 00475baa: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475bb0: MOV EDX,dword ptr [EDX + 0x1cc0]
// 00475bb6: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475bbc: SAR EDX,0x1f
// 00475bbf: MOV EAX,dword ptr [EAX + 0x1cc0]
// 00475bc5: SUB EAX,EDX
// 00475bc7: SAR EAX,0x1
// 00475bc9: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475bcf: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00475bd2: MOV EDX,dword ptr [EDX + 0x1cc4]
// 00475bd8: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475bde: SAR EDX,0x1f
// 00475be1: MOV EAX,dword ptr [EAX + 0x1cc4]
// 00475be7: SUB EAX,EDX
// 00475be9: SAR EAX,0x1
// 00475beb: FLD float ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 00475bee: FXCH ST2
// 00475bf0: FMUL ST2
// 00475bf2: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00475bf5: FSTP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (WRITE)
// 00475bf8: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 00475bfb: FLD ST0
// 00475bfd: FMUL float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 00475c00: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475c06: FSUBP
// 00475c08: MOV ECX,dword ptr [EDX + 0x1cc0]
// 00475c0e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00475c13: FISTP dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (WRITE)
// 00475c16: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 00475c19: IMUL EAX,ECX
// 00475c1c: FXCH ST3
// 00475c1e: FMUL ST1
// 00475c20: FSTP float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (WRITE)
// 00475c23: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00475c26: FLD ST0
// 00475c28: FMUL float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 00475c2b: FADDP
// 00475c2d: FXCH ST2
// 00475c2f: FMUL ST1
// 00475c31: FXCH ST2
// 00475c33: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00475c38: FISTP dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x70] (WRITE)
// 00475c3b: ADD EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x70] (READ)
// 00475c3e: LEA EDX,[EAX + EAX*0x1]
// 00475c41: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475c47: FMULP ST2
// 00475c49: MOV EAX,dword ptr [EAX + 0x2f94]
// 00475c4f: ADD EDX,EAX
// 00475c51: XOR EAX,EAX
// 00475c53: MOV AX,word ptr [EDX]
// 00475c56: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00475c59: XOR ESI,ESI
// 00475c5b: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 00475c5e: FMUL double ptr [0x0061f283]
//   XREF to: 0061f283 (READ)
// 00475c64: MOV dword ptr [EBP + 0x6a],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00475c67: FXCH
// 00475c69: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (WRITE)
// 00475c6c: FSTP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (WRITE)
// 00475c6f: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 00475c72: FSTP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (WRITE)
// 00475c75: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00475c78: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00475c78
//   XREF to: Stack[0x4] (READ)
// 00475c7e: MOV EAX,dword ptr [EAX + 0x140]
// 00475c84: FLD float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (READ)
// 00475c87: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00475c8a: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 00475c8d: FMUL float ptr [EBP + 0x22]
//   XREF to: Stack[-0x6c] (READ)
// 00475c90: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00475c93: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 00475c96: FMUL ST1
// 00475c98: FLD float ptr [0x0061f28b]
//   XREF to: 0061f28b (READ)
// 00475c9e: FXCH
// 00475ca0: FMUL ST1
// 00475ca2: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x6c] (READ)
// 00475ca5: FXCH
// 00475ca7: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (WRITE)
// 00475caa: FSUB float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00475cad: FLD1
// 00475caf: FDIV float ptr [EBP + 0x22]
//   XREF to: Stack[-0x6c] (READ)
// 00475cb2: INC EAX
// 00475cb3: FXCH
// 00475cb5: FMUL ST1
// 00475cb7: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00475cba: FLD double ptr [0x0061f293]
//   XREF to: 0061f293 (READ)
// 00475cc0: FXCH
// 00475cc2: FMUL ST1
// 00475cc4: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 00475cc7: FMULP ST5
// 00475cc9: FLD float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 00475ccc: FXCH
// 00475cce: FMUL ST1
// 00475cd0: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00475cd6: FXCH ST5
// 00475cd8: FMULP ST4
// 00475cda: FLD float ptr [EAX + 0x2fa8]
// 00475ce0: FMULP ST5
// 00475ce2: FXCH ST3
// 00475ce4: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (WRITE)
// 00475ce7: FXCH ST3
// 00475ce9: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x60] (WRITE)
// 00475cec: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x6c] (READ)
// 00475cef: FSUB float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00475cf2: FMULP
// 00475cf4: FMULP ST2
// 00475cf6: FMULP
// 00475cf8: FMUL float ptr [EAX + 0x2fa8]
// 00475cfe: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x5c] (WRITE)
// 00475d01: FLD float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x60] (READ)
// 00475d07: FISTP dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (WRITE)
// 00475d0d: FLD float ptr [EBP + 0x32]
//   XREF to: Stack[-0x5c] (READ)
// 00475d13: FISTP dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x64] (WRITE)
// 00475d19: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00475d1c: FCOMP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 00475d1f: FNSTSW AX
// 00475d21: SAHF
// 00475d22: JNC 0x00475f98
//   XREF to: 00475f98 (CONDITIONAL_JUMP)
// 00475d28: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00475d2b: MOV dword ptr [EBP + -0x66],EAX
//   Label: LAB_00475d2b
//   XREF to: Stack[-0xf4] (WRITE)
// 00475d2e: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475d31: FMUL float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 00475d34: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475d37: FMUL float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 00475d3a: LEA EBX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x12c] (DATA)
// 00475d40: LEA EAX,[EBP + -0x6e]
//   XREF to: Stack[-0xfc] (DATA)
// 00475d43: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475d49: FXCH
// 00475d4b: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xfc] (WRITE)
// 00475d4e: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf8] (WRITE)
// 00475d51: FLD float ptr [EAX]
//   XREF to: Stack[-0xfc] (DATA)
// 00475d53: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475d59: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x12c] (DATA)
// 00475d5b: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xf8] (READ)
// 00475d5e: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475d64: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x128] (WRITE)
// 00475d67: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xf4] (READ)
// 00475d6a: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475d70: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x124] (WRITE)
// 00475d73: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x12c] (DATA)
// 00475d79: PUSH EAX
// 00475d7a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475d7c: PUSH EAX
// 00475d7d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00475d82: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00475d85: ADD ESP,0x8
// 00475d88: FCOMP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 00475d8b: FNSTSW AX
// 00475d8d: SAHF
// 00475d8e: JNC 0x00475fa0
//   XREF to: 00475fa0 (CONDITIONAL_JUMP)
// 00475d94: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00475d97: MOV dword ptr [EBP + -0x66],EAX
//   Label: LAB_00475d97
//   XREF to: Stack[-0xf4] (WRITE)
// 00475d9a: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475d9d: FMUL float ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 00475da0: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475da3: FMUL float ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (READ)
// 00475da6: LEA EBX,[EBP + -0x1a]
//   XREF to: Stack[-0xa8] (DATA)
// 00475da9: LEA EAX,[EBP + -0x6e]
//   XREF to: Stack[-0xfc] (DATA)
// 00475dac: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475db2: FXCH
// 00475db4: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xfc] (WRITE)
// 00475db7: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf8] (WRITE)
// 00475dba: FLD float ptr [EAX]
//   XREF to: Stack[-0xfc] (DATA)
// 00475dbc: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475dc2: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xa8] (DATA)
// 00475dc4: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xf8] (READ)
// 00475dc7: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475dcd: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xa4] (WRITE)
// 00475dd0: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xf4] (READ)
// 00475dd3: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475dd9: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xa0] (WRITE)
// 00475ddc: LEA EAX,[EBP + -0x1a]
//   XREF to: Stack[-0xa8] (DATA)
// 00475ddf: PUSH EAX
// 00475de0: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475de2: ADD EAX,0x30
// 00475de5: PUSH EAX
// 00475de6: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00475deb: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00475dee: ADD ESP,0x8
// 00475df1: FCOMP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 00475df4: FNSTSW AX
// 00475df6: SAHF
// 00475df7: JNC 0x00475fa8
//   XREF to: 00475fa8 (CONDITIONAL_JUMP)
// 00475dfd: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00475e00: MOV dword ptr [EBP + -0x66],EAX
//   Label: LAB_00475e00
//   XREF to: Stack[-0xf4] (WRITE)
// 00475e03: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475e06: FMUL float ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 00475e09: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475e0c: FMUL float ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (READ)
// 00475e0f: LEA EBX,[EBP + -0x4a]
//   XREF to: Stack[-0xd8] (DATA)
// 00475e12: LEA EAX,[EBP + -0x6e]
//   XREF to: Stack[-0xfc] (DATA)
// 00475e15: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475e1b: FXCH
// 00475e1d: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xfc] (WRITE)
// 00475e20: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf8] (WRITE)
// 00475e23: FLD float ptr [EAX]
//   XREF to: Stack[-0xfc] (DATA)
// 00475e25: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475e2b: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xd8] (DATA)
// 00475e2d: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xf8] (READ)
// 00475e30: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475e36: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xd4] (WRITE)
// 00475e39: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xf4] (READ)
// 00475e3c: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475e42: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xd0] (WRITE)
// 00475e45: LEA EAX,[EBP + -0x4a]
//   XREF to: Stack[-0xd8] (DATA)
// 00475e48: PUSH EAX
// 00475e49: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475e4b: ADD EAX,0x60
// 00475e4e: PUSH EAX
// 00475e4f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00475e54: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00475e57: ADD ESP,0x8
// 00475e5a: FCOMP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 00475e5d: FNSTSW AX
// 00475e5f: SAHF
// 00475e60: JNC 0x00475fb0
//   XREF to: 00475fb0 (CONDITIONAL_JUMP)
// 00475e66: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00475e69: MOV dword ptr [EBP + -0x66],EAX
//   Label: LAB_00475e69
//   XREF to: Stack[-0xf4] (WRITE)
// 00475e6c: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475e6f: FMUL float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 00475e72: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (READ)
// 00475e75: FMUL float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 00475e78: LEA EBX,[EBP + -0x32]
//   XREF to: Stack[-0xc0] (DATA)
// 00475e7b: LEA EAX,[EBP + -0x6e]
//   XREF to: Stack[-0xfc] (DATA)
// 00475e7e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475e84: FXCH
// 00475e86: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xfc] (WRITE)
// 00475e89: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf8] (WRITE)
// 00475e8c: FLD float ptr [EAX]
//   XREF to: Stack[-0xfc] (DATA)
// 00475e8e: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475e94: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xc0] (DATA)
// 00475e96: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xf8] (READ)
// 00475e99: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475e9f: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xbc] (WRITE)
// 00475ea2: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xf4] (READ)
// 00475ea5: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475eab: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xb8] (WRITE)
// 00475eae: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xc0] (DATA)
// 00475eb1: PUSH EAX
// 00475eb2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475eb4: ADD EAX,0x90
// 00475eb9: PUSH EAX
// 00475eba: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00475ebf: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475ec5: ADD ESP,0x8
// 00475ec8: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475eca: MOV EAX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (READ)
// 00475ecd: MOV dword ptr [EBX + 0x20],EAX
// 00475ed0: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475ed2: MOV EAX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (READ)
// 00475ed5: MOV dword ptr [EBX + 0x50],EAX
// 00475ed8: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475eda: MOV EAX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x64] (READ)
// 00475edd: MOV dword ptr [EBX + 0x80],EAX
// 00475ee3: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475ee5: PUSH 0x450440
//   XREF to: 00450440 (DATA)
// 00475eea: MOV EAX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x64] (READ)
// 00475eed: MOV EDI,0x4
// 00475ef2: MOV ECX,0x1
// 00475ef7: MOV dword ptr [EBX + 0xb0],EAX
// 00475efd: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 00475f00: MOV dword ptr [EBP + 0xffffff32],EDI
//   XREF to: Stack[-0x15c] (WRITE)
// 00475f06: XOR EAX,EAX
// 00475f08: MOV dword ptr [EBP + 0xffffff4e],ECX
//   XREF to: Stack[-0x140] (WRITE)
// 00475f0e: MOV dword ptr [EBP + 0xffffff42],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 00475f14: MOV dword ptr [EBP + 0xffffff3e],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 00475f1a: MOV dword ptr [EBP + 0xffffff3a],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 00475f20: MOV dword ptr [EBP + 0xffffff36],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 00475f26: MOV EAX,0x2
// 00475f2b: INC ESI
// 00475f2c: MOV dword ptr [EBP + 0xffffff4a],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 00475f32: LEA EAX,[EBP + 0xffffff2e]
//   XREF to: Stack[-0x160] (DATA)
// 00475f38: XOR EBX,EBX
// 00475f3a: PUSH EAX
// 00475f3b: MOV EDI,0x3
// 00475f40: MOV dword ptr [EBP + 0xffffff52],EBX
//   XREF to: Stack[-0x13c] (WRITE)
// 00475f46: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00475f47: MOV dword ptr [EBP + 0x6a],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00475f4a: MOV dword ptr [EBP + 0xffffff46],EDI
//   XREF to: Stack[-0x148] (WRITE)
// 00475f50: CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)
// 00475f55: ADD ESP,0xc
// 00475f58: CMP ESI,0x4
// 00475f5b: JL 0x00475c78
//   XREF to: 00475c78 (CONDITIONAL_JUMP)
// 00475f61: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x48] (READ)
// 00475f64: INC EAX
// 00475f65: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00475f68: CMP EAX,0x10
// 00475f6b: JL 0x00475b64
//   XREF to: 00475b64 (CONDITIONAL_JUMP)
// 00475f71: MOV ECX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (READ)
// 00475f74: INC ECX
// 00475f75: MOV dword ptr [EBP + 0x3e],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 00475f78: CMP ECX,0x10
// 00475f7b: JL 0x00475b28
//   XREF to: 00475b28 (CONDITIONAL_JUMP)
// 00475f81: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475f87: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00475f88: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00475f8d: ADD ESP,0x4
// 00475f90: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 00475f93: POP EBP
// 00475f94: POP EDI
// 00475f95: POP ESI
// 00475f96: POP EBX
// 00475f97: RET
// 00475f98: MOV EAX,dword ptr [EBP + 0x66]
//   Label: LAB_00475f98
//   XREF to: Stack[-0x28] (READ)
// 00475f9b: JMP 0x00475d2b
//   XREF to: 00475d2b (UNCONDITIONAL_JUMP)
// 00475fa0: MOV EAX,dword ptr [EBP + 0x62]
//   Label: LAB_00475fa0
//   XREF to: Stack[-0x2c] (READ)
// 00475fa3: JMP 0x00475d97
//   XREF to: 00475d97 (UNCONDITIONAL_JUMP)
// 00475fa8: MOV EAX,dword ptr [EBP + 0x62]
//   Label: LAB_00475fa8
//   XREF to: Stack[-0x2c] (READ)
// 00475fab: JMP 0x00475e00
//   XREF to: 00475e00 (UNCONDITIONAL_JUMP)
// 00475fb0: MOV EAX,dword ptr [EBP + 0x66]
//   Label: LAB_00475fb0
//   XREF to: Stack[-0x28] (READ)
// 00475fb3: JMP 0x00475e69
//   XREF to: 00475e69 (UNCONDITIONAL_JUMP)
