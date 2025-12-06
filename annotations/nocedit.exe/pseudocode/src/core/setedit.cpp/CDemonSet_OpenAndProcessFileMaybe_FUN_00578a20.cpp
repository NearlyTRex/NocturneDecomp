// Name: core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20
// Address: 00578a20
// Address Range: [[00578a20, 00578c5e]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20(CDemonSet *this_ptr)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  FILE *file_ptr;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char in_stack_fffffb38;
  char local_3d8 [8];
  char acStack_3d0 [256];
  char acStack_2d0 [4];
  char acStack_2cc [20];
  char acStack_2b8 [8];
  char acStack_2b0 [248];
  char acStack_1b8 [4];
  char acStack_1b4 [4];
  char acStack_1b0 [4];
  char acStack_1ac [220];
  char acStack_d0 [8];
  char acStack_c8 [184];
  
  pcVar4 = "models";
  pcVar5 = local_3d8;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Import set",true,local_3d8);
  if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
    return;
  }
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_3d8 + 4,(char *)0x0,"rt","..\\core\\setedit.cpp",0x36c);
  if (file_ptr != (FILE *)0x0) {
    engine_dosio_c_splitPath_FUN_00481f20
              (acStack_3d0,(char *)0x0,(char *)0x0,acStack_2d0,&stack0xfffffb30);
    engine_dosio_c_makePath_FUN_00481f50
              (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,acStack_2cc,"geo");
    pcVar5 = &stack0xfffffb38;
    if (in_stack_fffffb38 == '.') {
      pcVar5 = &stack0xfffffb39;
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"a3d");
    if (iVar3 == 0) {
      core_setedit_cpp_ImportA3DBroken_FUN_00578c60();
    }
    else {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"s3d");
      if (iVar3 != 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x38f);
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Can't decide how to process file based on extension!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
        return;
      }
      core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80();
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x399);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_1b8,(char *)0x0,"data",acStack_2b8,"zth");
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_1b4);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_1b0,(char *)0x0,"data",acStack_2b0,"thm");
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_1ac);
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d0,"Can't open %s",acStack_3d0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(acStack_c8,0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  return;
}
