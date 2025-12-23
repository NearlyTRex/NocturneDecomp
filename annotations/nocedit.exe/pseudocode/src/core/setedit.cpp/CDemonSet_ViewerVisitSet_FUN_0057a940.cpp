// Name: core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940
// Address: 0057a940
// Address Range: [[0057a940, 0057ae44]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_ViewerVisitSet_FUN_0057a940(CDemonSet *this_ptr)

{
  int *piVar1;
  void *this_ptr_00;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_ESI;
  int y_pos;
  float unaff_EDI;
  int unaff_retaddr;
  int in_stack_00000014;
  CGame *in_stack_fffffac4;
  char acStack_110 [4];
  char acStack_10c [4];
  char acStack_108 [4];
  char acStack_104 [4];
  char acStack_100 [4];
  char acStack_fc [192];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  void *pvStack_24;
  void *pvStack_20;
  float local_1c;
  float local_18;
  C3DSCamera *pCStack_14;
  
  local_18 = 0.0;
  local_1c = 0.0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr_00 = PTR_DAT_00681ab8;
  this_ptr->actor_list_ptr = (void *)0x0;
  core_slew_cpp_CSlew_init_FUN_005a2060(this_ptr_00);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffac4);
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  pvStack_24 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0x786);
  if (pvStack_24 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x787;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  pCStack_14 = this_ptr->cameras;
  while( true ) {
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    uStack_3c = *(uint *)PTR_DAT_00681ab8;
    uStack_38 = *(uint *)((int)PTR_DAT_00681ab8 + 4);
    uStack_34 = *(uint *)((int)PTR_DAT_00681ab8 + 8);
    uStack_30 = *(uint *)((int)PTR_DAT_00681ab8 + 0xc);
    uStack_2c = *(uint *)((int)PTR_DAT_00681ab8 + 0x10);
    uStack_28 = *(uint *)((int)PTR_DAT_00681ab8 + 0x14);
    pvStack_24 = *(void **)((int)PTR_DAT_00681ab8 + 0x18);
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
    if (unaff_ESI != 0.0) {
      g_CDemonRaytraceInstance.rendering_mode = 4;
    }
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    if (((((float)pvStack_20 != *(float *)PTR_DAT_00681ab8) ||
         (local_1c != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
        (local_18 != *(float *)((int)PTR_DAT_00681ab8 + 8))) ||
       ((((float)pCStack_14 != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
         (unaff_EBP != *(float *)((int)PTR_DAT_00681ab8 + 0x10))) ||
        ((unaff_EDI != *(float *)((int)PTR_DAT_00681ab8 + 0x14) ||
         (unaff_ESI != *(float *)((int)PTR_DAT_00681ab8 + 0x18))))))) {
      unaff_retaddr = 0;
    }
    if (this_ptr != (CDemonSet *)0x0) {
      if (unaff_retaddr == 0) {
        core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00();
        this_ptr = (CDemonSet *)&DAT_00000001;
      }
      core_setedit_cpp_CDemonSet_FUN_0057ff70(this_ptr);
      iVar2 = core_setedit_cpp_CDemonSet_FUN_005800d0(this_ptr);
      if (0 < iVar2) {
        y_pos = 0x21;
        iVar3 = 0;
        do {
          piVar1 = (int *)(&stack0xfffffb04 + iVar3);
          iVar3 = iVar3 + 4;
          engine_2d_c_drawTextXY_FUN_00402130(0,y_pos,(char *)(*piVar1 * 0x1a4 + in_stack_00000014))
          ;
          y_pos = y_pos + 0xb;
        } while (iVar3 < iVar2 * 4);
      }
      shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_110,"Visit %d, rotate: %d, zcheck %d, render %d",g_CubesTestedCount,
               g_CubesWithVoxelsCount,g_CubesVisibleCount);
    engine_2d_c_drawText_FUN_00401fd0(acStack_10c,0,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_108,"Viewer pos: %8.4f,%8.4f,%8.4f pbh: %6.3f,%6.3f,%6.3f",(double)*(float *)PTR_DAT_00681ab8,
               (double)*(float *)((int)PTR_DAT_00681ab8 + 4),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc),
               (double)*(float *)((int)PTR_DAT_00681ab8 + 0x14));
    engine_2d_c_drawText_FUN_00401fd0(acStack_104,0,g_WindowHeight + -0x2c);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_100,"%f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_fc,0,g_WindowHeight + -0xb);
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
    if (iVar2 != 0) break;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar2 != 0) {
      g_CDemonRaytraceInstance.rendering_mode = g_CDemonRaytraceInstance.rendering_mode + 1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar2 != 0) {
      local_18 = (float)(uint)(local_18 == 0.0);
    }
  }
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x7f0;
  crt_memory_c_free_FUN_005fe659(pvStack_20);
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  core_slew_cpp_CSlew_free_FUN_005a20a0();
  core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
