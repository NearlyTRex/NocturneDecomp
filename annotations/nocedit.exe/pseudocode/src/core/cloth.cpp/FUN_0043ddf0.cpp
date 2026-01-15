// Name: core_cloth.cpp_FUN_0043ddf0
// Address: 0043ddf0
// Address Range: [[0043ddf0, 0043e097]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043ddf0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043ddf0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar8;
  CCloth *in_stack_00000004;
  char local_278 [256];
  char local_178 [256];
  char local_78 [100];
  char *local_14;
  char *pcVar7;
  
  bVar8 = 0;
  local_178[0] = '\0';
  local_278[0] = '\0';
  local_14 = in_stack_00000004->padding_0x0 + 0x3ce88;
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
    iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(iVar3) {
    case 0x31:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Load cloth file","models",
                         "*.cth",SUB41 /* extract 2-byte value */(local_178,0));
      if (iVar4 != 0) {
        core_cloth_cpp_CCloth_load_FUN_00438cf0(in_stack_00000004,local_178);
      }
      break;
    case 0x32:
      bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save cloth file","models",0x618a40,
                         SUB41 /* extract 2-byte value */(local_178,0));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0) {
        core_cloth_cpp_ParseClothFile_FUN_00439260();
      }
      break;
    case 0x33:
      core_cloth_cpp_LockVerticesMaybe_FUN_0043d590();
      break;
    case 0x34:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Select deformable model","models",
                         "*.dfm",SUB41 /* extract 2-byte value */(local_278,0));
      if (iVar4 != 0) {
        core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                  (&g_CDeformableModelInstanceInstance,local_278);
        core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                  (&g_CDeformableModelInstanceInstance);
      }
      break;
    case 0x35:
      if ((local_278[0] != '\0') && (local_178[0] != '\0')) {
        core_cloth_cpp_BoneAndClothEditor_FUN_0043c880();
      }
      break;
    case 0x36:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter transparency (0..1.0)",(float *)local_14,true,0.0,
                 1.0,true);
      break;
    case 0x37:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Create cloth file from KFM","models",
                         "*.kfm",SUB41 /* extract 2-byte value */(local_78,0));
      if (iVar4 != 0) {
        crt_string_c_splitpath_FUN_005ff178(local_78,(char *)0x0,(char *)0x0,local_178,(char *)0x0);
        pcVar5 = ".cth";
        iVar4 = -1;
        pcVar7 = local_178;
        do {
          pcVar6 = pcVar7;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar7 + (uint)bVar8 * -2 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + -1;
        do {
          cVar1 = *pcVar5;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        core_cloth_cpp_FUN_0043dcc0();
      }
    }
    if (iVar3 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
