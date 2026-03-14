// Name: core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940
// Address: 0057a940
// Address Range: [[0057a940, 0057ae44]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showScenePreview_FUN_0057a940(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showScenePreview_FUN_0057a940(CDemonSet *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  void *pvVar9;
  C3DSCamera *ptr;
  int iVar2;
  int iVar10;
  int iVar3;
  int unaff_EBP;
  int y;
  char acStack_138 [256];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *pvStack_20;
  char *local_1c;
  int local_18;
  C3DSCamera *pCStack_14;
  CSlew *this_ptr_00;
  int *piVar1;
  
  bVar8 = false;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr_00 = g_CSlewPtr;
  this_ptr->actor_count = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060(this_ptr_00);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  core_setedit_cpp_CDemonSet_clearCameraDepthData_FUN_00580560(this_ptr);
  core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(this_ptr);
  pvVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0x786);
  if (pvVar9 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x787;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  ptr = this_ptr->cameras;
  while( true ) {
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    fVar1 = (g_CSlewPtr->position).x;
    fVar2 = (g_CSlewPtr->position).y;
    fVar3 = (g_CSlewPtr->position).z;
    fVar4 = g_CSlewPtr->pitch;
    fVar5 = g_CSlewPtr->yaw;
    fVar6 = g_CSlewPtr->roll;
    fVar7 = g_CSlewPtr->slew_rate;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(g_CSlewPtr);
    if (g_CSlewPtr != (CSlew *)&g_CDemonCameraInstance.base.position) {
      g_CDemonCameraInstance.base.position.f.x = (g_CSlewPtr->position).x;
      g_CDemonCameraInstance.base.position.f.z = (g_CSlewPtr->position).z;
      g_CDemonCameraInstance.base.position.f.y = (g_CSlewPtr->position).y;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&g_CDemonCameraInstance.base.rotation_matrix,(CVector3f *)&g_CSlewPtr->pitch);
    g_CDemonCameraInstance.base.focal_length = g_CSlewPtr->slew_rate;
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
    if (ptr != (C3DSCamera *)0x0) {
      g_CDemonRaytraceInstance.rendering_mode = 4;
    }
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    if ((((fVar1 != (g_CSlewPtr->position).x) || (fVar2 != (g_CSlewPtr->position).y)) ||
        (fVar3 != (g_CSlewPtr->position).z)) ||
       (((fVar4 != g_CSlewPtr->pitch || (fVar5 != g_CSlewPtr->yaw)) ||
        ((fVar6 != g_CSlewPtr->roll || (fVar7 != g_CSlewPtr->slew_rate)))))) {
      bVar8 = false;
    }
    if (ptr != (C3DSCamera *)0x0) {
      if (!bVar8) {
        core_setedit_cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00(this_ptr,(char *)0x0,-1);
        bVar8 = true;
      }
      core_setedit_cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70(this_ptr,(char *)0x0);
      iVar2 = core_setedit_cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0
                        (this_ptr,g_MouseX,g_MouseY,(int *)&stack0xfffffae0,-1);
      if (0 < iVar2) {
        y = 0x21;
        iVar3 = 0;
        do {
          piVar1 = (int *)(&stack0xfffffae0 + iVar3);
          iVar3 = iVar3 + 4;
          engine_2d_c_drawTextXY_FUN_00402130(0,y,(char *)(*piVar1 * 0x1a4 + unaff_EBP));
          y = y + 0xb;
        } while (iVar3 < iVar2 * 4);
      }
      shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    }
    _sprintf
              (acStack_138,"Visit %d, rotate: %d, zcheck %d, render %d",g_CubesTestedCount,
               g_CubesWithVoxelsCount,g_CubesVisibleCount);
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,0x16);
    _sprintf
              (acStack_138,"Viewer pos: %8.4f,%8.4f,%8.4f pbh: %6.3f,%6.3f,%6.3f",(double)(g_CSlewPtr->position).x,
               (double)(g_CSlewPtr->position).y,(double)(g_CSlewPtr->position).z,
               (double)g_CSlewPtr->pitch,(double)g_CSlewPtr->roll,(double)g_CSlewPtr->yaw);
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,g_WindowHeight + -0x2c);
    _sprintf
              (acStack_138,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,g_WindowHeight + -0xb);
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar10 != 0) break;
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar10 != 0) {
      g_CDemonRaytraceInstance.rendering_mode = g_CDemonRaytraceInstance.rendering_mode + 1;
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    if (iVar10 != 0) {
      this_ptr = (CDemonSet *)(uint)(this_ptr == (CDemonSet *)0x0);
    }
  }
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x7f0;
  shape_memdbg_cpp_free_FUN_005fe659(ptr);
  core_setedit_cpp_CDemonSet_clearCameraDepthData_FUN_00580560(this_ptr);
  core_slew_cpp_CSlew_free_FUN_005a20a0(g_CSlewPtr);
  core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
