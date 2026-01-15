// Name: engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10
// Address: 004b6e10
// Address Range: [[004b6e10, 004b7457]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10(CFileManager * this_ptr, char * pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  tm *ptVar4;
  int iVar5;
  uint *puVar6;
  time_t *ptVar7;
  time_t *ptVar8;
  char *pcVar9;
  time_t *ptVar10;
  SFoundFileInfo *pSVar11;
  byte bVar12;
  int in_stack_0000000c;
  time_t atStackY_2e68 [2034];
  CFileManager *source_file;
  FILE *dest_filename;
  uint file_size;
  char *pcVar13;
  CEditorTools *checksum;
  uint in_stack_fffff180;
  uint local_a74;
  CPodDirectoryEntry *local_a70;
  SFoundFileInfo local_a58;
  SFoundFileInfo local_658;
  char local_444 [256];
  char local_344 [256];
  char local_244 [256];
  char local_144 [256];
  char *local_44;
  time_t local_40 [4];
  byte local_30 [16];
  FILE *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar12 = 0;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to extract",true,local_244);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    pcVar13 = local_244;
    do {
      cVar1 = *pod_filename;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff17c);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650((CPodFile *)&stack0xfffff17c,local_244)
  ;
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to extract files!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff17c);
    return;
  }
  iVar3 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230((CPodFile *)&stack0xfffff17c);
  if (iVar3 == 0) {
    ptVar4 = crt_time_c_localtime_FUN_00600288((time_t *)&stack0xfffff280);
    crt_time_c_strftime_FUN_006002d4(local_444,0x100,"%m/%d/%Y",ptVar4);
    iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Warning!  This .POD file has an invalid CRC.  If it's date is earlier\nthan 07/28/1998, it has no CRC, and you should ignore this message.\n\n%s %s\n\nDo you wish to continue?");
    if (iVar3 == 0) {
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff17c);
      return;
    }
  }
  pcVar13 = "rb";
  file_size = 0;
  local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (&stack0xfffff180,(char *)0x0,"rb","..\\engine\\fileio.cpp",
                        0x94f);
  if (local_20 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff17c);
    return;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar3 = 0;
  local_14 = 1;
  if (this_ptr->batch_mode != 0) {
    local_14 = 2;
  }
  local_18 = 0;
  if (0 < (int)local_a74) {
    local_1c = 0;
    do {
      puVar6 = (uint *)((int)&local_a70->name_or_offset + local_1c);
      ptVar7 = puVar6 + (uint)bVar12 * -2 + 1;
      local_44 = (char *)*puVar6;
      ptVar10 = local_40 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1;
      ptVar8 = ptVar7 + (uint)bVar12 * -2 + 1;
      local_40[(uint)bVar12 * -2] = *ptVar7;
      *ptVar10 = *ptVar8;
      ptVar10[(uint)bVar12 * -2 + 1] = ptVar8[(uint)bVar12 * -2 + 1];
      (ptVar10 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (ptVar8 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      pSVar11 = &local_658;
      pcVar9 = local_44;
      do {
        cVar1 = *pcVar9;
        pSVar11->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pSVar11->found_path[1] = cVar1;
        pSVar11 = (SFoundFileInfo *)(pSVar11->found_path + 2);
      } while (cVar1 != '\0');
      pSVar11 = &local_658;
      checksum = (CEditorTools *)0x4b6fce;
      iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0(pSVar11);
      if ((this_ptr->operation_mode != 0) && (((local_14 == 0 || (local_14 == 1)) && (iVar5 != 0))))
      {
        ptVar4 = crt_time_c_localtime_FUN_00600288((time_t *)&local_658.timestamp);
        crt_time_c_strftime_FUN_006002d4(local_344,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar4);
        ptVar4 = crt_time_c_localtime_FUN_00600288(local_40 + 2);
        crt_time_c_strftime_FUN_006002d4(local_144,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar4);
        file_size = local_658.file_size;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_a58.found_path,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",local_658.target_path);
        pSVar11 = &local_a58;
        pcVar13 = (char *)0x4b70a5;
        checksum = g_CEditorToolsPtr;
        local_14 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
                             (g_CEditorToolsPtr,pSVar11->found_path);
      }
      dest_filename = local_20;
      pcVar9 = local_44;
      if (local_14 == -1) break;
      if ((0 < local_14) || (iVar5 == 0)) {
        ptVar8 = (time_t *)(&stack0xfffff170 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        ptVar7 = local_40 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1;
        *(time_t *)(&stack0xfffff16c + (uint)bVar12 * -8) = local_40[(uint)bVar12 * -2];
        source_file = this_ptr;
        *ptVar8 = *ptVar7;
        ptVar8[(uint)bVar12 * -2 + 1] = ptVar7[(uint)bVar12 * -2 + 1];
        (ptVar8 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
             (ptVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        iVar5 = engine_fileio_cpp_extractFileWithTimestamp_FUN_004b7d50
                          ((FILE *)source_file,(char *)dest_filename,pcVar9,file_size,(int)pcVar13,
                           (int)checksum,(int)pSVar11);
        if (iVar5 == 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Unable to extract file:\n%s");
        }
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_a58.found_path,"%s %s");
      engine_2d_c_drawText_FUN_00401fd0(local_a58.found_path,0,iVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_a58.found_path,"%d");
      engine_2d_c_drawText_FUN_00401fd0(local_a58.found_path,g_WindowWidth / 2,iVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_a58.found_path,"%d");
      pcVar13 = local_a58.found_path;
      file_size = 0x4b73ac;
      engine_2d_c_drawText_FUN_00401fd0
                (pcVar13,((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                               (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,
                 iVar3);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar3 = iVar3 + 0xb;
      if (g_WindowHeight + -0x21 <= iVar3) {
        pcVar13 = "More...";
        file_size = 0x4b73d8;
        engine_2d_c_drawText_FUN_00401fd0("More...",0,g_WindowHeight + -0xc);
        iVar3 = 0;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
      }
      local_1c = local_1c + 0x14;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_a74);
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
    iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                      (this_ptr,(CStrList *)local_30,local_244);
    if ((-1 < iVar3) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"%s is currently mounted.\nDo you want to dismount it now?"), iVar5 != 0)) {
      shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)local_30,iVar3);
      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,(CStrList *)local_30);
      if (g_CDemonPodPtr != (CDemonPod *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Remounting all pods...");
        engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
        (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
      }
    }
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)(local_30 + 4),0,in_stack_fffff180);
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff180);
  return;
}
