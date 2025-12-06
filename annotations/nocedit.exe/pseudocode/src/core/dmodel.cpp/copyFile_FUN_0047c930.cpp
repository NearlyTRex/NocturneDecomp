// Name: core_dmodel.cpp_copyFile_FUN_0047c930
// Address: 0047c930
// Address Range: [[0047c930, 0047ca40]]
// Convention: __cdecl
// Signature: int core_dmodel.cpp_copyFile_FUN_0047c930(char * source_filename, char * destination_filename, int show_error_if_missing)

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_copyFile_FUN_0047c930
          (char *source_filename,char *destination_filename,int show_error_if_missing)

{
  FILE *file_ptr;
  FILE *file_ptr_00;
  int character;
  int in_stack_00000010;
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (source_filename,(char *)0x0,"rb","..\\core\\dmodel.cpp",0xb7c);
  if (file_ptr != (FILE *)0x0) {
    file_ptr_00 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            (destination_filename,(char *)0x0,"wb",
                             "..\\core\\dmodel.cpp",0xb83);
    if (file_ptr_00 != (FILE *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Copying %s -> %s");
      while( true ) {
        character = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
        if (character < 0) break;
        crt_stdio_c_fputc_FUN_006007a0(character,file_ptr_00);
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0xb92);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\dmodel.cpp",0xb93);
      return 1;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0xb85);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s",destination_filename);
    return 0;
  }
  if (in_stack_00000010 == 0) {
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't open %s",destination_filename);
  return 0;
}
