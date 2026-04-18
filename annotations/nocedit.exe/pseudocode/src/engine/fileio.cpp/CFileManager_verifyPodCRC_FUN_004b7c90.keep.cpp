// Name: engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
// Address: 004b7c90
// MANUAL RECONSTRUCTION
// Address Range: [[004b7c90, 004b7d42]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager *this_ptr,char *pod_filename)

{
  int iVar2;
  int iVar3;
  char local_108 [256];

  if (pod_filename == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to check","*.pod",
                       local_108,0);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    strcpy(local_108,pod_filename);
  }
  iVar3 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280((CPod *)g_CDemonPodPtr,local_108);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"CRC check is valid",0,0);
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"WARNING!  CRC is invalid.  This may be an old .POD",0,0);
  return;
}
