// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
// Address: 00450ac0
// Address Range: [[00450ac0, 00450e27]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera * this_ptr, CDemonLight * light_source)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c2e9 [UNCONDITIONAL_CALL]
// Globals:
//   double g_FixedPointScale256 = 256
//   double g_LogarithmicConstant210 = 3.32192809489000
//   CVector3i[320] g_TempWorldPositionRow
//   undefined4 DAT_009e5d74
//   undefined4 DAT_009e6c74
//   CVector3f[76800] g_PrecomputedSurfaceNormals
//   undefined4 DAT_00ac7c74
//   undefined4 DAT_00ac7c78
//   undefined4 DAT_00ac7c7c
//   undefined4 DAT_00ac7c80
//   undefined4 DAT_00ac7c84
//   undefined4 DAT_00ac7c88
//   undefined4 DAT_00ac8b74
//   char[241][320] g_CoronaBlurOutputBuffer
//   undefined4 DAT_00ba8db8
//   int g_CoronaMaxDepth
//   int g_CoronaDepthShift
//   int g_BackdropSaveActive
//   int[256] g_DitherPatternTable
//   CDemonLight* g_CurrentLightForCorona
//   CMatrix3x3i g_CoronaCameraRotationMatrix
//   undefined4 DAT_013bc23c
//   undefined4 g_CoronaCameraRotationMatrix.m[0][2]
//   undefined4 g_CoronaCameraRotationMatrix.m[1][2]
//   undefined4 g_CoronaCameraRotationMatrix.m[2][2]
//   int g_CameraDownscaleIterations
//   int[240] g_CoronaLeftExtent
//   undefined4 DAT_01576fac
//   int[240] g_CoronaRightExtent
//   undefined4 DAT_0157736c
//   int[240][320] g_CoronaDepthBuffer
//   undefined4 DAT_01577c28
//   undefined4 DAT_01577c2c
//   undefined4 DAT_01578128
//   uint*[1024] g_ZBufferScanlineArray
// Function calls:
//   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
          (CDemonCamera *this_ptr,CDemonLight *light_source)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_EAX;
  int iVar3;
  undefined4 extraout_EDX;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar5;
  int *piVar6;
  byte bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  char *unaff_retaddr;
  int aiStackY_1034 [1013];
  undefined4 uStack_5c;
  CVector3i *in_stack_ffffffb0;
  undefined4 local_4c;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  int local_38;
  char (*local_30) [320];
  int (*local_2c) [320];
  CVector3f *local_28;
  CVector3i *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint *puVar12;
  CVector3i *output_ptr;
  
  bVar7 = 0;
  g_CurrentLightForCorona = light_source;
  pCVar5 = &(light_source->base).base.rotation_matrix;
  piVar6 = (int *)&g_CoronaCameraRotationMatrix;
  for (iVar3 = 10; iVar2 = 0, iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = pCVar5->m[0][0];
    pCVar5 = (CMatrix3x3i *)(pCVar5->m[0] + 1);
    piVar6 = piVar6 + 1;
  }
  do {
    iVar3 = iVar2 + 4;
    uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    *(uint *)((int)g_DitherPatternTable + iVar2) = uVar1 & 0xff;
    iVar2 = iVar3;
  } while (iVar3 != 0x400);
  iVar3 = 0;
  if (0 < this_ptr->display_height) {
    iVar2 = 0;
    do {
      *(int *)((int)g_CoronaLeftExtent + iVar2) = this_ptr->display_width;
      *(undefined4 *)((int)g_CoronaRightExtent + iVar2) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < this_ptr->display_height);
  }
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(light_source);
  fVar9 = (float10)(light_source->base).max_distance * (float10)g_FixedPointScale256;
  fVar10 = (float10)0.3010299956639812 * fVar9 * (float10)g_LogarithmicConstant210;
  uStack_5c = 0x450b6d;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)((ulonglong)dVar11 & 0xffffffff00000000));
  local_20 = SUB84(dVar11,0);
  g_CoronaDepthShift = (int)ROUND(fVar10);
  g_CoronaMaxDepth = (int)ROUND(fVar9);
  g_CoronaDepthShift = g_CoronaDepthShift + -1;
  if (0 < this_ptr->display_height) {
    local_1c = 0;
    local_28 = g_PrecomputedSurfaceNormals;
    local_2c = g_CoronaDepthBuffer;
    local_30 = g_CoronaBlurOutputBuffer;
    local_24 = g_TempWorldPositionRow;
    do {
      if (this_ptr->display_width != *(int *)((int)g_CoronaLeftExtent + local_1c)) {
        iVar3 = *(int *)((int)g_CoronaLeftExtent + local_1c);
        local_18 = *(int *)((int)g_CoronaRightExtent + local_1c);
        output_ptr = local_24 + iVar3;
        local_14 = *local_2c + iVar3;
        puVar12 = g_ZBufferScanlineArray[local_20 << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                  (iVar3 << ((byte)g_CameraDownscaleIterations & 0x1f));
        pCVar4 = local_28 + iVar3;
        iVar2 = iVar3 - local_18;
        bVar8 = SBORROW4(iVar3,local_18);
        while (bVar8 != iVar2 < 0) {
          if ((*puVar12 < (uint)*local_14) &&
             (0.0 <= pCVar4->z * (float)g_CoronaCameraRotationMatrix.m[2][2] +
                     pCVar4->x * (float)g_CoronaCameraRotationMatrix.m[0][2] +
                     pCVar4->y * (float)g_CoronaCameraRotationMatrix.m[1][2])) {
            uStack_5c = 0x450d1b;
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&g_CurrentLightForCorona->base,output_ptr,in_stack_ffffffb0);
            uStack_44 = local_4c;
            *(undefined4 *)((int)&stack0xffffffc0 + (uint)bVar7 * -8) =
                 *(undefined4 *)(&stack0xffffffb8 + (uint)bVar7 * -8);
            *(undefined4 *)((int)&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(undefined4 *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((0 < local_38) &&
               ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                               [(local_3c >> 0x10) * g_CurrentLightForCorona->shadow_map_width +
                                (local_40 >> 0x10)], (int)uVar1 < g_CoronaMaxDepth &&
                (local_38 < (int)(uVar1 + 0x80))))) {
              *unaff_retaddr =
                   *unaff_retaddr +
                   (char)((int)((g_CoronaMaxDepth - uVar1) *
                               (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                     [((g_CurrentLightForCorona->teture_coord_mask &
                                       local_3c >>
                                       ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f)) <<
                                      ((byte)g_CurrentLightForCorona->texture_row_shift & 0x1f)) +
                                      (local_40 >>
                                       ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f) &
                                      g_CurrentLightForCorona->teture_coord_mask)]) >>
                         ((byte)g_CoronaDepthShift & 0x1f));
            }
          }
          pCVar4 = pCVar4 + 1;
          local_14 = local_14 + 1;
          output_ptr = output_ptr + 1;
          iVar3 = iVar3 + 1;
          puVar12 = puVar12 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
          iVar2 = iVar3 - local_18;
          bVar8 = SBORROW4(iVar3,local_18);
        }
      }
      local_1c = local_1c + 4;
      local_28 = local_28 + 0x140;
      local_2c = local_2c + 1;
      local_30 = local_30 + 1;
      local_24 = local_24 + 0x140;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->display_height);
  }
  g_BackdropSaveActive = 1;
  return;
}


