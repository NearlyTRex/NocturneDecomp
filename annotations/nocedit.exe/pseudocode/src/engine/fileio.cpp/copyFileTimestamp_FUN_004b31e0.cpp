// Name: engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0
// Address: 004b31e0
// Address Range: [[004b31e0, 004b321b]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_copyFileTimestamp_FUN_004b31e0(char *source_file,char *dest_file)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_copyFileTimestamp_FUN_004b31e0(char *source_file,char *dest_file)

{
  int iVar1;
  
  iVar1 = engine_dosio_cpp_copyFileTimestamp_FUN_00481910(source_file,dest_file);
  if (iVar1 != 0) {
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",source_file);
  return 0;
}
