// Name: wincore_windll.cpp_transformPoint_FUN_005b5a25
// Address: 005b5a25
// Address Range: [[005b5a25, 005b5ced]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
// Cross-references:
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430d60 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 (004544f0) at 0045452f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_FUN_004c4620 (004c4620) at 004c4706 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_FUN_004c5720 (004c5720) at 004c5ae2 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c6506 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6876 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c6251 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf502 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c0474 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c9400 (004c9400) at 004c9434 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebb0e [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed3c0 (004ed3c0) at 004ed4b4 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0 (004ef3a0) at 004ef426 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050bec0 (0050bec0) at 0050beff [UNCONDITIONAL_CALL]
//   core_mirror.cpp_renderMirrorQuadDepth_FUN_00522800 (00522800) at 00522844 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_renderMirrorQuad_FUN_00522670 (00522670) at 005226b0 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef32c [UNCONDITIONAL_CALL]
// Globals:
//   int g_TempX = 0x0
//   int g_TempY = 0x0
//   int g_TempZ = 0x0
//   int g_TempTransformedX = 0x0
//   int g_TempTransformedY = 0x0
//   int g_TempTransformedZ = 0x0
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   BOOL g_MMXSupported
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_transformPoint_FUN_005b5a25(SProjectedVertex *output,CVector3i *input)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (g_MMXSupported != 0) {
    iVar2 = input->x - g_CameraOriginX;
    iVar7 = input->y - g_CameraOriginY;
    iVar8 = input->z - g_CameraOriginZ;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1][0] +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0][0] +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2][0];
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1][1] +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0][1] +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2][1];
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1][2] +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0][2] +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2][2];
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = 0;
    if ((int)uVar5 < (int)uVar3) {
      uVar6 = 0x80000001;
    }
    if (SBORROW4(uVar3,-uVar5) != (int)(uVar3 + uVar5) < 0) {
      uVar6 = uVar6 | 0x80000002;
    }
    if ((int)uVar5 < (int)uVar4) {
      uVar6 = uVar6 | 0x80000004;
    }
    if (SBORROW4(uVar4,-uVar5) != (int)(uVar4 + uVar5) < 0) {
      uVar6 = uVar6 | 0x80000008;
    }
    if ((int)uVar5 < 1) {
      uVar6 = uVar6 | 0x80000010;
    }
    output->transformed_x = uVar3;
    output->transformed_y = uVar4;
    output->transformed_z = uVar5;
    if (uVar6 == 0) {
      output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar5);
      output->screen_x =
           (int)(((longlong)(int)uVar3 * (longlong)g_ViewportCenterXFixed) / (longlong)(int)uVar5) +
           g_ViewportRightFixed;
      iVar2 = (int)(((longlong)(int)uVar4 * (longlong)g_ViewportCenterYFixed) / (longlong)(int)uVar5
                   ) + g_ViewportBottomFixed;
      output->screen_y = iVar2;
      return iVar2;
    }
    output->screen_x = uVar6;
    return uVar6;
  }
  g_TempX = input->x - g_CameraOriginX;
  g_TempY = input->y - g_CameraOriginY;
  g_TempZ = input->z - g_CameraOriginZ;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1][0] +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0][0] +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2][0];
  g_TempTransformedX = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1][1] +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0][1] +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2][1];
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1][2] +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0][2] +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2][2];
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < g_TempTransformedX) {
    uVar5 = 0x80000001;
  }
  if (g_TempTransformedX < (int)-uVar4) {
    uVar5 = uVar5 | 0x80000002;
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar5 = uVar5 | 0x80000004;
  }
  if ((int)uVar3 < (int)-uVar4) {
    uVar5 = uVar5 | 0x80000008;
  }
  if ((int)uVar4 < 1) {
    uVar5 = uVar5 | 0x80000010;
  }
  g_TempTransformedY = uVar3;
  g_TempTransformedZ = uVar4;
  if (uVar5 == 0) {
    output->transformed_x = g_TempTransformedX;
    output->transformed_y = uVar3;
    output->transformed_z = uVar4;
    output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar4);
    output->screen_x =
         (int)(((longlong)g_TempTransformedX * (longlong)g_ViewportCenterXFixed) /
              (longlong)(int)uVar4) + g_ViewportRightFixed;
    iVar2 = (int)(((longlong)g_TempTransformedY * (longlong)g_ViewportCenterYFixed) /
                 (longlong)(int)uVar4) + g_ViewportBottomFixed;
    output->screen_y = iVar2;
    return iVar2;
  }
  output->transformed_x = g_TempTransformedX;
  output->transformed_y = uVar3;
  output->transformed_z = uVar4;
  output->screen_x = uVar5;
  return uVar5;
}


