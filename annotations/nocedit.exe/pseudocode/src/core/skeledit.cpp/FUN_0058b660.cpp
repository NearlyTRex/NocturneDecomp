// Name: core_skeledit.cpp_FUN_0058b660
// Address: 0058b660
// Address Range: [[0058b660, 0058b8d7]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_0058b660(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058b660(void)

{
  FILE *file;
  int iVar1;
  int iVar2;
  CDeformableModel *in_stack_00000004;
  char *in_stack_00000008;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  FILE *local_24;
  FILE *local_20;
  FILE *local_1c;
  FILE *local_18;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x6c);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing deformable model from %s...");
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(in_stack_00000004);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (in_stack_00000008,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x4ba);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",in_stack_00000008);
  }
  iVar2 = 1;
  local_1c = file;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(local_1c);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&local_44);
  if ((local_44 < 0x65) || (0x67 < local_44)) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4c2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s has incorrect S3D version %d in CDeformableModel::importGeometryS3D",in_stack_00000008,local_44);
  }
  iVar2 = 1;
  local_20 = file;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(local_20);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file,"%d,%d,%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,local_30,
                     local_2c,local_28);
  if (iVar2 == 7) goto LAB_0058b7a0;
  do {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("%s is corrupt!",in_stack_00000008);
LAB_0058b7a0:
    core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(in_stack_00000004,1,1,local_40,1);
    core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
              (in_stack_00000004,0,local_38,local_3c,0);
    iVar2 = 1;
    local_18 = file;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(local_18);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    for (local_14 = 0; local_14 < local_34; local_14 = local_14 + 1) {
      iVar2 = 1;
      local_24 = file;
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(local_24);
        if (iVar1 < 0) break;
      } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    }
    iVar2 = core_skeledit_cpp_FUN_0058b8e0();
    if (((iVar2 != 0) && (iVar2 = core_skeledit_cpp_FUN_0058b9b0(), iVar2 != 0)) &&
       (iVar2 = core_skeledit_cpp_FUN_0058bc40(), iVar2 != 0)) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x4e7);
      core_skeledit_cpp_FUN_0058f790();
      core_skeledit_cpp_FUN_0058e240();
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Imported deformable model from %s OK");
      return;
    }
  } while( true );
}
