// Name: engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
// Address: 004fb660
// Address Range: [[004fb660, 004fb955]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004fb660 (CIni *this_ptr,char *section,char *key,char *value,char *filename)

#include "nocturne.h"

int __cdecl
engine_ini_cpp_CIni_writeProfileString_FUN_004fb660
          (CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  char cVar1;
  int iVar2;
  FILE *stream;
  FILE *file;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  char *pcVar6;
  int line_number;
  char local_314 [254];
  char acStack_216 [258];
  char local_114 [256];
  int local_14;
  
  bVar5 = 0;
  local_14 = 0;
  iVar2 = engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470
                    (this_ptr,section,key,filename,value);
  if (this_ptr->initialized == 0) {
    return 1;
  }
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\engine\\ini.cpp",0x182);
  if (stream == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x183;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::writeProfileString: Unable to open input");
  }
  pcVar6 = acStack_216;
  pcVar4 = filename;
  do {
    pcVar6 = pcVar6 + 2;
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar6 = filename;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  line_number = 0x186;
  pcVar4 = "..\\engine\\ini.cpp";
  pcVar6 = "wt";
  acStack_216[~uVar3] = 'x';
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (acStack_216 + 2,(char *)0x0,pcVar6,pcVar4,line_number);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x187;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::writeProfileString: Unable to open output");
  }
  if (iVar2 == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"[%s]\n",section);
    bVar5 = (byte)stream->_flag;
    while (((bVar5 & 0x10) == 0 &&
           (pcVar6 = crt_stdio_c_fgets_FUN_005fefd0(local_314,0xff,stream), pcVar6 != (char *)0x0)))
    {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,local_314);
      iVar2 = crt_string_c_strcmp_FUN_005fef20(local_114,local_314);
      if (iVar2 == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s=%s\n",key,value);
        local_14 = 1;
      }
      bVar5 = (byte)stream->_flag;
    }
    if (local_14 == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,local_114);
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s=%s\n",key,value);
    }
  }
  else {
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      crt_stdio_c_fgets_FUN_005fefd0(local_314,0xff,stream);
      crt_stdio_c_fprintf_FUN_005fe6d0(file,local_314);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s=%s\n",key,value);
    crt_stdio_c_fgets_FUN_005fefd0(local_314,0xff,stream);
    bVar5 = (byte)stream->_flag;
    while (((bVar5 & 0x10) == 0 &&
           (pcVar6 = crt_stdio_c_fgets_FUN_005fefd0(local_314,0xff,stream), pcVar6 != (char *)0x0)))
    {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,local_314);
      bVar5 = (byte)stream->_flag;
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x1e8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\ini.cpp",0x1e9);
  crt_io_c_deleteFile_FUN_005ff9d0(filename);
  crt_stdio_c_rename_FUN_006015d0(acStack_216 + 2,filename);
  return 1;
}
