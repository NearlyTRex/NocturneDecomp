// Name: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
// Address: 0054f650
// Address Range: [[0054f650, 00550085]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename)

#include "nocturne.h"

int __cdecl
engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename)

{
  char cVar1;
  _FILE *file;
  int iVar2;
  _FILE *p_Var3;
  CPodDirectoryEntry *pCVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  SIZE_T size;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  bool bVar11;
  SFoundFileInfo local_6a4;
  byte local_490 [8];
  char local_488 [84];
  char local_434 [80];
  char local_3e4 [80];
  int local_394;
  long local_390;
  int local_388;
  SIZE_T local_384;
  int local_380;
  uint local_378;
  byte local_370 [4];
  char local_36c [256];
  int local_26c;
  char local_260 [256];
  byte local_160 [8];
  char local_158 [80];
  int local_108;
  uint local_104;
  int local_100;
  char local_fc [80];
  char local_ac [64];
  uint local_6c;
  uint local_68;
  uint local_60;
  char local_5c [32];
  uint local_3c;
  uint local_38;
  int local_34;
  char local_30;
  char local_2f;
  char local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  _FILE *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  local_34 = 0;
  engine_pod_cpp_CPodFile_cleanup_FUN_00550090(this_ptr);
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(local_6a4.found_path,(char *)0x0,pod_filename);
  iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_6a4);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar8 = local_6a4.target_path;
  pcVar9 = this_ptr->filename;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  this_ptr->filesize = local_6a4.timestamp;
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x150);
  local_20 = p_Var3;
  if (p_Var3 == (_FILE *)0x0) goto LAB_0054f6fe;
  engine_dosio_c_splitPath_FUN_00481f20(pod_filename,(char *)0x0,(char *)0x0,(char *)0x0,local_260);
  iVar2 = stricmp(local_260,"epd");
  if (iVar2 == 0) {
LAB_0054f786:
    _fread(local_370,1,0x110,local_20);
    pcVar9 = local_36c;
    pcVar8 = this_ptr->description;
    this_ptr->file_count = local_26c;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pCVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x16c);
    this_ptr->directory_entries = pCVar4;
    if (pCVar4 == (CPodDirectoryEntry *)0x0) {
LAB_0054f6fe:
      if (local_20 != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\pod.cpp",0x153);
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
        _fread(local_ac,1,0x50,local_20);
        *(SIZE_T *)((int)&this_ptr->directory_entries->name_or_offset + local_18) = size;
        uVar6 = 0xffffffff;
        pcVar8 = local_ac;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        size = size + ~uVar6;
        if (local_2c < (int)size) {
          local_2c = (this_ptr->file_count - local_28) * 0x30 + size;
          pcVar8 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (this_ptr->file_data_buffer,local_2c,"..\\engine\\pod.cpp",0x17b);
          this_ptr->file_data_buffer = pcVar8;
          if (pcVar8 == (char *)0x0) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x17c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
        }
        pcVar8 = local_ac;
        pcVar9 = this_ptr->file_data_buffer +
                 *(int *)((int)&this_ptr->directory_entries->name_or_offset + local_18);
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(uint *)((int)&this_ptr->directory_entries->size + local_18) = local_6c;
        *(uint *)((int)&this_ptr->directory_entries->offset + local_18) = local_68;
        *(uint *)((int)&this_ptr->directory_entries->checksum + local_18) = local_60;
        local_28 = local_28 + 1;
        *(uint *)((int)&this_ptr->directory_entries->timestamp + local_18) = this_ptr->filesize;
        local_18 = local_18 + 0x14;
      } while (local_28 < this_ptr->file_count);
    }
    bVar11 = SBORROW4(size,local_2c);
    iVar2 = size - local_2c;
  }
  else {
    iVar2 = stricmp(local_260,".epd");
    if (iVar2 == 0) goto LAB_0054f786;
    _fread(&local_30,1,4,p_Var3);
    _fseek(p_Var3,0,0);
    file = local_20;
    if ((((local_30 == 'P') && (local_2f == 'O')) && (local_2e == 'D')) && (local_2d == '3')) {
      pcVar9 = local_488;
      _fread(local_490,1,0x120,p_Var3);
      pcVar8 = this_ptr->description;
      this_ptr->pod_format_version = 200;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar9 = local_434;
      pcVar8 = this_ptr->author_info;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar9 = local_3e4;
      pcVar8 = this_ptr->copyright_info;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      this_ptr->file_count = local_394;
      this_ptr->audit_count = local_378;
      this_ptr->dependency_count = local_380;
      this_ptr->mount_priority = local_388;
      pCVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x1ab);
      this_ptr->directory_entries = pCVar4;
      if (pCVar4 != (CPodDirectoryEntry *)0x0) {
        _fseek(p_Var3,local_390,0);
        _fread(this_ptr->directory_entries,this_ptr->file_count,0x14,p_Var3)
        ;
        if ((p_Var3->_flag & 0x20) == 0) {
          if ((this_ptr->file_count <= (int)local_384) &&
             ((int)local_384 <= this_ptr->file_count * 0x100)) {
            pcVar8 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                               (local_384,"..\\engine\\pod.cpp",0x1ba);
            this_ptr->file_data_buffer = pcVar8;
            if (pcVar8 == (char *)0x0) {
              g_CurrentFilename = "..\\engine\\pod.cpp";
              g_CurrentLineNumber = 0x1bb;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
            }
            p_Var3 = local_20;
            _fread(this_ptr->file_data_buffer,local_384,1,local_20);
            if ((p_Var3->_flag & 0x20) == 0) {
              uVar6 = _ftell(p_Var3);
              this_ptr->dependency_records_offset = uVar6;
              this_ptr->total_file_size =
                   this_ptr->dependency_records_offset + this_ptr->dependency_count * 0x108;
              size = local_384;
              goto LAB_0054f9a8;
            }
          }
        }
      }
      goto LAB_0054f6fe;
    }
    if (((local_30 == 'P') && (local_2f == 'O')) && ((local_2e == 'D' && (local_2d == '2')))) {
      pcVar9 = local_158;
      _fread(local_160,1,0x60,local_20);
      pcVar8 = this_ptr->description;
      this_ptr->pod_format_version = 200;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      this_ptr->file_count = local_108;
      this_ptr->audit_count = local_104;
      pCVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x1da);
      this_ptr->directory_entries = pCVar4;
      if (pCVar4 != (CPodDirectoryEntry *)0x0) {
        _fread(pCVar4,this_ptr->file_count,0x14,file);
        iVar2 = this_ptr->file_count;
        size = (this_ptr->directory_entries->offset - 0x60) + iVar2 * -0x14;
        if (((int)size < iVar2) || (iVar2 * 0x100 < (int)size)) goto LAB_0054f6fe;
        pcVar8 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\pod.cpp",0x1e7);
        this_ptr->file_data_buffer = pcVar8;
        if (pcVar8 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\pod.cpp";
          g_CurrentLineNumber = 0x1e8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        _fread(this_ptr->file_data_buffer,size,1,local_20);
        iVar2 = this_ptr->file_count + -1;
        this_ptr->total_file_size =
             this_ptr->directory_entries[iVar2].offset + this_ptr->directory_entries[iVar2].size;
        goto LAB_0054f9a8;
      }
      goto LAB_0054f6fe;
    }
    this_ptr->pod_format_version = 1;
    _fread(&local_100,1,0x54,local_20);
    if ((local_100 < 1) || (99999 < local_100)) goto LAB_0054f6fe;
    pcVar9 = local_fc;
    pcVar8 = this_ptr->description;
    this_ptr->file_count = local_100;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pCVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x20a);
    this_ptr->directory_entries = pCVar4;
    if (pCVar4 == (CPodDirectoryEntry *)0x0) goto LAB_0054f6fe;
    size = 0;
    local_1c = 0;
    local_24 = 0;
    if (0 < this_ptr->file_count) {
      local_14 = 0;
      do {
        _fread(local_5c,1,0x28,local_20);
        *(SIZE_T *)((int)&this_ptr->directory_entries->name_or_offset + local_14) = size;
        uVar6 = 0xffffffff;
        pcVar8 = local_5c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        size = size + ~uVar6;
        if (local_1c < (int)size) {
          local_1c = (this_ptr->file_count - local_24) * 0x30 + size;
          pcVar8 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (this_ptr->file_data_buffer,local_1c,"..\\engine\\pod.cpp",0x219);
          this_ptr->file_data_buffer = pcVar8;
          if (pcVar8 == (char *)0x0) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x21a;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
        }
        pcVar8 = local_5c;
        pcVar9 = this_ptr->file_data_buffer +
                 *(int *)((int)&this_ptr->directory_entries->name_or_offset + local_14);
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(uint *)((int)&this_ptr->directory_entries->size + local_14) = local_3c;
        *(uint *)((int)&this_ptr->directory_entries->offset + local_14) = local_38;
        *(uint *)((int)&this_ptr->directory_entries->checksum + local_14) = 0;
        iVar2 = local_14 + 0x14;
        *(uint *)((int)&this_ptr->directory_entries->timestamp + local_14) = this_ptr->filesize;
        local_24 = local_24 + 1;
        local_14 = iVar2;
      } while (local_24 < this_ptr->file_count);
    }
    bVar11 = SBORROW4(size,local_1c);
    iVar2 = size - local_1c;
  }
  if (bVar11 != iVar2 < 0) {
    local_34 = 1;
  }
LAB_0054f9a8:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\pod.cpp",0x22d);
  if (local_34 != 0) {
    pcVar8 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->file_data_buffer,size,"..\\engine\\pod.cpp",0x233);
    this_ptr->file_data_buffer = pcVar8;
    if (pcVar8 == (char *)0x0) {
      g_CurrentFilename = "..\\engine\\pod.cpp";
      g_CurrentLineNumber = 0x235;
      core_main_c_displayErrorAndQuit_FUN_00506f10("realloc returns NULL shrinking filenameBlockSize to fit.");
    }
  }
  iVar2 = 0;
  if (0 < this_ptr->file_count) {
    iVar7 = 0;
    do {
      piVar5 = (int *)((int)&this_ptr->directory_entries->name_or_offset + iVar7);
      if ((*piVar5 < 0) || ((int)size <= *piVar5)) goto LAB_0054f6fe;
      *piVar5 = (int)(this_ptr->file_data_buffer + *piVar5);
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x14;
    } while (iVar2 < this_ptr->file_count);
  }
  qsort
            (this_ptr->directory_entries,this_ptr->file_count,0x14,
             engine_pod_cpp_qsortByFilename_FUN_0054f630);
  return 1;
}
