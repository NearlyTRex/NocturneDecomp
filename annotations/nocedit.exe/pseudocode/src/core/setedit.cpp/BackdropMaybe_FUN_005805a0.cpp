// Name: core_setedit.cpp_BackdropMaybe_FUN_005805a0
// Address: 005805a0
// Address Range: [[005805a0, 00580722]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_BackdropMaybe_FUN_005805a0()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_BackdropMaybe(uint param_1) */

void core_setedit_cpp_BackdropMaybe_FUN_005805a0(void)

{
  int *ptr;
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  CDemonSet *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  CDemonSet *in_stack_00000004;
  char acStack_70 [4];
  char acStack_6c [92];
  
  iVar4 = 0;
  g_CDemonLightInstance.light_enabled_flag = 0;
  pCVar3 = in_stack_00000004;
  if (0 < in_stack_00000004->camera_count) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe8c,"backdrop\\%s.fog");
      crt_io_c_deleteFile_FUN_005ff9d0(&stack0xfffffe7c);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe80,"backdrop\\%s.pvs");
      crt_io_c_deleteFile_FUN_005ff9d0(&stack0xfffffe84);
      ptr = pCVar3->cameras[0].pvs_list;
      pCVar3->cameras[0].pvs_count = 0;
      if (ptr != (int *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0x1059);
        pCVar3->cameras[0].pvs_list = (int *)0x0;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)&pCVar3->cameras[0].field17_0x1a0;
    } while (iVar4 < in_stack_00000004->camera_count);
  }
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar4 = 0;
  if (0 < in_stack_00000004->camera_count) {
    do {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,iVar4);
      core_set_cpp_CDemonSet_FUN_0056c1a0(in_stack_00000004);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_70,"Computing fog/pvs %d of %d.  Press ESC to cancel.");
      engine_2d_c_drawText_FUN_00401fd0(acStack_6c,1,1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      while (bVar1 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(),
            CONCAT31 /* combine 2-byte values */(extraout_var,bVar1) != 0) {
        iVar2 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
        if (iVar2 == 0x1b) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Not all fog files were computed.");
          goto LAB_005806ec;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_stack_00000004->camera_count);
  }
LAB_005806ec:
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  return;
}
