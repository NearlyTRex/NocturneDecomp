// Name: core_water.cpp_CWater_render_FUN_005ea320
// Address: 005ea320
// Address Range: [[005ea320, 005ea80a]]
// Convention: __cdecl
// Signature: void core_water.cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c5f1 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a3d0 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b481 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00657227 = 3.14159265350000
//   double DOUBLE_0065722f = 0.5
//   double DOUBLE_00657237 = 2
//   double DOUBLE_0065723f = 0.25
//   float FLOAT_006652cc = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_006844f4
//   SMRGLTextureBasic[16] g_WaterTextures
//   SMRGLTextureBasic* g_WaterTexturesEnd = 00000000
//   CDemonRenderer g_CDemonRendererInstance
//   int g_GlobalDeltaTimeInt
//   int g_UseExternalRenderer
//   float g_PerspectiveReciprocal
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03f875f0
//   undefined4 DAT_03f875f4
//   undefined4 DAT_03f875f8
//   int g_WaterAnimationTimer
//   int g_WaterCurrentFrame
//   int g_VisibleWaterTileCount
//   int[4096] g_VisibleWaterTilesX
//   undefined4 DAT_03f8760c
//   int[4096] g_VisibleWaterTilesY
//   undefined4 DAT_03f8b60c
//   undefined4 DAT_03f8f62c
//   float g_WaterAnimationPhase
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056e3e0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_render_FUN_005ea320(CWater *this_ptr,int render_mode)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  int in_stack_00000010;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CDemonSet *in_stack_ffffffa4;
  float fVar7;
  float fVar8;
  float local_48;
  CVector3i local_44;
  CVector3i local_30;
  float fStack_24;
  CDemonSet *pCStack_20;
  CVector3i local_1c;
  
  if (ABS(this_ptr->water_level_y) != 0.0) {
    g_WaterAnimationTimer = g_WaterAnimationTimer + g_GlobalDeltaTimeInt;
    if (DAT_006844f4 < g_WaterAnimationTimer) {
      g_WaterAnimationTimer = g_WaterAnimationTimer - DAT_006844f4;
      g_WaterCurrentFrame = g_WaterCurrentFrame + 1;
      if (0xf < g_WaterCurrentFrame) {
        g_WaterCurrentFrame = 0;
      }
    }
    _DAT_03f8f62c = (int)(((longlong)g_WaterAnimationTimer * 0xffff) / (longlong)DAT_006844f4);
    if (_DAT_03f8f62c < 0x10000) {
      if (_DAT_03f8f62c < 0) {
        _DAT_03f8f62c = 0;
      }
    }
    else {
      _DAT_03f8f62c = 0xffff;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,g_WaterTextures + g_WaterCurrentFrame);
    g_PerspectiveReciprocal = 0.0;
    g_WaterAnimationPhase =
         g_CGamePtr->delta_time_float * (float)DOUBLE_00657227 * (float)DOUBLE_0065722f *
         (float)DOUBLE_00657237 + g_WaterAnimationPhase;
    local_1c.y = 0;
    if (0 < g_VisibleWaterTileCount) {
      local_1c.z = 0;
      do {
        iVar1 = *(int *)((int)g_VisibleWaterTilesX + local_1c.z);
        fVar3 = (float)iVar1 * this_ptr->tile_size + _DAT_03f875f0;
        fVar4 = this_ptr->water_level_y + _DAT_03f875f4;
        fVar5 = (float)*(int *)((int)g_VisibleWaterTilesY + local_1c.z) * this_ptr->tile_size +
                _DAT_03f875f8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&stack0xffffff98);
        fVar6 = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)(int)fVar3 * (float10)DOUBLE_00657227 *
                                (float10)DOUBLE_0065722f + (float10)iVar1 * (float10)DOUBLE_00657227
                                + (float10)g_WaterAnimationPhase);
          fVar6 = (float)(fVar2 * (float10)DOUBLE_0065723f);
        }
        fVar3 = (float)(int)ROUND(FLOAT_006652cc * 0.0);
        fVar7 = (float)(int)ROUND(fVar6 * FLOAT_006652cc);
        fVar8 = (float)(int)ROUND(FLOAT_006652cc * 0.0);
        local_30.z = (int)fVar4;
        fStack_24 = fVar5;
        pCStack_20 = in_stack_ffffffa4;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0xffffffa8);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)(int)fVar6 * (float10)DOUBLE_00657227 *
                                (float10)DOUBLE_0065722f +
                                (float10)(iVar1 + 1) * (float10)DOUBLE_00657227 +
                                (float10)g_WaterAnimationPhase);
          fVar3 = (float)(fVar2 * (float10)DOUBLE_0065723f);
        }
        local_44.x = (int)ROUND(this_ptr->tile_size * FLOAT_006652cc);
        local_44.y = (int)ROUND(fVar3 * FLOAT_006652cc);
        local_44.z = (int)ROUND(fVar7 * FLOAT_006652cc);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_44);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)((int)fVar3 + 1) * (float10)DOUBLE_00657227 *
                                (float10)DOUBLE_0065722f +
                                (float10)(iVar1 + 1) * (float10)DOUBLE_00657227 +
                                (float10)g_WaterAnimationPhase);
          fVar8 = (float)(fVar2 * (float10)DOUBLE_0065723f);
        }
        local_30.x = (int)ROUND(fVar7 * FLOAT_006652cc);
        local_30.y = (int)ROUND(fVar8 * FLOAT_006652cc);
        local_30.z = (int)ROUND(this_ptr->tile_size * FLOAT_006652cc);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_30);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)((int)fVar8 + 1) * (float10)DOUBLE_00657227 *
                                (float10)DOUBLE_0065722f + (float10)iVar1 * (float10)DOUBLE_00657227
                                + (float10)g_WaterAnimationPhase);
          local_48 = (float)(fVar2 * (float10)DOUBLE_0065723f);
        }
        local_1c.x = (int)ROUND(FLOAT_006652cc * 0.0);
        local_1c.y = (int)ROUND(local_48 * FLOAT_006652cc);
        local_1c.z = (int)ROUND((float)local_44.x * FLOAT_006652cc);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_1c);
        in_stack_ffffffa4 = g_CDemonSetPtr;
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled == 0) {
          if (g_UseExternalRenderer == 0) {
            if (render_mode == 0) {
              engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                      (g_CDemonRendererPtr,1);
            engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xa000);
          engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
        }
        in_stack_00000010 = in_stack_00000010 + 1;
      } while (in_stack_00000010 < g_VisibleWaterTileCount);
    }
  }
  return;
}


