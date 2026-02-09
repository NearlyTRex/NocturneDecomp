// Name: engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10
// Address: 004b6e10
// Address Range: [[004b6e10, 004b7457]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10 (CFileManager *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  int iVar2;
  _tm *p_Var3;
  int iVar4;
  uint *puVar5;
  time_t *ptVar6;
  time_t *ptVar7;
  char *pcVar8;
  time_t *ptVar9;
  SFoundFileInfo *pSVar10;
  byte bVar11;
  int in_stack_0000000c;
  time_t atStackY_2e68 [2034];
  CFileManager *source_file;
  _FILE *dest_filename;
  uint file_size;
  char *pcVar12;
  CEditorTools *checksum;
  byte local_e80 [2088];
  SFoundFileInfo local_658;
  char local_444 [256];
  char local_344 [256];
  char local_244 [256];
  char local_144 [256];
  char *local_44;
  time_t local_40 [4];
  byte local_30 [16];
  _FILE *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  if (pod_filename == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to extract",0x627b23,local_244);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    pcVar12 = local_244;
    do {
      cVar1 = *pod_filename;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff17c);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650((CPodFile *)&stack0xfffff17c,local_244)
  ;
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to extract files!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff17c);
    return;
  }
  iVar2 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230((CPodFile *)&stack0xfffff17c);
  if (iVar2 == 0) {
    p_Var3 = _localtime((time_t *)(local_e80 + 0x100));
    _strftime(local_444,0x100,"%m/%d/%Y",p_Var3);
    iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Warning!  This .POD file has an invalid CRC.  If it's date is earlier\nthan 07/28/1998, it has no CRC, and you should ignore this message.\n\n%s %s\n\nDo you wish to continue?");
    if (iVar2 == 0) {
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff17c);
      return;
    }
  }
  pcVar12 = "rb";
  file_size = 0;
  local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_e80,(char *)0x0,"rb","..\\engine\\fileio.cpp",0x94f);
  if (local_20 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff17c);
    return;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar2 = 0;
  local_14 = 1;
  if (this_ptr->batch_mode != 0) {
    local_14 = 2;
  }
  local_18 = 0;
  if (0 < (int)local_e80._1036_4_) {
    local_1c = 0;
    do {
      puVar5 = (uint *)((int)(uint *)local_e80._1040_4_ + local_1c);
      ptVar6 = puVar5 + (uint)bVar11 * -2 + 1;
      local_44 = (char *)*puVar5;
      ptVar9 = local_40 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1;
      ptVar7 = ptVar6 + (uint)bVar11 * -2 + 1;
      local_40[(uint)bVar11 * -2] = *ptVar6;
      *ptVar9 = *ptVar7;
      ptVar9[(uint)bVar11 * -2 + 1] = ptVar7[(uint)bVar11 * -2 + 1];
      (ptVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
           (ptVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      pSVar10 = &local_658;
      pcVar8 = local_44;
      do {
        cVar1 = *pcVar8;
        pSVar10->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pSVar10->found_path[1] = cVar1;
        pSVar10 = (SFoundFileInfo *)(pSVar10->found_path + 2);
      } while (cVar1 != '\0');
      pSVar10 = &local_658;
      checksum = (CEditorTools *)0x4b6fce;
      iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(pSVar10);
      if ((this_ptr->operation_mode != 0) && (((local_14 == 0 || (local_14 == 1)) && (iVar4 != 0))))
      {
        p_Var3 = _localtime((time_t *)&local_658.timestamp);
        _strftime(local_344,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",p_Var3);
        p_Var3 = _localtime(local_40 + 2);
        _strftime(local_144,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",p_Var3);
        file_size = local_658.file_size;
        _sprintf
                  (local_e80 + 0x428,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",local_658.target_path);
        pSVar10 = (SFoundFileInfo *)(local_e80 + 0x428);
        pcVar12 = (char *)0x4b70a5;
        checksum = g_CEditorToolsPtr;
        local_14 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
                             (g_CEditorToolsPtr,(char *)pSVar10);
      }
      dest_filename = local_20;
      pcVar8 = local_44;
      if (local_14 == -1) break;
      if ((0 < local_14) || (iVar4 == 0)) {
        ptVar7 = (time_t *)(local_e80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -0x10);
        ptVar6 = local_40 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1;
        *(time_t *)(local_e80 + (uint)bVar11 * -8 + -0x14) = local_40[(uint)bVar11 * -2];
        source_file = this_ptr;
        *ptVar7 = *ptVar6;
        ptVar7[(uint)bVar11 * -2 + 1] = ptVar6[(uint)bVar11 * -2 + 1];
        (ptVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
             (ptVar6 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        iVar4 = engine_fileio_cpp_extractFileWithTimestamp_FUN_004b7d50
                          ((_FILE *)source_file,(char *)dest_filename,pcVar8,file_size,(int)pcVar12,
                           (int)checksum,(int)pSVar10);
        if (iVar4 == 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Unable to extract file:\n%s");
        }
      }
      _sprintf(local_e80 + 0x428,"%s %s");
      engine_2d_c_drawText_FUN_00401fd0(local_e80 + 0x428,0,iVar2);
      _sprintf(local_e80 + 0x428,"%d");
      engine_2d_c_drawText_FUN_00401fd0(local_e80 + 0x428,g_WindowWidth / 2,iVar2);
      _sprintf(local_e80 + 0x428,"%d");
      pcVar12 = local_e80 + 0x428;
      file_size = 0x4b73ac;
      engine_2d_c_drawText_FUN_00401fd0
                (pcVar12,((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                               (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,
                 iVar2);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar2 = iVar2 + 0xb;
      if (g_WindowHeight + -0x21 <= iVar2) {
        pcVar12 = "More...";
        file_size = 0x4b73d8;
        engine_2d_c_drawText_FUN_00401fd0("More...",0,g_WindowHeight + -0xc);
        iVar2 = 0;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
      }
      local_1c = local_1c + 0x14;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_e80._1036_4_);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\fileio.cpp",0x99a);
  engine_2d_c_drawText_FUN_00401fd0("End.",0,g_WindowHeight + -0xc);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  if (this_ptr->batch_mode == 0) {
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  if (in_stack_0000000c != 0) {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_30);
    engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,(CStrList *)local_30);
    iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                      (this_ptr,(CStrList *)local_30,local_244);
    if ((-1 < iVar2) &&
       (iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"%s is currently mounted.\nDo you want to dismount it now?"), iVar4 != 0)) {
      shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)local_30,iVar2);
      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,(CStrList *)local_30);
      if (g_CDemonPodPtr != (CDemonPod *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Remounting all pods...");
        engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
        (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
      }
    }
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)(local_30 + 4),0);
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)local_e80);
  return;
}
