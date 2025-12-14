// Name: engine_model.c_loadModelFile_FUN_00527ec0
// Address: 00527ec0
// Address Range: [[00527ec0, 005280a1]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00527ec0(char *filename)

{
  char cVar1;
  SIZE_T count;
  FILE *file;
  SMRGLHeaderExtended *pSVar2;
  SIZE_T SVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  char *pcStack_2c;
  char acStack_24 [4];
  char acStack_20 [20];
  
  pcVar6 = filename;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00527ee6;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_00527ee6;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00527ee6:
  if (pcVar5 != (char *)0x0) {
    iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)pcVar5[1]);
    if (iVar4 == 0x54) {
      pSVar2 = engine_boss_c_modelStructNotSupported_FUN_0041db80((SMRGLHeaderExtended *)filename);
      return pSVar2;
    }
  }
  count = engine_dosio_c_getFileSize_FUN_00481880("models",filename);
  if (count == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffac,"Unable to get file size: %s",filename);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0xf0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffb0);
  }
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffb8,"Unable to open model: %s");
    g_CurrentLineNumber = 0xf5;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffbc);
  }
  pSVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(count,"..\\engine\\model.c",0xf8);
  if (pSVar2 == (SMRGLHeaderExtended *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffc4,"Out of model memory: %s");
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x100;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffc8);
  }
  SVar3 = crt_stdio_c_fread_FUN_005fd990(pSVar2,1,count,file);
  if (SVar3 != count) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffd0,"Model file read error: %s");
    g_CurrentLineNumber = 0x107;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10((char *)&pcStack_2c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\model.c",0x109);
  cVar1 = (char)(pSVar2->base).type;
  if ((cVar1 != 0x14) && (cVar1 != 0x20)) {
    pcStack_2c = filename;
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_24,"Invalid model: %s");
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x10d;
    pcStack_2c = (char *)0x52806e;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_20);
  }
  return pSVar2;
}
