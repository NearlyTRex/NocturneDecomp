// Name: core_setedit.cpp_CDemonSet_importSet_FUN_00578a20
// Address: 00578a20
// Address Range: [[00578a20, 00578c5e]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_importSet_FUN_00578a20(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_importSet_FUN_00578a20(CDemonSet *this_ptr)

{
  char cVar2;
  int iVar2;
  _FILE *file_ptr;
  int iVar3;
  char *pcVar3;
  char *str1;
  char *pcVar4;
  char local_4d8;
  char acStack_4d7 [255];
  char local_3d8 [256];
  char local_2d8 [256];
  char local_1d8 [256];
  char local_d8 [200];
  char cVar1;
  
  str1 = &local_4d8;
  pcVar3 = "models";
  pcVar4 = local_3d8;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Import set","*.s3d",local_3d8,1);
  if (iVar2 == 0) {
    return;
  }
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_3d8,(char *)0x0,"rt","..\\core\\setedit.cpp",0x36c);
  if (file_ptr != (_FILE *)0x0) {
    engine_dosio_cpp_splitPath_FUN_00481f20(local_3d8,(char *)0x0,(char *)0x0,local_2d8,&local_4d8);
    engine_dosio_cpp_makePath_FUN_00481f50
              (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_2d8,"geo");
    if (local_4d8 == '.') {
      str1 = acStack_4d7;
    }
    iVar3 = _stricmp(str1,"a3d");
    if (iVar3 == 0) {
      core_setedit_cpp_CDemonSet_importA3D_FUN_00578c60(this_ptr,file_ptr);
    }
    else {
      iVar3 = _stricmp(str1,"s3d");
      if (iVar3 != 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x38f);
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Can't decide how to process file based on extension!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
        return;
      }
      core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(this_ptr,file_ptr);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x399);
    engine_dosio_cpp_makePath_FUN_00481f50
              (local_1d8,(char *)0x0,"data",local_2d8,"zth");
    remove(local_1d8);
    engine_dosio_cpp_makePath_FUN_00481f50
              (local_1d8,(char *)0x0,"data",local_2d8,"thm");
    remove(local_1d8);
    return;
  }
  _sprintf(local_d8,"Can't open %s",local_3d8);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(local_d8,0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  return;
}
