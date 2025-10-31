// Name: core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940
// Address: 0057a940
// Address Range: [[0057a940, 0057ae44]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b77 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_00647629
//   TerminatedCString s_core_setedit_cpp_0064763d
//   TerminatedCString s_Out_of_memory_00647651
//   TerminatedCString s_Visit_d_rotate_d_zcheck__00647660
//   TerminatedCString s_Viewer_pos_8_4f_8_4f_8_4_0064768b
//   TerminatedCString s_f_006476c0
//   TerminatedCString s_core_setedit_cpp_006476c3
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char* g_CurrentDebugFilename = 0067d200
//   void* PTR_DAT_00681ab8 = 03f48f84
//   int g_CubesTestedCount
//   int g_CubesWithVoxelsCount
//   int g_CubesVisibleCount
//   int g_CubesRenderedCount
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   undefined4 g_CDemonCameraInstance.base.projection_scale
//   CDemonRaytrace g_CDemonRaytraceInstance
//   CSkeleton* g_SkeletonPoolEnd
//   undefined4 DAT_03f48f88
//   undefined4 DAT_03f48f8c
//   undefined4 DAT_03f48f90
//   undefined4 DAT_03f48f94
//   undefined4 DAT_03f48f98
//   undefined4 DAT_03f48f9c
// Function calls:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
//   core_setedit.cpp_CDemonSet_FUN_0057ff70
//   core_setedit.cpp_CDemonSet_FUN_005800d0
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
//   core_skeleton.cpp_DoNothing_FUN_005a20a0
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0
//   crt_memory.c_free_FUN_005fe659
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_drawTextXY_FUN_00402130
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_unlockFrame_FUN_005b7250

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_ViewerVisitSet_FUN_0057a940(CDemonSet *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  void *unaff_EBP;
  int y_pos;
  int unaff_EDI;
  CKeys *pCVar4;
  undefined8 in_stack_fffffad8;
  char acStack_134 [256];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *pvStack_20;
  float local_1c;
  undefined4 local_18;
  C3DSCamera *pCStack_14;
  
  local_18 = 0;
  local_1c = 0.0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_list_ptr = (void *)0x0;
  core_skeleton_cpp_FUN_005a2060();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,(CGame *)in_stack_fffffad8);
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  pvStack_20 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0x786);
  if (pvStack_20 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x787;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  pCStack_14 = this_ptr->cameras;
  while( true ) {
    (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,(int)in_stack_fffffad8);
                    /* WARNING: Load size is inaccurate */
    fStack_34 = *PTR_DAT_00681ab8;
    fStack_30 = *(float *)((int)PTR_DAT_00681ab8 + 4);
    fStack_2c = *(float *)((int)PTR_DAT_00681ab8 + 8);
    fStack_28 = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
    fStack_24 = *(float *)((int)PTR_DAT_00681ab8 + 0x10);
    pvStack_20 = *(void **)((int)PTR_DAT_00681ab8 + 0x14);
    local_1c = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
    core_skeleton_cpp_FUN_005a20b0();
    if ((CVector3i *)PTR_DAT_00681ab8 != &g_CDemonCameraInstance.base.position) {
                    /* WARNING: Load size is inaccurate */
      g_CDemonCameraInstance.base.position.x = *PTR_DAT_00681ab8;
      g_CDemonCameraInstance.base.position.z = *(int *)((int)PTR_DAT_00681ab8 + 8);
      g_CDemonCameraInstance.base.position.y = *(int *)((int)PTR_DAT_00681ab8 + 4);
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc));
    g_CDemonCameraInstance.base.projection_scale = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
    if (unaff_EBP != (void *)0x0) {
      g_CDemonRaytraceInstance.rendering_mode = 4;
    }
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_windll_cpp_lockFrame_FUN_005b7210();
                    /* WARNING: Load size is inaccurate */
    if ((((fStack_34 != *PTR_DAT_00681ab8) || (fStack_30 != *(float *)((int)PTR_DAT_00681ab8 + 4)))
        || (fStack_2c != *(float *)((int)PTR_DAT_00681ab8 + 8))) ||
       (((fStack_28 != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
         (fStack_24 != *(float *)((int)PTR_DAT_00681ab8 + 0x10))) ||
        (((float)pvStack_20 != *(float *)((int)PTR_DAT_00681ab8 + 0x14) ||
         (local_1c != *(float *)((int)PTR_DAT_00681ab8 + 0x18))))))) {
      pCStack_14 = (C3DSCamera *)0x0;
    }
    if (unaff_EBP != (void *)0x0) {
      if (pCStack_14 == (C3DSCamera *)0x0) {
        core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00();
        pCStack_14 = (C3DSCamera *)&DAT_00000001;
      }
      core_setedit_cpp_CDemonSet_FUN_0057ff70(this_ptr);
      iVar2 = core_setedit_cpp_CDemonSet_FUN_005800d0(this_ptr);
      if (0 < iVar2) {
        y_pos = 0x21;
        iVar3 = 0;
        do {
          piVar1 = (int *)(&stack0xfffffae4 + iVar3);
          iVar3 = iVar3 + 4;
          engine_2d_c_drawTextXY_FUN_00402130(0,y_pos,(char *)(*piVar1 * 0x1a4 + unaff_EDI));
          y_pos = y_pos + 0xb;
        } while (SBORROW4(iVar3,iVar2 * 4) != iVar3 + iVar2 * -4 < 0);
      }
      shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_134,"Visit %d, rotate: %d, zcheck %d, render %d",g_CubesTestedCount,
               g_CubesWithVoxelsCount,g_CubesVisibleCount);
    engine_2d_c_drawText_FUN_00401fd0(acStack_134,0,0x16);
                    /* WARNING: Load size is inaccurate */
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_134,"Viewer pos: %8.4f,%8.4f,%8.4f pbh: %6.3f,%6.3f,%6.3f",(double)*PTR_DAT_00681ab8,
               (double)*(float *)((int)PTR_DAT_00681ab8 + 4),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0x14),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0x10));
    engine_2d_c_drawText_FUN_00401fd0(acStack_134,0,g_WindowHeight + -0x2c);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_134,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
    engine_2d_c_drawText_FUN_00401fd0(acStack_134,0,g_WindowHeight + -0xb);
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    pCVar4 = g_CKeysPtr;
    iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
    if (iVar2 != 0) break;
    in_stack_fffffad8 = CONCAT44(0x57acdc,pCVar4);
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar2 != 0) {
      g_CDemonRaytraceInstance.rendering_mode = g_CDemonRaytraceInstance.rendering_mode + 1;
    }
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
  }
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x7f0;
  crt_memory_c_free_FUN_005fe659(unaff_EBP);
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  core_skeleton_cpp_DoNothing_FUN_005a20a0();
  core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}


