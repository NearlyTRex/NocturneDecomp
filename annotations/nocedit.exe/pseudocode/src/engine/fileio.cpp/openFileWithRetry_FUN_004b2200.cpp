// Name: engine_fileio.cpp_openFileWithRetry_FUN_004b2200
// Address: 004b2200
// Address Range: [[004b2200, 004b2265]]
// Convention: __cdecl
// Signature: _FILE * __cdecl engine_fileio_cpp_openFileWithRetry_FUN_004b2200(char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl engine_fileio_cpp_openFileWithRetry_FUN_004b2200(char *filename,char *mode)

{
  _FILE *stream_ptr;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (filename,(char *)0x0,mode,"..\\engine\\fileio.cpp",339);
    if (stream_ptr != (_FILE *)0x0) {
      _setvbuf(stream_ptr,(char *)0x0,0,0x400);
      return stream_ptr;
    }
    piVar1 = _errno();
    if (*piVar1 != 6) break;
    iVar2 = iVar2 + 1;
    (*g_SleepFunc)(500);
    if (9 < iVar2) {
      return (_FILE *)0x0;
    }
  }
  return (_FILE *)0x0;
}
