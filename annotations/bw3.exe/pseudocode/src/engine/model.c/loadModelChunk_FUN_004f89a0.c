// Name: engine_model.c_loadModelChunk_FUN_004f89a0
// Address: 004f89a0
// Address Range: [[004f89a0, 004f8ad9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_004f89a0(char *filename,int model_size)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_004f89a0(char *filename,int model_size)

{
  char cVar1;
  _FILE *file;
  SMRGLHeaderExtended *buffer;
  SIZE_T SVar2;
  char local_60 [80];
  
  file = engine_dosio_cpp_getFile_FUN_004659c0("models",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_60,"Unable to open model: %s");
    g_CHAR_PTR_01d71de0 = "..\\engine\\model.c";
    g_INT_01d71de4 = 0x2e4;
    core_main_c_displayErrorAndQuit_FUN_004e4330(local_60);
  }
  buffer = (SMRGLHeaderExtended *)malloc(model_size + 4);
  if (buffer == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_60,"Out of partial model mem : %s");
    g_INT_01d71de4 = 0x2ef;
    g_CHAR_PTR_01d71de0 = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_004e4330(local_60);
  }
  SVar2 = _fread(buffer,1,model_size,file);
  if (SVar2 != model_size) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\model.c";
    g_INT_01d71de4 = 0x2f4;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Model read hose");
  }
  _fclose(file);
  cVar1 = (char)(buffer->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\model.c";
    g_INT_01d71de4 = 0x2f8;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Bad model!");
    *(uint *)((int)&(buffer->base).type + model_size) = 0;
    return buffer;
  }
  *(uint *)((int)&(buffer->base).type + model_size) = 0;
  return buffer;
}
