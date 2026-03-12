// Name: core_skeledit.cpp_CDeformableModel_importGeometryS3D_FUN_0058b660
// Address: 0058b660
// Address Range: [[0058b660, 0058b8d7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_importGeometryS3D_FUN_0058b660(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_importGeometryS3D_FUN_0058b660(CDeformableModel *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  _FILE *local_24;
  _FILE *local_20;
  _FILE *local_1c;
  _FILE *local_18;
  int local_14;
  
  __STK();
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing deformable model from %s...",filename);
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (filename,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x4ba);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  iVar2 = 1;
  local_1c = file;
  do {
    iVar1 = _fgetc(local_1c);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  _fscanf(file,"%d\n",&local_44);
  if ((local_44 < 0x65) || (0x67 < local_44)) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4c2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s has incorrect S3D version %d in CDeformableModel::importGeometryS3D",filename,local_44);
  }
  iVar4 = 1;
  local_20 = file;
  do {
    iVar3 = _fgetc(local_20);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = _fscanf(file,"%d,%d,%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,local_30,
                     local_2c,local_28);
  if (iVar4 == 7) goto LAB_0058b7a0;
  do {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("%s is corrupt!",filename);
LAB_0058b7a0:
    core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(this_ptr,1,1,local_40,1);
    core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510(this_ptr,0,local_38,local_3c,0);
    iVar4 = 1;
    local_18 = file;
    do {
      iVar3 = _fgetc(local_18);
      if (iVar3 < 0) break;
    } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    for (local_14 = 0; local_14 < local_34; local_14 = local_14 + 1) {
      iVar4 = 1;
      local_24 = file;
      do {
        iVar3 = _fgetc(local_24);
        if (iVar3 < 0) break;
      } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    }
    iVar4 = core_skeledit_cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0(this_ptr,file);
    if (((iVar4 != 0) &&
        (iVar4 = core_skeledit_cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0(this_ptr,file),
        iVar4 != 0)) &&
       (iVar4 = core_skeledit_cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40(this_ptr,file),
       iVar4 != 0)) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x4e7);
      core_skeledit_cpp_CDeformableModel_initSinglePart_FUN_0058f790(this_ptr);
      core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(this_ptr);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Imported deformable model from %s OK",filename);
      return;
    }
  } while( true );
}
