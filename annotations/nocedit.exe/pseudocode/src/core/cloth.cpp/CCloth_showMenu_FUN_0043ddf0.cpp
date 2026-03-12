// Name: core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0
// Address: 0043ddf0
// Address Range: [[0043ddf0, 0043e097]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_showMenu_FUN_0043ddf0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_showMenu_FUN_0043ddf0(CCloth *this_ptr)

{
  char cVar2;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar4;
  char *pcVar5;
  char *pcVar7;
  byte bVar7;
  char local_278 [256];
  char local_178 [256];
  char local_78 [100];
  float *local_14;
  char *pcVar6;
  char cVar1;
  
  bVar7 = 0;
  local_178[0] = '\0';
  local_278[0] = '\0';
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented(R) Cloth Editor",0,0);
    engine_2d_c_drawText_FUN_00401fd0("1.  Load cloth file",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2.  Save cloth file",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("3.  Locked vertex editor",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("4.  Load skeleton",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("5.  Bone editor",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("6.  Edit transparency",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("7.  Create cloth from .KFM",0,0x58);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(iVar2) {
    case 0x31:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Load cloth file","models",
                         "*.cth",(int)local_178,0);
      if (iVar4 != 0) {
        core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr,local_178);
      }
      break;
    case 0x32:
      iVar4 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save cloth file","models",
                         "cth",local_178,1);
      if (iVar4 != 0) {
        core_cloth_cpp_CCloth_save_FUN_00439260(this_ptr,local_178);
      }
      break;
    case 0x33:
      core_cloth_cpp_CCloth_lockedVertexEditor_FUN_0043d590(this_ptr);
      break;
    case 0x34:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Select deformable model","models",
                         "*.dfm",(int)local_278,0);
      if (iVar4 != 0) {
        core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                  (&g_CDeformableModelInstanceInstance,local_278);
        core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                  (&g_CDeformableModelInstanceInstance);
      }
      break;
    case 0x35:
      if ((local_278[0] != '\0') && (local_178[0] != '\0')) {
        core_cloth_cpp_CCloth_boneEditor_FUN_0043c880(this_ptr);
      }
      break;
    case 0x36:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter transparency (0..1.0)",&this_ptr->transparency,1,0.0
                 ,1.0,1);
      break;
    case 0x37:
      iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Create cloth file from KFM","models",
                         "*.kfm",(int)local_78,0);
      if (iVar3 != 0) {
        splitpath(local_78,(char *)0x0,(char *)0x0,local_178,(char *)0x0);
        pcVar4 = ".cth";
        iVar4 = -1;
        pcVar5 = local_178;
        do {
          pcVar5 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5;
        } while (cVar1 != '\0');
        pcVar7 = pcVar5 + -1;
        do {
          cVar2 = *pcVar4;
          *pcVar7 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
        core_cloth_cpp_CCloth_createFromKFM_FUN_0043dcc0(this_ptr,local_78);
      }
    }
    if (iVar2 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
