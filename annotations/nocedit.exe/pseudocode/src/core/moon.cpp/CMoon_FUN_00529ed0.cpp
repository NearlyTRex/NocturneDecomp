// Name: core_moon.cpp_CMoon_FUN_00529ed0
// Address: 00529ed0
// Address Range: [[00529ed0, 0052a0ca] [0052a11f, 0052a2ab]]
// Convention: unknown
// Signature: undefined core_moon.cpp_CMoon_FUN_00529ed0()
// Cross-references:
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 005118ff [UNCONDITIONAL_CALL]
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 00510d65 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00511ec4 [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512da0 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513042 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00639f99
//   undefined4 DAT_00639fa1
//   undefined4 DAT_00639fb9
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_0067d7d0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   uint[256] g_Hardware32BitPalette
//   CAlphaBitmap CAlphaBitmap_02f37f70
//   CAlphaBitmap[30] DAT_02f37f84
//   undefined4 DAT_02f381dc
//   undefined4 DAT_02f381e0
//   undefined4 DAT_02f381e4
//   CCourse[3] DAT_02f381e8
//   SBat[30] DAT_02f3820c
//   undefined4 DAT_02f38210
//   undefined4 DAT_02f38214
//   undefined4 DAT_02f38218
//   undefined4 DAT_02f3821c
//   undefined4 DAT_02f38220
//   undefined4 DAT_02f38224
//   undefined4 DAT_02f38228
//   undefined4 DAT_02f3822c
//   undefined4 DAT_02f3820c[1].field0_0x0[12]
//   undefined4 DAT_02f3820c[1].field0_0x0[16]
//   undefined4 DAT_02f3820c[1].field0_0x0[20]
//   CKeyFramedModel DAT_02f384dc
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326f0e8
//   undefined4 DAT_0326f0ec
//   undefined4 DAT_0326f0f0
//   undefined4 DAT_0326f0f4
//   undefined4 DAT_0326f0f8
//   CVector3f g_ZeroVector
// Function calls:
//   core_course.cpp_CCourse_FUN_00442710
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_set.cpp_CDemonSet_FUN_00570ca0
//   crt_math.c_round_FUN_005fe6b0
//   engine_3d.c_setBlendMode_FUN_00406dd0
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   sound_sndmain.cpp_DoSomethingRoundWait_OnSoundMutex_FUN_005abe20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_moon.cpp_CMoon_FUN_00529ed0(CMoon* param_1) */

void core_moon_cpp_CMoon_FUN_00529ed0(void)

{
  float fVar1;
  float fVar2;
  CDemonSet *pCVar3;
  char *pcVar4;
  undefined4 extraout_EAX;
  int iVar5;
  undefined4 extraout_EAX_00;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar7;
  BADSPACEBASE *in_ESP;
  undefined8 *puVar8;
  undefined8 uVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000004;
  float local_5c;
  CCourse *this_ptr;
  uint local_28;
  int local_1c;
  
  sound_sndmain_cpp_DoSomethingRoundWait_OnSoundMutex_FUN_005abe20();
  local_5c = 7.587513e-39;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  local_5c = 7.587544e-39;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,112.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  local_5c = (*(float *)(in_stack_00000004 + 4) + (float)_DAT_00639f99) * (float)_DAT_00639fa1;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&local_5c);
  pCVar3 = g_CDemonSetPtr;
  g_CDemonSetPtr->rendering_mode = 1;
  (pCVar3->light_direction).x = -37000;
  (pCVar3->light_direction).y = -37000;
  (pCVar3->light_direction).z = 37000;
  pCVar3->ambient_base_quick = 0x280;
  core_set_cpp_CDemonSet_FUN_00570ca0(pCVar3);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            ((CKeyFramedModel *)(in_stack_00000004 + 8),(CKeyFramedModelInstance *)0x0,0,0x205);
  pCVar3 = g_CDemonSetPtr;
  (g_CDemonSetPtr->light_direction).x = -0x4844;
  (pCVar3->light_direction).y = -0x4844;
  iVar7 = DAT_0067d7d0;
  (pCVar3->light_direction).z = 0x4844;
  pCVar3->ambient_base_quick = 0x2000;
  if (iVar7 != 0) {
    iVar7 = 0;
    do {
      if (0.0 <= *(float *)(DAT_02f3820c[0].field0_0x0 + iVar7 + 4)) {
        this_ptr = DAT_02f381e8 + *(int *)(DAT_02f3820c[0].field0_0x0 + iVar7);
        core_course_cpp_CCourse_FUN_00442710(this_ptr);
        local_5c = 7.588094e-39;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&stack0xffffffbc);
        local_5c = 7.588122e-39;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffb0,(CVector3i *)0x0);
        fVar10 = (float10)*(float *)(DAT_02f3820c[0].field0_0x0 + iVar7 + 8);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                  (&DAT_02f384dc,(CKeyFramedModelInstance *)(int)ROUND(fVar10),0,(int)this_ptr);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        fVar1 = *(float *)(DAT_02f3820c[0].field0_0x0 + iVar7 + 4) /
                (float)DAT_02f381e8[*(int *)(DAT_02f3820c[0].field0_0x0 + iVar7)].len;
        fVar2 = (float)_DAT_00639fc1;
        if (fVar1 < fVar2) {
          fVar10 = (float10)_DAT_00639fb5 - (float10)fVar1 * (float10)_DAT_00639fb1;
        }
        else {
          fVar10 = ((float10)fVar1 + (float10)_DAT_00639f99) * (float10)_DAT_00639fa9;
        }
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44(g_CDemonSetPtr,
                                             CONCAT22((short)((uint)DAT_02f381e8
                                                                    [*(int *)(DAT_02f3820c[0].
                                                                              field0_0x0 + iVar7)].
                                                                    len >> 0x10),
                                                      (ushort)(fVar1 < fVar2) << 8 |
                                                      (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                                      (ushort)(fVar1 == fVar2) << 0xe)));
        *(int *)((int)((ulonglong)dVar11 >> 0x20) + 0x15ae80) = (int)ROUND(fVar10);
      }
      iVar7 = iVar7 + 0x18;
    } while (iVar7 != 0x2d0);
  }
  g_CDemonSetPtr->rendering_mode = 0;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(&CAlphaBitmap_02f37f70);
  pcVar4 = CAlphaBitmap_02f37f70.ptrRaw;
  iVar7 = DAT_02f381dc >> 0x10;
  iVar5 = DAT_02f381e0 >> 0x10;
  local_28 = 0;
  do {
    puVar8 = (undefined8 *)g_ScreenBufferArray[local_28];
    uVar6 = 0;
    do {
      uVar9 = paddusb(*puVar8,CONCAT44(g_Hardware32BitPalette
                                       [(byte)pcVar4[((uVar6 >> 1) + iVar7 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar5 & 0xff)] >> 2],
                                       g_Hardware32BitPalette
                                       [(byte)pcVar4[((uVar6 >> 1) + iVar7 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar5 & 0xff)] >> 2]));
      uVar9 = paddusb(uVar9,CONCAT44(g_Hardware32BitPalette
                                     [(byte)pcVar4[((uVar6 >> 2) + iVar7 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar5 & 0xff)] >> 2],
                                     g_Hardware32BitPalette
                                     [(byte)pcVar4[((uVar6 >> 2) + iVar7 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar5 & 0xff)] >> 2]));
      *puVar8 = uVar9;
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x280);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x1e0);
  engine_3d_c_setBlendMode_FUN_00406dd0(1);
  fVar10 = (float10)_DAT_02f381e4;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
  local_1c = (int)ROUND(fVar10);
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(DAT_02f37f84 + local_1c,0,0,48000);
  engine_3d_c_setBlendMode_FUN_00406dd0(0);
  return;
}


