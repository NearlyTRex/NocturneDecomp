// Name: core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
// Address: 00457650
// Address Range: [[00457650, 004578b6]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650(CDemonCube * this_ptr, uint rendering_mode)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 (00497500) at 00497adb [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 (004990f0) at 0049913e [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_LAB_00457630 = 00457774
//   TerminatedCString s_core_dcube_cpp_0061a7dd
//   TerminatedCString s_CDemonCube_rotateVertici_0061a7ef
//   float g_CubeColorScaleFactor = 127
//   float g_CubeWorldToScreenScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CVector3f g_StaticColorVector
//   undefined4 g_StaticColorVector.y
//   undefined4 g_StaticColorVector.z
//   uchar g_ColorConstantsInitialized
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02c6d590
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CVector3f g_ZeroVector
// Function calls:
//   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650(CDemonCube *this_ptr,uint rendering_mode)

{
  float *pfVar1;
  CDemonCubeTriangle *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar4;
  int iVar5;
  SRenderVertex *output;
  CVector3i local_48;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&g_ZeroVector);
  if (20000 < this_ptr->vertex_count) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x7bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonCube::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",this_ptr->vertex_count,20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  pCVar4 = this_ptr->vertex_buffer;
  local_20 = 0;
  local_1c = 0;
  output = g_CDemonRendererPtr->vertex_buffer_ptr;
  if (0 < this_ptr->vertex_count) {
    do {
      local_48.x = (int)ROUND(pCVar4->x * g_CubeWorldToScreenScale);
      local_48.y = (int)ROUND(pCVar4->y * g_CubeWorldToScreenScale);
      local_48.z = (int)ROUND(pCVar4->z * g_CubeWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,&local_48);
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        local_20 = local_20 + 1;
      }
      output = output + 1;
      pCVar4 = pCVar4 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->vertex_count);
  }
  if (local_20 == this_ptr->vertex_count) {
    if (g_CDemonRendererPtr->advanced_culling_enabled == 0) {
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,0);
    }
  }
  if ((g_ColorConstantsInitialized & 1) == 0) {
    g_ColorConstantsInitialized = g_ColorConstantsInitialized | 1;
    g_StaticColorVector.x = 0.57735026;
    g_StaticColorVector.z = 0.57735026;
    g_StaticColorVector.y = -0.57735026;
  }
  local_14 = 0;
  if (0 < this_ptr->triangle_count) {
    local_24 = rendering_mode << 2;
    local_18 = 0;
    do {
      if (rendering_mode < 5) {
                    /* WARNING: Could not recover jumptable at 0x0045776e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)&PTR_LAB_00457630 + local_24))();
        return;
      }
      pCVar2 = this_ptr->triangle_buffer;
      pfVar1 = (float *)((int)pCVar2->vertices + local_18 + 0xc);
      if (&local_3c != pfVar1) {
        local_3c = *pfVar1;
        local_38 = *(float *)((int)pCVar2->vertices + local_18 + 0x10);
        local_34 = *(float *)((int)pCVar2->vertices + local_18 + 0x14);
      }
      local_3c = local_3c * g_CubeColorScaleFactor;
      local_38 = local_38 * g_CubeColorScaleFactor;
      local_34 = g_CubeColorScaleFactor * local_34;
      local_28 = (uint)ROUND(local_34);
      local_2c = (uint)ROUND(local_38);
      local_30 = (uint)ROUND(local_3c);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                (g_CDemonRendererPtr,local_30 & 0xff,local_2c & 0xff,local_28 & 0xff);
      iVar3 = local_18 + 0x20;
      iVar5 = local_14 + 1;
      core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
                ((CVector3f **)((int)this_ptr->triangle_buffer->vertices + local_18),
                 this_ptr->vertex_buffer);
      local_18 = iVar3;
      local_14 = iVar5;
    } while (iVar5 < this_ptr->triangle_count);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 00457650: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
// 00457651: PUSH ESI
// 00457652: PUSH EDI
// 00457653: PUSH EBP
// 00457654: MOV EBP,ESP
// 00457656: SUB ESP,0x38
// 00457659: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0045765e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00457664: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00457665: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0045766a: MOV EAX,dword ptr [EBP + 0x14]
// 0045766d: MOV ECX,dword ptr [EAX + 0x20]
// 00457670: ADD ESP,0x8
// 00457673: CMP ECX,0x4e20
// 00457679: JG 0x0045785e
//   XREF to: 0045785e (CONDITIONAL_JUMP)
// 0045767f: PUSH 0x1
//   Label: LAB_0045767f
// 00457681: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00457686: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00457687: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0045768c: ADD ESP,0x8
// 0045768f: PUSH 0x1
// 00457691: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00457697: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00457698: MOV ESI,dword ptr [EBP + 0x14]
// 0045769b: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 004576a0: MOV EAX,dword ptr [EBP + 0x14]
// 004576a3: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004576a9: ADD ESP,0x8
// 004576ac: XOR ECX,ECX
// 004576ae: MOV ESI,dword ptr [ESI + 0x24]
// 004576b1: MOV dword ptr [EBP + -0x10],ECX
// 004576b4: MOV dword ptr [EBP + -0xc],ECX
// 004576b7: MOV EDX,dword ptr [EAX + 0x20]
// 004576ba: MOV EDI,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 004576bc: TEST EDX,EDX
// 004576be: JLE 0x00457716
//   XREF to: 00457716 (CONDITIONAL_JUMP)
// 004576c0: LEA EBX,[EBP + -0x38]
//   Label: LAB_004576c0
// 004576c3: MOV EAX,ESI
// 004576c5: FLD float ptr [EAX]
// 004576c7: FMUL float ptr [0x0065c6b0]
//   XREF to: 0065c6b0 (READ)
// 004576cd: FISTP dword ptr [EBX]
// 004576cf: FLD float ptr [EAX + 0x4]
// 004576d2: FMUL float ptr [0x0065c6b0]
//   XREF to: 0065c6b0 (READ)
// 004576d8: FISTP dword ptr [EBX + 0x4]
// 004576db: FLD float ptr [EAX + 0x8]
// 004576de: FMUL float ptr [0x0065c6b0]
//   XREF to: 0065c6b0 (READ)
// 004576e4: FISTP dword ptr [EBX + 0x8]
// 004576e7: LEA EAX,[EBP + -0x38]
// 004576ea: PUSH EAX
// 004576eb: PUSH EDI
// 004576ec: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004576f1: MOV DH,byte ptr [EDI + 0x13]
// 004576f4: ADD ESP,0x8
// 004576f7: TEST DH,0x80
// 004576fa: JNZ 0x004576ff
//   XREF to: 004576ff (CONDITIONAL_JUMP)
// 004576fc: INC dword ptr [EBP + -0x10]
// 004576ff: MOV ECX,dword ptr [EBP + -0xc]
//   Label: LAB_004576ff
// 00457702: MOV EDX,dword ptr [EBP + 0x14]
// 00457705: ADD EDI,0x30
// 00457708: ADD ESI,0xc
// 0045770b: INC ECX
// 0045770c: MOV EBX,dword ptr [EDX + 0x20]
// 0045770f: MOV dword ptr [EBP + -0xc],ECX
// 00457712: CMP ECX,EBX
// 00457714: JL 0x004576c0
//   XREF to: 004576c0 (CONDITIONAL_JUMP)
// 00457716: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00457716
// 00457719: MOV EAX,dword ptr [EBP + -0x10]
// 0045771c: CMP EAX,dword ptr [EDX + 0x20]
// 0045771f: JNZ 0x00457737
//   XREF to: 00457737 (CONDITIONAL_JUMP)
// 00457721: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00457726: MOV EDX,dword ptr [EAX + 0x18]
//   XREF to: 02c6d590 (READ)
// 00457729: TEST EDX,EDX
// 0045772b: JNZ 0x00457737
//   XREF to: 00457737 (CONDITIONAL_JUMP)
// 0045772d: PUSH EDX
// 0045772e: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0045772f: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00457734: ADD ESP,0x8
// 00457737: MOV AH,byte ptr [0x015c42a0]
//   Label: LAB_00457737
//   XREF to: 015c42a0 (READ)
// 0045773d: TEST AH,0x1
// 00457740: JZ 0x0045788c
//   XREF to: 0045788c (CONDITIONAL_JUMP)
// 00457746: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00457746
// 00457749: XOR ECX,ECX
// 0045774b: MOV EBX,dword ptr [EAX + 0x28]
// 0045774e: MOV dword ptr [EBP + -0x4],ECX
// 00457751: TEST EBX,EBX
// 00457753: JLE 0x00457836
//   XREF to: 00457836 (CONDITIONAL_JUMP)
// 00457759: MOV EAX,dword ptr [EBP + 0x18]
// 0045775c: SHL EAX,0x2
// 0045775f: MOV dword ptr [EBP + -0x8],ECX
// 00457762: MOV dword ptr [EBP + -0x14],EAX
// 00457765: CMP dword ptr [EBP + 0x18],0x4
//   Label: LAB_00457765
// 00457769: JA 0x00457774
//   XREF to: 00457774 (CONDITIONAL_JUMP)
// 0045776b: MOV EAX,dword ptr [EBP + -0x14]
// 0045776e: JMP dword ptr [EAX + 0x457630]
//   XREF to: 00457630 (DATA)
// 00457774: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00457774
// 00457777: MOV ESI,dword ptr [EBP + -0x8]
// 0045777a: MOV EAX,dword ptr [EAX + 0x2c]
// 0045777d: ADD EAX,ESI
// 0045777f: LEA EDX,[EAX + 0xc]
// 00457782: LEA EAX,[EBP + -0x2c]
// 00457785: CMP EAX,EDX
// 00457787: JZ 0x0045779a
//   XREF to: 0045779a (CONDITIONAL_JUMP)
// 00457789: MOV EAX,dword ptr [EDX]
// 0045778b: MOV dword ptr [EBP + -0x2c],EAX
// 0045778e: MOV EAX,dword ptr [EDX + 0x4]
// 00457791: MOV dword ptr [EBP + -0x28],EAX
// 00457794: MOV EAX,dword ptr [EDX + 0x8]
// 00457797: MOV dword ptr [EBP + -0x24],EAX
// 0045779a: FLD float ptr [0x0061a84a]
//   Label: LAB_0045779a
//   XREF to: 0061a84a (READ)
// 004577a0: FLD float ptr [EBP + -0x2c]
// 004577a3: FMUL ST1
// 004577a5: FSTP float ptr [EBP + -0x2c]
// 004577a8: FLD float ptr [EBP + -0x28]
// 004577ab: FMUL ST1
// 004577ad: FSTP float ptr [EBP + -0x28]
// 004577b0: FMUL float ptr [EBP + -0x24]
// 004577b3: FSTP float ptr [EBP + -0x24]
// 004577b6: LEA EAX,[EBP + 0xffffffd4]
// 004577bc: FLD float ptr [EAX]
// 004577be: FLD float ptr [EAX + 0x4]
// 004577c1: FLD float ptr [EAX + 0x8]
// 004577c4: FISTP dword ptr [EBP + 0xffffffe8]
// 004577ca: FISTP dword ptr [EBP + 0xffffffe4]
// 004577d0: FISTP dword ptr [EBP + 0xffffffe0]
// 004577d6: MOV EAX,dword ptr [EBP + -0x18]
// 004577d9: AND EAX,0xff
// 004577de: PUSH EAX
// 004577df: MOV EAX,dword ptr [EBP + -0x1c]
// 004577e2: AND EAX,0xff
// 004577e7: PUSH EAX
// 004577e8: MOV EAX,dword ptr [EBP + -0x20]
// 004577eb: AND EAX,0xff
// 004577f0: PUSH EAX
// 004577f1: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004577f7: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004577f8: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 004577fd: ADD ESP,0x10
// 00457800: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00457800
// 00457803: MOV ECX,dword ptr [EBP + -0x8]
// 00457806: MOV EBX,dword ptr [EBP + -0x8]
// 00457809: MOV EDX,dword ptr [EAX + 0x24]
// 0045780c: MOV EAX,dword ptr [EAX + 0x2c]
// 0045780f: PUSH EDX
// 00457810: ADD EAX,ECX
// 00457812: MOV ESI,dword ptr [EBP + -0x4]
// 00457815: PUSH EAX
// 00457816: ADD EBX,0x20
// 00457819: INC ESI
// 0045781a: CALL core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
//   XREF to: 004566e0 (UNCONDITIONAL_CALL)
// 0045781f: MOV EDX,dword ptr [EBP + 0x14]
// 00457822: MOV dword ptr [EBP + -0x8],EBX
// 00457825: MOV dword ptr [EBP + -0x4],ESI
// 00457828: MOV EDI,dword ptr [EDX + 0x28]
// 0045782b: ADD ESP,0x8
// 0045782e: CMP ESI,EDI
// 00457830: JL 0x00457765
//   XREF to: 00457765 (CONDITIONAL_JUMP)
// 00457836: PUSH 0x1
//   Label: LAB_00457836
// 00457838: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0045783d: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0045783e: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00457843: ADD ESP,0x8
// 00457846: PUSH 0x0
// 00457848: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0045784e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0045784f: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00457854: ADD ESP,0x8
// 00457857: MOV ESP,EBP
// 00457859: POP EBP
// 0045785a: POP EDI
// 0045785b: POP ESI
// 0045785c: POP EBX
// 0045785d: RET
// 0045785e: PUSH 0x4e20
//   Label: LAB_0045785e
// 00457863: PUSH ECX
// 00457864: MOV EBX,0x61a7dd
//   XREF to: 0061a7dd (DATA)
// 00457869: MOV ESI,0x7bb
// 0045786e: PUSH 0x61a7ef
//   XREF to: 0061a7ef (DATA)
// 00457873: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00457879: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0045787f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00457884: ADD ESP,0xc
// 00457887: JMP 0x0045767f
//   XREF to: 0045767f (UNCONDITIONAL_JUMP)
// 0045788c: MOV EDI,0x3f13cd3a
//   Label: LAB_0045788c
// 00457891: MOV DL,AH
// 00457893: MOV EAX,0xbf13cd3a
// 00457898: OR DL,0x1
// 0045789b: MOV dword ptr [0x015c4294],EDI
//   XREF to: 015c4294 (WRITE)
// 004578a1: MOV dword ptr [0x015c429c],EDI
//   XREF to: 015c429c (WRITE)
// 004578a7: MOV [0x015c4298],EAX
//   XREF to: 015c4298 (WRITE)
// 004578ac: MOV byte ptr [0x015c42a0],DL
//   XREF to: 015c42a0 (WRITE)
// 004578b2: JMP 0x00457746
//   XREF to: 00457746 (UNCONDITIONAL_JUMP)