// Assembly code:
// 005ea320: PUSH EBX
//   Label: core_water.cpp_CWater_render_FUN_005ea320
// 005ea321: PUSH ESI
// 005ea322: PUSH EDI
// 005ea323: PUSH EBP
// 005ea324: MOV EBP,ESP
// 005ea326: SUB ESP,0x60
// 005ea329: AND ESP,0xfffffff8
// 005ea32c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ea32f: TEST dword ptr [ESI + 0x4],0x7fffffff
// 005ea336: JZ 0x005ea791
//   XREF to: 005ea791 (CONDITIONAL_JUMP)
// 005ea33c: MOV ECX,dword ptr [0x03f875fc]
//   XREF to: 03f875fc (READ)
// 005ea342: ADD ECX,dword ptr [0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 005ea348: MOV EBX,dword ptr [0x006844f4]
//   XREF to: 006844f4 (READ)
// 005ea34e: MOV dword ptr [0x03f875fc],ECX
//   XREF to: 03f875fc (WRITE)
// 005ea354: CMP ECX,EBX
// 005ea356: JLE 0x005ea37a
//   XREF to: 005ea37a (CONDITIONAL_JUMP)
// 005ea358: MOV EDI,ECX
// 005ea35a: MOV EAX,[0x03f87600]
//   XREF to: 03f87600 (READ)
// 005ea35f: SUB EDI,EBX
// 005ea361: INC EAX
// 005ea362: MOV dword ptr [0x03f875fc],EDI
//   XREF to: 03f875fc (WRITE)
// 005ea368: MOV [0x03f87600],EAX
//   XREF to: 03f87600 (WRITE)
// 005ea36d: CMP EAX,0x10
// 005ea370: JL 0x005ea37a
//   XREF to: 005ea37a (CONDITIONAL_JUMP)
// 005ea372: XOR ECX,ECX
// 005ea374: MOV dword ptr [0x03f87600],ECX
//   XREF to: 03f87600 (WRITE)
// 005ea37a: MOV EDX,0xffff
//   Label: LAB_005ea37a
// 005ea37f: MOV EBX,dword ptr [0x006844f4]
//   XREF to: 006844f4 (READ)
// 005ea385: MOV EAX,[0x03f875fc]
//   XREF to: 03f875fc (READ)
// 005ea38a: IMUL EDX
// 005ea38c: IDIV EBX
// 005ea38e: MOV [0x03f8f62c],EAX
//   XREF to: 03f8f62c (WRITE)
// 005ea393: CMP EAX,0xffff
// 005ea398: JLE 0x005ea798
//   XREF to: 005ea798 (CONDITIONAL_JUMP)
// 005ea39e: MOV dword ptr [0x03f8f62c],0xffff
//   XREF to: 03f8f62c (WRITE)
// 005ea3a8: MOV EDX,dword ptr [0x03f87600]
//   Label: LAB_005ea3a8
//   XREF to: 03f87600 (READ)
// 005ea3ae: LEA EAX,[EDX*0x4 + 0x0]
// 005ea3b5: SUB EAX,EDX
// 005ea3b7: SHL EAX,0x3
// 005ea3ba: ADD EAX,0x6844f8
//   XREF to: 006844f8 (DATA)
// 005ea3bf: PUSH EAX
//   XREF to: 006844f8 (DATA)
// 005ea3c0: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea3c5: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005ea3c6: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005ea3cb: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005ea3d0: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005ea3d6: FMUL double ptr [0x00657227]
//   XREF to: 00657227 (READ)
// 005ea3dc: FMUL double ptr [0x0065722f]
//   XREF to: 0065722f (READ)
// 005ea3e2: FMUL double ptr [0x00657237]
//   XREF to: 00657237 (READ)
// 005ea3e8: MOV EBX,dword ptr [0x03f87604]
//   XREF to: 03f87604 (READ)
// 005ea3ee: XOR EDX,EDX
// 005ea3f0: ADD ESP,0x8
// 005ea3f3: MOV dword ptr [0x02d051f4],EDX
//   XREF to: 02d051f4 (WRITE)
// 005ea3f9: FLD float ptr [0x03f8f630]
//   XREF to: 03f8f630 (READ)
// 005ea3ff: FXCH
// 005ea401: FADD ST0,ST1
// 005ea403: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ea407: FSTP ST1
// 005ea409: FSTP float ptr [0x03f8f630]
//   XREF to: 03f8f630 (WRITE)
// 005ea40f: TEST EBX,EBX
// 005ea411: JLE 0x005ea791
//   XREF to: 005ea791 (CONDITIONAL_JUMP)
// 005ea417: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005ea41b: MOV EDI,dword ptr [ESP + 0x58]
//   Label: LAB_005ea41b
//   XREF to: Stack[-0x18] (READ)
// 005ea41f: MOV EDI,dword ptr [EDI + 0x3f87608]
//   XREF to: 03f87608 (DATA)
//   XREF to: 03f8760c (DATA)
// 005ea425: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 005ea429: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005ea42d: MOV EAX,dword ptr [EAX + 0x3f8b608]
//   XREF to: 03f8b608 (DATA)
//   XREF to: 03f8b60c (DATA)
// 005ea433: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea437: FMUL float ptr [ESI + 0x8]
// 005ea43a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x70] (DATA)
// 005ea43d: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x6c] (WRITE)
// 005ea441: MOV EAX,dword ptr [ESI + 0x4]
// 005ea444: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005ea448: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005ea44b: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ea44f: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea453: FMUL float ptr [ESI + 0x8]
// 005ea456: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea45c: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 005ea460: FADD float ptr [0x03f875f0]
//   XREF to: 03f875f0 (READ)
// 005ea466: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 005ea46a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea46e: FADD float ptr [0x03f875f4]
//   XREF to: 03f875f4 (READ)
// 005ea474: PUSH EAX
// 005ea475: FXCH ST2
// 005ea477: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x64] (WRITE)
// 005ea47b: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x6c] (WRITE)
// 005ea47f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x68] (WRITE)
// 005ea483: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x64] (READ)
// 005ea487: FADD float ptr [0x03f875f8]
//   XREF to: 03f875f8 (READ)
// 005ea48d: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005ea48e: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x64] (WRITE)
// 005ea492: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005ea497: ADD ESP,0x8
// 005ea49a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 005ea49e: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005ea4a2: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 005ea4a6: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005ea4aa: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x64] (READ)
// 005ea4ae: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005ea4b2: XOR EAX,EAX
// 005ea4b4: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005ea4b8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005ea4bc: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005ea4c0: CMP dword ptr [ESI],0x0
// 005ea4c3: JZ 0x005ea4fc
//   XREF to: 005ea4fc (CONDITIONAL_JUMP)
// 005ea4c5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005ea4c8: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ea4cc: FLD double ptr [0x00657227]
//   XREF to: 00657227 (READ)
// 005ea4d2: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea4d6: FMUL ST1
// 005ea4d8: FMUL double ptr [0x0065722f]
//   XREF to: 0065722f (READ)
// 005ea4de: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005ea4e2: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea4e6: FMULP ST2
// 005ea4e8: FADDP
// 005ea4ea: FADD float ptr [0x03f8f630]
//   XREF to: 03f8f630 (READ)
// 005ea4f0: FSIN
// 005ea4f2: FMUL double ptr [0x0065723f]
//   XREF to: 0065723f (READ)
// 005ea4f8: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 005ea4fc: LEA EBX,[ESP + 0x10]
//   Label: LAB_005ea4fc
//   XREF to: Stack[-0x60] (DATA)
// 005ea500: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea504: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea50a: FLD float ptr [EAX]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea50c: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea512: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x60] (DATA)
// 005ea514: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x68] (READ)
// 005ea517: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea51d: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 005ea520: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x64] (READ)
// 005ea523: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea529: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 005ea52c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x60] (DATA)
// 005ea530: PUSH EAX
// 005ea531: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ea533: PUSH EAX
// 005ea534: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea539: ADD ESP,0x8
// 005ea53c: PUSH 0x0
// 005ea53e: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x30] (DATA)
// 005ea542: PUSH EAX
// 005ea543: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea547: PUSH EAX
// 005ea548: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ea54d: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005ea54e: CALL core_set.cpp_CDemonSet_FUN_0056e3e0
//   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)
// 005ea553: ADD ESP,0x10
// 005ea556: MOV EAX,dword ptr [ESI + 0x8]
// 005ea559: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005ea55d: CMP dword ptr [ESI],0x0
// 005ea560: JZ 0x005ea59c
//   XREF to: 005ea59c (CONDITIONAL_JUMP)
// 005ea562: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005ea565: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005ea569: FLD double ptr [0x00657227]
//   XREF to: 00657227 (READ)
// 005ea56f: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea573: FMUL ST1
// 005ea575: LEA EAX,[EDI + 0x1]
// 005ea578: FMUL double ptr [0x0065722f]
//   XREF to: 0065722f (READ)
// 005ea57e: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ea582: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea586: FMULP ST2
// 005ea588: FADDP
// 005ea58a: FADD float ptr [0x03f8f630]
//   XREF to: 03f8f630 (READ)
// 005ea590: FSIN
// 005ea592: FMUL double ptr [0x0065723f]
//   XREF to: 0065723f (READ)
// 005ea598: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 005ea59c: LEA EBX,[ESP + 0x1c]
//   Label: LAB_005ea59c
//   XREF to: Stack[-0x54] (DATA)
// 005ea5a0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea5a4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea5aa: FLD float ptr [EAX]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea5ac: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea5b2: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x54] (DATA)
// 005ea5b4: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x68] (READ)
// 005ea5b7: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea5bd: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x50] (WRITE)
// 005ea5c0: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x64] (READ)
// 005ea5c3: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea5c9: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x4c] (WRITE)
// 005ea5cc: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x54] (DATA)
// 005ea5d0: PUSH EAX
// 005ea5d1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ea5d3: ADD EAX,0x30
// 005ea5d6: PUSH EAX
// 005ea5d7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea5dc: ADD ESP,0x8
// 005ea5df: PUSH 0x1
// 005ea5e1: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x30] (DATA)
// 005ea5e5: PUSH EAX
// 005ea5e6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea5ea: PUSH EAX
// 005ea5eb: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ea5f1: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005ea5f2: CALL core_set.cpp_CDemonSet_FUN_0056e3e0
//   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)
// 005ea5f7: ADD ESP,0x10
// 005ea5fa: MOV EAX,dword ptr [ESI + 0x8]
// 005ea5fd: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005ea601: CMP dword ptr [ESI],0x0
// 005ea604: JZ 0x005ea641
//   XREF to: 005ea641 (CONDITIONAL_JUMP)
// 005ea606: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005ea609: INC EBX
// 005ea60a: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005ea60e: FLD double ptr [0x00657227]
//   XREF to: 00657227 (READ)
// 005ea614: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea618: FMUL ST1
// 005ea61a: LEA EAX,[EDI + 0x1]
// 005ea61d: FMUL double ptr [0x0065722f]
//   XREF to: 0065722f (READ)
// 005ea623: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ea627: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea62b: FMULP ST2
// 005ea62d: FADDP
// 005ea62f: FADD float ptr [0x03f8f630]
//   XREF to: 03f8f630 (READ)
// 005ea635: FSIN
// 005ea637: FMUL double ptr [0x0065723f]
//   XREF to: 0065723f (READ)
// 005ea63d: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 005ea641: LEA EBX,[ESP + 0x28]
//   Label: LAB_005ea641
//   XREF to: Stack[-0x48] (DATA)
// 005ea645: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea649: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea64f: FLD float ptr [EAX]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea651: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea657: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x48] (DATA)
// 005ea659: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x68] (READ)
// 005ea65c: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea662: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 005ea665: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x64] (READ)
// 005ea668: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea66e: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 005ea671: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x48] (DATA)
// 005ea675: PUSH EAX
// 005ea676: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ea678: ADD EAX,0x60
// 005ea67b: PUSH EAX
// 005ea67c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea681: ADD ESP,0x8
// 005ea684: PUSH 0x2
// 005ea686: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x30] (DATA)
// 005ea68a: PUSH EAX
// 005ea68b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea68f: PUSH EAX
// 005ea690: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ea695: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005ea696: CALL core_set.cpp_CDemonSet_FUN_0056e3e0
//   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)
// 005ea69b: ADD ESP,0x10
// 005ea69e: XOR EDX,EDX
// 005ea6a0: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 005ea6a4: CMP dword ptr [ESI],0x0
// 005ea6a7: JZ 0x005ea6e1
//   XREF to: 005ea6e1 (CONDITIONAL_JUMP)
// 005ea6a9: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005ea6ac: INC EAX
// 005ea6ad: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ea6b1: FLD double ptr [0x00657227]
//   XREF to: 00657227 (READ)
// 005ea6b7: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea6bb: FMUL ST1
// 005ea6bd: FMUL double ptr [0x0065722f]
//   XREF to: 0065722f (READ)
// 005ea6c3: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005ea6c7: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005ea6cb: FMULP ST2
// 005ea6cd: FADDP
// 005ea6cf: FADD float ptr [0x03f8f630]
//   XREF to: 03f8f630 (READ)
// 005ea6d5: FSIN
// 005ea6d7: FMUL double ptr [0x0065723f]
//   XREF to: 0065723f (READ)
// 005ea6dd: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 005ea6e1: LEA EBX,[ESP + 0x34]
//   Label: LAB_005ea6e1
//   XREF to: Stack[-0x3c] (DATA)
// 005ea6e5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea6e9: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ea6ef: FLD float ptr [EAX]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea6f1: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea6f7: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 005ea6f9: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x68] (READ)
// 005ea6fc: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea702: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 005ea705: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x64] (READ)
// 005ea708: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea70e: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 005ea711: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x3c] (DATA)
// 005ea715: PUSH EAX
// 005ea716: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 005ea718: ADD EAX,0x90
// 005ea71d: PUSH EAX
// 005ea71e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea723: ADD ESP,0x8
// 005ea726: PUSH 0x3
// 005ea728: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x30] (DATA)
// 005ea72c: PUSH EAX
// 005ea72d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 005ea731: PUSH EAX
// 005ea732: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ea738: PUSH EBX
//   XREF to: 03114278 (DATA)
// 005ea739: CALL core_set.cpp_CDemonSet_FUN_0056e3e0
//   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)
// 005ea73e: MOV EDI,dword ptr [ESI]
// 005ea740: ADD ESP,0x10
// 005ea743: TEST EDI,EDI
// 005ea745: JZ 0x005ea7ad
//   XREF to: 005ea7ad (CONDITIONAL_JUMP)
// 005ea747: PUSH 0xa000
// 005ea74c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea752: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ea753: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 005ea758: ADD ESP,0x8
// 005ea75b: PUSH 0x684678
//   XREF to: 00684678 (DATA)
// 005ea760: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea766: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ea767: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
// 005ea76c: ADD ESP,0x8
//   Label: LAB_005ea76c
// 005ea76f: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 005ea773: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 005ea777: MOV EDX,dword ptr [0x03f87604]
//   XREF to: 03f87604 (READ)
// 005ea77d: ADD EDI,0x4
// 005ea780: INC EAX
// 005ea781: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005ea785: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ea789: CMP EAX,EDX
// 005ea78b: JL 0x005ea41b
//   XREF to: 005ea41b (CONDITIONAL_JUMP)
// 005ea791: MOV ESP,EBP
//   Label: LAB_005ea791
// 005ea793: POP EBP
// 005ea794: POP EDI
// 005ea795: POP ESI
// 005ea796: POP EBX
// 005ea797: RET
// 005ea798: TEST EAX,EAX
//   Label: LAB_005ea798
// 005ea79a: JGE 0x005ea3a8
//   XREF to: 005ea3a8 (CONDITIONAL_JUMP)
// 005ea7a0: XOR EBX,EBX
// 005ea7a2: MOV dword ptr [0x03f8f62c],EBX
//   XREF to: 03f8f62c (WRITE)
// 005ea7a8: JMP 0x005ea3a8
//   XREF to: 005ea3a8 (UNCONDITIONAL_JUMP)
// 005ea7ad: CMP dword ptr [0x02d03e94],0x0
//   Label: LAB_005ea7ad
//   XREF to: 02d03e94 (READ)
// 005ea7b4: JNZ 0x005ea7cf
//   XREF to: 005ea7cf (CONDITIONAL_JUMP)
// 005ea7b6: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 005ea7ba: JZ 0x005ea7f5
//   XREF to: 005ea7f5 (CONDITIONAL_JUMP)
// 005ea7bc: PUSH 0x684678
//   XREF to: 00684678 (DATA)
// 005ea7c1: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea7c7: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005ea7c8: CALL engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)
// 005ea7cd: JMP 0x005ea76c
//   XREF to: 005ea76c (UNCONDITIONAL_JUMP)
// 005ea7cf: PUSH 0x1
//   Label: LAB_005ea7cf
// 005ea7d1: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ea7d7: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005ea7d8: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 005ea7dd: ADD ESP,0x8
// 005ea7e0: PUSH 0x684678
//   XREF to: 00684678 (DATA)
// 005ea7e5: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea7ea: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005ea7eb: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 005ea7f0: JMP 0x005ea76c
//   XREF to: 005ea76c (UNCONDITIONAL_JUMP)
// 005ea7f5: PUSH 0x684678
//   Label: LAB_005ea7f5
//   XREF to: 00684678 (DATA)
// 005ea7fa: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea800: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ea801: CALL engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
//   XREF to: 0048b420 (UNCONDITIONAL_CALL)
// 005ea806: JMP 0x005ea76c
//   XREF to: 005ea76c (UNCONDITIONAL_JUMP)
