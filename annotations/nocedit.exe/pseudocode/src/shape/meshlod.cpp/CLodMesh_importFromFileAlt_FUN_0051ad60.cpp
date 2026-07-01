// Name: shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60
// Address: 0051ad60
// Address Range: [[0051ad60, 0051ade8]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_importFromFileAlt_FUN_0051ad60(CLodMesh *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_importFromFileAlt_FUN_0051ad60(CLodMesh *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing %s",filename);
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"rt","..\\shape\\meshlod.cpp",4302);
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 4303;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",4311);
  return;
}
