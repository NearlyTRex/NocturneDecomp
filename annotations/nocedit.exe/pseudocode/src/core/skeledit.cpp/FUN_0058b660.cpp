// Name: core_skeledit.cpp_FUN_0058b660
// Address: 0058b660
// Address Range: [[0058b660, 0058b8d7]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b660()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058b660(void)

{
  CDeformableModel *file;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar2;
  int unaff_ESI;
  CDeformableModel *in_stack_0000000c;
  char *in_stack_00000010;
  int in_stack_00000020;
  int in_stack_ffffffdc;
  CDeformableModel *in_stack_ffffffec;
  CDeformableModel *in_stack_fffffff4;
  CDeformableModel *file_00;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x6c);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing deformable model from %s...");
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(in_stack_0000000c);
  file = (CDeformableModel *)
         shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (in_stack_00000010,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x4ba);
  if (file == (CDeformableModel *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",in_stack_00000010);
  }
  iVar2 = 1;
  file_00 = file;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)file_00);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)file,"%d\n");
  if ((in_stack_ffffffdc < 0x65) || (0x67 < in_stack_ffffffdc)) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4c2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("%s has incorrect S3D version %d in CDeformableModel::importGeometryS3D");
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                    ((FILE *)file,"%d,%d,%d,%d,%d,%d,%d\n",&stack0xffffffe8,&stack0xffffffec,
                     &stack0xfffffff0);
  if (iVar2 == 7) goto LAB_0058b7a0;
  do {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("%s is corrupt!");
LAB_0058b7a0:
    core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0
              (in_stack_0000000c,1,1,(int)in_stack_ffffffec,1);
    core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
              (in_stack_0000000c,0,unaff_EBP,(int)in_stack_fffffff4,0);
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
LAB_0058b7f5:
    if (in_stack_00000020 < unaff_ESI) {
      iVar2 = 1;
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)file);
        if (iVar1 < 0) break;
      } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
      goto LAB_0058b7f5;
    }
    in_stack_ffffffec = file;
    iVar2 = core_skeledit_cpp_FUN_0058b8e0();
    if ((iVar2 != 0) &&
       (in_stack_ffffffec = in_stack_0000000c, iVar2 = core_skeledit_cpp_FUN_0058b9b0(), iVar2 != 0)
       ) {
      in_stack_ffffffec = (CDeformableModel *)0x58b88b;
      in_stack_fffffff4 = file;
      iVar2 = core_skeledit_cpp_FUN_0058bc40();
      if (iVar2 != 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)file,"..\\core\\skeledit.cpp",0x4e7);
        core_skeledit_cpp_FUN_0058f790();
        core_skeledit_cpp_FUN_0058e240();
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Imported deformable model from %s OK");
        return;
      }
    }
  } while( true );
}