// Assembly code:
// 005b5a25: TEST dword ptr [0x02d05248],0xffffffff
//   Label: wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 02d05248 (READ)
// 005b5a2f: JZ 0x005b5b73
//   XREF to: 005b5b73 (CONDITIONAL_JUMP)
// 005b5a35: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b5a39: MOV EAX,dword ptr [EBX]
// 005b5a3b: MOV ECX,dword ptr [EBX + 0x4]
// 005b5a3e: MOV EDX,dword ptr [EBX + 0x8]
// 005b5a41: SUB EAX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 005b5a47: SUB ECX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 005b5a4d: SUB EDX,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 005b5a53: MOVD MM0,EAX
// 005b5a56: MOVD MM1,ECX
// 005b5a59: MOVD MM2,EDX
// 005b5a5c: IMUL dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 005b5a62: MOV EBX,EAX
// 005b5a64: MOV ECX,EDX
// 005b5a66: MOVD EAX,MM1
// 005b5a69: IMUL dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 005b5a6f: ADD EBX,EAX
// 005b5a71: ADC ECX,EDX
// 005b5a73: MOVD EAX,MM2
// 005b5a76: IMUL dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 005b5a7c: ADD EAX,EBX
// 005b5a7e: ADC EDX,ECX
// 005b5a80: SHRD EAX,EDX,0x10
// 005b5a84: MOVD MM4,EAX
// 005b5a87: MOVD EAX,MM0
// 005b5a8a: IMUL dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 005b5a90: MOV EBX,EAX
// 005b5a92: MOV ECX,EDX
// 005b5a94: MOVD EAX,MM1
// 005b5a97: IMUL dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 005b5a9d: ADD EBX,EAX
// 005b5a9f: ADC ECX,EDX
// 005b5aa1: MOVD EAX,MM2
// 005b5aa4: IMUL dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 005b5aaa: ADD EAX,EBX
// 005b5aac: ADC EDX,ECX
// 005b5aae: SHRD EAX,EDX,0x10
// 005b5ab2: MOVD MM5,EAX
// 005b5ab5: MOVD EAX,MM0
// 005b5ab8: IMUL dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 005b5abe: MOV EBX,EAX
// 005b5ac0: MOV ECX,EDX
// 005b5ac2: MOVD EAX,MM1
// 005b5ac5: IMUL dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 005b5acb: ADD EBX,EAX
// 005b5acd: ADC ECX,EDX
// 005b5acf: MOVD EAX,MM2
// 005b5ad2: IMUL dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 005b5ad8: ADD EAX,EBX
// 005b5ada: ADC EDX,ECX
// 005b5adc: SHRD EAX,EDX,0x10
// 005b5ae0: MOVD MM6,EAX
// 005b5ae3: NEG EAX
// 005b5ae5: MOV EDX,EAX
// 005b5ae7: XOR EAX,EAX
// 005b5ae9: MOVD EBX,MM4
// 005b5aec: MOVD ECX,MM6
// 005b5aef: CMP EBX,ECX
// 005b5af1: JLE 0x005b5af8
//   XREF to: 005b5af8 (CONDITIONAL_JUMP)
// 005b5af3: OR EAX,0x80000001
// 005b5af8: CMP EBX,EDX
//   Label: LAB_005b5af8
// 005b5afa: JGE 0x005b5b01
//   XREF to: 005b5b01 (CONDITIONAL_JUMP)
// 005b5afc: OR EAX,0x80000002
// 005b5b01: MOVD EBX,MM5
//   Label: LAB_005b5b01
// 005b5b04: CMP EBX,ECX
// 005b5b06: JLE 0x005b5b0d
//   XREF to: 005b5b0d (CONDITIONAL_JUMP)
// 005b5b08: OR EAX,0x80000004
// 005b5b0d: CMP EBX,EDX
//   Label: LAB_005b5b0d
// 005b5b0f: JGE 0x005b5b16
//   XREF to: 005b5b16 (CONDITIONAL_JUMP)
// 005b5b11: OR EAX,0x80000008
// 005b5b16: CMP ECX,0x0
//   Label: LAB_005b5b16
// 005b5b19: JG 0x005b5b20
//   XREF to: 005b5b20 (CONDITIONAL_JUMP)
// 005b5b1b: OR EAX,0x80000010
// 005b5b20: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_005b5b20
//   XREF to: Stack[0x4] (READ)
// 005b5b24: MOVD dword ptr [EBX],MM4
// 005b5b27: MOVD dword ptr [EBX + 0x4],MM5
// 005b5b2b: MOVD dword ptr [EBX + 0x8],MM6
// 005b5b2f: TEST EAX,0xffffffff
// 005b5b34: JNZ 0x005b5b6d
//   XREF to: 005b5b6d (CONDITIONAL_JUMP)
// 005b5b36: MOV EAX,0x7fffffff
// 005b5b3b: XOR EDX,EDX
// 005b5b3d: IDIV ECX
// 005b5b3f: MOV dword ptr [EBX + 0xc],EAX
// 005b5b42: MOVD EAX,MM4
// 005b5b45: IMUL dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 005b5b4b: IDIV ECX
// 005b5b4d: ADD EAX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 005b5b53: MOV dword ptr [EBX + 0x10],EAX
// 005b5b56: MOVD EAX,MM5
// 005b5b59: IMUL dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 005b5b5f: IDIV ECX
// 005b5b61: ADD EAX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 005b5b67: MOV dword ptr [EBX + 0x14],EAX
// 005b5b6a: EMMS
// 005b5b6c: RET
// 005b5b6d: MOV dword ptr [EBX + 0x10],EAX
//   Label: LAB_005b5b6d
// 005b5b70: EMMS
// 005b5b72: RET
// 005b5b73: PUSH ESI
//   Label: LAB_005b5b73
// 005b5b74: PUSH EDI
// 005b5b75: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b5b79: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b5b7d: MOV EAX,dword ptr [ESI]
// 005b5b7f: MOV EBX,dword ptr [ESI + 0x4]
// 005b5b82: MOV ECX,dword ptr [ESI + 0x8]
// 005b5b85: SUB EAX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 005b5b8b: SUB EBX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 005b5b91: SUB ECX,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 005b5b97: MOV [0x00682668],EAX
//   XREF to: 00682668 (WRITE)
// 005b5b9c: MOV dword ptr [0x0068266c],EBX
//   XREF to: 0068266c (WRITE)
// 005b5ba2: MOV dword ptr [0x00682670],ECX
//   XREF to: 00682670 (WRITE)
// 005b5ba8: IMUL dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 005b5bae: MOV EBX,EAX
// 005b5bb0: MOV ECX,EDX
// 005b5bb2: MOV EAX,[0x0068266c]
//   XREF to: 0068266c (READ)
// 005b5bb7: IMUL dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 005b5bbd: ADD EBX,EAX
// 005b5bbf: ADC ECX,EDX
// 005b5bc1: MOV EAX,[0x00682670]
//   XREF to: 00682670 (READ)
// 005b5bc6: IMUL dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 005b5bcc: ADD EAX,EBX
// 005b5bce: ADC EDX,ECX
// 005b5bd0: SHRD EAX,EDX,0x10
// 005b5bd4: MOV [0x00682678],EAX
//   XREF to: 00682678 (WRITE)
// 005b5bd9: MOV EAX,[0x00682668]
//   XREF to: 00682668 (READ)
// 005b5bde: IMUL dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 005b5be4: MOV EBX,EAX
// 005b5be6: MOV ECX,EDX
// 005b5be8: MOV EAX,[0x0068266c]
//   XREF to: 0068266c (READ)
// 005b5bed: IMUL dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 005b5bf3: ADD EBX,EAX
// 005b5bf5: ADC ECX,EDX
// 005b5bf7: MOV EAX,[0x00682670]
//   XREF to: 00682670 (READ)
// 005b5bfc: IMUL dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 005b5c02: ADD EAX,EBX
// 005b5c04: ADC EDX,ECX
// 005b5c06: SHRD EAX,EDX,0x10
// 005b5c0a: MOV [0x0068267c],EAX
//   XREF to: 0068267c (WRITE)
// 005b5c0f: MOV EAX,[0x00682668]
//   XREF to: 00682668 (READ)
// 005b5c14: IMUL dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 005b5c1a: MOV EBX,EAX
// 005b5c1c: MOV ECX,EDX
// 005b5c1e: MOV EAX,[0x0068266c]
//   XREF to: 0068266c (READ)
// 005b5c23: IMUL dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 005b5c29: ADD EBX,EAX
// 005b5c2b: ADC ECX,EDX
// 005b5c2d: MOV EAX,[0x00682670]
//   XREF to: 00682670 (READ)
// 005b5c32: IMUL dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 005b5c38: ADD EAX,EBX
// 005b5c3a: ADC EDX,ECX
// 005b5c3c: SHRD EAX,EDX,0x10
// 005b5c40: MOV [0x00682680],EAX
//   XREF to: 00682680 (WRITE)
// 005b5c45: NEG EAX
// 005b5c47: MOV EDX,EAX
// 005b5c49: XOR EAX,EAX
// 005b5c4b: MOV EBX,dword ptr [0x00682678]
//   XREF to: 00682678 (READ)
// 005b5c51: MOV ECX,dword ptr [0x00682680]
//   XREF to: 00682680 (READ)
// 005b5c57: CMP EBX,ECX
// 005b5c59: JLE 0x005b5c60
//   XREF to: 005b5c60 (CONDITIONAL_JUMP)
// 005b5c5b: OR EAX,0x80000001
// 005b5c60: CMP EBX,EDX
//   Label: LAB_005b5c60
// 005b5c62: JGE 0x005b5c69
//   XREF to: 005b5c69 (CONDITIONAL_JUMP)
// 005b5c64: OR EAX,0x80000002
// 005b5c69: MOV EBX,dword ptr [0x0068267c]
//   Label: LAB_005b5c69
//   XREF to: 0068267c (READ)
// 005b5c6f: CMP EBX,ECX
// 005b5c71: JLE 0x005b5c78
//   XREF to: 005b5c78 (CONDITIONAL_JUMP)
// 005b5c73: OR EAX,0x80000004
// 005b5c78: CMP EBX,EDX
//   Label: LAB_005b5c78
// 005b5c7a: JGE 0x005b5c81
//   XREF to: 005b5c81 (CONDITIONAL_JUMP)
// 005b5c7c: OR EAX,0x80000008
// 005b5c81: CMP ECX,0x0
//   Label: LAB_005b5c81
// 005b5c84: JG 0x005b5c8b
//   XREF to: 005b5c8b (CONDITIONAL_JUMP)
// 005b5c86: OR EAX,0x80000010
// 005b5c8b: TEST EAX,0xffffffff
//   Label: LAB_005b5c8b
// 005b5c90: JNZ 0x005b5cda
//   XREF to: 005b5cda (CONDITIONAL_JUMP)
// 005b5c92: MOV EAX,[0x00682678]
//   XREF to: 00682678 (READ)
// 005b5c97: MOV dword ptr [EDI],EAX
// 005b5c99: MOV dword ptr [EDI + 0x4],EBX
// 005b5c9c: MOV dword ptr [EDI + 0x8],ECX
// 005b5c9f: MOV EAX,0x7fffffff
// 005b5ca4: XOR EDX,EDX
// 005b5ca6: IDIV ECX
// 005b5ca8: MOV dword ptr [EDI + 0xc],EAX
// 005b5cab: MOV EAX,[0x00682678]
//   XREF to: 00682678 (READ)
// 005b5cb0: IMUL dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 005b5cb6: IDIV ECX
// 005b5cb8: ADD EAX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 005b5cbe: MOV dword ptr [EDI + 0x10],EAX
// 005b5cc1: MOV EAX,[0x0068267c]
//   XREF to: 0068267c (READ)
// 005b5cc6: IMUL dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 005b5ccc: IDIV ECX
// 005b5cce: ADD EAX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 005b5cd4: MOV dword ptr [EDI + 0x14],EAX
// 005b5cd7: POP EDI
// 005b5cd8: POP ESI
// 005b5cd9: RET
// 005b5cda: MOV EDX,dword ptr [0x00682678]
//   Label: LAB_005b5cda
//   XREF to: 00682678 (READ)
// 005b5ce0: MOV dword ptr [EDI],EDX
// 005b5ce2: MOV dword ptr [EDI + 0x4],EBX
// 005b5ce5: MOV dword ptr [EDI + 0x8],ECX
// 005b5ce8: MOV dword ptr [EDI + 0x10],EAX
// 005b5ceb: POP EDI
// 005b5cec: POP ESI
// 005b5ced: RET
