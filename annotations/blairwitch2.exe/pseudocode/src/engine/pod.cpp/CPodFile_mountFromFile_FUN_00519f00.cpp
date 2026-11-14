// Name: engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00
// Address: 00519f00
// Address Range: [[00519f00, 0051a8e8]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00(CPodFile *this_ptr,char *pod_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00(CPodFile *this_ptr,char *pod_filename)

{
  char cVar1;
  _FILE *file;
  int iVar2;
  _FILE *file_00;
  CPodDirectoryEntry *pCVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ulong size;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  bool bVar10;
  SFoundFileInfo local_6a4;
  byte local_490 [8];
  char local_488 [80];
  int local_438;
  int local_434;
  int local_42c;
  char local_428 [80];
  char local_3d8 [80];
  long local_388;
  ulong local_380;
  int local_37c;
  byte local_370 [4];
  char local_36c [256];
  int local_26c;
  char local_260 [256];
  byte local_160 [8];
  char local_158 [80];
  int local_108;
  int local_104;
  int local_100;
  char local_fc [80];
  char local_ac [64];
  uint local_6c;
  uint local_68;
  uint local_60;
  char local_5c [32];
  uint local_3c;
  uint local_38;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  _FILE *local_30;
  ulong local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ulong local_14;
  
  bVar9 = 0;
  local_18 = 0;
  engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(this_ptr);
  engine_dosio_cpp_FUN_00460910(&local_6a4,0,pod_filename);
  iVar2 = engine_dosio_cpp_findFileNormally_FUN_004609e0(&local_6a4);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar7 = local_6a4.target_path;
  pcVar8 = this_ptr->filename;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  this_ptr->timestamp = local_6a4.timestamp;
  file_00 = _fopen(this_ptr->filename,&DAT_005e2407);
  local_30 = file_00;
  if (file_00 == (_FILE *)0x0) goto LAB_00519fa2;
  engine_dosio_cpp_splitPath_FUN_00461070
            (pod_filename,(char *)0x0,(char *)0x0,(char *)0x0,local_260);
  iVar2 = _stricmp(local_260,&DAT_005e240a);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_260,&DAT_005e240e), iVar2 == 0)) {
    _fread(local_370,1,0x110,local_30);
    pcVar8 = local_36c;
    pcVar7 = this_ptr->description;
    this_ptr->file_count = local_26c;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pCVar3 = (CPodDirectoryEntry *)malloc(this_ptr->file_count * 0x14);
    this_ptr->directory_entries = pCVar3;
    if (pCVar3 == (CPodDirectoryEntry *)0x0) goto LAB_00519fa2;
    size = 0;
    local_2c = 0;
    local_28 = 0;
    if (0 < this_ptr->file_count) {
      local_1c = 0;
      do {
        _fread(local_ac,1,0x50,local_30);
        *(ulong *)((int)&this_ptr->directory_entries->name + local_1c) = size;
        uVar5 = 0xffffffff;
        pcVar7 = local_ac;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        size = size + ~uVar5;
        if ((int)local_2c < (int)size) {
          local_2c = (this_ptr->file_count - local_28) * 0x30 + size;
          pcVar7 = (char *)realloc(this_ptr->file_data_buffer,local_2c);
          this_ptr->file_data_buffer = pcVar7;
          if (pcVar7 == (char *)0x0) {
            _DAT_01d046a0 = "..\\engine\\pod.cpp";
            _DAT_01d046a4 = 0x198;
            core_main_c_FUN_004e4500("Out of memory!");
          }
        }
        pcVar7 = local_ac;
        pcVar8 = this_ptr->file_data_buffer +
                 *(int *)((int)&this_ptr->directory_entries->name + local_1c);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        *(uint *)((int)&this_ptr->directory_entries->size + local_1c) = local_6c;
        *(uint *)((int)&this_ptr->directory_entries->offset + local_1c) = local_68;
        *(uint *)((int)&this_ptr->directory_entries->checksum + local_1c) = local_60;
        local_28 = local_28 + 1;
        *(uint *)((int)&this_ptr->directory_entries->timestamp + local_1c) = this_ptr->timestamp;
        local_1c = local_1c + 0x14;
      } while (local_28 < this_ptr->file_count);
    }
    bVar10 = SBORROW4(size,local_2c);
    iVar2 = size - local_2c;
  }
  else {
    _fread(&local_34,1,4,file_00);
    _fseek(file_00,0,0);
    file = local_30;
    if ((((local_34 == 'P') && (local_33 == 'O')) && (local_32 == 'D')) && (local_31 == '3')) {
      pcVar8 = local_488;
      _fread(local_490,1,0x120,file_00);
      pcVar7 = this_ptr->description;
      this_ptr->pod_format_version = 300;
      do {
        cVar1 = *pcVar8;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar8 = local_428;
      pcVar7 = this_ptr->author_info;
      do {
        cVar1 = *pcVar8;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar8 = local_3d8;
      pcVar7 = this_ptr->copyright_info;
      do {
        cVar1 = *pcVar8;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      this_ptr->file_count = local_438;
      this_ptr->audit_count = local_434;
      this_ptr->dependency_count = local_37c;
      this_ptr->mount_priority = local_42c;
      pCVar3 = (CPodDirectoryEntry *)malloc(this_ptr->file_count * 0x14);
      this_ptr->directory_entries = pCVar3;
      if (pCVar3 != (CPodDirectoryEntry *)0x0) {
        _fseek(file_00,local_388,0);
        _fread(this_ptr->directory_entries,this_ptr->file_count,0x14,file_00);
        if ((file_00->_flag & 0x20) == 0) {
          iVar2 = 0;
          if (0 < this_ptr->file_count) {
            do {
              iVar2 = iVar2 + 1;
            } while (iVar2 < this_ptr->file_count);
          }
          if ((this_ptr->file_count <= (int)local_380) &&
             ((int)local_380 <= this_ptr->file_count * 0x100)) {
            pcVar7 = (char *)malloc(local_380);
            this_ptr->file_data_buffer = pcVar7;
            if (pcVar7 == (char *)0x0) {
              _DAT_01d046a0 = "..\\engine\\pod.cpp";
              _DAT_01d046a4 = 0x1ed;
              core_main_c_FUN_004e4500("Out of memory!");
            }
            _fread(this_ptr->file_data_buffer,local_380,1,local_30);
            if ((local_30->_flag & 0x20) == 0) {
              uVar5 = _ftell(local_30);
              this_ptr->dependency_records_offset = uVar5;
              this_ptr->audit_records_offset =
                   this_ptr->dependency_records_offset + this_ptr->dependency_count * 0x108;
              size = local_380;
              goto LAB_0051a22e;
            }
          }
        }
      }
      goto LAB_00519fa2;
    }
    if (((local_34 == 'P') && (local_33 == 'O')) && ((local_32 == 'D' && (local_31 == '2')))) {
      pcVar8 = local_158;
      _fread(local_160,1,0x60,local_30);
      pcVar7 = this_ptr->description;
      this_ptr->pod_format_version = 200;
      do {
        cVar1 = *pcVar8;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      this_ptr->file_count = local_108;
      this_ptr->audit_count = local_104;
      pCVar3 = (CPodDirectoryEntry *)malloc(this_ptr->file_count * 0x14);
      this_ptr->directory_entries = pCVar3;
      if (pCVar3 == (CPodDirectoryEntry *)0x0) goto LAB_00519fa2;
      _fread(pCVar3,this_ptr->file_count,0x14,file);
      iVar2 = 0;
      if (0 < this_ptr->file_count) {
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 < this_ptr->file_count);
      }
      iVar2 = this_ptr->file_count;
      size = (this_ptr->directory_entries->offset - 0x60) + iVar2 * -0x14;
      if (((int)size < iVar2) || (iVar2 * 0x100 < (int)size)) goto LAB_00519fa2;
      pcVar7 = (char *)malloc(size);
      this_ptr->file_data_buffer = pcVar7;
      if (pcVar7 == (char *)0x0) {
        _DAT_01d046a0 = "..\\engine\\pod.cpp";
        _DAT_01d046a4 = 0x228;
        core_main_c_FUN_004e4500("Out of memory!");
      }
      _fread(this_ptr->file_data_buffer,size,1,local_30);
      iVar2 = this_ptr->file_count + -1;
      this_ptr->audit_records_offset =
           this_ptr->directory_entries[iVar2].offset + this_ptr->directory_entries[iVar2].size;
      goto LAB_0051a22e;
    }
    this_ptr->pod_format_version = 1;
    _fread(&local_100,1,0x54,local_30);
    if ((local_100 < 1) || (99999 < local_100)) {
LAB_00519fa2:
      if (local_30 != (_FILE *)0x0) {
        _fclose(local_30);
      }
      engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(this_ptr);
      return 0;
    }
    pcVar8 = local_fc;
    pcVar7 = this_ptr->description;
    this_ptr->file_count = local_100;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pCVar3 = (CPodDirectoryEntry *)malloc(this_ptr->file_count * 0x14);
    this_ptr->directory_entries = pCVar3;
    if (pCVar3 == (CPodDirectoryEntry *)0x0) goto LAB_00519fa2;
    size = 0;
    local_14 = 0;
    local_20 = 0;
    if (0 < this_ptr->file_count) {
      local_24 = 0;
      do {
        _fread(local_5c,1,0x28,local_30);
        *(ulong *)((int)&this_ptr->directory_entries->name + local_24) = size;
        uVar5 = 0xffffffff;
        pcVar7 = local_5c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        size = size + ~uVar5;
        if ((int)local_14 < (int)size) {
          local_14 = (this_ptr->file_count - local_20) * 0x30 + size;
          pcVar7 = (char *)realloc(this_ptr->file_data_buffer,local_14);
          this_ptr->file_data_buffer = pcVar7;
          if (pcVar7 == (char *)0x0) {
            _DAT_01d046a0 = "..\\engine\\pod.cpp";
            _DAT_01d046a4 = 0x260;
            core_main_c_FUN_004e4500("Out of memory!");
          }
        }
        pcVar7 = local_5c;
        pcVar8 = this_ptr->file_data_buffer +
                 *(int *)((int)&this_ptr->directory_entries->name + local_24);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        *(uint *)((int)&this_ptr->directory_entries->size + local_24) = local_3c;
        *(uint *)((int)&this_ptr->directory_entries->offset + local_24) = local_38;
        *(uint *)((int)&this_ptr->directory_entries->checksum + local_24) = 0;
        *(uint *)((int)&this_ptr->directory_entries->timestamp + local_24) = this_ptr->timestamp;
        local_24 = local_24 + 0x14;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->file_count);
    }
    bVar10 = SBORROW4(size,local_14);
    iVar2 = size - local_14;
  }
  if (bVar10 != iVar2 < 0) {
    local_18 = 1;
  }
LAB_0051a22e:
  _fclose(local_30);
  if (local_18 != 0) {
    pcVar7 = (char *)realloc(this_ptr->file_data_buffer,size);
    this_ptr->file_data_buffer = pcVar7;
    if (pcVar7 == (char *)0x0) {
      _DAT_01d046a0 = "..\\engine\\pod.cpp";
      _DAT_01d046a4 = 0x27b;
      core_main_c_FUN_004e4500("realloc returns NULL shrinking filenameBlockSize to fit.");
    }
  }
  iVar2 = 0;
  if (0 < this_ptr->file_count) {
    iVar6 = 0;
    do {
      piVar4 = (int *)((int)&this_ptr->directory_entries->name + iVar6);
      if ((*piVar4 < 0) || ((int)size <= *piVar4)) goto LAB_00519fa2;
      *piVar4 = (int)(this_ptr->file_data_buffer + *piVar4);
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar2 < this_ptr->file_count);
  }
  _qsort
            (this_ptr->directory_entries,this_ptr->file_count,0x14,
             engine_pod_cpp_qsortByFilename_FUN_00519ee0);
  return 1;
}
