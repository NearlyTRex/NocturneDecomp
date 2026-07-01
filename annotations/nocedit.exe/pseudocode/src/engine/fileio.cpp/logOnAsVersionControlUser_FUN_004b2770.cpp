// Name: engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
// Address: 004b2770
// Address Range: [[004b2770, 004b2821]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770(void)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770(void)

{
  BOOL BVar1;
  
  if (g_VersionControlSession.network_username[0] == '\0') {
    return 1;
  }
  if (g_VersionControlSession.session_handle != (HANDLE)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 533;
    core_main_c_displayErrorAndQuit_FUN_00506f10("fileManager::logOnAsVersionControlUser - already logged on!");
  }
  BVar1 = (*g_LogonUserAFunc)(g_VersionControlSession.network_username,
                              g_VersionControlSession.domain,g_VersionControlSession.password,2,0,
                              &g_VersionControlSession.session_handle);
  if (BVar1 != 0) {
    BVar1 = (*g_ImpersonateLoggedOnUserFunc)(g_VersionControlSession.session_handle);
    if (BVar1 != 0) {
      return 1;
    }
    (*g_CloseHandleFunc)(g_VersionControlSession.session_handle);
    g_VersionControlSession.session_handle = (HANDLE)0x0;
  }
  (*g_GetLastErrorFunc)();
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't log on to server as version control user.");
  return 0;
}