// Assembly code:
// 0057a940: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940
// 0057a941: PUSH ESI
// 0057a942: PUSH EDI
// 0057a943: PUSH EBP
// 0057a944: MOV EBP,ESP
// 0057a946: SUB ESP,0x518
// 0057a94c: AND ESP,0xfffffff8
// 0057a94f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a952: XOR EDX,EDX
// 0057a954: PUSH EBX
// 0057a955: MOV dword ptr [ESP + 0x514],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0057a95c: MOV dword ptr [ESP + 0x510],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057a963: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057a968: ADD ESP,0x4
// 0057a96b: MOV ESI,dword ptr [0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057a971: PUSH ESI
//   XREF to: 03f48f84 (DATA)
// 0057a972: MOV dword ptr [EBX + 0x14d154],0x0
// 0057a97c: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0057a981: ADD ESP,0x4
// 0057a984: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0057a98a: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 0057a98b: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0057a990: ADD ESP,0x4
// 0057a993: PUSH EBX
// 0057a994: CALL core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
//   XREF to: 00580560 (UNCONDITIONAL_CALL)
// 0057a999: ADD ESP,0x4
// 0057a99c: PUSH EBX
// 0057a99d: CALL core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
//   XREF to: 00580310 (UNCONDITIONAL_CALL)
// 0057a9a2: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057a9a7: IMUL EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0057a9ae: ADD ESP,0x4
// 0057a9b1: PUSH 0x786
// 0057a9b6: PUSH 0x647629
//   XREF to: 00647629 (DATA)
// 0057a9bb: PUSH EAX
// 0057a9bc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0057a9c1: ADD ESP,0xc
// 0057a9c4: MOV dword ptr [ESP + 0x508],EAX
// 0057a9cb: TEST EAX,EAX
// 0057a9cd: JZ 0x0057ad1d
//   XREF to: 0057ad1d (CONDITIONAL_JUMP)
// 0057a9d3: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057a9d3
//   XREF to: Stack[0x4] (READ)
// 0057a9d6: ADD EAX,0x4
// 0057a9d9: MOV dword ptr [ESP + 0x514],EAX
// 0057a9e0: MOV EAX,[0x0067cf44]
//   Label: LAB_0057a9e0
//   XREF to: 0067cf44 (READ)
// 0057a9e5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057a9e6: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057a9e8: CALL dword ptr [EBX + 0x8]
// 0057a9eb: MOV EBX,dword ptr [0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057a9f1: ADD ESP,0x4
// 0057a9f4: MOV EAX,dword ptr [EBX]
//   XREF to: 03f48f84 (READ)
// 0057a9f6: MOV dword ptr [ESP + 0x4ec],EAX
// 0057a9fd: LEA EAX,[EBX + 0x4]
//   XREF to: 03f48f88 (DATA)
// 0057aa00: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f88 (READ)
// 0057aa02: MOV dword ptr [ESP + 0x4f0],EAX
// 0057aa09: LEA EAX,[EBX + 0x8]
//   XREF to: 03f48f8c (DATA)
// 0057aa0c: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f8c (READ)
// 0057aa0e: LEA ESI,[EBX + 0xc]
//   XREF to: 03f48f90 (DATA)
// 0057aa11: MOV dword ptr [ESP + 0x4f4],EAX
// 0057aa18: MOV EAX,dword ptr [ESI]
//   XREF to: 03f48f90 (READ)
// 0057aa1a: MOV dword ptr [ESP + 0x4f8],EAX
// 0057aa21: LEA EAX,[ESI + 0x4]
//   XREF to: 03f48f94 (DATA)
// 0057aa24: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f94 (READ)
// 0057aa26: MOV dword ptr [ESP + 0x4fc],EAX
// 0057aa2d: LEA EAX,[ESI + 0x8]
//   XREF to: 03f48f98 (DATA)
// 0057aa30: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f98 (READ)
// 0057aa32: MOV dword ptr [ESP + 0x500],EAX
// 0057aa39: MOV EAX,dword ptr [EBX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057aa3c: PUSH EBX
//   XREF to: 03f48f84 (DATA)
// 0057aa3d: MOV dword ptr [ESP + 0x508],EAX
// 0057aa44: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0057aa49: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057aa4e: ADD ESP,0x4
// 0057aa51: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0057aa56: JZ 0x0057aa72
//   XREF to: 0057aa72 (CONDITIONAL_JUMP)
// 0057aa58: FLD float ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057aa5a: FLD float ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057aa5d: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057aa60: MOV dword ptr [0x032758ec],EDX
//   XREF to: 032758ec (WRITE)
// 0057aa66: FSTP float ptr [0x032758f0]
//   XREF to: 032758f0 (WRITE)
// 0057aa6c: FSTP float ptr [0x032758e8]
//   XREF to: 032758e8 (WRITE)
// 0057aa72: MOV EAX,[0x00681ab8]
//   Label: LAB_0057aa72
//   XREF to: 00681ab8 (READ)
// 0057aa77: ADD EAX,0xc
//   XREF to: 03f48f90 (PARAM)
// 0057aa7a: PUSH EAX
//   XREF to: 03f48f90 (DATA)
// 0057aa7b: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 0057aa80: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0057aa85: MOV EAX,[0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057aa8a: ADD ESP,0x8
// 0057aa8d: MOV EDX,dword ptr [EAX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057aa90: MOV dword ptr [0x0327591c],EDX
//   XREF to: 0327591c (WRITE)
// 0057aa96: CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   XREF to: 005ed580 (UNCONDITIONAL_CALL)
// 0057aa9b: PUSH 0x0
// 0057aa9d: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057aaa2: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0057aaa7: ADD ESP,0x8
// 0057aaaa: CMP dword ptr [ESP + 0x510],0x0
// 0057aab2: JZ 0x0057aabe
//   XREF to: 0057aabe (CONDITIONAL_JUMP)
// 0057aab4: MOV dword ptr [0x03277d14],0x4
//   XREF to: 03277d14 (WRITE)
// 0057aabe: PUSH 0x0
//   Label: LAB_0057aabe
// 0057aac0: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057aac3: PUSH 0x461c3f9a
// 0057aac8: PUSH EDX
// 0057aac9: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0057aace: ADD ESP,0xc
// 0057aad1: PUSH 0x0
// 0057aad3: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057aad8: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0057aadd: ADD ESP,0x8
// 0057aae0: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 0057aae5: MOV EBX,dword ptr [0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057aaeb: FLD float ptr [ESP + 0x4ec]
// 0057aaf2: FCOMP float ptr [EBX]
//   XREF to: 03f48f84 (READ)
// 0057aaf4: FNSTSW AX
// 0057aaf6: SAHF
// 0057aaf7: JZ 0x0057ad45
//   XREF to: 0057ad45 (CONDITIONAL_JUMP)
// 0057aafd: XOR ECX,ECX
//   Label: LAB_0057aafd
// 0057aaff: MOV dword ptr [ESP + 0x50c],ECX
// 0057ab06: CMP dword ptr [ESP + 0x510],0x0
//   Label: LAB_0057ab06
// 0057ab0e: JZ 0x0057ab9c
//   XREF to: 0057ab9c (CONDITIONAL_JUMP)
// 0057ab14: CMP dword ptr [ESP + 0x50c],0x0
// 0057ab1c: JZ 0x0057adbe
//   XREF to: 0057adbe (CONDITIONAL_JUMP)
// 0057ab22: MOV ECX,dword ptr [ESP + 0x508]
//   Label: LAB_0057ab22
// 0057ab29: PUSH ECX
// 0057ab2a: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ab2d: PUSH EBX
// 0057ab2e: CALL core_setedit.cpp_CDemonSet_FUN_0057ff70
//   XREF to: 0057ff70 (UNCONDITIONAL_CALL)
// 0057ab33: ADD ESP,0x8
// 0057ab36: PUSH -0x1
// 0057ab38: LEA EAX,[ESP + 0x8]
// 0057ab3c: PUSH EAX
// 0057ab3d: MOV ESI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0057ab43: PUSH ESI
// 0057ab44: MOV EDI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0057ab4a: PUSH EDI
// 0057ab4b: PUSH EBX
// 0057ab4c: CALL core_setedit.cpp_CDemonSet_FUN_005800d0
//   XREF to: 005800d0 (UNCONDITIONAL_CALL)
// 0057ab51: ADD ESP,0x14
// 0057ab54: TEST EAX,EAX
// 0057ab56: JLE 0x0057ab8b
//   XREF to: 0057ab8b (CONDITIONAL_JUMP)
// 0057ab58: MOV ESI,0x21
// 0057ab5d: LEA EDI,[EAX*0x4 + 0x0]
// 0057ab64: XOR EBX,EBX
// 0057ab66: IMUL EAX,dword ptr [ESP + EBX*0x1 + 0x4],0x1a4
//   Label: LAB_0057ab66
// 0057ab6e: ADD EAX,dword ptr [ESP + 0x514]
// 0057ab75: PUSH EAX
// 0057ab76: PUSH ESI
// 0057ab77: PUSH 0x0
// 0057ab79: ADD EBX,0x4
// 0057ab7c: CALL engine_2d.c_drawTextXY_FUN_00402130
//   XREF to: 00402130 (UNCONDITIONAL_CALL)
// 0057ab81: ADD ESI,0xb
// 0057ab84: ADD ESP,0xc
// 0057ab87: CMP EBX,EDI
// 0057ab89: JL 0x0057ab66
//   XREF to: 0057ab66 (CONDITIONAL_JUMP)
// 0057ab8b: PUSH 0x0
//   Label: LAB_0057ab8b
// 0057ab8d: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057ab93: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0057ab94: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0057ab99: ADD ESP,0x8
// 0057ab9c: MOV ESI,dword ptr [0x02ca03a0]
//   Label: LAB_0057ab9c
//   XREF to: 02ca03a0 (READ)
// 0057aba2: PUSH ESI
// 0057aba3: MOV EDI,dword ptr [0x02ca039c]
//   XREF to: 02ca039c (READ)
// 0057aba9: PUSH EDI
// 0057abaa: MOV EAX,[0x02ca0398]
//   XREF to: 02ca0398 (READ)
// 0057abaf: PUSH EAX
// 0057abb0: MOV EDX,dword ptr [0x02ca0394]
//   XREF to: 02ca0394 (READ)
// 0057abb6: PUSH EDX
// 0057abb7: PUSH 0x647660
//   XREF to: 00647660 (DATA)
// 0057abbc: LEA EAX,[ESP + 0x400]
// 0057abc3: PUSH EAX
// 0057abc4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057abc9: ADD ESP,0x18
// 0057abcc: PUSH 0x16
// 0057abce: PUSH 0x0
// 0057abd0: LEA EAX,[ESP + 0x3f4]
// 0057abd7: PUSH EAX
// 0057abd8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057abdd: ADD ESP,0xc
// 0057abe0: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057abe5: SUB ESP,0x8
// 0057abe8: FLD float ptr [EAX + 0x10]
//   XREF to: 03f48f94 (READ)
// 0057abeb: FSTP double ptr [ESP]
// 0057abee: SUB ESP,0x8
// 0057abf1: FLD float ptr [EAX + 0x14]
//   XREF to: 03f48f98 (READ)
// 0057abf4: FSTP double ptr [ESP]
// 0057abf7: SUB ESP,0x8
// 0057abfa: FLD float ptr [EAX + 0xc]
//   XREF to: 03f48f90 (READ)
// 0057abfd: FSTP double ptr [ESP]
// 0057ac00: SUB ESP,0x8
// 0057ac03: FLD float ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057ac06: FSTP double ptr [ESP]
// 0057ac09: SUB ESP,0x8
// 0057ac0c: FLD float ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057ac0f: FSTP double ptr [ESP]
// 0057ac12: SUB ESP,0x8
// 0057ac15: FLD float ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057ac17: FSTP double ptr [ESP]
// 0057ac1a: PUSH 0x64768b
//   XREF to: 0064768b (DATA)
// 0057ac1f: LEA EAX,[ESP + 0x420]
// 0057ac26: PUSH EAX
// 0057ac27: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057ac2c: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057ac31: ADD ESP,0x38
// 0057ac34: SUB EAX,0x2c
// 0057ac37: PUSH EAX
// 0057ac38: PUSH 0x0
// 0057ac3a: LEA EAX,[ESP + 0x3f4]
// 0057ac41: PUSH EAX
// 0057ac42: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057ac47: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0057ac4c: ADD ESP,0xc
// 0057ac4f: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0057ac55: MOV dword ptr [ESP],EAX
// 0057ac58: FLD float ptr [ESP]
// 0057ac5b: FLD1
// 0057ac5d: FDIVRP
// 0057ac5f: SUB ESP,0x8
// 0057ac62: FSTP double ptr [ESP]
// 0057ac65: PUSH 0x6476c0
//   XREF to: 006476c0 (DATA)
// 0057ac6a: LEA EAX,[ESP + 0x3f8]
// 0057ac71: PUSH EAX
// 0057ac72: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057ac77: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057ac7c: ADD ESP,0x10
// 0057ac7f: SUB EAX,0xb
// 0057ac82: PUSH EAX
// 0057ac83: PUSH 0x0
// 0057ac85: LEA EAX,[ESP + 0x3f4]
// 0057ac8c: PUSH EAX
// 0057ac8d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057ac92: ADD ESP,0xc
// 0057ac95: PUSH 0x0
// 0057ac97: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 0057ac9c: ADD ESP,0x4
// 0057ac9f: CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   XREF to: 005ed630 (UNCONDITIONAL_CALL)
// 0057aca4: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0057aca9: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0057acaf: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 0057acb0: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0057acb5: ADD ESP,0x4
// 0057acb8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057acbd: PUSH 0x1
// 0057acbf: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057acc1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057acc2: CALL dword ptr [EBX]
// 0057acc4: ADD ESP,0x8
// 0057acc7: TEST EAX,EAX
// 0057acc9: JNZ 0x0057ade5
//   XREF to: 0057ade5 (CONDITIONAL_JUMP)
// 0057accf: PUSH 0x13
// 0057acd1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057acd6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057acd7: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057acd9: CALL dword ptr [EBX + 0x4]
// 0057acdc: ADD ESP,0x8
// 0057acdf: TEST EAX,EAX
// 0057ace1: JZ 0x0057ace9
//   XREF to: 0057ace9 (CONDITIONAL_JUMP)
// 0057ace3: INC dword ptr [0x03277d14]
//   XREF to: 03277d14 (READ_WRITE)
// 0057ace9: PUSH 0x2e
//   Label: LAB_0057ace9
// 0057aceb: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057acf0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057acf1: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057acf3: CALL dword ptr [EBX + 0x4]
// 0057acf6: ADD ESP,0x8
// 0057acf9: TEST EAX,EAX
// 0057acfb: JZ 0x0057a9e0
//   XREF to: 0057a9e0 (CONDITIONAL_JUMP)
// 0057ad01: CMP dword ptr [ESP + 0x510],0x0
// 0057ad09: SETZ AL
// 0057ad0c: AND EAX,0xff
// 0057ad11: MOV dword ptr [ESP + 0x510],EAX
// 0057ad18: JMP 0x0057a9e0
//   XREF to: 0057a9e0 (UNCONDITIONAL_JUMP)
// 0057ad1d: MOV EBX,0x64763d
//   Label: LAB_0057ad1d
//   XREF to: 0064763d (PARAM)
// 0057ad22: MOV ESI,0x787
// 0057ad27: PUSH 0x647651
//   XREF to: 00647651 (DATA)
// 0057ad2c: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0057ad32: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0057ad38: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057ad3d: ADD ESP,0x4
// 0057ad40: JMP 0x0057a9d3
//   XREF to: 0057a9d3 (UNCONDITIONAL_JUMP)
// 0057ad45: FLD float ptr [ESP + 0x4f0]
//   Label: LAB_0057ad45
// 0057ad4c: FCOMP float ptr [EBX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057ad4f: FNSTSW AX
// 0057ad51: SAHF
// 0057ad52: JNZ 0x0057aafd
//   XREF to: 0057aafd (CONDITIONAL_JUMP)
// 0057ad58: FLD float ptr [ESP + 0x4f4]
// 0057ad5f: FCOMP float ptr [EBX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057ad62: FNSTSW AX
// 0057ad64: SAHF
// 0057ad65: JNZ 0x0057aafd
//   XREF to: 0057aafd (CONDITIONAL_JUMP)
// 0057ad6b: LEA ESI,[EBX + 0xc]
//   XREF to: 03f48f90 (DATA)
// 0057ad6e: FLD float ptr [ESP + 0x4f8]
// 0057ad75: FCOMP float ptr [ESI]
//   XREF to: 03f48f90 (READ)
// 0057ad77: FNSTSW AX
// 0057ad79: SAHF
// 0057ad7a: JNZ 0x0057aafd
//   XREF to: 0057aafd (CONDITIONAL_JUMP)
// 0057ad80: FLD float ptr [ESP + 0x4fc]
// 0057ad87: FCOMP float ptr [ESI + 0x4]
//   XREF to: 03f48f94 (READ)
// 0057ad8a: FNSTSW AX
// 0057ad8c: SAHF
// 0057ad8d: JNZ 0x0057aafd
//   XREF to: 0057aafd (CONDITIONAL_JUMP)
// 0057ad93: FLD float ptr [ESP + 0x500]
// 0057ad9a: FCOMP float ptr [ESI + 0x8]
//   XREF to: 03f48f98 (READ)
// 0057ad9d: FNSTSW AX
// 0057ad9f: SAHF
// 0057ada0: JNZ 0x0057aafd
//   XREF to: 0057aafd (CONDITIONAL_JUMP)
// 0057ada6: FLD float ptr [ESP + 0x504]
// 0057adad: FCOMP float ptr [EBX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057adb0: FNSTSW AX
// 0057adb2: SAHF
// 0057adb3: JNZ 0x0057aafd
//   XREF to: 0057aafd (CONDITIONAL_JUMP)
// 0057adb9: JMP 0x0057ab06
//   XREF to: 0057ab06 (UNCONDITIONAL_JUMP)
// 0057adbe: PUSH -0x1
//   Label: LAB_0057adbe
// 0057adc0: MOV EDI,dword ptr [ESP + 0x50c]
// 0057adc7: PUSH EDI
// 0057adc8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057adcb: PUSH EAX
// 0057adcc: CALL core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
//   XREF to: 0057fd00 (UNCONDITIONAL_CALL)
// 0057add1: MOV EDX,0x1
// 0057add6: ADD ESP,0xc
// 0057add9: MOV dword ptr [ESP + 0x50c],EDX
// 0057ade0: JMP 0x0057ab22
//   XREF to: 0057ab22 (UNCONDITIONAL_JUMP)
// 0057ade5: MOV EDI,0x6476c3
//   Label: LAB_0057ade5
//   XREF to: 006476c3 (DATA)
// 0057adea: MOV EDX,dword ptr [ESP + 0x508]
// 0057adf1: MOV EAX,0x7f0
// 0057adf6: PUSH EDX
// 0057adf7: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 0057adfd: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 0057ae02: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0057ae07: ADD ESP,0x4
// 0057ae0a: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ae0d: PUSH ECX
// 0057ae0e: CALL core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
//   XREF to: 00580560 (UNCONDITIONAL_CALL)
// 0057ae13: ADD ESP,0x4
// 0057ae16: MOV EBX,dword ptr [0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057ae1c: PUSH EBX
//   XREF to: 03f48f84 (DATA)
// 0057ae1d: CALL core_skeleton.cpp_DoNothing_FUN_005a20a0
//   XREF to: 005a20a0 (UNCONDITIONAL_CALL)
// 0057ae22: ADD ESP,0x4
// 0057ae25: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ae28: PUSH ESI
// 0057ae29: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057ae2e: ADD ESP,0x4
// 0057ae31: XOR EDI,EDI
// 0057ae33: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0057ae38: MOV dword ptr [0x03277d14],EDI
//   XREF to: 03277d14 (WRITE)
// 0057ae3e: MOV ESP,EBP
// 0057ae40: POP EBP
// 0057ae41: POP EDI
// 0057ae42: POP ESI
// 0057ae43: POP EBX
// 0057ae44: RET
