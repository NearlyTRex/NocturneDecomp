// Name: core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
// Address: 0056ddb0
// Address Range: [[0056ddb0, 0056e10e]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, int skip_lighting_calculation)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_00570cd0 (00570cd0) at 00570d1e [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 (0056e110) at 0056e12d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 (0056eac0) at 0056f0a6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00645e2b
//   TerminatedCString s_CDemonSet_lightVertexCol_00645e3b
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   float g_PerspectiveReciprocal
//   int g_CameraOriginX
//   int g_CameraOriginZ
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CDemonCameraInstance.corona_blend_factor
//   int[65536] g_IntensityToValueLookupTable
//   undefined4 DAT_032bd778
//   int g_ColorCorrectionEnabled
//   int g_ColorCorrectionLightMultiplier
//   int g_ColorCorrectionColorMultiplier
//   int g_ColorCorrectionFogMultiplier
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
          (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,
          int skip_lighting_calculation)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_EBP;
  uint uVar10;
  int in_stack_00000018;
  uint local_14;
  
  if (this_ptr->rendering_mode != 0) {
    if (surface_normal == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 0xba3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::lightVertexColor - Quick light mode with no normal");
    }
    lVar1 = (longlong)(this_ptr->light_direction).x * (longlong)surface_normal->x;
    lVar2 = (longlong)(this_ptr->light_direction).y * (longlong)surface_normal->y;
    lVar3 = (longlong)(this_ptr->light_direction).z * (longlong)surface_normal->z;
    iVar8 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    iVar9 = -iVar8;
    if (0 < iVar8) {
      iVar9 = 0;
    }
    iVar9 = iVar9 + this_ptr->ambient_base_quick;
    if (0xffff < iVar9) {
      iVar9 = 0xffff;
    }
    lVar1 = (longlong)this_ptr->light_scale_factor * (longlong)iVar9;
    g_RenderVertexBuffer[skip_lighting_calculation].light =
         (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)this_ptr->color_scale_factor * (longlong)iVar9;
    g_RenderVertexBuffer[skip_lighting_calculation].color =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)this_ptr->fog_scale_factor * (longlong)iVar9;
    g_RenderVertexBuffer[skip_lighting_calculation].fog =
         (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_RenderVertexBuffer[skip_lighting_calculation].w_recip = g_PerspectiveReciprocal;
    return;
  }
  if (skip_lighting_calculation == 0) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                      (this_ptr,world_position,surface_normal);
    unaff_EBP = g_CDemonCameraInstance.corona_blend_factor;
    if ((0 < g_CDemonCameraInstance.corona_blend_factor) && (surface_normal != (CVector3i *)0x0)) {
      iVar9 = g_CDemonCameraInstance.corona_blend_factor;
      if (0x1000 < g_CDemonCameraInstance.corona_blend_factor) {
        iVar9 = 0x1000;
      }
      if (g_CameraOriginX < 0) {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->x;
        uVar4 = -((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      else {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->x;
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      }
      if (g_CameraOriginZ < 0) {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->z;
        iVar8 = (iVar8 + uVar4) - ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
      else {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->z;
        iVar8 = iVar8 + uVar4 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
    }
  }
  else {
    iVar8 = 0xffff;
  }
  if (g_ColorCorrectionEnabled < 1) {
    iVar8 = iVar8 + unaff_EBP;
    lVar1 = (longlong)iVar8 * (longlong)this_ptr->light_scale_factor;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar8 * (longlong)this_ptr->color_scale_factor;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar9 = this_ptr->fog_scale_factor;
  }
  else {
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)g_ColorCorrectionLightMultiplier) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)g_ColorCorrectionLightMultiplier) >>
                       0x20) << 0x10) + unaff_EBP) * (longlong)this_ptr->light_scale_factor;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)g_ColorCorrectionColorMultiplier) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)g_ColorCorrectionColorMultiplier) >>
                       0x20) << 0x10) + unaff_EBP) * (longlong)this_ptr->color_scale_factor;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar9 = this_ptr->fog_scale_factor;
    iVar8 = ((uint)((longlong)iVar8 * (longlong)g_ColorCorrectionFogMultiplier) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)g_ColorCorrectionFogMultiplier) >> 0x20)
            << 0x10) + unaff_EBP;
  }
  uVar5 = (uint)((longlong)iVar8 * (longlong)iVar9) >> 0x10 |
          (int)((ulonglong)((longlong)iVar8 * (longlong)iVar9) >> 0x20) << 0x10;
  if ((this_ptr->rendering_flags_ptr != (int *)0x0) && (in_stack_00000018 == 0)) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                      (this_ptr,surface_normal,(CVector3i *)0x0);
    uVar10 = unaff_EBP + iVar8;
    if (0 < (int)uVar10) {
      uVar6 = local_14 ^ (int)local_14 >> 0x1f;
      uVar7 = uVar6 / uVar10;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      local_14 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar10 << 0x20) / (ulonglong)uVar10) >> 0x10
                 | uVar7 << 0x10) ^ (int)local_14 >> 0x1f;
      uVar6 = uVar4 ^ (int)uVar4 >> 0x1f;
      uVar7 = uVar6 / uVar10;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar4 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar10 << 0x20) / (ulonglong)uVar10) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar4 >> 0x1f;
      uVar6 = uVar5 ^ (int)uVar5 >> 0x1f;
      uVar7 = uVar6 / uVar10;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar5 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar10 << 0x20) / (ulonglong)uVar10) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar5 >> 0x1f;
    }
  }
  if (0xffff < (int)local_14) {
    local_14 = 0xffff;
  }
  if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  g_RenderVertexBuffer[skip_lighting_calculation].light =
       (float)g_IntensityToValueLookupTable[local_14];
  g_RenderVertexBuffer[skip_lighting_calculation].color = g_IntensityToValueLookupTable[uVar4];
  g_RenderVertexBuffer[skip_lighting_calculation].fog = (float)g_IntensityToValueLookupTable[uVar5];
  return;
}


