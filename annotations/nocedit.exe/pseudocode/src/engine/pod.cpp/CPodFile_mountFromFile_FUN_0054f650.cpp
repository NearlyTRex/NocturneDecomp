// Name: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
// Address: 0054f650
// Address Range: [[0054f650, 00550085]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)

#include "nocturne.h"

int __cdecl
engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename)

{
  CPodFile *this_ptr_00;
  int iVar1;
  FILE *file;
  CPodDirectoryEntry *pCVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  SIZE_T size;
  char *pcVar6;
  uint unaff_EDI;
  char *pcVar7;
  byte bVar8;
  int unaff_retaddr;
  FILE *in_stack_0000000c;
  int iStack00000014;
  char *in_stack_00000018;
  char acStack_598 [268];
  uint uStack_48c;
  byte auStack_46c [8];
  char acStack_464 [64];
  char acStack_424 [80];
  char acStack_3d4 [80];
  int local_384;
  long lStack_37c;
  int local_378;
  int local_370;
  uint uStack_368;
  byte auStack_34c [8];
  char acStack_344 [244];
  char acStack_250 [4];
  char acStack_24c [4];
  char acStack_248 [4];
  int iStack_244;
  byte auStack_13c [8];
  char acStack_134 [68];
  int iStack_f0;
  uint uStack_ec;
  byte auStack_dc [4];
  int iStack_d8;
  char acStack_d4 [84];
  char acStack_80 [64];
  uint uStack_40;
  uint local_3c;
  char local_38 [4];
  uint local_34;
  char local_30 [28];
  byte local_14 [4];
  char cVar9;
  char cVar10;
  char cVar11;
  
  this_ptr_00 = this_ptr;
  bVar8 = 0;
  local_34 = 0;
  engine_pod_cpp_CPodFile_cleanup_FUN_00550090(this_ptr);
  engine_dosio_c_getRelativeFilePath_FUN_004816c0
            (&stack0xfffff960,(char *)0x0,(char *)in_stack_0000000c);
  iVar1 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffff964);
  if (iVar1 == 0) {
    return 0;
  }
  pcVar6 = acStack_598;
  pcVar7 = this_ptr->filename;
  do {
    cVar9 = *pcVar6;
    *pcVar7 = cVar9;
    if (cVar9 == '\0') break;
    cVar9 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar9;
    pcVar7 = pcVar7 + 2;
  } while (cVar9 != '\0');
  this_ptr->filesize = uStack_48c;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x150);
  if (file != (FILE *)0x0) {
    engine_dosio_c_splitPath_FUN_00481f20
              (in_stack_00000018,(char *)0x0,(char *)0x0,(char *)0x0,acStack_250);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(acStack_24c,"epd");
    if ((iVar1 == 0) ||
       (iVar1 = crt_string_c_stricmp_FUN_005fe7f0(acStack_248,".epd"), iVar1 == 0)) {
      crt_stdio_c_fread_FUN_005fd990(auStack_34c,1,0x110,(FILE *)this_ptr);
      pcVar7 = acStack_344;
      pcVar6 = this_ptr->description;
      this_ptr->file_count = iStack_244;
      do {
        cVar9 = *pcVar7;
        *pcVar6 = cVar9;
        if (cVar9 == '\0') break;
        cVar9 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar6[1] = cVar9;
        pcVar6 = pcVar6 + 2;
      } while (cVar9 != '\0');
      pCVar2 = (CPodDirectoryEntry *)
               shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x16c);
      this_ptr->directory_entries = pCVar2;
      if (pCVar2 != (CPodDirectoryEntry *)0x0) {
        size = 0;
        piVar3 = &this_ptr->file_count;
        this_ptr = (CPodFile *)0x0;
        if (0 < *piVar3) {
          iStack00000014 = 0;
          do {
            crt_stdio_c_fread_FUN_005fd990(acStack_80,1,0x50,in_stack_0000000c);
            *(SIZE_T *)(in_stack_00000018 + (int)&this_ptr_00->directory_entries->name_or_offset) =
                 size;
            uVar4 = 0xffffffff;
            pcVar6 = acStack_80 + 4;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar9 = *pcVar6;
              pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
            } while (cVar9 != '\0');
            size = size + ~uVar4;
            if ((int)this_ptr < (int)size) {
              this_ptr = (CPodFile *)((this_ptr_00->file_count - (int)pod_filename) * 0x30 + size);
              pcVar6 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                         (this_ptr_00->file_data_buffer,(int)this_ptr,
                                          "..\\engine\\pod.cpp",0x17b);
              this_ptr_00->file_data_buffer = pcVar6;
              if (pcVar6 == (char *)0x0) {
                g_CurrentFilename = "..\\engine\\pod.cpp";
                g_CurrentLineNumber = 0x17c;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
              }
            }
            pcVar6 = acStack_80;
            pcVar7 = this_ptr_00->file_data_buffer +
                     *(int *)((int)&this_ptr_00->directory_entries->name_or_offset + iStack00000014)
            ;
            do {
              cVar9 = *pcVar6;
              *pcVar7 = cVar9;
              if (cVar9 == '\0') break;
              cVar9 = pcVar6[1];
              pcVar6 = pcVar6 + 2;
              pcVar7[1] = cVar9;
              pcVar7 = pcVar7 + 2;
            } while (cVar9 != '\0');
            *(uint *)((int)&this_ptr_00->directory_entries->size + iStack00000014) = uStack_40
            ;
            *(uint *)((int)&this_ptr_00->directory_entries->offset + iStack00000014) =
                 local_3c;
            *(uint *)((int)&this_ptr_00->directory_entries->checksum + iStack00000014) =
                 local_34;
            this_ptr = (CPodFile *)((int)&this_ptr->pod_format_version + 1);
            *(uint *)((int)&this_ptr_00->directory_entries->timestamp + iStack00000014) =
                 this_ptr_00->filesize;
            iStack00000014 = iStack00000014 + 0x14;
          } while ((int)this_ptr < this_ptr_00->file_count);
        }
        goto LAB_0054f9a8;
      }
    }
    else {
      crt_stdio_c_fread_FUN_005fd990(local_14,1,4,file);
      crt_stdio_c_fseek_FUN_005ffacc(file,0,0);
      cVar9 = (char)((uint)unaff_EDI >> 8);
      cVar10 = (char)((uint)unaff_EDI >> 0x10);
      cVar11 = (char)((uint)unaff_EDI >> 0x18);
      if (((((char)unaff_EDI == 'P') && (cVar9 == 'O')) && (cVar10 == 'D')) && (cVar11 == '3')) {
        pcVar7 = acStack_464;
        crt_stdio_c_fread_FUN_005fd990(auStack_46c,1,0x120,file);
        pcVar6 = this_ptr->description;
        this_ptr->pod_format_version = 200;
        do {
          cVar9 = *pcVar7;
          *pcVar6 = cVar9;
          if (cVar9 == '\0') break;
          cVar9 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar6[1] = cVar9;
          pcVar6 = pcVar6 + 2;
        } while (cVar9 != '\0');
        pcVar7 = acStack_424;
        pcVar6 = this_ptr->author_info;
        do {
          cVar9 = *pcVar7;
          *pcVar6 = cVar9;
          if (cVar9 == '\0') break;
          cVar9 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar6[1] = cVar9;
          pcVar6 = pcVar6 + 2;
        } while (cVar9 != '\0');
        pcVar7 = acStack_3d4;
        pcVar6 = this_ptr->copyright_info;
        do {
          cVar9 = *pcVar7;
          *pcVar6 = cVar9;
          if (cVar9 == '\0') break;
          cVar9 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar6[1] = cVar9;
          pcVar6 = pcVar6 + 2;
        } while (cVar9 != '\0');
        this_ptr->file_count = local_384;
        this_ptr->audit_count = uStack_368;
        this_ptr->dependency_count = local_370;
        this_ptr->mount_priority = local_378;
        pCVar2 = (CPodDirectoryEntry *)
                 shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x1ab);
        this_ptr->directory_entries = pCVar2;
        if (pCVar2 != (CPodDirectoryEntry *)0x0) {
          crt_stdio_c_fseek_FUN_005ffacc(file,lStack_37c,0);
          crt_stdio_c_fread_FUN_005fd990(this_ptr->directory_entries,this_ptr->file_count,0x14,file)
          ;
          if ((((file->_flag & 0x20) == 0) && (this_ptr->file_count <= (int)uStack_368)) &&
             ((int)uStack_368 <= this_ptr->file_count * 0x100)) {
            pcVar6 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                                       (uStack_368,"..\\engine\\pod.cpp",0x1ba);
            this_ptr->file_data_buffer = pcVar6;
            if (pcVar6 == (char *)0x0) {
              g_CurrentFilename = "..\\engine\\pod.cpp";
              g_CurrentLineNumber = 0x1bb;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
            }
            crt_stdio_c_fread_FUN_005fd990(this_ptr->file_data_buffer,uStack_368,1,(FILE *)this_ptr)
            ;
            if ((this_ptr->filename[8] & 0x20U) == 0) {
              uVar4 = crt_stdio_c_ftell_FUN_00601560((FILE *)this_ptr);
              this_ptr->dependency_records_offset = uVar4;
              this_ptr->total_file_size =
                   this_ptr->dependency_records_offset + this_ptr->dependency_count * 0x108;
              size = uStack_368;
              goto LAB_0054f9a8;
            }
          }
        }
      }
      else if ((((char)unaff_EDI == 'P') && (cVar9 == 'O')) && ((cVar10 == 'D' && (cVar11 == '2'))))
      {
        pcVar7 = acStack_134;
        crt_stdio_c_fread_FUN_005fd990(auStack_13c,1,0x60,(FILE *)this_ptr);
        pcVar6 = this_ptr->description;
        this_ptr->pod_format_version = 200;
        do {
          cVar9 = *pcVar7;
          *pcVar6 = cVar9;
          if (cVar9 == '\0') break;
          cVar9 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar6[1] = cVar9;
          pcVar6 = pcVar6 + 2;
        } while (cVar9 != '\0');
        this_ptr->file_count = iStack_f0;
        this_ptr->audit_count = uStack_ec;
        pCVar2 = (CPodDirectoryEntry *)
                 shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x1da);
        this_ptr->directory_entries = pCVar2;
        if (pCVar2 != (CPodDirectoryEntry *)0x0) {
          crt_stdio_c_fread_FUN_005fd990(pCVar2,this_ptr->file_count,0x14,(FILE *)this_ptr);
          iVar1 = this_ptr->file_count;
          size = (this_ptr->directory_entries->offset - 0x60) + iVar1 * -0x14;
          if ((iVar1 <= (int)size) && ((int)size <= iVar1 * 0x100)) {
            pcVar6 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                                       (size,"..\\engine\\pod.cpp",0x1e7);
            this_ptr->file_data_buffer = pcVar6;
            if (pcVar6 == (char *)0x0) {
              g_CurrentFilename = "..\\engine\\pod.cpp";
              g_CurrentLineNumber = 0x1e8;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
            }
            crt_stdio_c_fread_FUN_005fd990(this_ptr->file_data_buffer,size,1,(FILE *)pod_filename);
            iVar1 = this_ptr->file_count + -1;
            this_ptr->total_file_size =
                 this_ptr->directory_entries[iVar1].offset + this_ptr->directory_entries[iVar1].size
            ;
            goto LAB_0054f9a8;
          }
        }
      }
      else {
        this_ptr->pod_format_version = 1;
        crt_stdio_c_fread_FUN_005fd990(auStack_dc,1,0x54,(FILE *)this_ptr);
        if ((0 < iStack_d8) && (iStack_d8 < 100000)) {
          pcVar7 = acStack_d4;
          pcVar6 = this_ptr->description;
          this_ptr->file_count = iStack_d8;
          do {
            cVar9 = *pcVar7;
            *pcVar6 = cVar9;
            if (cVar9 == '\0') break;
            cVar9 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar6[1] = cVar9;
            pcVar6 = pcVar6 + 2;
          } while (cVar9 != '\0');
          pCVar2 = (CPodDirectoryEntry *)
                   shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (this_ptr->file_count * 0x14,"..\\engine\\pod.cpp",0x20a);
          this_ptr->directory_entries = pCVar2;
          if (pCVar2 != (CPodDirectoryEntry *)0x0) {
            size = 0;
            pod_filename = (char *)0x0;
            if (0 < this_ptr->file_count) {
              in_stack_00000018 = (char *)0x0;
              do {
                crt_stdio_c_fread_FUN_005fd990(local_30,1,0x28,in_stack_0000000c);
                this_ptr->directory_entries->name_or_offset = size;
                uVar4 = 0xffffffff;
                pcVar6 = local_38;
                do {
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  cVar9 = *pcVar6;
                  pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
                } while (cVar9 != '\0');
                size = size + ~uVar4;
                if ((int)pod_filename < (int)size) {
                  pod_filename = (char *)((this_ptr->file_count - unaff_retaddr) * 0x30 + size);
                  pcVar6 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                             (this_ptr->file_data_buffer,(int)pod_filename,
                                              "..\\engine\\pod.cpp",0x219);
                  this_ptr->file_data_buffer = pcVar6;
                  if (pcVar6 == (char *)0x0) {
                    g_CurrentFilename = "..\\engine\\pod.cpp";
                    g_CurrentLineNumber = 0x21a;
                    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
                  }
                }
                pcVar6 = local_30;
                pcVar7 = this_ptr->file_data_buffer +
                         *(int *)((int)&this_ptr->directory_entries->name_or_offset +
                                 (int)in_stack_00000018);
                do {
                  cVar9 = *pcVar6;
                  *pcVar7 = cVar9;
                  if (cVar9 == '\0') break;
                  cVar9 = pcVar6[1];
                  pcVar6 = pcVar6 + 2;
                  pcVar7[1] = cVar9;
                  pcVar7 = pcVar7 + 2;
                } while (cVar9 != '\0');
                *(FILE **)((int)&this_ptr->directory_entries->size + (int)in_stack_00000018) = file;
                *(uint *)((int)&this_ptr->directory_entries->offset + (int)in_stack_00000018)
                     = unaff_EDI;
                *(uint *)
                 ((int)&this_ptr->directory_entries->checksum + (int)in_stack_00000018) = 0;
                *(uint *)((int)&this_ptr->directory_entries->timestamp + (int)in_stack_00000018) =
                     this_ptr->filesize;
                pod_filename = pod_filename + 1;
                in_stack_00000018 = (char *)((int)in_stack_00000018 + 0x14);
              } while ((int)pod_filename < this_ptr->file_count);
            }
LAB_0054f9a8:
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_0000000c,"..\\engine\\pod.cpp",0x22d);
            if (unaff_EBX != 0) {
              pcVar6 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                         (this_ptr_00->file_data_buffer,size,
                                          "..\\engine\\pod.cpp",0x233);
              this_ptr_00->file_data_buffer = pcVar6;
              if (pcVar6 == (char *)0x0) {
                g_CurrentFilename = "..\\engine\\pod.cpp";
                g_CurrentLineNumber = 0x235;
                core_main_c_displayErrorAndQuit_FUN_00506f10("realloc returns NULL shrinking filenameBlockSize to fit.");
              }
            }
            iVar1 = 0;
            if (0 < this_ptr_00->file_count) {
              iVar5 = 0;
              do {
                piVar3 = (int *)((int)&this_ptr_00->directory_entries->name_or_offset + iVar5);
                if ((*piVar3 < 0) || ((int)size <= *piVar3)) goto LAB_0054f6fe;
                *piVar3 = (int)(this_ptr_00->file_data_buffer + *piVar3);
                iVar1 = iVar1 + 1;
                iVar5 = iVar5 + 0x14;
              } while (iVar1 < this_ptr_00->file_count);
            }
            crt_stdlib_c_qsort_FUN_005fdf38
                      (this_ptr_00->directory_entries,this_ptr_00->file_count,0x14,
                       engine_pod_cpp_qsortByFilename_FUN_0054f630);
            return 1;
          }
        }
      }
    }
  }
LAB_0054f6fe:
  if (in_stack_0000000c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000000c,"..\\engine\\pod.cpp",0x153);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_00550090(this_ptr_00);
  return 0;
}
