// Name: engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10
// Address: 004b6e10
// Address Range: [[004b6e10, 004b7457] [0060f300, 0060f344]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10(CFileManager *this_ptr,char *pod_filename,int offer_dismount)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10(CFileManager *this_ptr,char *pod_filename,int offer_dismount)

{
  char cVar2;
  int iVar2;
  int iVar3;
  _tm *p_Var3;
  int iVar4;
  _tm *p_Var4;
  int iVar5;
  char *pcVar6;
  uint *puVar5;
  time_t *ptVar6;
  time_t *ptVar7;
  char *pcVar8;
  uint *puVar7;
  char *pcVar9;
  time_t *ptVar9;
  SFoundFileInfo *pSVar10;
  byte bVar11;
  time_t atStackY_2e68 [2034];
  CPodFile CStack_e84;
  char acStack_a58 [1024];
  SFoundFileInfo local_658;
  char local_444 [256];
  char local_344 [256];
  char local_244 [256];
  char local_144 [256];
  char *local_44;
  time_t local_40 [4];
  CStrList local_30;
  _FILE *local_20;
  int local_1c;
  int local_18;
  int local_14;
  char cVar1;
  CEditorTools *timestamp_source;
  char *pcVar12;
  uint file_size;
  _FILE *source_file;
  CFileManager *this_ptr_00;
  
  if (pod_filename == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to extract","*.pod",
                       local_244,0);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    pcVar9 = local_244;
    do {
      cVar2 = *pod_filename;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&CStack_e84);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&CStack_e84,local_244);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to extract files!",local_244);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&CStack_e84,0);
    return;
  }
  iVar3 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230(&CStack_e84);
  if (iVar3 == 0) {
    p_Var3 = _localtime((time_t *)&CStack_e84.timestamp);
    _strftime(local_444,0x100,"%m/%d/%Y",p_Var3);
    iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Warning!  This .POD file has an invalid CRC.  If it's date is earlier\nthan 07/28/1998, it has no CRC, and you should ignore this message.\n\n%s %s\n\nDo you wish to continue?",CStack_e84.filename,
                       local_444);
    if (iVar3 == 0) {
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&CStack_e84,0);
      return;
    }
  }
  local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (CStack_e84.filename,(char *)0x0,"rb","..\\engine\\fileio.cpp",
                        2383);
  if (local_20 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",CStack_e84.filename);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&CStack_e84,0);
    return;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar3 = 0;
  local_14 = 1;
  if (this_ptr->batch_mode != 0) {
    local_14 = 2;
  }
  local_18 = 0;
  if (0 < CStack_e84.file_count) {
    local_1c = 0;
    do {
      puVar7 = (uint *)((int)&(CStack_e84.directory_entries)->name + local_1c);
      pcVar9 = (char *)*puVar7;
      local_40[0] = puVar7[1];
      local_40[1] = puVar7[2];
      local_40[2] = puVar7[3];
      local_40[3] = puVar7[4];
      pSVar10 = &local_658;
      pcVar8 = pcVar9;
      do {
        cVar1 = *pcVar8;
        pSVar10->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pSVar10->found_path[1] = cVar2;
        pSVar10 = (SFoundFileInfo *)(pSVar10->found_path + 2);
      } while (cVar2 != '\0');
      iVar4 = engine_dosio_cpp_findFileNormally_FUN_004817c0(&local_658);
      if ((this_ptr->operation_mode != 0) && (((local_14 == 0 || (local_14 == 1)) && (iVar4 != 0))))
      {
        p_Var4 = _localtime((time_t *)&local_658.timestamp);
        _strftime(local_344,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",p_Var4);
        p_Var4 = _localtime(local_40 + 2);
        _strftime(local_144,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",p_Var4);
        _sprintf(acStack_a58,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",local_658.target_path,
                   local_658.file_size,local_344,local_40[0],local_144);
        local_14 = shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180
                             (g_CEditorToolsPtr,acStack_a58);
      }
      if (local_14 == -1) break;
      pcVar6 = "(skipped)";
      if ((0 < local_14) || (iVar4 == 0)) {
        iVar5 = engine_fileio_cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50
                          (this_ptr,local_20,pcVar9,local_40[0],local_40[1],(char *)local_40[2],
                           local_40[3]);
        if (iVar5 == 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Unable to extract file:\n%s",pcVar9);
          pcVar6 = "(error)";
        }
        else {
          pcVar6 = &s_EmptyChar_00627d0c;
        }
      }
      _sprintf(acStack_a58,"%s %s",pcVar9,pcVar6);
      engine_2d_c_drawText_FUN_00401fd0(acStack_a58,0,iVar3);
      _sprintf(acStack_a58,"%d",local_40[0]);
      engine_2d_c_drawText_FUN_00401fd0(acStack_a58,g_WindowWidth / 2,iVar3);
      _sprintf(acStack_a58,"%d",local_40[1]);
      engine_2d_c_drawText_FUN_00401fd0
                (acStack_a58,
                 ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                       (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar3);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar3 = iVar3 + 0xb;
      if (g_WindowHeight + -0x21 <= iVar3) {
        engine_2d_c_drawText_FUN_00401fd0("More...",0,g_WindowHeight + -0xc);
        iVar3 = 0;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
      }
      local_1c = local_1c + 0x14;
      local_18 = local_18 + 1;
    } while (local_18 < CStack_e84.file_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\fileio.cpp",2458);
  engine_2d_c_drawText_FUN_00401fd0("End.",0,g_WindowHeight + -0xc);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  if (this_ptr->batch_mode == 0) {
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  if (offer_dismount != 0) {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_30);
    engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,&local_30);
    iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0(this_ptr,&local_30,local_244);
    if ((-1 < iVar3) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"%s is currently mounted.\nDo you want to dismount it now?",local_244),
       iVar5 != 0)) {
      shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_30,iVar3);
      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,&local_30);
      if (g_CDemonPodPtr != (CDemonPod *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Remounting all pods...");
        engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
        (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
      }
    }
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_30,0);
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&CStack_e84,0);
  return;
}