// Assembly code:
// 0056ddb0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
// 0056ddb1: PUSH ESI
// 0056ddb2: PUSH EDI
// 0056ddb3: PUSH EBP
// 0056ddb4: SUB ESP,0x24
// 0056ddb7: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0056ddbb: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0056ddbf: MOV EDX,dword ptr [EBX + 0x15ae70]
// 0056ddc5: TEST EDX,EDX
// 0056ddc7: JZ 0x0056de9c
//   XREF to: 0056de9c (CONDITIONAL_JUMP)
// 0056ddcd: TEST EDI,EDI
// 0056ddcf: JNZ 0x0056ddf4
//   XREF to: 0056ddf4 (CONDITIONAL_JUMP)
// 0056ddd1: MOV ESI,0x645e2b
//   XREF to: 00645e2b (DATA)
// 0056ddd6: MOV EBP,0xba3
// 0056dddb: PUSH 0x645e3b
//   XREF to: 00645e3b (DATA)
// 0056dde0: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0056dde6: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0056ddec: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056ddf1: ADD ESP,0x4
// 0056ddf4: MOV EAX,dword ptr [EBX + 0x15ae74]
//   Label: LAB_0056ddf4
// 0056ddfa: MOV EDX,dword ptr [EDI]
// 0056ddfc: IMUL EDX
// 0056ddfe: SHRD EAX,EDX,0x10
// 0056de02: MOV ECX,EAX
// 0056de04: MOV EDX,dword ptr [EDI + 0x4]
// 0056de07: MOV EAX,dword ptr [EBX + 0x15ae78]
// 0056de0d: IMUL EDX
// 0056de0f: SHRD EAX,EDX,0x10
// 0056de13: MOV EDX,dword ptr [EDI + 0x8]
// 0056de16: ADD ECX,EAX
// 0056de18: MOV EAX,dword ptr [EBX + 0x15ae7c]
// 0056de1e: IMUL EDX
// 0056de20: SHRD EAX,EDX,0x10
// 0056de24: ADD ECX,EAX
// 0056de26: NEG ECX
// 0056de28: TEST ECX,ECX
// 0056de2a: JL 0x0056de98
//   XREF to: 0056de98 (CONDITIONAL_JUMP)
// 0056de2c: ADD ECX,dword ptr [EBX + 0x15ae80]
//   Label: LAB_0056de2c
// 0056de32: CMP ECX,0xffff
// 0056de38: JLE 0x0056de3f
//   XREF to: 0056de3f (CONDITIONAL_JUMP)
// 0056de3a: MOV ECX,0xffff
// 0056de3f: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0056de3f
//   XREF to: Stack[0x10] (READ)
// 0056de43: LEA ESI,[EAX*0x4 + 0x0]
// 0056de4a: SUB ESI,EAX
// 0056de4c: MOV EDX,ECX
// 0056de4e: SHL ESI,0x4
// 0056de51: MOV EAX,dword ptr [EBX + 0x15ae88]
// 0056de57: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 0056de5d: IMUL EDX
// 0056de5f: SHRD EAX,EDX,0x10
// 0056de63: MOV dword ptr [ESI + 0x20],EAX
//   XREF to: 00688034 (DATA)
// 0056de66: MOV EDX,ECX
// 0056de68: MOV EAX,dword ptr [EBX + 0x15ae8c]
// 0056de6e: IMUL EDX
// 0056de70: SHRD EAX,EDX,0x10
// 0056de74: MOV dword ptr [ESI + 0x24],EAX
//   XREF to: 00688038 (DATA)
// 0056de77: MOV EDX,ECX
// 0056de79: MOV EAX,dword ptr [EBX + 0x15ae90]
// 0056de7f: IMUL EDX
// 0056de81: SHRD EAX,EDX,0x10
// 0056de85: MOV dword ptr [ESI + 0x28],EAX
//   XREF to: 0068803c (DATA)
// 0056de88: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0056de8d: MOV dword ptr [ESI + 0x2c],EAX
//   XREF to: 00688040 (DATA)
// 0056de90: ADD ESP,0x24
// 0056de93: POP EBP
// 0056de94: POP EDI
// 0056de95: POP ESI
// 0056de96: POP EBX
// 0056de97: RET
// 0056de98: XOR ECX,ECX
//   Label: LAB_0056de98
// 0056de9a: JMP 0x0056de2c
//   XREF to: 0056de2c (UNCONDITIONAL_JUMP)
// 0056de9c: CMP dword ptr [ESP + 0x48],0x0
//   Label: LAB_0056de9c
//   XREF to: Stack[0x14] (READ)
// 0056dea1: JZ 0x0056e03e
//   XREF to: 0056e03e (CONDITIONAL_JUMP)
// 0056dea7: MOV ECX,0xffff
// 0056deac: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0056deb0: CMP dword ptr [0x032c1940],0x0
//   Label: LAB_0056deb0
//   XREF to: 032c1940 (READ)
// 0056deb7: JLE 0x0056e0dc
//   XREF to: 0056e0dc (CONDITIONAL_JUMP)
// 0056debd: MOV EDX,dword ptr [0x032c1cc0]
//   XREF to: 032c1cc0 (READ)
// 0056dec3: MOV EAX,ECX
// 0056dec5: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0056dec9: IMUL EDX
// 0056decb: SHRD EAX,EDX,0x10
// 0056decf: MOV EDX,dword ptr [EBX + 0x15ae88]
// 0056ded5: ADD EAX,EBP
// 0056ded7: IMUL EDX
// 0056ded9: SHRD EAX,EDX,0x10
// 0056dedd: MOV EDX,dword ptr [0x032c1cc4]
//   XREF to: 032c1cc4 (READ)
// 0056dee3: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056dee7: MOV EAX,ECX
// 0056dee9: IMUL EDX
// 0056deeb: SHRD EAX,EDX,0x10
// 0056deef: MOV EDX,dword ptr [EBX + 0x15ae8c]
// 0056def5: ADD EAX,EBP
// 0056def7: IMUL EDX
// 0056def9: SHRD EAX,EDX,0x10
// 0056defd: MOV EDX,dword ptr [0x032c1cc8]
//   XREF to: 032c1cc8 (READ)
// 0056df03: MOV EDI,EAX
// 0056df05: MOV EAX,ECX
// 0056df07: IMUL EDX
// 0056df09: SHRD EAX,EDX,0x10
// 0056df0d: MOV EDX,dword ptr [EBX + 0x15ae90]
// 0056df13: ADD EAX,EBP
// 0056df15: IMUL EDX
//   Label: LAB_0056df15
// 0056df17: SHRD EAX,EDX,0x10
// 0056df1b: MOV EBP,EAX
// 0056df1d: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 0056df21: LEA ECX,[EAX*0x4 + 0x0]
// 0056df28: SUB ECX,EAX
// 0056df2a: MOV EAX,0x688014
//   XREF to: 00688014 (DATA)
// 0056df2f: SHL ECX,0x4
// 0056df32: ADD EAX,ECX
// 0056df34: MOV ESI,dword ptr [EBX + 0x15f6e0]
// 0056df3a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056df3e: TEST ESI,ESI
// 0056df40: JZ 0x0056dfe4
//   XREF to: 0056dfe4 (CONDITIONAL_JUMP)
// 0056df46: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 0056df4a: TEST EAX,EAX
// 0056df4c: JNZ 0x0056dfe4
//   XREF to: 0056dfe4 (CONDITIONAL_JUMP)
// 0056df52: PUSH EAX
// 0056df53: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0056df57: PUSH EDX
// 0056df58: PUSH EBX
// 0056df59: CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
//   XREF to: 0056db80 (UNCONDITIONAL_CALL)
// 0056df5e: ADD ESP,0xc
// 0056df61: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0056df65: ADD ESI,EAX
// 0056df67: TEST ESI,ESI
// 0056df69: JLE 0x0056dfe4
//   XREF to: 0056dfe4 (CONDITIONAL_JUMP)
// 0056df6b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0056df6f: MOV EBX,ESI
// 0056df71: CDQ
// 0056df72: MOV ECX,EDX
// 0056df74: XOR EAX,EDX
// 0056df76: XOR EDX,EDX
// 0056df78: DIV EBX
// 0056df7a: CMP EAX,0x7fff
// 0056df7f: JC 0x0056df86
//   XREF to: 0056df86 (CONDITIONAL_JUMP)
// 0056df81: MOV EAX,0x7fff
// 0056df86: PUSH EAX
//   Label: LAB_0056df86
// 0056df87: XOR EAX,EAX
// 0056df89: DIV EBX
// 0056df8b: POP EDX
// 0056df8c: SHRD EAX,EDX,0x10
// 0056df90: XOR EAX,ECX
// 0056df92: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056df96: MOV EBX,ESI
// 0056df98: MOV EAX,EDI
// 0056df9a: CDQ
// 0056df9b: MOV ECX,EDX
// 0056df9d: XOR EAX,EDX
// 0056df9f: XOR EDX,EDX
// 0056dfa1: DIV EBX
// 0056dfa3: CMP EAX,0x7fff
// 0056dfa8: JC 0x0056dfaf
//   XREF to: 0056dfaf (CONDITIONAL_JUMP)
// 0056dfaa: MOV EAX,0x7fff
// 0056dfaf: PUSH EAX
//   Label: LAB_0056dfaf
// 0056dfb0: XOR EAX,EAX
// 0056dfb2: DIV EBX
// 0056dfb4: POP EDX
// 0056dfb5: SHRD EAX,EDX,0x10
// 0056dfb9: XOR EAX,ECX
// 0056dfbb: MOV EDI,EAX
// 0056dfbd: MOV EBX,ESI
// 0056dfbf: MOV EAX,EBP
// 0056dfc1: CDQ
// 0056dfc2: MOV ECX,EDX
// 0056dfc4: XOR EAX,EDX
// 0056dfc6: XOR EDX,EDX
// 0056dfc8: DIV EBX
// 0056dfca: CMP EAX,0x7fff
// 0056dfcf: JC 0x0056dfd6
//   XREF to: 0056dfd6 (CONDITIONAL_JUMP)
// 0056dfd1: MOV EAX,0x7fff
// 0056dfd6: PUSH EAX
//   Label: LAB_0056dfd6
// 0056dfd7: XOR EAX,EAX
// 0056dfd9: DIV EBX
// 0056dfdb: POP EDX
// 0056dfdc: SHRD EAX,EDX,0x10
// 0056dfe0: XOR EAX,ECX
// 0056dfe2: MOV EBP,EAX
// 0056dfe4: CMP dword ptr [ESP + 0x1c],0xffff
//   Label: LAB_0056dfe4
//   XREF to: Stack[-0x18] (READ)
// 0056dfec: JLE 0x0056dff6
//   XREF to: 0056dff6 (CONDITIONAL_JUMP)
// 0056dfee: MOV dword ptr [ESP + 0x1c],0xffff
//   XREF to: Stack[-0x18] (WRITE)
// 0056dff6: CMP EDI,0xffff
//   Label: LAB_0056dff6
// 0056dffc: JLE 0x0056e003
//   XREF to: 0056e003 (CONDITIONAL_JUMP)
// 0056dffe: MOV EDI,0xffff
// 0056e003: CMP EBP,0xffff
//   Label: LAB_0056e003
// 0056e009: JLE 0x0056e010
//   XREF to: 0056e010 (CONDITIONAL_JUMP)
// 0056e00b: MOV EBP,0xffff
// 0056e010: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0056e010
//   XREF to: Stack[-0x18] (READ)
// 0056e014: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0056e018: MOV EAX,dword ptr [EAX*0x4 + 0x327d77c]
//   XREF to: 0327d77c (DATA)
//   XREF to: 032bd778 (READ)
// 0056e01f: MOV dword ptr [EDX + 0x20],EAX
//   XREF to: 00688034 (DATA)
// 0056e022: MOV EAX,dword ptr [EDI*0x4 + 0x327d77c]
//   XREF to: 0327d77c (DATA)
//   XREF to: 032bd778 (READ)
// 0056e029: MOV dword ptr [EDX + 0x24],EAX
//   XREF to: 00688038 (DATA)
// 0056e02c: MOV EAX,dword ptr [EBP*0x4 + 0x327d77c]
//   XREF to: 0327d77c (DATA)
//   XREF to: 032bd778 (READ)
// 0056e033: MOV dword ptr [EDX + 0x28],EAX
//   XREF to: 0068803c (DATA)
// 0056e036: ADD ESP,0x24
// 0056e039: POP EBP
// 0056e03a: POP EDI
// 0056e03b: POP ESI
// 0056e03c: POP EBX
// 0056e03d: RET
// 0056e03e: PUSH EDI
//   Label: LAB_0056e03e
// 0056e03f: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0056e043: PUSH ESI
// 0056e044: PUSH EBX
// 0056e045: CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
//   XREF to: 0056db80 (UNCONDITIONAL_CALL)
// 0056e04a: MOV EBP,dword ptr [0x03276acc]
//   XREF to: 03276acc (READ)
// 0056e050: ADD ESP,0xc
// 0056e053: MOV ECX,EAX
// 0056e055: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0056e059: TEST EBP,EBP
// 0056e05b: JLE 0x0056deb0
//   XREF to: 0056deb0 (CONDITIONAL_JUMP)
// 0056e061: TEST EDI,EDI
// 0056e063: JZ 0x0056deb0
//   XREF to: 0056deb0 (CONDITIONAL_JUMP)
// 0056e069: MOV ESI,EBP
// 0056e06b: CMP EBP,0x1000
// 0056e071: JLE 0x0056e078
//   XREF to: 0056e078 (CONDITIONAL_JUMP)
// 0056e073: MOV ESI,0x1000
// 0056e078: CMP dword ptr [0x02d052c4],0x0
//   Label: LAB_0056e078
//   XREF to: 02d052c4 (READ)
// 0056e07f: JL 0x0056e0b2
//   XREF to: 0056e0b2 (CONDITIONAL_JUMP)
// 0056e081: MOV EAX,ESI
// 0056e083: MOV EDX,dword ptr [EDI]
// 0056e085: IMUL EDX
// 0056e087: SHRD EAX,EDX,0x10
// 0056e08b: ADD ECX,EAX
// 0056e08d: CMP dword ptr [0x02d052cc],0x0
//   Label: LAB_0056e08d
//   XREF to: 02d052cc (READ)
// 0056e094: JL 0x0056e0c0
//   XREF to: 0056e0c0 (CONDITIONAL_JUMP)
// 0056e096: MOV EAX,ESI
// 0056e098: MOV EDX,dword ptr [EDI + 0x8]
// 0056e09b: IMUL EDX
// 0056e09d: SHRD EAX,EDX,0x10
// 0056e0a1: ADD ECX,EAX
// 0056e0a3: TEST ECX,ECX
// 0056e0a5: JGE 0x0056deb0
//   XREF to: 0056deb0 (CONDITIONAL_JUMP)
// 0056e0ab: XOR ECX,ECX
// 0056e0ad: JMP 0x0056deb0
//   XREF to: 0056deb0 (UNCONDITIONAL_JUMP)
// 0056e0b2: MOV EAX,ESI
//   Label: LAB_0056e0b2
// 0056e0b4: MOV EDX,dword ptr [EDI]
// 0056e0b6: IMUL EDX
// 0056e0b8: SHRD EAX,EDX,0x10
// 0056e0bc: SUB ECX,EAX
// 0056e0be: JMP 0x0056e08d
//   XREF to: 0056e08d (UNCONDITIONAL_JUMP)
// 0056e0c0: MOV EAX,ESI
//   Label: LAB_0056e0c0
// 0056e0c2: MOV EDX,dword ptr [EDI + 0x8]
// 0056e0c5: IMUL EDX
// 0056e0c7: SHRD EAX,EDX,0x10
// 0056e0cb: SUB ECX,EAX
// 0056e0cd: TEST ECX,ECX
// 0056e0cf: JGE 0x0056deb0
//   XREF to: 0056deb0 (CONDITIONAL_JUMP)
// 0056e0d5: XOR ECX,ECX
// 0056e0d7: JMP 0x0056deb0
//   XREF to: 0056deb0 (UNCONDITIONAL_JUMP)
// 0056e0dc: ADD ECX,dword ptr [ESP + 0x20]
//   Label: LAB_0056e0dc
//   XREF to: Stack[-0x14] (READ)
// 0056e0e0: MOV EDX,dword ptr [EBX + 0x15ae88]
// 0056e0e6: MOV EAX,ECX
// 0056e0e8: IMUL EDX
// 0056e0ea: SHRD EAX,EDX,0x10
// 0056e0ee: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056e0f2: MOV EDX,dword ptr [EBX + 0x15ae8c]
// 0056e0f8: MOV EAX,ECX
// 0056e0fa: IMUL EDX
// 0056e0fc: SHRD EAX,EDX,0x10
// 0056e100: MOV EDI,EAX
// 0056e102: MOV EDX,dword ptr [EBX + 0x15ae90]
// 0056e108: MOV EAX,ECX
// 0056e10a: JMP 0x0056df15
//   XREF to: 0056df15 (UNCONDITIONAL_JUMP)
