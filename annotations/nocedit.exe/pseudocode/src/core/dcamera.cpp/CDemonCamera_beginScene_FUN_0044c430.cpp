// Name: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
// Address: 0044c430
// Address Range: [[0044c430, 0044c73f]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
// Cross-references:
//   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970 (0053c970) at 0053c9b9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053babf [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a322 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c221 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a76d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b385 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581c8f [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005833eb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aaa2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fe18 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dd1d [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_3_0044c42c = 0044c4b6
//   TerminatedCString s_Attack_00619fb2
//   TerminatedCString s_Sustain_00619fbc
//   TerminatedCString s_Decay_00619fc7
//   TerminatedCString s_core_dcamera_cpp_00619fd0
//   TerminatedCString s_CDemonCamera_beginScene__00619fe4
//   CConsole* g_CConsolePtr = 0083b1a4
//   int g_CameraShakePeakValue = 0x10000
//   int g_CameraShakeSustainValue = 0xc80000
//   int g_CameraShakeState = 0x3
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CConsole g_ConsolePtr
//   int g_CameraShakeSustainTimer
//   int g_CameraShakeAttackTime
//   int g_CameraShakeAttackAccum
//   int g_CameraShakeDecayDuration
//   int g_CameraShakeDecayTimer
//   int g_CameraShakeAccumulator
//   int g_CameraShakeOffsetX
//   int g_CameraShakeOffsetY
//   int g_CameraScreenWidth
//   int g_CameraScreenHeight
//   CDemonRenderer g_CDemonRendererInstance
//   int g_GlobalDeltaTimeInt
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_FullscreenMode
// Function calls:
//   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
//   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
//   wincore_windll.cpp_beginScene_FUN_005b7280
//   wincore_windll.cpp_clear_FUN_005b7a30
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_windll.cpp_clearZBuffer_FUN_005b7be0

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uStack00000014;
  char *format;
  
  iVar3 = 0;
  switch(g_CameraShakeState) {
  case 0:
    g_CameraShakeAttackAccum = g_CameraShakeAttackAccum + g_GlobalDeltaTimeInt;
    if (g_CameraShakeAttackTime < g_CameraShakeAttackAccum) {
      g_CameraShakeAttackAccum = g_CameraShakeAttackTime;
      g_CameraShakeState = 1;
      g_CameraShakeSustainTimer = g_CameraShakeSustainValue;
    }
    if (g_CameraShakeAttackTime != 0) {
      iVar3 = (int)(((longlong)g_CameraShakePeakValue * (longlong)g_CameraShakeAttackAccum) /
                   (longlong)g_CameraShakeAttackTime);
    }
    format = "Attack : ";
    break;
  case 1:
    g_CameraShakeSustainTimer = g_CameraShakeSustainTimer - g_GlobalDeltaTimeInt;
    if (g_CameraShakeSustainTimer < 0) {
      g_CameraShakeSustainTimer = 0;
      g_CameraShakeState = 2;
      g_CameraShakeDecayTimer = g_CameraShakeDecayDuration;
    }
    format = "Sustain : ";
    iVar3 = g_CameraShakePeakValue;
    break;
  case 2:
    g_CameraShakeDecayTimer = g_CameraShakeDecayTimer - g_GlobalDeltaTimeInt;
    if (g_CameraShakeDecayTimer < 0) {
      g_CameraShakeDecayTimer = 0;
      g_CameraShakeState = 3;
    }
    if (g_CameraShakeDecayDuration != 0) {
      iVar3 = (int)(((longlong)g_CameraShakePeakValue * (longlong)g_CameraShakeDecayTimer) /
                   (longlong)g_CameraShakeDecayDuration);
    }
    format = "Decay : ";
    break;
  default:
    goto switchD_0044c448_caseD_3;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,format);
