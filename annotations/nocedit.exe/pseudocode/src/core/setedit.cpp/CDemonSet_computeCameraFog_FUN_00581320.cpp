// Name: core_setedit.cpp_CDemonSet_computeCameraFog_FUN_00581320
// Address: 00581320
// Address Range: [[00581320, 00581447]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_computeCameraFog_FUN_00581320(CDemonSet *this_ptr,int camera_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_computeCameraFog_FUN_00581320(CDemonSet *this_ptr,int camera_index)

{
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  g_CDemonLightInstance.light_enabled_flag = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Getting ready");
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  do {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Computing fog for camera %s",
               this_ptr->cameras + camera_index);
    _sprintf(local_110,"backdrop\\%s.fog",this_ptr->cameras + camera_index);
    remove(local_110);
    do {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,camera_index);
      core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(this_ptr,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
        core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
        return;
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    } while (iVar2 == 0);
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar2 == 0) {
      camera_index = camera_index + 1;
      if (this_ptr->camera_count <= camera_index) {
        camera_index = 0;
      }
    }
    else {
      camera_index = camera_index + -1;
      if (camera_index < 0) {
        camera_index = this_ptr->camera_count + -1;
      }
    }
  } while( true );
}
