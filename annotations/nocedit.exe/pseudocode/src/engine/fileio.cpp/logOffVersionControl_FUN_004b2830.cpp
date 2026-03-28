// Name: engine_fileio.cpp_logOffVersionControl_FUN_004b2830
// Address: 004b2830
// Address Range: [[004b2830, 004b2859]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_logOffVersionControl_FUN_004b2830(void)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_logOffVersionControl_FUN_004b2830(void)

{
  if (g_VersionControlSession.session_handle == (HANDLE)0x0) {
    return;
  }
  (*g_RevertToSelfFunc)();
  (*g_CloseHandleFunc)(g_VersionControlSession.session_handle);
  g_VersionControlSession.session_handle = (HANDLE)0x0;
  return;
}
