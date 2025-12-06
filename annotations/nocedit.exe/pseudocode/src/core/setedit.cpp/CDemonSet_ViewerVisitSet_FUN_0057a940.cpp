// Name: core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940
// Address: 0057a940
// Address Range: [[0057a940, 0057ae44]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_ViewerVisitSet_FUN_0057a940(CDemonSet *this_ptr)

{
  int *piVar1;
  CDemonSet *this_ptr_00;
  void *pvVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int y_pos;
  C3DSCamera *pCStack00000010;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_0000004c;
  void *in_stack_00000080;
  CGame *in_stack_fffffae8;
  int in_stack_fffffafc;
  char acStack_d8 [4];
  char acStack_d4 [4];
  char acStack_d0 [4];
  char acStack_cc [4];
  char acStack_c8 [4];
  char acStack_c4 [168];
  uint local_1c;
  uint local_18;
  
  local_18 = 0;
  local_1c = 0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  pvVar2 = PTR_DAT_00681ab8;
  this_ptr->actor_list_ptr = (void *)0x0;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)pvVar2);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffae8);
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0x786);
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x787;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  pCStack00000010 = this_ptr->cameras;
  while( true ) {
    (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,in_stack_fffffafc);
    this_ptr_00 = *(CDemonSet **)((int)PTR_DAT_00681ab8 + 8);
    pCStack00000010 = *(C3DSCamera **)((int)PTR_DAT_00681ab8 + 0x14);
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)PTR_DAT_00681ab8);
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
    if (in_stack_00000030 != 0.0) {
      g_CDemonRaytraceInstance.rendering_mode = 4;
    }
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr_00,9999.9,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_windll_cpp_lockFrame_FUN_005b7210();
                    /* WARNING: Load size is inaccurate */
    if ((((in_stack_00000018 != *PTR_DAT_00681ab8) ||
         (in_stack_0000001c != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
        (in_stack_00000020 != *(float *)((int)PTR_DAT_00681ab8 + 8))) ||
       (((in_stack_00000024 != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
         (in_stack_00000028 != *(float *)((int)PTR_DAT_00681ab8 + 0x10))) ||
        ((in_stack_0000002c != *(float *)((int)PTR_DAT_00681ab8 + 0x14) ||
         (in_stack_00000030 != *(float *)((int)PTR_DAT_00681ab8 + 0x18))))))) {
      in_stack_00000038 = 0;
    }
    if (in_stack_0000003c != 0) {
      if (in_stack_00000038 == 0) {
        core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00();
        in_stack_0000003c = 1;
      }
      core_setedit_cpp_CDemonSet_FUN_0057ff70(this_ptr_00);
      iVar3 = core_setedit_cpp_CDemonSet_FUN_005800d0(this_ptr_00);
      if (0 < iVar3) {
        y_pos = 0x21;
        iVar4 = 0;
        do {
          piVar1 = (int *)(&stack0xfffffb3c + iVar4);
          iVar4 = iVar4 + 4;
          engine_2d_c_drawTextXY_FUN_00402130(0,y_pos,(char *)(*piVar1 * 0x1a4 + in_stack_0000004c))
          ;
          y_pos = y_pos + 0xb;
        } while (SBORROW /* signed borrow */4(iVar4,iVar3 * 4) != iVar4 + iVar3 * -4 < 0);
      }
      shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_d8,"Visit %d, rotate: %d, zcheck %d, render %d",g_CubesTestedCount,
               g_CubesWithVoxelsCount,g_CubesVisibleCount);
    engine_2d_c_drawText_FUN_00401fd0(acStack_d4,0,0x16);
                    /* WARNING: Load size is inaccurate */
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_d0,"Viewer pos: %8.4f,%8.4f,%8.4f pbh: %6.3f,%6.3f,%6.3f",(double)*PTR_DAT_00681ab8,
               (double)*(float *)((int)PTR_DAT_00681ab8 + 4),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0x14));
    engine_2d_c_drawText_FUN_00401fd0(acStack_cc,0,g_WindowHeight + -0x2c);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_c8,"%f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_c4,0,g_WindowHeight + -0xb);
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
    if (iVar3 != 0) break;
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar3 != 0) {
      g_CDemonRaytraceInstance.rendering_mode = g_CDemonRaytraceInstance.rendering_mode + 1;
    }
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
  }
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x7f0;
  crt_memory_c_free_FUN_005fe659(in_stack_00000080);
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr_00);
  core_slew_cpp_CSlew_free_FUN_005a20a0();
  core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr_00);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
