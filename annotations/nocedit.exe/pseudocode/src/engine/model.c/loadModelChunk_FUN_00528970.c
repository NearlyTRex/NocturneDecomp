// Name: engine_model.c_loadModelChunk_FUN_00528970
// Address: 00528970
// Address Range: [[00528970, 00528abb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_model.c_loadModelChunk_FUN_00528970(char * filename, int model_size)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_model_c_loadModelChunk_FUN_00528970(char *filename,int model_size)

{
  char cVar1;
  FILE *file;
  SMRGLHeaderExtended *buffer;
  SIZE_T SVar2;
  char local_60 [80];
  
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_60,"Unable to open model: %s",filename);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x2e3;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
  }
  buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250(model_size + 4,"..\\engine\\model.c",0x2e6)
  ;
  if (buffer == (SMRGLHeaderExtended *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_60,"Out of partial model mem : %s",filename);
    g_CurrentLineNumber = 0x2ee;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
  }
  SVar2 = crt_stdio_c_fread_FUN_005fd990(buffer,1,model_size,file);
  if (SVar2 != model_size) {
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x2f3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Model read hose");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\model.c",0x2f4);
  cVar1 = (char)(buffer->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x2f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad model!");
    *(uint *)((int)&(buffer->base).type + model_size) = 0;
    return buffer;
  }
  *(uint *)((int)&(buffer->base).type + model_size) = 0;
  return buffer;
}
