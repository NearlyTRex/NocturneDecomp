// Name: core_level.cpp_CLevelLoader_update_FUN_00504160
// Address: 00504160
// Address Range: [[00504160, 0050471f]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00523cf0 (00523cf0) at 00523d21 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 00524801 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_load_FUN_00522d90 (00522d90) at 00522dc7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056aa32 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569d63 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_006608cc = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   SMRGLTextureBasic g_LoadingMoonGlowTexture
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_01000000
//   CBitFont* g_ThemeFont
//   CDemonRenderer g_CDemonRendererInstance
//   CKeyFramedModel g_LoadingMoonModel
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326f0e8
//   undefined4 DAT_0326f0ec
//   undefined4 DAT_0326f0f0
//   undefined4 DAT_0326f0f4
//   undefined4 DAT_0326f0f8
//   CVector3f g_ZeroVector
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_set.cpp_CDemonSet_FUN_00570ca0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_matrix.c_interpolatedCos_FUN_0050c600
//   engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_level_cpp_CLevelLoader_update_FUN_00504160(CLevelLoader *this_ptr,char *text,int clear_screen)

{
  CDemonRenderer *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_retaddr;
  CBitFont *in_stack_00000030;
  CBitFont *pCStack00000034;
  CBitFont *pCStack00000038;
  char *in_stack_00000048;
  ushort angle;
  CVector3i local_40;
  undefined4 local_34;
  CVector3i local_30;
  CVector3i local_1c;
  float local_10;
  
  if (this_ptr->enabled != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0);
    }
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                (g_CDemonRendererPtr,this_ptr->viewport_x,this_ptr->viewport_y,
                 this_ptr->viewport_width,this_ptr->viewport_height);
    }
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector);
    local_10 = 56.0;
    if (this_ptr->use_custom_viewport != 0) {
      local_10 = 84.0;
    }
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,local_10);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
    local_1c.z = 0;
    local_10 = 0.0;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&local_1c.z);
    g_CDemonSetPtr->rendering_mode = 1;
    angle = 0x8000 - (short)((this_ptr->current_frame << 0xf) / this_ptr->total_frames);
    iVar3 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(angle);
    pCVar2 = g_CDemonSetPtr;
    (g_CDemonSetPtr->light_direction).y = -37000;
    (pCVar2->light_direction).x =
         (uint)((longlong)iVar3 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
    iVar3 = engine_matrix_c_interpolatedCos_FUN_0050c600(angle);
    pCVar2 = g_CDemonSetPtr;
    g_CDemonSetPtr->ambient_base_quick = 0x280;
    (pCVar2->light_direction).z =
         (uint)((longlong)iVar3 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
    core_set_cpp_CDemonSet_FUN_00570ca0(pCVar2);
    local_10 = 7.25;
    local_40.x = (int)ROUND(FLOAT_006608cc * 7.25);
    local_40.y = (int)ROUND(FLOAT_006608cc * 7.25);
    local_40.z = (int)ROUND(FLOAT_006608cc * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_40);
    local_30.x = (int)ROUND(FLOAT_006608cc * -7.25);
    local_30.y = (int)ROUND(FLOAT_006608cc * 0.0);
    local_30.z = (int)ROUND(unaff_ESI * FLOAT_006608cc);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_30);
    local_1c.z = (int)ROUND(FLOAT_006608cc * 0.0);
    local_10 = (float)(int)ROUND(-unaff_ESI * FLOAT_006608cc);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_1c.z)
    ;
    local_1c.x = (int)ROUND(--unaff_ESI * FLOAT_006608cc);
    local_1c.y = (int)ROUND(unaff_retaddr * FLOAT_006608cc);
    local_1c.z = (int)ROUND((float)this_ptr * FLOAT_006608cc);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_1c);
    pCVar1 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 2.3509887e-38;
    pCVar1->vertex_buffer_ptr->v = 0.0;
    pCVar1->vertex_buffer_ptr[1].u = 0.0;
    pCVar1->vertex_buffer_ptr[1].v = 0.0;
    pCVar1->vertex_buffer_ptr[2].u = 0.0;
    pCVar1->vertex_buffer_ptr[2].v = 2.3509887e-38;
    pCVar1->vertex_buffer_ptr[3].u = 2.3509887e-38;
    pCVar1->vertex_buffer_ptr[3].v = 2.3509887e-38;
    pCVar1 = g_CDemonRendererPtr;
    fVar4 = (float)((this_ptr->current_frame * 0xffff) / this_ptr->total_frames);
    if (0xffff < (int)fVar4) {
      fVar4 = 9.18341e-41;
    }
    g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = 0.0;
    pCVar1->vertex_buffer_ptr[1].w_recip = fVar4;
    pCVar1->vertex_buffer_ptr[2].w_recip = 0.0;
    pCVar1->vertex_buffer_ptr[3].w_recip = 0.0;
    iVar3 = 0;
    do {
      pCVar1 = g_CDemonRendererPtr;
      *(int *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) =
           (this_ptr->color).r << 8;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = (this_ptr->color).g << 8;
      iVar5 = iVar3 + 0x30;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = (this_ptr->color).b << 8;
      iVar3 = iVar5;
    } while (iVar5 != 0xc0);
    local_40.x = 0;
    local_40.z = 2;
    local_34 = 3;
    local_40.y = 1;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar1,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_LoadingMoonGlowTexture);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0,0x327);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
              (&g_LoadingMoonModel,(CKeyFramedModelInstance *)0x0,0,0x205);
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
    }
    g_CDemonSetPtr->rendering_mode = 0;
    pCStack00000038 = g_ThemeFont;
    iVar3 = (g_WindowWidth * 0x240) / 0x280;
    iVar5 = (g_WindowHeight * 0x18) / 0x1e0;
    iVar6 = (g_WindowWidth << 5) / 0x280;
    pCStack00000034 = (CBitFont *)((g_WindowHeight * 0x1c0) / 0x1e0);
    iVar7 = this_ptr->current_frame + 1;
    this_ptr->current_frame = iVar7;
    if (this_ptr->total_frames < iVar7) {
      this_ptr->current_frame = this_ptr->total_frames;
    }
    if (this_ptr->use_custom_viewport == 0) {
      engine_2d_c_fillRectColor_FUN_00403170
                (iVar6 + -1,(int)((int)&pCStack00000034[-1].win_font_helper + 3),iVar3 + 1 + iVar6,
                 (int)(pCStack00000034->bitmap_files + -1) + 0x4d + iVar5,0);
      if (in_stack_00000048 != (char *)0x0) {
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                          (in_stack_00000030,in_stack_00000048);
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (pCStack00000034,in_stack_00000048,(iVar6 + iVar3 / 2) - iVar7 / 2,
                   (int)in_stack_00000030 + (iVar5 / 2 - pCStack00000034->max_char_width / 2),0xf8,
                   -1);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  return;
}


// Assembly code:
// 00504160: PUSH ESI
//   Label: core_level.cpp_CLevelLoader_update_FUN_00504160
// 00504161: PUSH EDI
// 00504162: PUSH EBP
// 00504163: SUB ESP,0x7c
// 00504166: MOV ESI,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 0050416d: CMP dword ptr [ESI + 0xc],0x0
// 00504171: JZ 0x005046ee
//   XREF to: 005046ee (CONDITIONAL_JUMP)
// 00504177: CMP dword ptr [ESP + 0x94],0x0
//   XREF to: Stack[0xc] (READ)
// 0050417f: JNZ 0x005046f5
//   XREF to: 005046f5 (CONDITIONAL_JUMP)
// 00504185: CMP dword ptr [ESI + 0x110],0x0
//   Label: LAB_00504185
// 0050418c: JZ 0x005041b9
//   XREF to: 005041b9 (CONDITIONAL_JUMP)
// 0050418e: MOV EDI,dword ptr [ESI + 0x120]
// 00504194: PUSH EDI
// 00504195: MOV EBP,dword ptr [ESI + 0x11c]
// 0050419b: PUSH EBP
// 0050419c: MOV EAX,dword ptr [ESI + 0x118]
// 005041a2: PUSH EAX
// 005041a3: MOV EDX,dword ptr [ESI + 0x114]
// 005041a9: PUSH EDX
// 005041aa: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005041b0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005041b1: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 005041b6: ADD ESP,0x14
// 005041b9: PUSH EBX
//   Label: LAB_005041b9
// 005041ba: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005041bf: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005041c5: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005041c6: MOV EDI,0x42600000
// 005041cb: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 005041d0: ADD ESP,0x8
// 005041d3: MOV EBP,dword ptr [ESI + 0x110]
// 005041d9: MOV dword ptr [ESP + 0x74],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005041dd: TEST EBP,EBP
// 005041df: JZ 0x005041e9
//   XREF to: 005041e9 (CONDITIONAL_JUMP)
// 005041e1: MOV dword ptr [ESP + 0x74],0x42a80000
//   XREF to: Stack[-0x18] (WRITE)
// 005041e9: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_005041e9
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005041ef: PUSH dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x18] (READ)
// 005041f3: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005041f4: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 005041f9: ADD ESP,0x8
// 005041fc: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00504201: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00504207: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00504208: MOV EBP,0x42100000
// 0050420d: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 00504212: ADD ESP,0x8
// 00504215: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x24] (DATA)
// 00504219: XOR EBX,EBX
// 0050421b: PUSH EAX
// 0050421c: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00504221: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00504225: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00504226: MOV dword ptr [ESP + 0x74],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0050422a: MOV dword ptr [ESP + 0x78],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0050422e: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00504233: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00504238: MOV dword ptr [EAX + 0x15ae70],0x1
//   XREF to: 0326f0e8 (WRITE)
// 00504242: MOV EDX,dword ptr [ESI]
// 00504244: SHL EDX,0xf
// 00504247: MOV ECX,dword ptr [ESI + 0x4]
// 0050424a: MOV EAX,EDX
// 0050424c: SAR EDX,0x1f
// 0050424f: IDIV ECX
// 00504251: MOV EBX,0x8000
// 00504256: ADD ESP,0x8
// 00504259: SUB EBX,EAX
// 0050425b: PUSH EBX
// 0050425c: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 00504261: ADD ESP,0x4
// 00504264: MOV EDX,EAX
// 00504266: MOV EAX,0x9088
// 0050426b: IMUL EDX
// 0050426d: SHRD EAX,EDX,0x10
// 00504271: MOV EDX,EAX
// 00504273: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00504278: MOV dword ptr [EAX + 0x15ae78],0xffff6f78
//   XREF to: 0326f0f0 (WRITE)
// 00504282: PUSH EBX
// 00504283: MOV dword ptr [EAX + 0x15ae74],EDX
//   XREF to: 0326f0ec (WRITE)
// 00504289: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050428e: ADD ESP,0x4
// 00504291: MOV EDX,EAX
// 00504293: MOV EAX,0x9088
// 00504298: IMUL EDX
// 0050429a: SHRD EAX,EDX,0x10
// 0050429e: MOV EDX,EAX
// 005042a0: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005042a5: MOV dword ptr [EAX + 0x15ae80],0x280
//   XREF to: 0326f0f8 (WRITE)
// 005042af: MOV dword ptr [EAX + 0x15ae7c],EDX
//   XREF to: 0326f0f4 (WRITE)
// 005042b5: MOV EDX,dword ptr [ESI + 0x12c]
// 005042bb: SHL EDX,0x8
// 005042be: PUSH EDX
// 005042bf: MOV EDX,dword ptr [ESI + 0x128]
// 005042c5: SHL EDX,0x8
// 005042c8: PUSH EDX
// 005042c9: MOV EDX,dword ptr [ESI + 0x124]
// 005042cf: SHL EDX,0x8
// 005042d2: PUSH EDX
// 005042d3: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005042d4: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 005042d9: ADD ESP,0x10
// 005042dc: MOV EBX,0x40e80000
// 005042e1: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x30] (DATA)
// 005042e5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005042eb: XOR EBP,EBP
// 005042ed: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005042f1: MOV dword ptr [ESP + 0x60],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 005042f5: LEA EBX,[ESP + 0x2c]
//   XREF to: Stack[-0x60] (DATA)
// 005042f9: MOV dword ptr [ESP + 0x64],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 005042fd: FLD float ptr [EAX]
//   XREF to: Stack[-0x30] (DATA)
// 005042ff: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 00504305: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x60] (DATA)
// 00504307: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0050430a: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 00504310: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 00504313: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00504316: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 0050431c: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 0050431f: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x60] (DATA)
// 00504323: PUSH EAX
// 00504324: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00504326: PUSH EAX
// 00504327: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0050432c: ADD ESP,0x8
// 0050432f: MOV AH,byte ptr [ESP + 0x5f]
//   XREF to: Stack[-0x2d] (READ)
// 00504333: XOR AH,0x80
// 00504336: LEA EBX,[ESP + 0x38]
//   XREF to: Stack[-0x54] (DATA)
// 0050433a: MOV byte ptr [ESP + 0x5f],AH
//   XREF to: Stack[-0x2d] (WRITE)
// 0050433e: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x30] (DATA)
// 00504342: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00504348: FLD float ptr [EAX]
//   XREF to: Stack[-0x30] (DATA)
// 0050434a: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 00504350: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x54] (DATA)
// 00504352: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00504355: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 0050435b: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x50] (WRITE)
// 0050435e: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00504361: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 00504367: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x4c] (WRITE)
// 0050436a: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x54] (DATA)
// 0050436e: PUSH EAX
// 0050436f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00504371: ADD EAX,0x30
// 00504374: PUSH EAX
// 00504375: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0050437a: ADD ESP,0x8
// 0050437d: MOV DL,byte ptr [ESP + 0x63]
//   XREF to: Stack[-0x29] (READ)
// 00504381: LEA EBX,[ESP + 0x50]
//   XREF to: Stack[-0x3c] (DATA)
// 00504385: XOR DL,0x80
// 00504388: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x30] (DATA)
// 0050438c: MOV byte ptr [ESP + 0x63],DL
//   XREF to: Stack[-0x29] (WRITE)
// 00504390: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00504396: FLD float ptr [EAX]
//   XREF to: Stack[-0x30] (DATA)
// 00504398: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 0050439e: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 005043a0: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005043a3: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 005043a9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 005043ac: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005043af: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 005043b5: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 005043b8: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x3c] (DATA)
// 005043bc: PUSH EAX
// 005043bd: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005043bf: ADD EAX,0x60
// 005043c2: PUSH EAX
// 005043c3: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005043c8: ADD ESP,0x8
// 005043cb: MOV DH,byte ptr [ESP + 0x5f]
//   XREF to: Stack[-0x2d] (READ)
// 005043cf: LEA EBX,[ESP + 0x44]
//   XREF to: Stack[-0x48] (DATA)
// 005043d3: XOR DH,0x80
// 005043d6: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x30] (DATA)
// 005043da: MOV byte ptr [ESP + 0x5f],DH
//   XREF to: Stack[-0x2d] (WRITE)
// 005043de: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005043e4: FLD float ptr [EAX]
//   XREF to: Stack[-0x30] (DATA)
// 005043e6: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 005043ec: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x48] (DATA)
// 005043ee: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005043f1: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 005043f7: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 005043fa: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005043fd: FMUL float ptr [0x006608cc]
//   XREF to: 006608cc (READ)
// 00504403: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 00504406: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x48] (DATA)
// 0050440a: PUSH EAX
// 0050440b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050440d: ADD EAX,0x90
// 00504412: PUSH EAX
// 00504413: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00504418: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0050441d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050441f: MOV dword ptr [EDX + 0x18],0x1000000
//   XREF to: 01000000 (DATA)
// 00504426: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00504428: MOV dword ptr [EDX + 0x1c],EBP
// 0050442b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050442d: MOV dword ptr [EDX + 0x48],EBP
// 00504430: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00504432: MOV dword ptr [EDX + 0x4c],EBP
// 00504435: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00504437: MOV dword ptr [EDX + 0x78],EBP
// 0050443a: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050443c: MOV dword ptr [EDX + 0x7c],0x1000000
//   XREF to: 01000000 (DATA)
// 00504443: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00504445: MOV dword ptr [EDX + 0xa8],0x1000000
//   XREF to: 01000000 (DATA)
// 0050444f: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00504451: MOV dword ptr [EAX + 0xac],0x1000000
//   XREF to: 01000000 (DATA)
// 0050445b: MOV EDX,dword ptr [ESI]
// 0050445d: MOV EAX,EDX
// 0050445f: SHL EAX,0x8
// 00504462: ADD EAX,EDX
// 00504464: MOV EDX,EAX
// 00504466: SHL EAX,0x8
// 00504469: SUB EAX,EDX
// 0050446b: MOV EDX,EAX
// 0050446d: MOV ECX,dword ptr [ESI + 0x4]
// 00504470: SAR EDX,0x1f
// 00504473: IDIV ECX
// 00504475: ADD ESP,0x8
// 00504478: MOV EDX,EAX
// 0050447a: CMP EAX,0xffff
// 0050447f: JG 0x00504716
//   XREF to: 00504716 (CONDITIONAL_JUMP)
// 00504485: MOV EAX,[0x006703ec]
//   Label: LAB_00504485
//   XREF to: 006703ec (READ)
// 0050448a: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050448c: MOV dword ptr [ECX + 0x2c],0x0
// 00504493: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00504495: MOV dword ptr [ECX + 0x5c],EDX
// 00504498: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050449a: MOV dword ptr [EDX + 0x8c],0x0
// 005044a4: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005044a6: MOV dword ptr [EAX + 0xbc],0x0
// 005044b0: XOR EAX,EAX
// 005044b2: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_005044b2
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005044b8: MOV EBX,dword ptr [ESI + 0x124]
// 005044be: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005044c0: SHL EBX,0x8
// 005044c3: MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX
// 005044c7: MOV ECX,dword ptr [ESI + 0x128]
// 005044cd: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005044cf: SHL ECX,0x8
// 005044d2: MOV dword ptr [EBX + EAX*0x1 + 0x24],ECX
// 005044d6: ADD EAX,0x30
// 005044d9: MOV EBX,dword ptr [ESI + 0x12c]
// 005044df: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005044e1: SHL EBX,0x8
// 005044e4: MOV dword ptr [ECX + EAX*0x1 + -0x8],EBX
// 005044e8: CMP EAX,0xc0
// 005044ed: JNZ 0x005044b2
//   XREF to: 005044b2 (CONDITIONAL_JUMP)
// 005044ef: MOV EBX,0x4
// 005044f4: XOR EDI,EDI
// 005044f6: MOV EBP,0x2
// 005044fb: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 005044ff: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x78] (WRITE)
// 00504503: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 00504507: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x80] (WRITE)
// 0050450b: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 0050450f: MOV EDI,0x1
// 00504514: MOV EAX,0x3
// 00504519: PUSH EDI
// 0050451a: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x84] (WRITE)
// 0050451e: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x68] (WRITE)
// 00504522: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00504523: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00504527: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 0050452b: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00504530: ADD ESP,0x8
// 00504533: PUSH 0x67cf84
//   XREF to: 0067cf84 (DATA)
// 00504538: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050453e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0050453f: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00504544: ADD ESP,0x8
// 00504547: PUSH 0x327
// 0050454c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x88] (DATA)
// 00504550: PUSH EAX
// 00504551: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00504557: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00504558: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0050455d: ADD ESP,0xc
// 00504560: XOR EBX,EBX
// 00504562: PUSH EBX
// 00504563: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00504569: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0050456a: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0050456f: ADD ESP,0x8
// 00504572: PUSH 0x205
// 00504577: PUSH 0x0
// 00504579: PUSH 0x0
// 0050457b: PUSH 0x2dcd980
//   XREF to: 02dcd980 (DATA)
// 00504580: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 00504585: MOV EDI,dword ptr [ESI + 0x110]
// 0050458b: ADD ESP,0x10
// 0050458e: TEST EDI,EDI
// 00504590: JZ 0x005045a1
//   XREF to: 005045a1 (CONDITIONAL_JUMP)
// 00504592: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00504598: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00504599: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 0050459e: ADD ESP,0x4
// 005045a1: MOV EAX,[0x006810c8]
//   Label: LAB_005045a1
//   XREF to: 006810c8 (READ)
// 005045a6: MOV dword ptr [EAX + 0x15ae70],0x0
//   XREF to: 0326f0e8 (WRITE)
// 005045b0: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 005045b5: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005045bb: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005045bf: LEA EAX,[EDX*0x8 + 0x0]
// 005045c6: ADD EDX,EAX
// 005045c8: SHL EDX,0x6
// 005045cb: MOV ECX,0x280
// 005045d0: MOV EAX,EDX
// 005045d2: SAR EDX,0x1f
// 005045d5: IDIV ECX
// 005045d7: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005045dd: MOV EDI,EAX
// 005045df: LEA EAX,[EDX*0x4 + 0x0]
// 005045e6: SUB EAX,EDX
// 005045e8: LEA EDX,[EAX*0x8 + 0x0]
// 005045ef: MOV ECX,0x1e0
// 005045f4: MOV EAX,EDX
// 005045f6: SAR EDX,0x1f
// 005045f9: IDIV ECX
// 005045fb: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00504601: MOV ECX,0x280
// 00504606: SHL EDX,0x5
// 00504609: MOV EBX,EAX
// 0050460b: MOV EAX,EDX
// 0050460d: SAR EDX,0x1f
// 00504610: IDIV ECX
// 00504612: MOV EBP,EAX
// 00504614: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00504619: SHL EAX,0x6
// 0050461c: MOV EDX,EAX
// 0050461e: SHL EAX,0x3
// 00504621: SUB EAX,EDX
// 00504623: MOV EDX,EAX
// 00504625: MOV ECX,0x1e0
// 0050462a: SAR EDX,0x1f
// 0050462d: IDIV ECX
// 0050462f: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00504633: MOV EAX,dword ptr [ESI]
// 00504635: INC EAX
// 00504636: MOV EDX,dword ptr [ESI + 0x4]
// 00504639: MOV dword ptr [ESI],EAX
// 0050463b: CMP EAX,EDX
// 0050463d: JLE 0x00504641
//   XREF to: 00504641 (CONDITIONAL_JUMP)
// 0050463f: MOV dword ptr [ESI],EDX
// 00504641: MOV ECX,dword ptr [ESI + 0x110]
//   Label: LAB_00504641
// 00504647: TEST ECX,ECX
// 00504649: JNZ 0x005046e8
//   XREF to: 005046e8 (CONDITIONAL_JUMP)
// 0050464f: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x14] (READ)
// 00504653: ADD EAX,EBX
// 00504655: PUSH ECX
// 00504656: INC EAX
// 00504657: PUSH EAX
// 00504658: LEA EAX,[EDI + EBP*0x1 + 0x1]
// 0050465c: PUSH EAX
// 0050465d: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00504664: DEC EAX
// 00504665: PUSH EAX
// 00504666: LEA EAX,[EBP + -0x1]
// 00504669: PUSH EAX
// 0050466a: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0050466f: ADD ESP,0x14
// 00504672: MOV ESI,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x8] (READ)
// 00504679: TEST ESI,ESI
// 0050467b: JZ 0x005046e8
//   XREF to: 005046e8 (CONDITIONAL_JUMP)
// 0050467d: MOV EDX,EDI
// 0050467f: MOV EAX,EDI
// 00504681: SAR EDX,0x1f
// 00504684: SUB EAX,EDX
// 00504686: SAR EAX,0x1
// 00504688: PUSH ESI
// 00504689: ADD EBP,EAX
// 0050468b: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x10] (READ)
// 00504692: PUSH EAX
// 00504693: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00504698: MOV EDX,EAX
// 0050469a: SAR EDX,0x1f
// 0050469d: SUB EAX,EDX
// 0050469f: SAR EAX,0x1
// 005046a1: MOV ECX,EBP
// 005046a3: MOV EDX,EBX
// 005046a5: SUB ECX,EAX
// 005046a7: MOV EAX,EBX
// 005046a9: SAR EDX,0x1f
// 005046ac: SUB EAX,EDX
// 005046ae: SAR EAX,0x1
// 005046b0: ADD ESP,0x8
// 005046b3: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x10] (READ)
// 005046b7: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x14] (READ)
// 005046bb: MOV EDX,dword ptr [EDX + 0x316c]
// 005046c1: ADD EBX,EAX
// 005046c3: MOV EAX,EDX
// 005046c5: SAR EDX,0x1f
// 005046c8: SUB EAX,EDX
// 005046ca: SAR EAX,0x1
// 005046cc: PUSH -0x1
// 005046ce: PUSH 0xf8
// 005046d3: SUB EBX,EAX
// 005046d5: PUSH EBX
// 005046d6: PUSH ECX
// 005046d7: PUSH ESI
// 005046d8: MOV ECX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x10] (READ)
// 005046df: PUSH ECX
// 005046e0: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 005046e5: ADD ESP,0x18
// 005046e8: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_005046e8
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005046ed: POP EBX
// 005046ee: ADD ESP,0x7c
//   Label: LAB_005046ee
// 005046f1: POP EBP
// 005046f2: POP EDI
// 005046f3: POP ESI
// 005046f4: RET
// 005046f5: MOV EAX,[0x00679398]
//   Label: LAB_005046f5
//   XREF to: 00679398 (READ)
// 005046fa: PUSH 0x0
// 005046fc: DEC EAX
// 005046fd: PUSH EAX
// 005046fe: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00504703: DEC EAX
// 00504704: PUSH EAX
// 00504705: PUSH 0x0
// 00504707: PUSH 0x0
// 00504709: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0050470e: ADD ESP,0x14
// 00504711: JMP 0x00504185
//   XREF to: 00504185 (UNCONDITIONAL_JUMP)
// 00504716: MOV EDX,0xffff
//   Label: LAB_00504716
// 0050471b: JMP 0x00504485
//   XREF to: 00504485 (UNCONDITIONAL_JUMP)
