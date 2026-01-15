// Name: shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0
// Address: 0051a9d0
// Address Range: [[0051a9d0, 0051aa58]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0(CLodMesh * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_importFromFile_FUN_0051a9d0(CLodMesh *this_ptr,char *filename)

{
  FILE *file_handle;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing %s");
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"rt","..\\shape\\meshlod.cpp",0x1062);
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1063;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  shape_meshlod_cpp_CLodMesh_parseS3DFile_FUN_0051aa60(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",0x106b);
  return;
}
