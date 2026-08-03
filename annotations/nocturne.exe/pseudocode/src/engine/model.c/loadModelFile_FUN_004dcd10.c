// Name: engine_model.c_loadModelFile_FUN_004dcd10
// Address: 004dcd10
// Address Range: [[004dcd10, 004dcedd]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_004dcd10(char *filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_004dcd10(char *filename)

{
  char cVar1;
  ulong size;
  _FILE *file;
  SMRGLHeaderExtended *pSVar2;
  SIZE_T SVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_5c [80];
  
  pcVar6 = filename;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_004dcd36;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_004dcd36;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004dcd36:
  if (pcVar5 != (char *)0x0) {
    iVar4 = toupper((uint)(byte)pcVar5[1]);
    if (iVar4 == 0x54) {
      pSVar2 = engine_boss_c_modelStructNotSupported2_FUN_0041a540(filename);
      return pSVar2;
    }
  }
  size = engine_dosio_cpp_getFileSize_FUN_004568c0("models",filename);
  if (size == 0) {
    _sprintf(local_5c,"Unable to get file size: %s");
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    g_INT_01cc4804 = 0xf0;
    core_main_c_FUN_004c8440(local_5c);
  }
  file = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_5c,"Unable to open model: %s");
    g_INT_01cc4804 = 0xf5;
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    core_main_c_FUN_004c8440(local_5c);
  }
  pSVar2 = (SMRGLHeaderExtended *)malloc(size);
  if (pSVar2 == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_5c,"Out of model memory: %s");
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    g_INT_01cc4804 = 0x100;
    core_main_c_FUN_004c8440(local_5c);
  }
  SVar3 = _fread(pSVar2,1,size,file);
  if (SVar3 != size) {
    _sprintf(local_5c,"Model file read error: %s");
    g_INT_01cc4804 = 0x107;
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    core_main_c_FUN_004c8440(local_5c);
  }
  _fclose(file);
  cVar1 = (char)(pSVar2->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    _sprintf(local_5c,"Invalid model: %s");
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    g_INT_01cc4804 = 0x10d;
    core_main_c_FUN_004c8440(local_5c);
  }
  return pSVar2;
}
