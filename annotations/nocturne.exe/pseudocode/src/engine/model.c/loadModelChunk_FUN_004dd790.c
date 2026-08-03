// Name: engine_model.c_loadModelChunk_FUN_004dd790
// Address: 004dd790
// Address Range: [[004dd790, 004dd8c7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_004dd790(char *filename,int model_size)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_004dd790(char *filename,int model_size)

{
  char cVar1;
  _FILE *file;
  SMRGLHeaderExtended *buffer;
  SIZE_T SVar2;
  byte local_60 [80];
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_60,"Unable to open model: %s",filename);
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    g_INT_01cc4804 = 0x2e3;
    core_main_c_FUN_004c8440(local_60);
  }
  buffer = (SMRGLHeaderExtended *)malloc(model_size + 4);
  if (buffer == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_60,"Out of partial model mem : %s",filename);
    g_INT_01cc4804 = 0x2ee;
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    core_main_c_FUN_004c8440(local_60);
  }
  SVar2 = _fread(buffer,1,model_size,file);
  if (SVar2 != model_size) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    g_INT_01cc4804 = 0x2f3;
    core_main_c_FUN_004c8440("Model read hose");
  }
  _fclose(file);
  cVar1 = (char)(buffer->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\model.c";
    g_INT_01cc4804 = 0x2f6;
    core_main_c_FUN_004c8440("Bad model!");
    *(uint *)((int)&(buffer->base).type + model_size) = 0;
    return buffer;
  }
  *(uint *)((int)&(buffer->base).type + model_size) = 0;
  return buffer;
}
