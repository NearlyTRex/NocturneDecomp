// Name: engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
// Address: 004b1c00
// MANUAL RECONSTRUCTION
// Address Range: [[004b1c00, 004b1d3f]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_establishUserIdentity_FUN_004b1c00(void)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_establishUserIdentity_FUN_004b1c00(void)

{
  char *pcVar2;
  int iVar3;
  SVersionControlSession *pSVar4;
  char *pcVar3;
  char local_204 [512];

  if (g_VersionControlSession.primary_username[0] != '\0') {
    return 1;
  }
  wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(local_204);
  if (local_204[0] != '\0') {
    strcpy(g_VersionControlSession.primary_username,local_204);
    return 1;
  }
  pcVar2 = getenv("USERNAME");
  if (pcVar2 != (char *)0x0) {
    _strncpy(g_VersionControlSession.primary_username,pcVar2,0x1f);
    return 1;
  }
  do {
    while( true ) {
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter user name",
                         g_VersionControlSession.primary_username,0x20,1);
      if (iVar3 == 0) {
        g_VersionControlSession.primary_username[0] = '\0';
        return 0;
      }
      if (g_VersionControlSession.primary_username[0] != '\0') break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You must enter a user name.");
    }
    pSVar4 = &g_VersionControlSession;
    while ((pSVar4->primary_username[0] == '_' ||
           ((g_CharacterClassificationTable[(byte)(pSVar4->primary_username[0] + 1)] & 0xe0) != 0)))
    {
      pcVar3 = pSVar4->primary_username;
      pSVar4 = (SVersionControlSession *)(pSVar4->primary_username + 1);
      if (pcVar3[1] == '\0') {
        return 1;
      }
    }
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Name contains invalid characters");
  } while( true );
}
