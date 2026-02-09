// Name: core_setedit.cpp_CDemonSet_FUN_005805a0
// Address: 005805a0
// Address Range: [[005805a0, 00580722]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_005805a0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_005805a0(CDemonSet *this_ptr)

{
  int *ptr;
  int iVar1;
  CDemonSet *pCVar2;
  int iVar3;
  C3DSCamera *pCVar4;
  char local_174 [256];
  char local_74 [100];
  
  iVar3 = 0;
  g_CDemonLightInstance.light_enabled_flag = 0;
  if (0 < this_ptr->camera_count) {
    pCVar4 = this_ptr->cameras;
    pCVar2 = this_ptr;
    do {
      _sprintf(local_174,"backdrop\\%s.fog",pCVar4);
      remove(local_174);
      _sprintf(local_174,"backdrop\\%s.pvs",pCVar4);
      remove(local_174);
      ptr = pCVar2->cameras[0].pvs_list;
      pCVar2->cameras[0].pvs_count = 0;
      if (ptr != (int *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0x1059);
        pCVar2->cameras[0].pvs_list = (int *)0x0;
      }
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].unk4;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar3 < this_ptr->camera_count);
  }
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar3 = 0;
  if (0 < this_ptr->camera_count) {
    do {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar3);
      core_set_cpp_CDemonSet_FUN_0056c1a0(this_ptr);
      _sprintf
                (local_74,"Computing fog/pvs %d of %d.  Press ESC to cancel.",iVar3,this_ptr->camera_count);
      engine_2d_c_drawText_FUN_00401fd0(local_74,1,1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      while (iVar1 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar1 != 0) {
        iVar1 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
        if (iVar1 == 0x1b) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Not all fog files were computed.");
          goto LAB_005806ec;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->camera_count);
  }
LAB_005806ec:
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  return;
}
