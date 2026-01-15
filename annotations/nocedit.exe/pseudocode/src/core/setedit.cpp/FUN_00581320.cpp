// Name: core_setedit.cpp_FUN_00581320
// Address: 00581320
// Address Range: [[00581320, 00581447]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581320()

#include "nocturne.h"

void core_setedit_cpp_FUN_00581320(void)

{
  int iVar1;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  
  g_CDemonLightInstance.light_enabled_flag = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Getting ready");
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
  do {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Computing fog for camera %s");
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffef0,"backdrop\\%s.fog",
               in_stack_00000004->cameras + in_stack_00000008);
    crt_io_c_deleteFile_FUN_005ff9d0(&stack0xfffffef0);
    do {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,in_stack_00000008);
      core_set_cpp_CDemonSet_FUN_0056c1a0(in_stack_00000004);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
        core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
        return;
      }
      iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    } while (iVar1 == 0);
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar1 == 0) {
      in_stack_00000008 = in_stack_00000008 + 1;
      if (in_stack_00000004->camera_count <= in_stack_00000008) {
        in_stack_00000008 = 0;
      }
    }
    else {
      in_stack_00000008 = in_stack_00000008 + -1;
      if (in_stack_00000008 < 0) {
        in_stack_00000008 = in_stack_00000004->camera_count + -1;
      }
    }
  } while( true );
}
