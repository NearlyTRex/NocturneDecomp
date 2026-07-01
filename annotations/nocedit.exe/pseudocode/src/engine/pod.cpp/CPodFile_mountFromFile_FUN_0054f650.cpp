// Name: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
// Address: 0054f650
// Address Range: [[0054f650, 00550085]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename)

{
  char cVar2;
  bool bVar3;
  _FILE *file_handle;
  int iVar2;
  _FILE *p_Var3;
  int iVar4;
  CPodDirectoryEntry *pCVar4;
  int *piVar5;
  CPodDirectoryEntry *pCVar5;
  uint uVar6;
  uint uVar7;
  int iVar7;
  SIZE_T size;
  char *pcVar8;
  char *pcVar10;
  SEpdDirEntry *pSVar11;
  SPod1DirEntry *pSVar12;
  char *pcVar9;
  char *pcVar13;
  byte bVar10;
  bool bVar11;
  SFoundFileInfo local_6a4;
  SPod3Header local_490;
  SEpdHeader local_370;
  char local_260 [256];
  SPod2Header local_160;
  SPod1Header local_100;
  SEpdDirEntry local_ac;
  SPod1DirEntry local_5c;
  int local_34;
  char (*local_30) [4];
  int local_2c;
  int local_28;
  int local_24;
  _FILE *local_20;
  int local_1c;
  int local_18;
  int local_14;
  char cVar1;
  _FILE *file;
  
  bVar10 = 0;
  bVar3 = false;
  engine_pod_cpp_CPodFile_cleanup_FUN_00550090(this_ptr);
  engine_dosio_cpp_getRelativeFilePath_FUN_004816c0(local_6a4.found_path,(char *)0x0,pod_filename);
  iVar2 = engine_dosio_cpp_findFileNormally_FUN_004817c0(&local_6a4);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar8 = local_6a4.target_path;
  pcVar9 = this_ptr->filename;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  this_ptr->timestamp = local_6a4.timestamp;
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",336);
  local_20 = p_Var3;
  if (p_Var3 == (_FILE *)0x0) goto LAB_0054f6fe;
  engine_dosio_cpp_splitPath_FUN_00481f20
            (pod_filename,(char *)0x0,(char *)0x0,(char *)0x0,local_260);
  iVar4 = _stricmp(local_260,"epd");
  if (iVar4 == 0) {
LAB_0054f786:
    _fread(&local_370,1,0x110,local_20);
    pcVar10 = local_370.description;
    pcVar13 = this_ptr->description;
    this_ptr->file_count = local_370.file_count;
    do {
      cVar2 = *pcVar10;
      *pcVar13 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar13[1] = cVar2;
      pcVar13 = pcVar13 + 2;
    } while (cVar2 != '\0');
    pCVar4 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",364);
    this_ptr->directory_entries = pCVar4;
    if (pCVar4 == (CPodDirectoryEntry *)0x0) {
LAB_0054f6fe:
      if (local_20 != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\pod.cpp",339);
      }
      engine_pod_cpp_CPodFile_cleanup_FUN_00550090(this_ptr);
      return 0;
    }
    size = 0;
    local_2c = 0;
    local_28 = 0;
    if (0 < this_ptr->file_count) {
      local_18 = 0;
      do {
        _fread(&local_ac,1,0x50,local_20);
        *(SIZE_T *)((int)&this_ptr->directory_entries->name + local_18) = size;
        uVar6 = 0xffffffff;
        pSVar11 = &local_ac;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar13 = pSVar11->filename;
          pSVar11 = (SEpdDirEntry *)((int)pSVar11 + (uint)bVar10 * -2 + 1);
        } while (*pcVar13 != '\0');
        size = size + ~uVar6;
        if (local_2c < (int)size) {
          local_2c = (this_ptr->file_count - local_28) * 0x30 + size;
          pcVar13 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                              (this_ptr->file_data_buffer,local_2c,"..\\engine\\pod.cpp",379);
          this_ptr->file_data_buffer = pcVar13;
          if (pcVar13 == (char *)0x0) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 380;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
        }
        pSVar11 = &local_ac;
        pcVar13 = this_ptr->file_data_buffer +
                  *(int *)((int)&this_ptr->directory_entries->name + local_18);
        do {
          cVar2 = pSVar11->filename[0];
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pSVar11->filename[1];
          pSVar11 = (SEpdDirEntry *)(pSVar11->filename + 2);
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
        *(uint *)((int)&this_ptr->directory_entries->size + local_18) = local_ac.size;
        *(uint *)((int)&this_ptr->directory_entries->offset + local_18) = local_ac.offset;
        *(uint *)((int)&this_ptr->directory_entries->checksum + local_18) = local_ac.checksum;
        local_28 = local_28 + 1;
        *(uint *)((int)&this_ptr->directory_entries->timestamp + local_18) = this_ptr->timestamp;
        local_18 = local_18 + 0x14;
      } while (local_28 < this_ptr->file_count);
    }
    bVar11 = SBORROW4(size,local_2c);
    iVar4 = size - local_2c;
  }
  else {
    iVar4 = _stricmp(local_260,".epd");
    if (iVar4 == 0) goto LAB_0054f786;
    _fread(&local_30,1,4,p_Var3);
    _fseek(p_Var3,0,0);
    file = local_20;
    if (((((char)local_30 == 'P') && (local_30._1_1_ == 'O')) && (local_30._2_1_ == 'D')) &&
       (local_30._3_1_ == '3')) {
      pcVar10 = local_490.description;
      _fread(&local_490,1,0x120,p_Var3);
      pcVar13 = this_ptr->description;
      this_ptr->pod_format_version = 200;
      do {
        cVar2 = *pcVar10;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      pcVar10 = local_490.author;
      pcVar13 = this_ptr->author_info;
      do {
        cVar2 = *pcVar10;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      pcVar10 = local_490.copyright;
      pcVar13 = this_ptr->copyright_info;
      do {
        cVar2 = *pcVar10;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      this_ptr->file_count = local_490.file_count;
      this_ptr->audit_count = local_490.audit_count;
      this_ptr->dependency_count = local_490.dependency_count;
      this_ptr->mount_priority = local_490.mount_priority;
      pCVar5 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",427);
      this_ptr->directory_entries = pCVar5;
      if (pCVar5 != (CPodDirectoryEntry *)0x0) {
        _fseek(p_Var3,local_490.data_start_offset,0);
        _fread(this_ptr->directory_entries,this_ptr->file_count,0x14,p_Var3)
        ;
        if ((p_Var3->_flag & 0x20) == 0) {
          if ((this_ptr->file_count <= (int)local_490.total_file_size) &&
             ((int)local_490.total_file_size <= this_ptr->file_count * 0x100)) {
            pcVar13 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                                (local_490.total_file_size,"..\\engine\\pod.cpp",442);
            this_ptr->file_data_buffer = pcVar13;
            if (pcVar13 == (char *)0x0) {
              g_CurrentFilename = "..\\engine\\pod.cpp";
              g_CurrentLineNumber = 443;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
            }
            file_handle = local_20;
            _fread(this_ptr->file_data_buffer,local_490.total_file_size,1,local_20);
            if ((file_handle->_flag & 0x20) == 0) {
              uVar7 = _ftell(file_handle);
              this_ptr->dependency_records_offset = uVar7;
              this_ptr->total_file_size =
                   this_ptr->dependency_records_offset + this_ptr->dependency_count * 0x108;
              size = local_490.total_file_size;
              goto LAB_0054f9a8;
            }
          }
        }
      }
      goto LAB_0054f6fe;
    }
    if ((((char)local_30 == 'P') && (local_30._1_1_ == 'O')) &&
       ((local_30._2_1_ == 'D' && (local_30._3_1_ == '2')))) {
      pcVar10 = local_160.description;
      _fread(&local_160,1,0x60,local_20);
      pcVar13 = this_ptr->description;
      this_ptr->pod_format_version = 200;
      do {
        cVar2 = *pcVar10;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      this_ptr->file_count = local_160.file_count;
      this_ptr->audit_count = local_160.audit_count;
      pCVar5 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",474);
      this_ptr->directory_entries = pCVar5;
      if (pCVar5 != (CPodDirectoryEntry *)0x0) {
        _fread(pCVar5,this_ptr->file_count,0x14,file);
        iVar4 = this_ptr->file_count;
        size = (this_ptr->directory_entries->offset - 0x60) + iVar4 * -0x14;
        if (((int)size < iVar4) || (iVar4 * 0x100 < (int)size)) goto LAB_0054f6fe;
        pcVar13 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\pod.cpp",487);
        this_ptr->file_data_buffer = pcVar13;
        if (pcVar13 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\pod.cpp";
          g_CurrentLineNumber = 488;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        _fread(this_ptr->file_data_buffer,size,1,local_20);
        iVar4 = this_ptr->file_count + -1;
        this_ptr->total_file_size =
             this_ptr->directory_entries[iVar4].offset + this_ptr->directory_entries[iVar4].size;
        goto LAB_0054f9a8;
      }
      goto LAB_0054f6fe;
    }
    this_ptr->pod_format_version = 1;
    _fread(&local_100,1,0x54,local_20);
    if ((local_100.file_count < 1) || (99999 < local_100.file_count)) goto LAB_0054f6fe;
    pcVar10 = local_100.description;
    pcVar13 = this_ptr->description;
    this_ptr->file_count = local_100.file_count;
    do {
      cVar2 = *pcVar10;
      *pcVar13 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar13[1] = cVar2;
      pcVar13 = pcVar13 + 2;
    } while (cVar2 != '\0');
    pCVar5 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",522);
    this_ptr->directory_entries = pCVar5;
    if (pCVar5 == (CPodDirectoryEntry *)0x0) goto LAB_0054f6fe;
    size = 0;
    local_1c = 0;
    local_24 = 0;
    if (0 < this_ptr->file_count) {
      local_14 = 0;
      do {
        _fread(&local_5c,1,0x28,local_20);
        *(SIZE_T *)((int)&this_ptr->directory_entries->name + local_14) = size;
        uVar7 = 0xffffffff;
        pSVar12 = &local_5c;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pSVar12->filename;
          pSVar12 = (SPod1DirEntry *)((int)pSVar12 + (uint)bVar10 * -2 + 1);
        } while (*pcVar13 != '\0');
        size = size + ~uVar7;
        if (local_1c < (int)size) {
          local_1c = (this_ptr->file_count - local_24) * 0x30 + size;
          pcVar13 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                              (this_ptr->file_data_buffer,local_1c,"..\\engine\\pod.cpp",537);
          this_ptr->file_data_buffer = pcVar13;
          if (pcVar13 == (char *)0x0) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 538;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
        }
        pSVar12 = &local_5c;
        pcVar13 = this_ptr->file_data_buffer +
                  *(int *)((int)&this_ptr->directory_entries->name + local_14);
        do {
          cVar2 = pSVar12->filename[0];
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pSVar12->filename[1];
          pSVar12 = (SPod1DirEntry *)(pSVar12->filename + 2);
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
        *(uint *)((int)&this_ptr->directory_entries->size + local_14) = local_5c.size;
        *(uint *)((int)&this_ptr->directory_entries->offset + local_14) = local_5c.offset;
        *(uint *)((int)&this_ptr->directory_entries->checksum + local_14) = 0;
        iVar4 = local_14 + 0x14;
        *(uint *)((int)&this_ptr->directory_entries->timestamp + local_14) = this_ptr->timestamp;
        local_24 = local_24 + 1;
        local_14 = iVar4;
      } while (local_24 < this_ptr->file_count);
    }
    bVar11 = SBORROW4(size,local_1c);
    iVar4 = size - local_1c;
  }
  if (bVar11 != iVar4 < 0) {
    bVar3 = true;
  }
LAB_0054f9a8:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\pod.cpp",557);
  if (bVar3) {
    pcVar13 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                        (this_ptr->file_data_buffer,size,"..\\engine\\pod.cpp",563);
    this_ptr->file_data_buffer = pcVar13;
    if (pcVar13 == (char *)0x0) {
      g_CurrentFilename = "..\\engine\\pod.cpp";
      g_CurrentLineNumber = 565;
      core_main_c_displayErrorAndQuit_FUN_00506f10("realloc returns NULL shrinking filenameBlockSize to fit.");
    }
  }
  iVar4 = 0;
  if (0 < this_ptr->file_count) {
    iVar7 = 0;
    do {
      piVar5 = (int *)((int)&this_ptr->directory_entries->name + iVar7);
      if ((*piVar5 < 0) || ((int)size <= *piVar5)) goto LAB_0054f6fe;
      *piVar5 = (int)(this_ptr->file_data_buffer + *piVar5);
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 0x14;
    } while (iVar4 < this_ptr->file_count);
  }
  _qsort
            (this_ptr->directory_entries,this_ptr->file_count,0x14,
             engine_pod_cpp_qsortByFilename_FUN_0054f630);
  return 1;
}