// Assembly code:
// 00450ac0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
// 00450ac1: PUSH ESI
// 00450ac2: PUSH EDI
// 00450ac3: PUSH EBP
// 00450ac4: MOV EBP,ESP
// 00450ac6: SUB ESP,0x50
// 00450ac9: AND ESP,0xfffffff8
// 00450acc: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00450acf: MOV ESI,EAX
// 00450ad1: MOV ECX,0xa
// 00450ad6: MOV EDI,0x13bc238
//   XREF to: 013bc238 (DATA)
// 00450adb: LEA ESI,[ESI + 0x10]
// 00450ade: XOR EBX,EBX
// 00450ae0: MOV [0x013bc234],EAX
//   XREF to: 013bc234 (WRITE)
// 00450ae5: MOVSD.REP ES:EDI,ESI
//   XREF to: 013bc238 (WRITE)
//   XREF to: 013bc23c (WRITE)
// 00450ae7: ADD EBX,0x4
//   Label: LAB_00450ae7
// 00450aea: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00450aef: AND EAX,0xff
// 00450af4: MOV dword ptr [EBX + 0x13bbe30],EAX
//   XREF to: 013bbe34 (WRITE)
// 00450afa: CMP EBX,0x400
// 00450b00: JNZ 0x00450ae7
//   XREF to: 00450ae7 (CONDITIONAL_JUMP)
// 00450b02: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00450b05: MOV ECX,dword ptr [EAX + 0x154]
// 00450b0b: XOR EDX,EDX
// 00450b0d: TEST ECX,ECX
// 00450b0f: JLE 0x00450b40
//   XREF to: 00450b40 (CONDITIONAL_JUMP)
// 00450b11: XOR EAX,EAX
// 00450b13: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00450b13
//   XREF to: Stack[0x4] (READ)
// 00450b16: MOV ECX,dword ptr [ECX + 0x150]
// 00450b1c: XOR EBX,EBX
// 00450b1e: MOV dword ptr [EAX + 0x1576fa8],ECX
//   XREF to: 01576fa8 (WRITE)
//   XREF to: 01576fac (WRITE)
// 00450b24: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00450b27: MOV dword ptr [EAX + 0x1577368],EBX
//   XREF to: 01577368 (WRITE)
//   XREF to: 0157736c (WRITE)
// 00450b2d: INC EDX
// 00450b2e: MOV ESI,dword ptr [ECX + 0x154]
// 00450b34: ADD EAX,0x4
// 00450b37: CMP EDX,ESI
// 00450b39: JL 0x00450b13
//   XREF to: 00450b13 (CONDITIONAL_JUMP)
// 00450b3b: LEA EAX,[EAX]
// 00450b3e: MOV ECX,ECX
// 00450b40: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_00450b40
//   XREF to: Stack[0x8] (READ)
// 00450b43: PUSH EDI
// 00450b44: CALL core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
//   XREF to: 004736c0 (UNCONDITIONAL_CALL)
// 00450b49: FLD float ptr [EDI + 0x140]
// 00450b4f: FMUL double ptr [0x0061a2c2]
//   XREF to: 0061a2c2 (READ)
// 00450b55: ADD ESP,0x4
// 00450b58: FLD ST0
// 00450b5a: FLDLG2
// 00450b5c: FXCH
// 00450b5e: FYL2X
// 00450b60: FMUL double ptr [0x0061a2ca]
//   XREF to: 0061a2ca (READ)
// 00450b66: FXCH
// 00450b68: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00450b6d: XOR EAX,EAX
// 00450b6f: FXCH
// 00450b71: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00450b76: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00450b7a: FISTP dword ptr [0x00c1a200]
//   XREF to: 00c1a200 (WRITE)
// 00450b80: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00450b83: MOV EDX,dword ptr [0x00c1a200]
//   XREF to: 00c1a200 (READ)
// 00450b89: FISTP dword ptr [0x00c1a1fc]
//   XREF to: 00c1a1fc (WRITE)
// 00450b8f: DEC EDX
// 00450b90: MOV ECX,dword ptr [EAX + 0x154]
// 00450b96: MOV dword ptr [0x00c1a200],EDX
//   XREF to: 00c1a200 (WRITE)
// 00450b9c: TEST ECX,ECX
// 00450b9e: JLE 0x00450c3b
//   XREF to: 00450c3b (CONDITIONAL_JUMP)
// 00450ba4: MOV EDI,0xac6d74
//   XREF to: 00ac6d74 (DATA)
// 00450ba9: MOV EAX,0x1577728
//   XREF to: 01577728 (DATA)
// 00450bae: MOV EDX,0xba8c78
//   XREF to: 00ba8c78 (DATA)
// 00450bb3: XOR ESI,ESI
// 00450bb5: MOV ECX,0x9e4e74
//   XREF to: 009e4e74 (DATA)
// 00450bba: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00450bbe: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x38] (WRITE)
//   XREF to: 00ac6d74 (DATA)
// 00450bc2: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
//   XREF to: 01577728 (DATA)
// 00450bc6: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x40] (WRITE)
//   XREF to: 00ba8c78 (DATA)
// 00450bca: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x34] (WRITE)
//   XREF to: 009e4e74 (DATA)
// 00450bce: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00450bce
//   XREF to: Stack[0x4] (READ)
// 00450bd1: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00450bd5: MOV EBX,dword ptr [EDX + 0x150]
// 00450bdb: CMP EBX,dword ptr [EAX + 0x1576fa8]
//   XREF to: 01576fa8 (DATA)
//   XREF to: 01576fac (DATA)
// 00450be1: JNZ 0x00450c4c
//   XREF to: 00450c4c (CONDITIONAL_JUMP)
// 00450be3: MOV EBX,dword ptr [ESP + 0x34]
//   Label: LAB_00450be3
//   XREF to: Stack[-0x2c] (READ)
// 00450be7: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 00450beb: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 00450bef: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00450bf3: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00450bf7: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00450bfb: ADD EBX,0x4
// 00450bfe: ADD ESI,0xf00
// 00450c04: ADD EDI,0x500
// 00450c0a: ADD EAX,0x140
//   XREF to: 00ba8db8 (DATA)
// 00450c0f: ADD EDX,0xf00
// 00450c15: INC ECX
// 00450c16: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00450c1a: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x38] (WRITE)
//   XREF to: 00ac7c74 (DATA)
//   XREF to: 00ac8b74 (DATA)
// 00450c1e: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x34] (WRITE)
//   XREF to: 009e5d74 (DATA)
//   XREF to: 009e6c74 (DATA)
// 00450c22: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00450c25: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x3c] (WRITE)
//   XREF to: 01577c28 (DATA)
//   XREF to: 01578128 (DATA)
// 00450c29: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
//   XREF to: 00ba8db8 (DATA)
// 00450c2d: MOV EBX,dword ptr [EDX + 0x154]
// 00450c33: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00450c37: CMP ECX,EBX
// 00450c39: JL 0x00450bce
//   XREF to: 00450bce (CONDITIONAL_JUMP)
// 00450c3b: MOV dword ptr [0x013bbe2c],0x1
//   Label: LAB_00450c3b
//   XREF to: 013bbe2c (WRITE)
// 00450c45: MOV ESP,EBP
// 00450c47: POP EBP
// 00450c48: POP EDI
// 00450c49: POP ESI
// 00450c4a: POP EBX
// 00450c4b: RET
// 00450c4c: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_00450c4c
//   XREF to: Stack[-0x2c] (READ)
// 00450c50: MOV EAX,dword ptr [EAX + 0x1576fa8]
//   XREF to: 01576fac (DATA)
// 00450c56: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00450c5a: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 00450c5e: IMUL EBX,ESI,0xc
// 00450c61: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00450c65: MOV EAX,dword ptr [EAX + 0x1577368]
//   XREF to: 0157736c (DATA)
// 00450c6b: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00450c6f: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00450c73: ADD EAX,EBX
// 00450c75: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00450c79: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00450c7d: ADD EAX,ESI
// 00450c7f: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 00450c83: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00450c87: LEA EAX,[ESI*0x4 + 0x0]
// 00450c8e: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450c94: ADD EDX,EAX
// 00450c96: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00450c9a: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00450c9e: MOV EDX,ESI
// 00450ca0: SHL EAX,CL
// 00450ca2: SHL EDX,CL
// 00450ca4: MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00450cab: SHL EDX,0x2
// 00450cae: ADD EAX,EDX
// 00450cb0: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00450cb4: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 00450cb8: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00450cbc: ADD EBX,EAX
// 00450cbe: CMP ESI,EDX
// 00450cc0: JGE 0x00450be3
//   Label: LAB_00450cc0
//   XREF to: 00450be3 (CONDITIONAL_JUMP)
// 00450cc6: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00450cca: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00450cce: MOV ESI,dword ptr [EDX]
//   XREF to: 01577c28 (DATA)
//   XREF to: 01577c2c (DATA)
// 00450cd0: CMP ESI,dword ptr [EAX]
// 00450cd2: JBE 0x00450dd8
//   XREF to: 00450dd8 (CONDITIONAL_JUMP)
// 00450cd8: FLD float ptr [EBX + 0x4]
//   XREF to: 00ac7c78 (DATA)
//   XREF to: 00ac7c84 (DATA)
// 00450cdb: FMUL float ptr [0x013bc24c]
//   XREF to: 013bc24c (READ)
// 00450ce1: FLD float ptr [EBX]
//   XREF to: 00ac7c74 (DATA)
//   XREF to: 00ac7c80 (DATA)
// 00450ce3: FMUL float ptr [0x013bc240]
//   XREF to: 013bc240 (READ)
// 00450ce9: FADDP
// 00450ceb: FLD float ptr [EBX + 0x8]
//   XREF to: 00ac7c7c (DATA)
//   XREF to: 00ac7c88 (DATA)
// 00450cee: FMUL float ptr [0x013bc258]
//   XREF to: 013bc258 (READ)
// 00450cf4: FADDP
// 00450cf6: FLDZ
// 00450cf8: FCOMPP
// 00450cfa: FNSTSW AX
// 00450cfc: SAHF
// 00450cfd: JA 0x00450dd8
//   XREF to: 00450dd8 (CONDITIONAL_JUMP)
// 00450d03: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00450d07: PUSH EDI
// 00450d08: MOV EAX,[0x013bc234]
//   XREF to: 013bc234 (READ)
// 00450d0d: PUSH EAX
// 00450d0e: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x60] (DATA)
// 00450d12: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x54] (DATA)
// 00450d16: CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)
// 00450d1b: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x60] (DATA)
// 00450d1f: ADD ESP,0x8
// 00450d22: MOVSD ES:EDI,ESI
// 00450d23: MOVSD ES:EDI,ESI
// 00450d24: MOVSD ES:EDI,ESI
// 00450d25: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[-0x4c] (READ)
// 00450d2a: JLE 0x00450dd8
//   XREF to: 00450dd8 (CONDITIONAL_JUMP)
// 00450d30: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00450d34: MOV EAX,[0x013bc234]
//   XREF to: 013bc234 (READ)
// 00450d39: SAR EDX,0x10
// 00450d3c: IMUL EDX,dword ptr [EAX + 0x1cc0]
// 00450d43: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00450d47: SAR ECX,0x10
// 00450d4a: ADD EDX,ECX
// 00450d4c: LEA ESI,[EDX + EDX*0x1]
// 00450d4f: MOV EDX,dword ptr [EAX + 0x2f94]
// 00450d55: MOV DX,word ptr [EDX + ESI*0x1]
// 00450d59: MOV ESI,dword ptr [0x00c1a1fc]
//   XREF to: 00c1a1fc (READ)
// 00450d5f: AND EDX,0xffff
// 00450d65: CMP EDX,ESI
// 00450d67: JGE 0x00450dd8
//   XREF to: 00450dd8 (CONDITIONAL_JUMP)
// 00450d69: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00450d6d: LEA ECX,[EDX + 0x80]
// 00450d73: CMP ECX,EDI
// 00450d75: JLE 0x00450dd8
//   XREF to: 00450dd8 (CONDITIONAL_JUMP)
// 00450d77: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00450d7b: MOV CL,byte ptr [EAX + 0x1cc8]
// 00450d81: SAR ESI,CL
// 00450d83: MOV ECX,dword ptr [EAX + 0x1c68]
// 00450d89: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00450d8d: AND ESI,ECX
// 00450d8f: MOV CL,byte ptr [EAX + 0x1ccc]
// 00450d95: SAR EDI,CL
// 00450d97: MOV ECX,EDI
// 00450d99: MOV EDI,dword ptr [EAX + 0x1c68]
// 00450d9f: AND EDI,ECX
// 00450da1: MOV CL,byte ptr [EAX + 0x1c60]
// 00450da7: SHL EDI,CL
// 00450da9: MOV EAX,dword ptr [EAX + 0x1c54]
// 00450daf: LEA ECX,[EDI + ESI*0x1]
// 00450db2: ADD EAX,ECX
// 00450db4: XOR ECX,ECX
// 00450db6: MOV CL,byte ptr [EAX]
// 00450db8: MOV EAX,[0x00c1a1fc]
//   XREF to: 00c1a1fc (READ)
// 00450dbd: SUB EAX,EDX
// 00450dbf: MOV EDX,EAX
// 00450dc1: IMUL EDX,ECX
// 00450dc4: MOV CL,byte ptr [0x00c1a200]
//   XREF to: 00c1a200 (READ)
// 00450dca: SAR EDX,CL
// 00450dcc: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 00450dd0: XOR EAX,EAX
// 00450dd2: MOV AL,byte ptr [ECX]
//   XREF to: 00ba8db8 (DATA)
// 00450dd4: ADD EAX,EDX
// 00450dd6: MOV byte ptr [ECX],AL
//   XREF to: 00ba8db8 (DATA)
// 00450dd8: MOV EAX,0x1
//   Label: LAB_00450dd8
// 00450ddd: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00450de1: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00450de5: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 00450de9: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450def: ADD EBX,0xc
// 00450df2: ADD ESI,0x4
// 00450df5: ADD EDI,0xc
// 00450df8: INC EDX
// 00450df9: SHL EAX,CL
// 00450dfb: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00450dff: SHL EAX,0x2
// 00450e02: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00450e06: MOV dword ptr [ESP + 0x44],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00450e0a: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00450e0e: ADD ECX,EAX
// 00450e10: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 00450e14: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00450e18: INC EAX
// 00450e19: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00450e1d: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00450e21: CMP EDX,ECX
// 00450e23: JMP 0x00450cc0
//   XREF to: 00450cc0 (UNCONDITIONAL_JUMP)
