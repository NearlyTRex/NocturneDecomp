// Name: shape_meshlod.cpp_CLodMesh_exportToFile_FUN_0051c070
// Address: 0051c070
// Address Range: [[0051c070, 0051c0f8]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_exportToFile_FUN_0051c070(CLodMesh * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_exportToFile_FUN_0051c070(CLodMesh *this_ptr,char *filename)

{
  FILE *file_ptr;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Exporting %s");
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (filename,(char *)0x0,"wt","..\\shape\\meshlod.cpp",0x133e);
  if (file_ptr == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x133f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",filename);
  }
  shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(this_ptr,file_ptr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\meshlod.cpp",0x1347);
  return;
}
