// Name: core_setedit.cpp_CDemonSet_FUN_00581320
// Address: 00581320
// Address Range: [[00581320, 00581447]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_00581320(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_00581320(CDemonSet *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  g_CDemonLightInstance.light_enabled_flag = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Getting ready");
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  do {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Computing fog for camera %s");
    _sprintf
              (&stack0xfffffef0,"backdrop\\%s.fog",this_ptr->cameras + in_stack_00000008);
    remove(&stack0xfffffef0);
    do {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,in_stack_00000008);
      core_set_cpp_CDemonSet_FUN_0056c1a0(this_ptr);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
        core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
        return;
      }
      iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    } while (iVar1 == 0);
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar1 == 0) {
      in_stack_00000008 = in_stack_00000008 + 1;
      if (this_ptr->camera_count <= in_stack_00000008) {
        in_stack_00000008 = 0;
      }
    }
    else {
      in_stack_00000008 = in_stack_00000008 + -1;
      if (in_stack_00000008 < 0) {
        in_stack_00000008 = this_ptr->camera_count + -1;
      }
    }
  } while( true );
}