switchD_0044c448_caseD_3:
  g_CameraShakeAccumulator =
       g_CameraShakeAccumulator +
       ((uint)((longlong)iVar3 * (longlong)g_GlobalDeltaTimeInt) >> 0x10 |
       (int)((ulonglong)((longlong)iVar3 * (longlong)g_GlobalDeltaTimeInt) >> 0x20) << 0x10);
  uVar2 = g_CameraShakeOffsetY;
  if (0xffff < g_CameraShakeAccumulator) {
    uVar1 = g_GlobalDeltaTimeInt & 1;
    g_CameraShakeAccumulator = 0;
    uVar2 = (int)(g_GlobalDeltaTimeInt & 2U) >> 1;
    bVar4 = g_CameraShakeOffsetX == uVar1;
    g_CameraShakeOffsetX = uVar1;
    if ((bVar4) && (g_CameraShakeOffsetY == uVar2)) {
      uVar2 = (uint)(uVar2 == 0);
    }
  }
  g_CameraShakeOffsetY = uVar2;
  if ((this_ptr->framebuffer_height < 0x1e0) || (g_CameraShakeState == 3)) {
    g_CameraShakeOffsetX = 0;
    g_CameraShakeOffsetY = 0;
  }
  if (this_ptr->scene_open_flag == 0) {
    this_ptr->scene_open_flag = 1;
  }
  else {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x2e2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::beginScene - Scene already open!");
  }
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(this_ptr,skip_clear_buffers);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
            (g_CDemonRendererPtr,0,0,g_CameraScreenWidth + -1,g_CameraScreenHeight + -1);
  iVar3 = g_CameraShakeOffsetX;
  (this_ptr->viewport_rect).left = 0;
  (this_ptr->viewport_rect).top = 0;
  this_ptr->rect_array_count = 0;
  g_ViewportRightFixed = g_ViewportRightFixed + iVar3 * 0x10000;
  (this_ptr->viewport_rect).right = this_ptr->framebuffer_width + -1;
  g_ViewportBottomFixed = g_ViewportBottomFixed + g_CameraShakeOffsetY * -0x10000;
  (this_ptr->viewport_rect).bottom = this_ptr->framebuffer_height + -1;
  this_ptr_00 = g_CDemonRendererPtr;
  this_ptr->skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (this_ptr_00,&(this_ptr->base).position);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr,(this_ptr->base).projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr,(CMatrix3x3f *)&(this_ptr->base).rotation_matrix,
             (CVector3f *)this_ptr);
  if (skip_clear_buffers == 0) {
    if (g_FullscreenMode != 0) {
      wincore_windll_cpp_beginScene_FUN_005b7280();
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_clear_FUN_005b7a30();
      uStack00000014 = 0x44c670;
      wincore_windll_cpp_clearZBuffer_FUN_005b7be0();
    }
  }
  uStack00000014 = 0x44c676;
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(this_ptr);
  return;
}