// Assembly code:
// 00529ed0: PUSH EBX
//   Label: core_moon.cpp_CMoon_FUN_00529ed0
// 00529ed1: PUSH ESI
// 00529ed2: PUSH EDI
// 00529ed3: PUSH EBP
// 00529ed4: MOV EBP,ESP
// 00529ed6: SUB ESP,0x4c
// 00529ed9: MOV ESI,dword ptr [EBP + 0x14]
// 00529edc: CALL sound_sndmain.cpp_DoSomethingRoundWait_OnSoundMutex_FUN_005abe20
//   XREF to: 005abe20 (UNCONDITIONAL_CALL)
// 00529ee1: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00529ee6: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 00529eeb: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00529ef0: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00529ef6: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00529ef7: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 00529efc: ADD ESP,0x8
// 00529eff: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00529f05: PUSH 0x42e00000
// 00529f0a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00529f0b: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 00529f10: ADD ESP,0x8
// 00529f13: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00529f18: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 00529f1e: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00529f1f: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 00529f24: FLD double ptr [0x00639f99]
//   XREF to: 00639f99 (READ)
// 00529f2a: FLD float ptr [ESI + 0x4]
// 00529f2d: FADD ST0,ST1
// 00529f2f: FLD double ptr [0x00639fa1]
//   XREF to: 00639fa1 (READ)
// 00529f35: FXCH
// 00529f37: FMUL ST1
// 00529f39: LEA EAX,[EBP + -0x4c]
// 00529f3c: FSTP float ptr [EBP + -0x4c]
// 00529f3f: FLD float ptr [ESI + 0x4]
// 00529f42: FADDP ST2,ST0
// 00529f44: ADD ESP,0x8
// 00529f47: FMULP
// 00529f49: PUSH EAX
// 00529f4a: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00529f4f: MOV EDI,0x42900000
// 00529f54: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00529f55: MOV dword ptr [EBP + -0x44],EDI
// 00529f58: FSTP float ptr [EBP + -0x48]
// 00529f5b: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00529f60: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00529f65: ADD ESP,0x8
// 00529f68: MOV dword ptr [EAX + 0x15ae70],0x1
//   XREF to: 0326f0e8 (WRITE)
// 00529f72: PUSH 0x10000
// 00529f77: MOV dword ptr [EAX + 0x15ae74],0xffff6f78
//   XREF to: 0326f0ec (WRITE)
// 00529f81: PUSH 0x10000
// 00529f86: MOV dword ptr [EAX + 0x15ae78],0xffff6f78
//   XREF to: 0326f0f0 (WRITE)
// 00529f90: PUSH 0x10000
// 00529f95: MOV dword ptr [EAX + 0x15ae7c],0x9088
//   XREF to: 0326f0f4 (WRITE)
// 00529f9f: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00529fa0: MOV dword ptr [EAX + 0x15ae80],0x280
//   XREF to: 0326f0f8 (WRITE)
// 00529faa: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 00529faf: ADD ESP,0x10
// 00529fb2: PUSH 0x205
// 00529fb7: PUSH 0x0
// 00529fb9: PUSH 0x0
// 00529fbb: LEA EAX,[ESI + 0x8]
// 00529fbe: PUSH EAX
// 00529fbf: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 00529fc4: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00529fc9: MOV dword ptr [EAX + 0x15ae74],0xffffb7bc
//   XREF to: 0326f0ec (WRITE)
// 00529fd3: MOV dword ptr [EAX + 0x15ae78],0xffffb7bc
//   XREF to: 0326f0f0 (WRITE)
// 00529fdd: MOV EDX,dword ptr [0x0067d7d0]
//   XREF to: 0067d7d0 (READ)
// 00529fe3: MOV dword ptr [EAX + 0x15ae7c],0x4844
//   XREF to: 0326f0f4 (WRITE)
// 00529fed: ADD ESP,0x10
// 00529ff0: MOV dword ptr [EAX + 0x15ae80],0x2000
//   XREF to: 0326f0f8 (WRITE)
// 00529ffa: TEST EDX,EDX
// 00529ffc: JZ 0x0052a12e
//   XREF to: 0052a12e (CONDITIONAL_JUMP)
// 0052a002: XOR EBX,EBX
// 0052a004: MOV ESI,0x2f381e8
//   XREF to: 02f381e8 (DATA)
// 0052a009: FLD float ptr [EBX + 0x2f38210]
//   Label: LAB_0052a009
//   XREF to: 02f38210 (READ)
//   XREF to: 02f38228 (READ)
// 0052a00f: FLDZ
// 0052a011: FCOMPP
// 0052a013: FNSTSW AX
// 0052a015: SAHF
// 0052a016: JA 0x0052a11f
//   XREF to: 0052a11f (CONDITIONAL_JUMP)
// 0052a01c: LEA EAX,[EBP + -0x40]
// 0052a01f: PUSH EAX
// 0052a020: LEA EAX,[EBP + -0x34]
// 0052a023: MOV ECX,dword ptr [EBX + 0x2f3820c]
//   XREF to: 02f3820c (READ)
//   XREF to: 02f38224 (READ)
// 0052a029: PUSH EAX
// 0052a02a: IMUL EAX,ECX,0xc
// 0052a02d: ADD EAX,ESI
// 0052a02f: PUSH dword ptr [EBX + 0x2f38210]
//   XREF to: 02f38210 (READ)
//   XREF to: 02f38228 (READ)
// 0052a035: PUSH EAX
// 0052a036: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 0052a03b: FLD float ptr [EBP + -0x34]
// 0052a03e: FLD float ptr [EBP + -0x30]
// 0052a041: FLD float ptr [EBP + -0x2c]
// 0052a044: MOV EAX,0x2f3820c
//   XREF to: 02f3820c (DATA)
// 0052a049: FLD float ptr [EBP + -0x3c]
// 0052a04c: FXCH ST3
// 0052a04e: FADD float ptr [EBX + EAX*0x1 + 0xc]
//   XREF to: 02f38230 (DATA)
//   XREF to: 02f38218 (READ)
// 0052a052: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052a058: FSTP float ptr [EBP + -0x34]
// 0052a05b: FXCH
// 0052a05d: FADD float ptr [EBX + EAX*0x1 + 0x10]
//   XREF to: 02f38234 (DATA)
//   XREF to: 02f3821c (READ)
// 0052a061: ADD ESP,0x10
// 0052a064: FSTP float ptr [EBP + -0x30]
// 0052a067: FADD float ptr [EBX + EAX*0x1 + 0x14]
//   XREF to: 02f38238 (DATA)
//   XREF to: 02f38220 (READ)
// 0052a06b: LEA EAX,[EBP + -0x34]
// 0052a06e: FXCH
// 0052a070: FADD float ptr [0x00639fb9]
//   XREF to: 00639fb9 (READ)
// 0052a076: PUSH EAX
// 0052a077: FXCH
// 0052a079: FSTP float ptr [EBP + -0x2c]
// 0052a07c: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0052a07d: FSTP float ptr [EBP + -0x3c]
// 0052a080: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0052a085: ADD ESP,0x8
// 0052a088: PUSH 0x0
// 0052a08a: LEA EAX,[EBP + -0x40]
// 0052a08d: PUSH EAX
// 0052a08e: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052a093: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0052a094: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0052a099: ADD ESP,0xc
// 0052a09c: FLD float ptr [EBX + 0x2f38214]
//   XREF to: 02f3822c (DATA)
//   XREF to: 02f38214 (READ)
// 0052a0a2: PUSH -0x1
// 0052a0a4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052a0a9: PUSH 0x0
// 0052a0ab: FISTP dword ptr [EBP + -0x4]
// 0052a0ae: MOV EDX,dword ptr [EBP + -0x4]
// 0052a0b1: PUSH EDX
// 0052a0b2: PUSH 0x2f384dc
//   XREF to: 02f384dc (DATA)
// 0052a0b7: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 0052a0bc: ADD ESP,0x10
// 0052a0bf: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052a0c5: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052a0c6: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 0052a11f: ADD EBX,0x18
//   Label: LAB_0052a11f
// 0052a122: CMP EBX,0x2d0
// 0052a128: JNZ 0x0052a009
//   XREF to: 0052a009 (CONDITIONAL_JUMP)
// 0052a12e: MOV EAX,[0x006810c8]
//   Label: LAB_0052a12e
//   XREF to: 006810c8 (READ)
// 0052a133: PUSH 0x2f37f70
//   XREF to: 02f37f70 (DATA)
// 0052a138: MOV dword ptr [EAX + 0x15ae70],0x0
//   XREF to: 0326f0e8 (WRITE)
// 0052a142: CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
//   XREF to: 00410cf0 (UNCONDITIONAL_CALL)
// 0052a147: MOV EAX,[0x02f381dc]
//   XREF to: 02f381dc (READ)
// 0052a14c: ADD ESP,0x4
// 0052a14f: SAR EAX,0x10
// 0052a152: MOV dword ptr [EBP + -0x20],EAX
// 0052a155: MOV EAX,[0x02f381e0]
//   XREF to: 02f381e0 (READ)
// 0052a15a: SAR EAX,0x10
// 0052a15d: MOV dword ptr [EBP + -0x14],EAX
// 0052a160: MOV EAX,[0x02f37f70]
//   XREF to: 02f37f70 (READ)
// 0052a165: MOV dword ptr [EBP + -0x1c],EAX
// 0052a168: XOR EAX,EAX
// 0052a16a: MOV dword ptr [EBP + -0x18],EAX
// 0052a16d: CMP dword ptr [EBP + -0x18],0x1e0
// 0052a174: JGE 0x0052a250
//   XREF to: 0052a250 (CONDITIONAL_JUMP)
// 0052a17a: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0052a17a
// 0052a17d: MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0052a184: MOV dword ptr [EBP + -0x10],EAX
// 0052a187: XOR ECX,ECX
// 0052a189: MOV EDI,dword ptr [EBP + 0xfffffff0]
// 0052a18f: MOVQ MM0,qword ptr [EDI]
//   Label: LAB_0052a18f
// 0052a192: MOV EAX,ECX
// 0052a194: MOV EBX,dword ptr [EBP + 0xffffffe8]
// 0052a19a: SHR EAX,0x1
// 0052a19c: SHR EBX,0x1
// 0052a19e: ADD EAX,dword ptr [EBP + 0xffffffe0]
// 0052a1a4: ADD EBX,dword ptr [EBP + 0xffffffec]
// 0052a1aa: AND EAX,0xff
// 0052a1af: AND EBX,0xff
// 0052a1b5: SHL EAX,0x8
// 0052a1b8: ADD EAX,EBX
// 0052a1ba: ADD EAX,dword ptr [EBP + 0xffffffe4]
// 0052a1c0: MOVZX EAX,byte ptr [EAX]
// 0052a1c3: SHR EAX,0x2
// 0052a1c6: MOVD MM1,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0052a1ce: MOVQ MM2,MM1
// 0052a1d1: PSLLQ MM2,0x20
// 0052a1d5: POR MM1,MM2
// 0052a1d8: PADDUSB MM0,MM1
// 0052a1db: MOV EAX,ECX
// 0052a1dd: MOV EBX,dword ptr [EBP + 0xffffffe8]
// 0052a1e3: SHR EAX,0x2
// 0052a1e6: SHR EBX,0x2
// 0052a1e9: ADD EAX,dword ptr [EBP + 0xffffffe0]
// 0052a1ef: ADD EBX,dword ptr [EBP + 0xffffffec]
// 0052a1f5: AND EAX,0xff
// 0052a1fa: AND EBX,0xff
// 0052a200: SHL EAX,0x8
// 0052a203: ADD EAX,EBX
// 0052a205: ADD EAX,dword ptr [EBP + 0xffffffe4]
// 0052a20b: MOVZX EAX,byte ptr [EAX]
// 0052a20e: SHR EAX,0x2
// 0052a211: MOVD MM1,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0052a219: MOVQ MM2,MM1
// 0052a21c: PSLLQ MM2,0x20
// 0052a220: POR MM1,MM2
// 0052a223: PADDUSB MM0,MM1
// 0052a226: MOVQ qword ptr [EDI],MM0
// 0052a229: ADD EDI,0x8
// 0052a22c: ADD ECX,0x2
// 0052a22f: CMP ECX,0x280
// 0052a235: JC 0x0052a18f
//   XREF to: 0052a18f (CONDITIONAL_JUMP)
// 0052a23b: EMMS
// 0052a23d: MOV EAX,dword ptr [EBP + -0x18]
// 0052a240: INC dword ptr [EBP + -0x18]
// 0052a243: CMP dword ptr [EBP + -0x18],0x1e0
// 0052a24a: JL 0x0052a17a
//   XREF to: 0052a17a (CONDITIONAL_JUMP)
// 0052a250: PUSH 0x1
//   Label: LAB_0052a250
// 0052a252: CALL engine_3d.c_setBlendMode_FUN_00406dd0
//   XREF to: 00406dd0 (UNCONDITIONAL_CALL)
// 0052a257: FLD float ptr [0x02f381e4]
//   XREF to: 02f381e4 (READ)
// 0052a25d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052a262: FISTP dword ptr [EBP + -0xc]
// 0052a265: MOV ESI,dword ptr [EBP + -0xc]
// 0052a268: ADD ESP,0x4
// 0052a26b: CMP ESI,0x1d
// 0052a26e: JLE 0x0052a275
//   XREF to: 0052a275 (CONDITIONAL_JUMP)
// 0052a270: XOR EDI,EDI
// 0052a272: MOV dword ptr [EBP + -0xc],EDI
// 0052a275: MOV EDX,dword ptr [EBP + -0xc]
//   Label: LAB_0052a275
// 0052a278: LEA EAX,[EDX*0x4 + 0x0]
// 0052a27f: PUSH 0xbb80
// 0052a284: ADD EAX,EDX
// 0052a286: PUSH 0x0
// 0052a288: SHL EAX,0x2
// 0052a28b: PUSH 0x0
// 0052a28d: ADD EAX,0x2f37f84
//   XREF to: 02f37f84 (DATA)
// 0052a292: PUSH EAX
// 0052a293: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 0052a298: ADD ESP,0x10
// 0052a29b: PUSH 0x0
// 0052a29d: CALL engine_3d.c_setBlendMode_FUN_00406dd0
//   XREF to: 00406dd0 (UNCONDITIONAL_CALL)
// 0052a2a2: ADD ESP,0x4
// 0052a2a5: MOV ESP,EBP
// 0052a2a7: POP EBP
// 0052a2a8: POP EDI
// 0052a2a9: POP ESI
// 0052a2aa: POP EBX
// 0052a2ab: RET
