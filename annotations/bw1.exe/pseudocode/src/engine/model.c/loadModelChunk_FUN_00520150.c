// Name: engine_model.c_loadModelChunk_FUN_00520150
// Address: 00520150
// Address Range: [[00520150, 00520289]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_00520150(char *filename,int model_size)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_00520150(char *filename,int model_size)

{
  char cVar1;
  _FILE *file;
  SMRGLHeaderExtended *buffer;
  SIZE_T SVar2;
  char local_60 [80];
  
  file = engine_dosio_cpp_getFile_FUN_00479180("models",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_60,"Unable to open model: %s");
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 740;
    core_main_c_displayErrorAndQuit_FUN_005030e0(local_60);
  }
  buffer = (SMRGLHeaderExtended *)malloc(model_size + 4);
  if (buffer == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_60,"Out of partial model mem : %s");
    g_CurrentLineNumber = 751;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_005030e0(local_60);
  }
  SVar2 = _fread(buffer,1,model_size,file);
  if (SVar2 != model_size) {
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 756;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Model read hose");
  }
  _fclose(file);
  cVar1 = (char)(buffer->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 760;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Bad model!");
    *(uint *)((int)&(buffer->base).type + model_size) = 0;
    return buffer;
  }
  *(uint *)((int)&(buffer->base).type + model_size) = 0;
  return buffer;
}