// Assembly code:
// 0044c430: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
// 0044c431: PUSH ESI
// 0044c432: PUSH EDI
// 0044c433: PUSH EBP
// 0044c434: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044c438: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044c43c: MOV EAX,[0x0066ed00]
//   XREF to: 0066ed00 (READ)
// 0044c441: XOR EBX,EBX
// 0044c443: CMP EAX,0x3
// 0044c446: JA 0x0044c4b6
//   XREF to: 0044c4b6 (CONDITIONAL_JUMP)
// 0044c448: JMP dword ptr [EAX*0x4 + 0x44c420]
//   Label: switchD
//   XREF to: 0044c44f (COMPUTED_JUMP)
//   XREF to: 0044c4b6 (COMPUTED_JUMP)
//   XREF to: 0044c67e (COMPUTED_JUMP)
//   XREF to: 0044c6c8 (COMPUTED_JUMP)
//   XREF to: 0044c42c (READ)
//   XREF to: 0044c4b6 (COMPUTED_JUMP)
// 0044c44f: MOV EBP,dword ptr [0x013da760]
//   Label: caseD_0
//   XREF to: 013da760 (READ)
// 0044c455: ADD EBP,dword ptr [0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 0044c45b: MOV EDX,dword ptr [0x013da75c]
//   XREF to: 013da75c (READ)
// 0044c461: MOV dword ptr [0x013da760],EBP
//   XREF to: 013da760 (WRITE)
// 0044c467: CMP EBP,EDX
// 0044c469: JLE 0x0044c486
//   XREF to: 0044c486 (CONDITIONAL_JUMP)
// 0044c46b: MOV ECX,0x1
// 0044c470: MOV EAX,[0x0066ecfc]
//   XREF to: 0066ecfc (READ)
// 0044c475: MOV dword ptr [0x013da760],EDX
//   XREF to: 013da760 (WRITE)
// 0044c47b: MOV dword ptr [0x0066ed00],ECX
//   XREF to: 0066ed00 (WRITE)
// 0044c481: MOV [0x013da758],EAX
//   XREF to: 013da758 (WRITE)
// 0044c486: MOV EBP,dword ptr [0x013da75c]
//   Label: LAB_0044c486
//   XREF to: 013da75c (READ)
// 0044c48c: TEST EBP,EBP
// 0044c48e: JZ 0x0044c4a3
//   XREF to: 0044c4a3 (CONDITIONAL_JUMP)
// 0044c490: MOV EDX,dword ptr [0x013da760]
//   XREF to: 013da760 (READ)
// 0044c496: MOV EAX,[0x0066ecf8]
//   XREF to: 0066ecf8 (READ)
// 0044c49b: MOV EBX,EBP
// 0044c49d: IMUL EDX
// 0044c49f: IDIV EBX
// 0044c4a1: MOV EBX,EAX
// 0044c4a3: PUSH 0x619fb2
//   Label: LAB_0044c4a3
//   XREF to: 00619fb2 (DATA)
// 0044c4a8: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0044c4ad: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 0044c4ae: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   Label: LAB_0044c4ae
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0044c4b3: ADD ESP,0x8
// 0044c4b6: MOV EDX,dword ptr [0x02cf6a80]
//   Label: caseD_3
//   XREF to: 02cf6a80 (READ)
// 0044c4bc: MOV EAX,EBX
// 0044c4be: IMUL EDX
// 0044c4c0: SHRD EAX,EDX,0x10
// 0044c4c4: MOV EDX,dword ptr [0x013da76c]
//   XREF to: 013da76c (READ)
// 0044c4ca: ADD EDX,EAX
// 0044c4cc: MOV dword ptr [0x013da76c],EDX
//   XREF to: 013da76c (WRITE)
// 0044c4d2: CMP EDX,0xffff
// 0044c4d8: JLE 0x0044c527
//   XREF to: 0044c527 (CONDITIONAL_JUMP)
// 0044c4da: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 0044c4df: MOV EDX,dword ptr [0x013da770]
//   XREF to: 013da770 (READ)
// 0044c4e5: AND EAX,0x1
// 0044c4e8: XOR EBX,EBX
// 0044c4ea: MOV [0x013da770],EAX
//   XREF to: 013da770 (WRITE)
// 0044c4ef: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 0044c4f4: MOV dword ptr [0x013da76c],EBX
//   XREF to: 013da76c (WRITE)
// 0044c4fa: AND EAX,0x2
// 0044c4fd: MOV EBX,dword ptr [0x013da774]
//   XREF to: 013da774 (READ)
// 0044c503: SAR EAX,0x1
// 0044c505: MOV EBP,dword ptr [0x013da770]
//   XREF to: 013da770 (READ)
// 0044c50b: MOV [0x013da774],EAX
//   XREF to: 013da774 (WRITE)
// 0044c510: CMP EDX,EBP
// 0044c512: JNZ 0x0044c527
//   XREF to: 0044c527 (CONDITIONAL_JUMP)
// 0044c514: CMP EBX,EAX
// 0044c516: JNZ 0x0044c527
//   XREF to: 0044c527 (CONDITIONAL_JUMP)
// 0044c518: TEST EAX,EAX
// 0044c51a: SETZ AL
// 0044c51d: AND EAX,0xff
// 0044c522: MOV [0x013da774],EAX
//   XREF to: 013da774 (WRITE)
// 0044c527: CMP dword ptr [ESI + 0x148],0x1e0
//   Label: LAB_0044c527
// 0044c531: JGE 0x0044c71f
//   XREF to: 0044c71f (CONDITIONAL_JUMP)
// 0044c537: XOR EBP,EBP
//   Label: LAB_0044c537
// 0044c539: MOV dword ptr [0x013da770],EBP
//   XREF to: 013da770 (WRITE)
// 0044c53f: MOV dword ptr [0x013da774],EBP
//   XREF to: 013da774 (WRITE)
// 0044c545: CMP dword ptr [ESI + 0x11e4],0x0
//   Label: LAB_0044c545
// 0044c54c: JZ 0x0044c731
//   XREF to: 0044c731 (CONDITIONAL_JUMP)
// 0044c552: MOV ECX,0x619fd0
//   XREF to: 00619fd0 (PARAM)
// 0044c557: MOV EBX,0x2e2
// 0044c55c: PUSH 0x619fe4
//   XREF to: 00619fe4 (DATA)
// 0044c561: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0044c567: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0044c56d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044c572: ADD ESP,0x4
// 0044c575: PUSH EDI
//   Label: LAB_0044c575
// 0044c576: PUSH ESI
// 0044c577: CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
//   XREF to: 0044c3e0 (UNCONDITIONAL_CALL)
// 0044c57c: MOV EAX,[0x0151a3a8]
//   XREF to: 0151a3a8 (READ)
// 0044c581: ADD ESP,0x8
// 0044c584: DEC EAX
// 0044c585: PUSH EAX
// 0044c586: MOV EAX,[0x0151a3a4]
//   XREF to: 0151a3a4 (READ)
// 0044c58b: DEC EAX
// 0044c58c: PUSH EAX
// 0044c58d: PUSH 0x0
// 0044c58f: PUSH 0x0
// 0044c591: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044c597: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0044c598: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 0044c59d: MOV EAX,[0x013da770]
//   XREF to: 013da770 (READ)
// 0044c5a2: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0044c5a8: MOV dword ptr [ESI + 0x11d4],0x0
// 0044c5b2: MOV ECX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0044c5b8: MOV dword ptr [ESI + 0x11d8],0x0
// 0044c5c2: ADD ESP,0x14
// 0044c5c5: MOV EBX,dword ptr [ESI + 0x144]
// 0044c5cb: MOV dword ptr [ESI + 0x1d0],0x0
// 0044c5d5: SHL EAX,0x10
// 0044c5d8: DEC EBX
// 0044c5d9: ADD EDX,EAX
// 0044c5db: MOV dword ptr [ESI + 0x11dc],EBX
// 0044c5e1: MOV EAX,[0x013da774]
//   XREF to: 013da774 (READ)
// 0044c5e6: MOV EBX,dword ptr [ESI + 0x148]
// 0044c5ec: SHL EAX,0x10
// 0044c5ef: DEC EBX
// 0044c5f0: SUB ECX,EAX
// 0044c5f2: LEA EAX,[ESI + 0x4]
// 0044c5f5: MOV dword ptr [ESI + 0x11e0],EBX
// 0044c5fb: PUSH EAX
// 0044c5fc: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044c602: MOV dword ptr [ESI + 0x168],EDI
// 0044c608: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0044c609: MOV dword ptr [0x02d02550],EDX
//   XREF to: 02d02550 (WRITE)
// 0044c60f: MOV dword ptr [0x02d02554],ECX
//   XREF to: 02d02554 (WRITE)
// 0044c615: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 0044c61a: ADD ESP,0x8
// 0044c61d: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044c623: PUSH dword ptr [ESI + 0x38]
// 0044c626: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0044c627: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 0044c62c: ADD ESP,0x8
// 0044c62f: LEA EAX,[ESI + 0x10]
// 0044c632: PUSH EAX
// 0044c633: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044c638: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0044c639: CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
//   XREF to: 0048c200 (UNCONDITIONAL_CALL)
// 0044c63e: ADD ESP,0x8
// 0044c641: TEST EDI,EDI
// 0044c643: JNZ 0x0044c670
//   XREF to: 0044c670 (CONDITIONAL_JUMP)
// 0044c645: CMP dword ptr [0x03f6b878],0x0
//   XREF to: 03f6b878 (READ)
// 0044c64c: JZ 0x0044c653
//   XREF to: 0044c653 (CONDITIONAL_JUMP)
// 0044c64e: CALL wincore_windll.cpp_beginScene_FUN_005b7280
//   XREF to: 005b7280 (UNCONDITIONAL_CALL)
// 0044c653: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0044c653
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0044c658: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0044c65d: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0044c664: JZ 0x0044c670
//   XREF to: 0044c670 (CONDITIONAL_JUMP)
// 0044c666: CALL wincore_windll.cpp_clear_FUN_005b7a30
//   XREF to: 005b7a30 (UNCONDITIONAL_CALL)
// 0044c66b: CALL wincore_windll.cpp_clearZBuffer_FUN_005b7be0
//   XREF to: 005b7be0 (UNCONDITIONAL_CALL)
// 0044c670: PUSH ESI
//   Label: LAB_0044c670
// 0044c671: CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
//   XREF to: 0044d1c0 (UNCONDITIONAL_CALL)
// 0044c676: ADD ESP,0x4
// 0044c679: POP EBP
// 0044c67a: POP EDI
// 0044c67b: POP ESI
// 0044c67c: POP EBX
// 0044c67d: RET
// 0044c67e: MOV EBX,dword ptr [0x013da758]
//   Label: caseD_1
//   XREF to: 013da758 (READ)
// 0044c684: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 0044c689: SUB EBX,EAX
// 0044c68b: MOV dword ptr [0x013da758],EBX
//   XREF to: 013da758 (WRITE)
// 0044c691: TEST EBX,EBX
// 0044c693: JGE 0x0044c6b1
//   XREF to: 0044c6b1 (CONDITIONAL_JUMP)
// 0044c695: XOR EAX,EAX
// 0044c697: MOV EDX,0x2
// 0044c69c: MOV [0x013da758],EAX
//   XREF to: 013da758 (WRITE)
// 0044c6a1: MOV EAX,[0x013da764]
//   XREF to: 013da764 (READ)
// 0044c6a6: MOV dword ptr [0x0066ed00],EDX
//   XREF to: 0066ed00 (WRITE)
// 0044c6ac: MOV [0x013da768],EAX
//   XREF to: 013da768 (WRITE)
// 0044c6b1: PUSH 0x619fbc
//   Label: LAB_0044c6b1
//   XREF to: 00619fbc (DATA)
// 0044c6b6: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0044c6bc: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0044c6bd: MOV EBX,dword ptr [0x0066ecf8]
//   XREF to: 0066ecf8 (READ)
// 0044c6c3: JMP 0x0044c4ae
//   XREF to: 0044c4ae (UNCONDITIONAL_JUMP)
// 0044c6c8: MOV EDX,dword ptr [0x013da768]
//   Label: caseD_2
//   XREF to: 013da768 (READ)
// 0044c6ce: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 0044c6d3: SUB EDX,EAX
// 0044c6d5: MOV dword ptr [0x013da768],EDX
//   XREF to: 013da768 (WRITE)
// 0044c6db: TEST EDX,EDX
// 0044c6dd: JL 0x0044c70d
//   XREF to: 0044c70d (CONDITIONAL_JUMP)
// 0044c6df: MOV EDX,dword ptr [0x013da764]
//   Label: LAB_0044c6df
//   XREF to: 013da764 (READ)
// 0044c6e5: TEST EDX,EDX
// 0044c6e7: JZ 0x0044c6fc
//   XREF to: 0044c6fc (CONDITIONAL_JUMP)
// 0044c6e9: MOV EAX,[0x0066ecf8]
//   XREF to: 0066ecf8 (READ)
// 0044c6ee: MOV EBX,EDX
// 0044c6f0: MOV EDX,dword ptr [0x013da768]
//   XREF to: 013da768 (READ)
// 0044c6f6: IMUL EDX
// 0044c6f8: IDIV EBX
// 0044c6fa: MOV EBX,EAX
// 0044c6fc: PUSH 0x619fc7
//   Label: LAB_0044c6fc
//   XREF to: 00619fc7 (DATA)
// 0044c701: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0044c707: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0044c708: JMP 0x0044c4ae
//   XREF to: 0044c4ae (UNCONDITIONAL_JUMP)
// 0044c70d: MOV EAX,0x3
//   Label: LAB_0044c70d
// 0044c712: MOV dword ptr [0x013da768],EBX
//   XREF to: 013da768 (WRITE)
// 0044c718: MOV [0x0066ed00],EAX
//   XREF to: 0066ed00 (WRITE)
// 0044c71d: JMP 0x0044c6df
//   XREF to: 0044c6df (UNCONDITIONAL_JUMP)
// 0044c71f: CMP dword ptr [0x0066ed00],0x3
//   Label: LAB_0044c71f
//   XREF to: 0066ed00 (READ)
// 0044c726: JZ 0x0044c537
//   XREF to: 0044c537 (CONDITIONAL_JUMP)
// 0044c72c: JMP 0x0044c545
//   XREF to: 0044c545 (UNCONDITIONAL_JUMP)
// 0044c731: MOV dword ptr [ESI + 0x11e4],0x1
//   Label: LAB_0044c731
// 0044c73b: JMP 0x0044c575
//   XREF to: 0044c575 (UNCONDITIONAL_JUMP)
