// Name: core_setedit.cpp_CDemonSet_FUN_0057a940
// Address: 0057a940
// Address Range: [[0057a940, 0057ae44]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_0057a940(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: core_slew.cpp_CSlew_init_FUN_005a2060 */

void __cdecl core_setedit_cpp_CDemonSet_FUN_0057a940(CDemonSet *this_ptr)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
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
  uint local_1c;
  int local_18;
  C3DSCamera *pCStack_14;
  
  local_18 = 0;
  local_1c = 0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  pvVar2 = PTR_DAT_00681ab8;
  this_ptr->actor_count = 0;
  *(uint *)((int)pvVar2 + 8) = 0;
  *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 8);
  *(uint *)pvVar2 = *(uint *)((int)pvVar2 + 4);
  *(uint *)((int)pvVar2 + 0x14) = 0;
  *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x14);
  *(uint *)((int)pvVar2 + 0xc) = *(uint *)((int)pvVar2 + 0x10);
  *(uint *)((int)pvVar2 + 0x18) = 0x41e00000;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  core_setedit_cpp_CDemonSet_FUN_00580560(this_ptr);
  core_setedit_cpp_CDemonSet_FUN_00580310(this_ptr);
  pvStack_20 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0x786);
  if (pvStack_20 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x787;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  pCStack_14 = this_ptr->cameras;
  while( true ) {
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    fStack_38 = *(float *)PTR_DAT_00681ab8;
    fStack_34 = *(float *)((int)PTR_DAT_00681ab8 + 4);
    fStack_30 = *(float *)((int)PTR_DAT_00681ab8 + 8);
    fStack_2c = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
    fStack_28 = *(float *)((int)PTR_DAT_00681ab8 + 0x10);
    fStack_24 = *(float *)((int)PTR_DAT_00681ab8 + 0x14);
    pvStack_20 = *(void **)((int)PTR_DAT_00681ab8 + 0x18);
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(PTR_DAT_00681ab8);
    if (PTR_DAT_00681ab8 != &g_CDemonCameraInstance.base.position) {
      g_CDemonCameraInstance.base.position.x = *(int *)PTR_DAT_00681ab8;
      g_CDemonCameraInstance.base.position.z = *(int *)((int)PTR_DAT_00681ab8 + 8);
      g_CDemonCameraInstance.base.position.y = *(int *)((int)PTR_DAT_00681ab8 + 4);
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc));
    g_CDemonCameraInstance.base.projection_scale = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
    if (pCStack_14 != (C3DSCamera *)0x0) {
      g_CDemonRaytraceInstance.rendering_mode = 4;
    }
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    if ((((fStack_38 != *(float *)PTR_DAT_00681ab8) ||
         (fStack_34 != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
        (fStack_30 != *(float *)((int)PTR_DAT_00681ab8 + 8))) ||
       (((fStack_2c != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
         (fStack_28 != *(float *)((int)PTR_DAT_00681ab8 + 0x10))) ||
        ((fStack_24 != *(float *)((int)PTR_DAT_00681ab8 + 0x14) ||
         ((float)pvStack_20 != *(float *)((int)PTR_DAT_00681ab8 + 0x18))))))) {
      local_18 = 0;
    }
    if (pCStack_14 != (C3DSCamera *)0x0) {
      if (local_18 == 0) {
        core_setedit_cpp_CDemonSet_FUN_0057fd00(this_ptr);
        local_18 = 1;
      }
      core_setedit_cpp_CDemonSet_FUN_0057ff70(this_ptr);
      iVar3 = core_setedit_cpp_CDemonSet_FUN_005800d0(this_ptr);
      if (0 < iVar3) {
        y = 0x21;
        iVar4 = 0;
        do {
          piVar1 = (int *)(&stack0xfffffae0 + iVar4);
          iVar4 = iVar4 + 4;
          engine_2d_c_drawTextXY_FUN_00402130(0,y,(char *)(*piVar1 * 0x1a4 + unaff_EBP));
          y = y + 0xb;
        } while (iVar4 < iVar3 * 4);
      }
      shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    }
    _sprintf
              (acStack_138,"Visit %d, rotate: %d, zcheck %d, render %d",g_CubesTestedCount,
               g_CubesWithVoxelsCount,g_CubesVisibleCount);
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,0x16);
    _sprintf
              (acStack_138,"Viewer pos: %8.4f,%8.4f,%8.4f pbh: %6.3f,%6.3f,%6.3f",(double)*(float *)PTR_DAT_00681ab8,
               (double)*(float *)((int)PTR_DAT_00681ab8 + 4),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0x14),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0x10));
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,g_WindowHeight + -0x2c);
    _sprintf
              (acStack_138,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,g_WindowHeight + -0xb);
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar3 != 0) break;
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar3 != 0) {
      g_CDemonRaytraceInstance.rendering_mode = g_CDemonRaytraceInstance.rendering_mode + 1;
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    if (iVar3 != 0) {
      this_ptr = (CDemonSet *)(uint)(this_ptr == (CDemonSet *)0x0);
    }
  }
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x7f0;
  shape_memdbg_cpp_free_FUN_005fe659(pCStack_14);
  core_setedit_cpp_CDemonSet_FUN_00580560(this_ptr);
  core_slew_cpp_CSlew_free_FUN_005a20a0();
  core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
