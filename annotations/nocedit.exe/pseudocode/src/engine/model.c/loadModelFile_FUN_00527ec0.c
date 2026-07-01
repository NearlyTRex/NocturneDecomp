// Name: engine_model.c_loadModelFile_FUN_00527ec0
// Address: 00527ec0
// Address Range: [[00527ec0, 005280a1]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00527ec0(char *filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00527ec0(char *filename)

{
  SIZE_T count;
  _FILE *file;
  SMRGLHeaderExtended *pSVar2;
  SIZE_T SVar3;
  int iVar4;
  SMRGLHeaderExtended *pSVar1;
  char *pcVar5;
  char *pcVar6;
  char local_5c [80];
  char cVar1;
  
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
    iVar4 = toupper((uint)(byte)pcVar5[1]);
    if (iVar4 == 0x54) {
      pSVar1 = engine_boss_c_modelStructNotSupported2_FUN_0041db80(filename);
      return pSVar1;
    }
  }
  count = engine_dosio_cpp_getFileSize_FUN_00481880("models",filename);
  if (count == 0) {
    _sprintf(local_5c,"Unable to get file size: %s",filename);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 240;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_5c);
  }
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_5c,"Unable to open model: %s",filename);
    g_CurrentLineNumber = 245;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_5c);
  }
  pSVar2 = (SMRGLHeaderExtended *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(count,"..\\engine\\model.c",248);
  if (pSVar2 == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_5c,"Out of model memory: %s",filename);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 256;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_5c);
  }
  SVar3 = _fread(pSVar2,1,count,file);
  if (SVar3 != count) {
    _sprintf(local_5c,"Model file read error: %s",filename);
    g_CurrentLineNumber = 263;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_5c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\model.c",265);
  cVar1 = (char)(pSVar2->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    _sprintf(local_5c,"Invalid model: %s",filename);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 269;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_5c);
  }
  return pSVar2;
}
