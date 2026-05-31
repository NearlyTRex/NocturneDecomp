// Name: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
// Address: 0054f650
// MANUAL RECONSTRUCTION
// Address Range: [[0054f650, 00550085]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename)

#include "nocturne.h"
#include "debug_log.h"

int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename)

{
  bool bVar3;
  _FILE *file_handle;
  int iVar2;
  _FILE *p_Var3;
  int iVar4;
  CPodDirectoryEntry *pCVar4;
  CPodDirectoryEntry *pCVar5;
  uint uVar7;
  SIZE_T size;
  char *pcVar13;
  SFoundFileInfo local_6a4;
  SPod3Header local_490;
  SEpdHeader local_370;
  char local_260 [256];
  SPod2Header local_160;
  SPod1Header local_100;
  SEpdDirEntry local_ac;
  SPod1DirEntry local_5c;
  char pod_magic [4];
  int local_2c;
  int local_28;
  int local_24;
  _FILE *local_20;
  int local_1c;
  _FILE *file;

  bVar3 = false;
  engine_pod_cpp_CPodFile_cleanup_FUN_00550090(this_ptr);
  engine_dosio_cpp_getRelativeFilePath_FUN_004816c0(local_6a4.found_path,(char *)0x0,pod_filename);
  iVar2 = engine_dosio_cpp_findFileNormally_FUN_004817c0(&local_6a4);
  if (iVar2 == 0) {
    return 0;
  }
  strcpy(this_ptr->filename, local_6a4.target_path);
  this_ptr->timestamp = local_6a4.timestamp;
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x150);
  local_20 = p_Var3;
  if (p_Var3 == (_FILE *)0x0) goto LAB_0054f6fe;
  engine_dosio_cpp_splitPath_FUN_00481f20(pod_filename,(char *)0x0,(char *)0x0,(char *)0x0,local_260);
  iVar4 = _stricmp(local_260,"epd");
  if (iVar4 == 0) {
LAB_0054f786:
    _fread(&local_370,1,0x110,local_20);
    strcpy(this_ptr->description, local_370.description);
    this_ptr->file_count = local_370.file_count;
    pCVar4 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x16c);
    this_ptr->directory_entries = pCVar4;
    if (pCVar4 == (CPodDirectoryEntry *)0x0) {
LAB_0054f6fe:
      DLOG("FAILED to mount %s", this_ptr->filename);
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
      do {
        _fread(&local_ac,1,0x50,local_20);
        this_ptr->directory_entries[local_28].name = (char *)(size_t)size;
        size = size + strlen(local_ac.filename) + 1;
        if (local_2c < (int)size) {
          local_2c = (this_ptr->file_count - local_28) * 0x30 + size;
          pcVar13 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                              (this_ptr->file_data_buffer,local_2c,"..\\engine\\pod.cpp",0x17b);
          this_ptr->file_data_buffer = pcVar13;
          if (pcVar13 == (char *)0x0) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x17c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
        }
        strcpy(this_ptr->file_data_buffer + (size_t)this_ptr->directory_entries[local_28].name,
               local_ac.filename);
        this_ptr->directory_entries[local_28].size = local_ac.size;
        this_ptr->directory_entries[local_28].offset = local_ac.offset;
        this_ptr->directory_entries[local_28].checksum = local_ac.checksum;
        this_ptr->directory_entries[local_28].timestamp = this_ptr->timestamp;
        local_28 = local_28 + 1;
      } while (local_28 < this_ptr->file_count);
    }
    bVar3 = (int)size < local_2c;
  }
  else {
    iVar4 = _stricmp(local_260,".epd");
    if (iVar4 == 0) goto LAB_0054f786;
    _fread(pod_magic,1,4,p_Var3);
    _fseek(p_Var3,0,0);
    file = local_20;
    if (((pod_magic[0] == 'P') && (pod_magic[1] == 'O')) &&
       (pod_magic[2] == 'D') && (pod_magic[3] == '3')) {
      _fread(&local_490,1,0x120,p_Var3);
      this_ptr->pod_format_version = 200;
      strcpy(this_ptr->description, local_490.description);
      strcpy(this_ptr->author_info, local_490.author);
      strcpy(this_ptr->copyright_info, local_490.copyright);
      this_ptr->file_count = local_490.file_count;
      this_ptr->audit_count = local_490.audit_count;
      this_ptr->dependency_count = local_490.dependency_count;
      this_ptr->mount_priority = local_490.mount_priority;
      pCVar5 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x1ab);
      this_ptr->directory_entries = pCVar5;
      if (pCVar5 != (CPodDirectoryEntry *)0x0) {
        _fseek(p_Var3,local_490.data_start_offset,0);
        _fread(this_ptr->directory_entries,this_ptr->file_count,0x14,p_Var3);
        if ((p_Var3->_flag & 0x20) == 0) {
          if ((this_ptr->file_count <= (int)local_490.total_file_size) &&
             ((int)local_490.total_file_size <= this_ptr->file_count * 0x100)) {
            pcVar13 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                                (local_490.total_file_size,"..\\engine\\pod.cpp",0x1ba);
            this_ptr->file_data_buffer = pcVar13;
            if (pcVar13 == (char *)0x0) {
              g_CurrentFilename = "..\\engine\\pod.cpp";
              g_CurrentLineNumber = 0x1bb;
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
    if (((pod_magic[0] == 'P') && (pod_magic[1] == 'O')) &&
       ((pod_magic[2] == 'D' && (pod_magic[3] == '2')))) {
      _fread(&local_160,1,0x60,local_20);
      this_ptr->pod_format_version = 200;
      strcpy(this_ptr->description, local_160.description);
      this_ptr->file_count = local_160.file_count;
      this_ptr->audit_count = local_160.audit_count;
      pCVar5 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x1da);
      this_ptr->directory_entries = pCVar5;
      if (pCVar5 != (CPodDirectoryEntry *)0x0) {
        _fread(pCVar5,this_ptr->file_count,0x14,file);
        iVar4 = this_ptr->file_count;
        size = (this_ptr->directory_entries->offset - 0x60) + iVar4 * -0x14;
        if (((int)size < iVar4) || (iVar4 * 0x100 < (int)size)) goto LAB_0054f6fe;
        pcVar13 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\engine\\pod.cpp",0x1e7);
        this_ptr->file_data_buffer = pcVar13;
        if (pcVar13 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\pod.cpp";
          g_CurrentLineNumber = 0x1e8;
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
    strcpy(this_ptr->description, local_100.description);
    this_ptr->file_count = local_100.file_count;
    pCVar5 = (CPodDirectoryEntry *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x20a);
    this_ptr->directory_entries = pCVar5;
    if (pCVar5 == (CPodDirectoryEntry *)0x0) goto LAB_0054f6fe;
    size = 0;
    local_1c = 0;
    local_24 = 0;
    if (0 < this_ptr->file_count) {
      do {
        _fread(&local_5c,1,0x28,local_20);
        this_ptr->directory_entries[local_24].name = (char *)(size_t)size;
        size = size + strlen(local_5c.filename) + 1;
        if (local_1c < (int)size) {
          local_1c = (this_ptr->file_count - local_24) * 0x30 + size;
          pcVar13 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                              (this_ptr->file_data_buffer,local_1c,"..\\engine\\pod.cpp",0x219);
          this_ptr->file_data_buffer = pcVar13;
          if (pcVar13 == (char *)0x0) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x21a;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
        }
        strcpy(this_ptr->file_data_buffer + (size_t)this_ptr->directory_entries[local_24].name,
               local_5c.filename);
        this_ptr->directory_entries[local_24].size = local_5c.size;
        this_ptr->directory_entries[local_24].offset = local_5c.offset;
        this_ptr->directory_entries[local_24].checksum = 0;
        this_ptr->directory_entries[local_24].timestamp = this_ptr->timestamp;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->file_count);
    }
    bVar3 = (int)size < local_1c;
  }
LAB_0054f9a8:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\pod.cpp",0x22d);
  if (bVar3) {
    pcVar13 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                        (this_ptr->file_data_buffer,size,"..\\engine\\pod.cpp",0x233);
    this_ptr->file_data_buffer = pcVar13;
    if (pcVar13 == (char *)0x0) {
      g_CurrentFilename = "..\\engine\\pod.cpp";
      g_CurrentLineNumber = 0x235;
      core_main_c_displayErrorAndQuit_FUN_00506f10("realloc returns NULL shrinking filenameBlockSize to fit.");
    }
  }
  iVar4 = 0;
  if (0 < this_ptr->file_count) {
    do {
      int name_offset = (int)(size_t)this_ptr->directory_entries[iVar4].name;
      if ((name_offset < 0) || ((int)size <= name_offset)) goto LAB_0054f6fe;
      this_ptr->directory_entries[iVar4].name = this_ptr->file_data_buffer + name_offset;
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->file_count);
  }
  _qsort
            (this_ptr->directory_entries,this_ptr->file_count,0x14,
             engine_pod_cpp_qsortByFilename_FUN_0054f630);
  DLOG("mounted %s: %d files, version=%d",
       this_ptr->filename, this_ptr->file_count, this_ptr->pod_format_version);
  return 1;
}
