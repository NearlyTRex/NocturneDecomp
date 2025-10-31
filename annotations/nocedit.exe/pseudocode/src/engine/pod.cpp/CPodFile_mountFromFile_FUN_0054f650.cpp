// Name: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
// Address: 0054f650
// Address Range: [[0054f650, 00550085]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
// Cross-references:
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b74dd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004baf68 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b8318 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba101 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bca70 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7727 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6e8f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8a81 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5c09 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd20f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b7fcd [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 0055103e [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_mount_FUN_00550a10 (00550a10) at 00550a81 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_remount_FUN_00550af0 (00550af0) at 00550b34 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 (00551280) at 0055129f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_00640186
//   TerminatedCString s_rb_00640198
//   TerminatedCString s_engine_pod_cpp_0064019b
//   TerminatedCString s_epd_006401ad
//   TerminatedCString s_epd_006401b1
//   TerminatedCString s_engine_pod_cpp_006401b6
//   TerminatedCString s_engine_pod_cpp_006401c8
//   TerminatedCString s_engine_pod_cpp_006401da
//   TerminatedCString s_Out_of_memory_006401ec
//   TerminatedCString s_engine_pod_cpp_006401fb
//   TerminatedCString s_engine_pod_cpp_0064020d
//   TerminatedCString s_engine_pod_cpp_0064021f
//   TerminatedCString s_Out_of_memory_00640231
//   TerminatedCString s_engine_pod_cpp_00640240
//   TerminatedCString s_engine_pod_cpp_00640252
//   TerminatedCString s_engine_pod_cpp_00640264
//   TerminatedCString s_Out_of_memory_00640276
//   TerminatedCString s_engine_pod_cpp_00640285
//   TerminatedCString s_engine_pod_cpp_00640297
//   TerminatedCString s_engine_pod_cpp_006402a9
//   TerminatedCString s_Out_of_memory_006402bb
//   TerminatedCString s_engine_pod_cpp_006402ca
//   TerminatedCString s_engine_pod_cpp_006402dc
//   TerminatedCString s_engine_pod_cpp_006402ee
//   TerminatedCString s_realloc_returns_NULL_shr_00640300
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdlib.c_qsort_FUN_005fdf38
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_pod.cpp_CPodFile_cleanup_FUN_00550090
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

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
  undefined4 unaff_EDI;
  char *pcVar7;
  byte bVar8;
  int unaff_retaddr;
  FILE *in_stack_0000000c;
  int iStack00000014;
  char *in_stack_00000018;
  char acStack_598 [268];
  uint uStack_48c;
  undefined1 auStack_46c [8];
  char acStack_464 [64];
  char acStack_424 [80];
  char acStack_3d4 [80];
  int local_384;
  long lStack_37c;
  int local_378;
  int local_370;
  uint uStack_368;
  undefined1 auStack_34c [8];
  char acStack_344 [244];
  char acStack_250 [4];
  char acStack_24c [4];
  char acStack_248 [4];
  int iStack_244;
  undefined1 auStack_13c [8];
  char acStack_134 [68];
  int iStack_f0;
  uint uStack_ec;
  undefined1 auStack_dc [4];
  int iStack_d8;
  char acStack_d4 [84];
  char acStack_80 [64];
  undefined4 uStack_40;
  undefined4 local_3c;
  char local_38 [4];
  undefined4 local_34;
  char local_30 [28];
  undefined1 local_14 [4];
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
            *(undefined4 *)((int)&this_ptr_00->directory_entries->size + iStack00000014) = uStack_40
            ;
            *(undefined4 *)((int)&this_ptr_00->directory_entries->offset + iStack00000014) =
                 local_3c;
            *(undefined4 *)((int)&this_ptr_00->directory_entries->checksum + iStack00000014) =
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
                *(undefined4 *)((int)&this_ptr->directory_entries->offset + (int)in_stack_00000018)
                     = unaff_EDI;
                *(undefined4 *)
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


// Assembly code:
// 0054f650: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
// 0054f651: PUSH ESI
// 0054f652: PUSH EDI
// 0054f653: PUSH EBP
// 0054f654: SUB ESP,0x694
// 0054f65a: MOV EBX,dword ptr [ESP + 0x6a8]
//   XREF to: Stack[0x4] (READ)
// 0054f661: XOR EDX,EDX
// 0054f663: PUSH EBX
// 0054f664: MOV dword ptr [ESP + 0x674],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0054f66b: CALL engine_pod.cpp_CPodFile_cleanup_FUN_00550090
//   XREF to: 00550090 (UNCONDITIONAL_CALL)
// 0054f670: ADD ESP,0x4
// 0054f673: MOV ECX,dword ptr [ESP + 0x6ac]
//   XREF to: Stack[0x8] (READ)
// 0054f67a: PUSH ECX
// 0054f67b: PUSH 0x0
// 0054f67d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6a4] (DATA)
// 0054f681: PUSH EAX
// 0054f682: CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   XREF to: 004816c0 (UNCONDITIONAL_CALL)
// 0054f687: ADD ESP,0xc
// 0054f68a: MOV EAX,ESP
// 0054f68c: PUSH EAX
// 0054f68d: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 0054f692: ADD ESP,0x4
// 0054f695: TEST EAX,EAX
// 0054f697: JNZ 0x0054f6a4
//   XREF to: 0054f6a4 (CONDITIONAL_JUMP)
// 0054f699: ADD ESP,0x694
// 0054f69f: POP EBP
// 0054f6a0: POP EDI
// 0054f6a1: POP ESI
// 0054f6a2: POP EBX
// 0054f6a3: RET
// 0054f6a4: LEA EDX,[EBX + 0x4]
//   Label: LAB_0054f6a4
// 0054f6a7: LEA ESI,[ESP + 0x100]
//   XREF to: Stack[-0x5a4] (DATA)
// 0054f6ae: MOV EDI,EDX
// 0054f6b0: PUSH EDI
// 0054f6b1: MOV AL,byte ptr [ESI]
//   Label: LAB_0054f6b1
//   XREF to: Stack[-0x5a4] (DATA)
// 0054f6b3: MOV byte ptr [EDI],AL
// 0054f6b5: CMP AL,0x0
// 0054f6b7: JZ 0x0054f6c9
//   XREF to: 0054f6c9 (CONDITIONAL_JUMP)
// 0054f6b9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x5a3] (READ)
// 0054f6bc: ADD ESI,0x2
// 0054f6bf: MOV byte ptr [EDI + 0x1],AL
// 0054f6c2: ADD EDI,0x2
// 0054f6c5: CMP AL,0x0
// 0054f6c7: JNZ 0x0054f6b1
//   XREF to: 0054f6b1 (CONDITIONAL_JUMP)
// 0054f6c9: POP EDI
//   Label: LAB_0054f6c9
// 0054f6ca: PUSH 0x150
// 0054f6cf: PUSH 0x640186
//   XREF to: 00640186 (DATA)
// 0054f6d4: PUSH 0x640198
//   XREF to: 00640198 (DATA)
// 0054f6d9: PUSH 0x0
// 0054f6db: MOV EAX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x498] (READ)
// 0054f6e2: PUSH EDX
// 0054f6e3: MOV dword ptr [EBX + 0x104],EAX
// 0054f6e9: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0054f6ee: ADD ESP,0x14
// 0054f6f1: MOV EBP,EAX
// 0054f6f3: MOV dword ptr [ESP + 0x684],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0054f6fa: TEST EAX,EAX
// 0054f6fc: JNZ 0x0054f732
//   XREF to: 0054f732 (CONDITIONAL_JUMP)
// 0054f6fe: MOV EBP,dword ptr [ESP + 0x684]
//   Label: LAB_0054f6fe
//   XREF to: Stack[-0x20] (READ)
// 0054f705: TEST EBP,EBP
// 0054f707: JZ 0x0054f71c
//   XREF to: 0054f71c (CONDITIONAL_JUMP)
// 0054f709: PUSH 0x153
// 0054f70e: PUSH 0x64019b
//   XREF to: 0064019b (DATA)
// 0054f713: PUSH EBP
// 0054f714: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054f719: ADD ESP,0xc
// 0054f71c: PUSH EBX
//   Label: LAB_0054f71c
// 0054f71d: CALL engine_pod.cpp_CPodFile_cleanup_FUN_00550090
//   XREF to: 00550090 (UNCONDITIONAL_CALL)
// 0054f722: ADD ESP,0x4
// 0054f725: XOR EAX,EAX
// 0054f727: ADD ESP,0x694
// 0054f72d: POP EBP
// 0054f72e: POP EDI
// 0054f72f: POP ESI
// 0054f730: POP EBX
// 0054f731: RET
// 0054f732: LEA EAX,[ESP + 0x444]
//   Label: LAB_0054f732
//   XREF to: Stack[-0x260] (DATA)
// 0054f739: PUSH EAX
// 0054f73a: PUSH 0x0
// 0054f73c: PUSH 0x0
// 0054f73e: PUSH 0x0
// 0054f740: MOV ESI,dword ptr [ESP + 0x6bc]
//   XREF to: Stack[0x8] (READ)
// 0054f747: PUSH ESI
// 0054f748: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0054f74d: ADD ESP,0x14
// 0054f750: PUSH 0x6401ad
//   XREF to: 006401ad (DATA)
// 0054f755: LEA EAX,[ESP + 0x448]
//   XREF to: Stack[-0x260] (DATA)
// 0054f75c: PUSH EAX
// 0054f75d: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0054f762: ADD ESP,0x8
// 0054f765: TEST EAX,EAX
// 0054f767: JZ 0x0054f786
//   XREF to: 0054f786 (CONDITIONAL_JUMP)
// 0054f769: PUSH 0x6401b1
//   XREF to: 006401b1 (DATA)
// 0054f76e: LEA EAX,[ESP + 0x448]
//   XREF to: Stack[-0x260] (DATA)
// 0054f775: PUSH EAX
// 0054f776: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0054f77b: ADD ESP,0x8
// 0054f77e: TEST EAX,EAX
// 0054f780: JNZ 0x0054fa82
//   XREF to: 0054fa82 (CONDITIONAL_JUMP)
// 0054f786: MOV EDX,dword ptr [ESP + 0x684]
//   Label: LAB_0054f786
//   XREF to: Stack[-0x20] (READ)
// 0054f78d: PUSH EDX
// 0054f78e: PUSH 0x110
// 0054f793: PUSH 0x1
// 0054f795: LEA EAX,[ESP + 0x340]
//   XREF to: Stack[-0x370] (DATA)
// 0054f79c: PUSH EAX
// 0054f79d: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054f7a2: ADD ESP,0x10
// 0054f7a5: LEA ESI,[ESP + 0x338]
//   XREF to: Stack[-0x36c] (DATA)
// 0054f7ac: MOV EAX,dword ptr [ESP + 0x438]
//   XREF to: Stack[-0x26c] (READ)
// 0054f7b3: LEA EDI,[EBX + 0x108]
// 0054f7b9: MOV dword ptr [EBX + 0x410],EAX
// 0054f7bf: PUSH EDI
// 0054f7c0: MOV AL,byte ptr [ESI]
//   Label: LAB_0054f7c0
//   XREF to: Stack[-0x36c] (DATA)
// 0054f7c2: MOV byte ptr [EDI],AL
// 0054f7c4: CMP AL,0x0
// 0054f7c6: JZ 0x0054f7d8
//   XREF to: 0054f7d8 (CONDITIONAL_JUMP)
// 0054f7c8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x36b] (READ)
// 0054f7cb: ADD ESI,0x2
// 0054f7ce: MOV byte ptr [EDI + 0x1],AL
// 0054f7d1: ADD EDI,0x2
// 0054f7d4: CMP AL,0x0
// 0054f7d6: JNZ 0x0054f7c0
//   XREF to: 0054f7c0 (CONDITIONAL_JUMP)
// 0054f7d8: POP EDI
//   Label: LAB_0054f7d8
// 0054f7d9: MOV EDX,dword ptr [EBX + 0x410]
// 0054f7df: LEA EAX,[EDX*0x4 + 0x0]
// 0054f7e6: PUSH 0x16c
// 0054f7eb: ADD EAX,EDX
// 0054f7ed: PUSH 0x6401b6
//   XREF to: 006401b6 (DATA)
// 0054f7f2: SHL EAX,0x2
// 0054f7f5: PUSH EAX
// 0054f7f6: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054f7fb: ADD ESP,0xc
// 0054f7fe: MOV dword ptr [EBX + 0x414],EAX
// 0054f804: TEST EAX,EAX
// 0054f806: JZ 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054f80c: XOR EBP,EBP
// 0054f80e: MOV EAX,dword ptr [EBX + 0x410]
// 0054f814: MOV dword ptr [ESP + 0x678],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 0054f81b: MOV dword ptr [ESP + 0x67c],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0054f822: TEST EAX,EAX
// 0054f824: JLE 0x0054f994
//   XREF to: 0054f994 (CONDITIONAL_JUMP)
// 0054f82a: MOV dword ptr [ESP + 0x68c],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0054f831: MOV EAX,dword ptr [ESP + 0x684]
//   Label: LAB_0054f831
//   XREF to: Stack[-0x20] (READ)
// 0054f838: PUSH EAX
// 0054f839: PUSH 0x50
// 0054f83b: PUSH 0x1
// 0054f83d: LEA EAX,[ESP + 0x604]
//   XREF to: Stack[-0xac] (DATA)
// 0054f844: PUSH EAX
// 0054f845: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054f84a: ADD ESP,0x10
// 0054f84d: MOV EAX,dword ptr [EBX + 0x414]
// 0054f853: ADD EAX,dword ptr [ESP + 0x68c]
//   XREF to: Stack[-0x18] (READ)
// 0054f85a: LEA EDI,[ESP + 0x5f8]
//   XREF to: Stack[-0xac] (DATA)
// 0054f861: MOV dword ptr [EAX],EBP
// 0054f863: SUB ECX,ECX
// 0054f865: DEC ECX
// 0054f866: XOR EAX,EAX
// 0054f868: SCASB.REPNE ES:EDI
// 0054f86a: NOT ECX
// 0054f86c: DEC ECX
// 0054f86d: INC ECX
// 0054f86e: ADD EBP,ECX
// 0054f870: CMP EBP,dword ptr [ESP + 0x678]
//   XREF to: Stack[-0x2c] (READ)
// 0054f877: JLE 0x0054f8dc
//   XREF to: 0054f8dc (CONDITIONAL_JUMP)
// 0054f879: MOV ESI,dword ptr [ESP + 0x67c]
//   XREF to: Stack[-0x28] (READ)
// 0054f880: MOV EAX,dword ptr [EBX + 0x410]
// 0054f886: SUB EAX,ESI
// 0054f888: IMUL EAX,EAX,0x30
// 0054f88b: PUSH 0x17b
// 0054f890: PUSH 0x6401c8
//   XREF to: 006401c8 (DATA)
// 0054f895: LEA EDX,[EAX + EBP*0x1]
// 0054f898: PUSH EDX
// 0054f899: MOV EAX,dword ptr [EBX + 0x418]
// 0054f89f: PUSH EAX
// 0054f8a0: MOV dword ptr [ESP + 0x688],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0054f8a7: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0054f8ac: ADD ESP,0x10
// 0054f8af: MOV dword ptr [EBX + 0x418],EAX
// 0054f8b5: TEST EAX,EAX
// 0054f8b7: JNZ 0x0054f8dc
//   XREF to: 0054f8dc (CONDITIONAL_JUMP)
// 0054f8b9: MOV ECX,0x6401da
//   XREF to: 006401da (PARAM)
// 0054f8be: MOV ESI,0x17c
// 0054f8c3: PUSH 0x6401ec
//   XREF to: 006401ec (DATA)
// 0054f8c8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054f8ce: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0054f8d4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054f8d9: ADD ESP,0x4
// 0054f8dc: MOV EDI,dword ptr [ESP + 0x68c]
//   Label: LAB_0054f8dc
//   XREF to: Stack[-0x18] (READ)
// 0054f8e3: MOV EAX,dword ptr [EBX + 0x414]
// 0054f8e9: ADD EAX,EDI
// 0054f8eb: MOV EDI,dword ptr [EBX + 0x418]
// 0054f8f1: MOV EDX,dword ptr [EAX]
// 0054f8f3: LEA ESI,[ESP + 0x5f8]
//   XREF to: Stack[-0xac] (DATA)
// 0054f8fa: ADD EDI,EDX
// 0054f8fc: PUSH EDI
// 0054f8fd: MOV AL,byte ptr [ESI]
//   Label: LAB_0054f8fd
//   XREF to: Stack[-0xac] (DATA)
// 0054f8ff: MOV byte ptr [EDI],AL
// 0054f901: CMP AL,0x0
// 0054f903: JZ 0x0054f915
//   XREF to: 0054f915 (CONDITIONAL_JUMP)
// 0054f905: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xab] (READ)
// 0054f908: ADD ESI,0x2
// 0054f90b: MOV byte ptr [EDI + 0x1],AL
// 0054f90e: ADD EDI,0x2
// 0054f911: CMP AL,0x0
// 0054f913: JNZ 0x0054f8fd
//   XREF to: 0054f8fd (CONDITIONAL_JUMP)
// 0054f915: POP EDI
//   Label: LAB_0054f915
// 0054f916: MOV EDX,dword ptr [ESP + 0x68c]
//   XREF to: Stack[-0x18] (READ)
// 0054f91d: MOV EAX,dword ptr [EBX + 0x414]
// 0054f923: ADD EDX,EAX
// 0054f925: MOV EAX,dword ptr [ESP + 0x638]
//   XREF to: Stack[-0x6c] (READ)
// 0054f92c: MOV dword ptr [EDX + 0x4],EAX
// 0054f92f: MOV ECX,dword ptr [ESP + 0x68c]
//   XREF to: Stack[-0x18] (READ)
// 0054f936: MOV EDX,dword ptr [EBX + 0x414]
// 0054f93c: ADD EDX,ECX
// 0054f93e: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[-0x68] (READ)
// 0054f945: MOV dword ptr [EDX + 0x8],EAX
// 0054f948: MOV EAX,dword ptr [EBX + 0x414]
// 0054f94e: LEA EDX,[ECX + EAX*0x1]
// 0054f951: MOV EAX,dword ptr [ESP + 0x644]
//   XREF to: Stack[-0x60] (READ)
// 0054f958: MOV dword ptr [EDX + 0x10],EAX
// 0054f95b: MOV EDI,dword ptr [ESP + 0x67c]
//   XREF to: Stack[-0x28] (READ)
// 0054f962: MOV EAX,dword ptr [EBX + 0x414]
// 0054f968: INC EDI
// 0054f969: LEA EDX,[ECX + EAX*0x1]
// 0054f96c: MOV EAX,dword ptr [EBX + 0x104]
// 0054f972: MOV dword ptr [ESP + 0x67c],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0054f979: MOV dword ptr [EDX + 0xc],EAX
// 0054f97c: LEA ESI,[ECX + 0x14]
// 0054f97f: MOV EDX,dword ptr [EBX + 0x410]
// 0054f985: MOV dword ptr [ESP + 0x68c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0054f98c: CMP EDI,EDX
// 0054f98e: JL 0x0054f831
//   XREF to: 0054f831 (CONDITIONAL_JUMP)
// 0054f994: CMP EBP,dword ptr [ESP + 0x678]
//   Label: LAB_0054f994
//   XREF to: Stack[-0x2c] (READ)
// 0054f99b: JGE 0x0054f9a8
//   Label: LAB_0054f99b
//   XREF to: 0054f9a8 (CONDITIONAL_JUMP)
// 0054f99d: MOV dword ptr [ESP + 0x670],0x1
//   XREF to: Stack[-0x34] (WRITE)
// 0054f9a8: PUSH 0x22d
//   Label: LAB_0054f9a8
// 0054f9ad: PUSH 0x6402ca
//   XREF to: 006402ca (DATA)
// 0054f9b2: MOV EDI,dword ptr [ESP + 0x68c]
//   XREF to: Stack[-0x20] (READ)
// 0054f9b9: PUSH EDI
// 0054f9ba: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054f9bf: ADD ESP,0xc
// 0054f9c2: CMP dword ptr [ESP + 0x670],0x0
//   XREF to: Stack[-0x34] (READ)
// 0054f9ca: JZ 0x0054fa13
//   XREF to: 0054fa13 (CONDITIONAL_JUMP)
// 0054f9cc: PUSH 0x233
// 0054f9d1: PUSH 0x6402dc
//   XREF to: 006402dc (DATA)
// 0054f9d6: PUSH EBP
// 0054f9d7: MOV EDX,dword ptr [EBX + 0x418]
// 0054f9dd: PUSH EDX
// 0054f9de: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0054f9e3: ADD ESP,0x10
// 0054f9e6: MOV dword ptr [EBX + 0x418],EAX
// 0054f9ec: TEST EAX,EAX
// 0054f9ee: JNZ 0x0054fa13
//   XREF to: 0054fa13 (CONDITIONAL_JUMP)
// 0054f9f0: MOV ESI,0x6402ee
//   XREF to: 006402ee (DATA)
// 0054f9f5: MOV EDI,0x235
// 0054f9fa: PUSH 0x640300
//   XREF to: 00640300 (DATA)
// 0054f9ff: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0054fa05: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0054fa0b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054fa10: ADD ESP,0x4
// 0054fa13: MOV EAX,dword ptr [EBX + 0x410]
//   Label: LAB_0054fa13
// 0054fa19: XOR ECX,ECX
// 0054fa1b: TEST EAX,EAX
// 0054fa1d: JLE 0x0054fa55
//   XREF to: 0054fa55 (CONDITIONAL_JUMP)
// 0054fa1f: XOR EDX,EDX
// 0054fa21: MOV EAX,dword ptr [EBX + 0x414]
//   Label: LAB_0054fa21
// 0054fa27: ADD EAX,EDX
// 0054fa29: MOV ESI,dword ptr [EAX]
// 0054fa2b: TEST ESI,ESI
// 0054fa2d: JL 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fa33: CMP EBP,ESI
// 0054fa35: JLE 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fa3b: MOV ESI,dword ptr [EBX + 0x418]
// 0054fa41: MOV EDI,dword ptr [EAX]
// 0054fa43: ADD ESI,EDI
// 0054fa45: MOV dword ptr [EAX],ESI
// 0054fa47: INC ECX
// 0054fa48: MOV EAX,dword ptr [EBX + 0x410]
// 0054fa4e: ADD EDX,0x14
// 0054fa51: CMP ECX,EAX
// 0054fa53: JL 0x0054fa21
//   XREF to: 0054fa21 (CONDITIONAL_JUMP)
// 0054fa55: PUSH 0x54f630
//   Label: LAB_0054fa55
//   XREF to: 0054f630 (DATA)
// 0054fa5a: PUSH 0x14
// 0054fa5c: MOV EDX,dword ptr [EBX + 0x410]
// 0054fa62: PUSH EDX
// 0054fa63: MOV ECX,dword ptr [EBX + 0x414]
// 0054fa69: PUSH ECX
// 0054fa6a: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 0054fa6f: MOV EAX,0x1
// 0054fa74: ADD ESP,0x10
// 0054fa77: ADD ESP,0x694
// 0054fa7d: POP EBP
// 0054fa7e: POP EDI
// 0054fa7f: POP ESI
// 0054fa80: POP EBX
// 0054fa81: RET
// 0054fa82: PUSH EBP
//   Label: LAB_0054fa82
// 0054fa83: PUSH 0x4
// 0054fa85: PUSH 0x1
// 0054fa87: LEA EAX,[ESP + 0x680]
//   XREF to: Stack[-0x30] (DATA)
// 0054fa8e: PUSH EAX
// 0054fa8f: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fa94: ADD ESP,0x10
// 0054fa97: PUSH 0x0
// 0054fa99: PUSH 0x0
// 0054fa9b: PUSH EBP
// 0054fa9c: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0054faa1: ADD ESP,0xc
// 0054faa4: CMP byte ptr [ESP + 0x674],0x50
//   XREF to: Stack[-0x30] (READ)
// 0054faac: JNZ 0x0054fad0
//   XREF to: 0054fad0 (CONDITIONAL_JUMP)
// 0054faae: CMP byte ptr [ESP + 0x675],0x4f
//   XREF to: Stack[-0x2f] (READ)
// 0054fab6: JNZ 0x0054fad0
//   XREF to: 0054fad0 (CONDITIONAL_JUMP)
// 0054fab8: CMP byte ptr [ESP + 0x676],0x44
//   XREF to: Stack[-0x2e] (READ)
// 0054fac0: JNZ 0x0054fad0
//   XREF to: 0054fad0 (CONDITIONAL_JUMP)
// 0054fac2: CMP byte ptr [ESP + 0x677],0x33
//   XREF to: Stack[-0x2d] (READ)
// 0054faca: JZ 0x0054fc6c
//   XREF to: 0054fc6c (CONDITIONAL_JUMP)
// 0054fad0: CMP byte ptr [ESP + 0x674],0x50
//   Label: LAB_0054fad0
//   XREF to: Stack[-0x30] (READ)
// 0054fad8: JNZ 0x0054fe58
//   XREF to: 0054fe58 (CONDITIONAL_JUMP)
// 0054fade: CMP byte ptr [ESP + 0x675],0x4f
//   XREF to: Stack[-0x2f] (READ)
// 0054fae6: JNZ 0x0054fe58
//   XREF to: 0054fe58 (CONDITIONAL_JUMP)
// 0054faec: CMP byte ptr [ESP + 0x676],0x44
//   XREF to: Stack[-0x2e] (READ)
// 0054faf4: JNZ 0x0054fe58
//   XREF to: 0054fe58 (CONDITIONAL_JUMP)
// 0054fafa: CMP byte ptr [ESP + 0x677],0x32
//   XREF to: Stack[-0x2d] (READ)
// 0054fb02: JNZ 0x0054fe58
//   XREF to: 0054fe58 (CONDITIONAL_JUMP)
// 0054fb08: MOV EBP,dword ptr [ESP + 0x684]
//   XREF to: Stack[-0x20] (READ)
// 0054fb0f: PUSH EBP
// 0054fb10: PUSH 0x60
// 0054fb12: PUSH 0x1
// 0054fb14: LEA EAX,[ESP + 0x550]
//   XREF to: Stack[-0x160] (DATA)
// 0054fb1b: PUSH EAX
// 0054fb1c: LEA ESI,[ESP + 0x55c]
//   XREF to: Stack[-0x158] (DATA)
// 0054fb23: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fb28: ADD ESP,0x10
// 0054fb2b: LEA EDI,[EBX + 0x108]
// 0054fb31: MOV dword ptr [EBX],0xc8
// 0054fb37: PUSH EDI
// 0054fb38: MOV AL,byte ptr [ESI]
//   Label: LAB_0054fb38
//   XREF to: Stack[-0x158] (DATA)
// 0054fb3a: MOV byte ptr [EDI],AL
// 0054fb3c: CMP AL,0x0
// 0054fb3e: JZ 0x0054fb50
//   XREF to: 0054fb50 (CONDITIONAL_JUMP)
// 0054fb40: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x157] (READ)
// 0054fb43: ADD ESI,0x2
// 0054fb46: MOV byte ptr [EDI + 0x1],AL
// 0054fb49: ADD EDI,0x2
// 0054fb4c: CMP AL,0x0
// 0054fb4e: JNZ 0x0054fb38
//   XREF to: 0054fb38 (CONDITIONAL_JUMP)
// 0054fb50: POP EDI
//   Label: LAB_0054fb50
// 0054fb51: MOV EAX,dword ptr [ESP + 0x59c]
//   XREF to: Stack[-0x108] (READ)
// 0054fb58: MOV dword ptr [EBX + 0x410],EAX
// 0054fb5e: MOV EAX,dword ptr [ESP + 0x5a0]
//   XREF to: Stack[-0x104] (READ)
// 0054fb65: MOV EDX,dword ptr [EBX + 0x410]
// 0054fb6b: MOV dword ptr [EBX + 0x41c],EAX
// 0054fb71: LEA EAX,[EDX*0x4 + 0x0]
// 0054fb78: PUSH 0x1da
// 0054fb7d: ADD EAX,EDX
// 0054fb7f: PUSH 0x640240
//   XREF to: 00640240 (DATA)
// 0054fb84: SHL EAX,0x2
// 0054fb87: PUSH EAX
// 0054fb88: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054fb8d: ADD ESP,0xc
// 0054fb90: MOV dword ptr [EBX + 0x414],EAX
// 0054fb96: TEST EAX,EAX
// 0054fb98: JZ 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fb9e: PUSH EBP
// 0054fb9f: PUSH 0x14
// 0054fba1: MOV ECX,dword ptr [EBX + 0x410]
// 0054fba7: PUSH ECX
// 0054fba8: PUSH EAX
// 0054fba9: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fbae: MOV EDX,dword ptr [EBX + 0x410]
// 0054fbb4: MOV EBP,dword ptr [EBX + 0x414]
// 0054fbba: LEA EAX,[EDX*0x4 + 0x0]
// 0054fbc1: MOV EBP,dword ptr [EBP + 0x8]
// 0054fbc4: ADD EAX,EDX
// 0054fbc6: SUB EBP,0x60
// 0054fbc9: SHL EAX,0x2
// 0054fbcc: SUB EBP,EAX
// 0054fbce: ADD ESP,0x10
// 0054fbd1: CMP EBP,EDX
// 0054fbd3: JL 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fbd9: MOV EAX,EDX
// 0054fbdb: SHL EAX,0x8
// 0054fbde: CMP EBP,EAX
// 0054fbe0: JG 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fbe6: PUSH 0x1e7
// 0054fbeb: PUSH 0x640252
//   XREF to: 00640252 (DATA)
// 0054fbf0: PUSH EBP
// 0054fbf1: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054fbf6: ADD ESP,0xc
// 0054fbf9: MOV dword ptr [EBX + 0x418],EAX
// 0054fbff: TEST EAX,EAX
// 0054fc01: JNZ 0x0054fc26
//   XREF to: 0054fc26 (CONDITIONAL_JUMP)
// 0054fc03: MOV EDX,0x640264
//   XREF to: 00640264 (PARAM)
// 0054fc08: MOV ECX,0x1e8
// 0054fc0d: PUSH 0x640276
//   XREF to: 00640276 (DATA)
// 0054fc12: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0054fc18: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0054fc1e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054fc23: ADD ESP,0x4
// 0054fc26: MOV ESI,dword ptr [ESP + 0x684]
//   Label: LAB_0054fc26
//   XREF to: Stack[-0x20] (READ)
// 0054fc2d: PUSH ESI
// 0054fc2e: PUSH 0x1
// 0054fc30: PUSH EBP
// 0054fc31: MOV EDI,dword ptr [EBX + 0x418]
// 0054fc37: PUSH EDI
// 0054fc38: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fc3d: MOV EDX,dword ptr [EBX + 0x410]
// 0054fc43: DEC EDX
// 0054fc44: LEA EAX,[EDX*0x4 + 0x0]
// 0054fc4b: ADD EAX,EDX
// 0054fc4d: SHL EAX,0x2
// 0054fc50: MOV EDX,dword ptr [EBX + 0x414]
// 0054fc56: ADD EDX,EAX
// 0054fc58: MOV EAX,dword ptr [EDX + 0x8]
// 0054fc5b: ADD EAX,dword ptr [EDX + 0x4]
// 0054fc5e: ADD ESP,0x10
// 0054fc61: MOV dword ptr [EBX + 0x420],EAX
// 0054fc67: JMP 0x0054f9a8
//   XREF to: 0054f9a8 (UNCONDITIONAL_JUMP)
// 0054fc6c: PUSH EBP
//   Label: LAB_0054fc6c
// 0054fc6d: PUSH 0x120
// 0054fc72: PUSH 0x1
// 0054fc74: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x490] (DATA)
// 0054fc7b: PUSH EAX
// 0054fc7c: LEA ESI,[ESP + 0x22c]
//   XREF to: Stack[-0x488] (DATA)
// 0054fc83: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fc88: ADD ESP,0x10
// 0054fc8b: LEA EDI,[EBX + 0x108]
// 0054fc91: MOV dword ptr [EBX],0xc8
// 0054fc97: PUSH EDI
// 0054fc98: MOV AL,byte ptr [ESI]
//   Label: LAB_0054fc98
//   XREF to: Stack[-0x488] (DATA)
// 0054fc9a: MOV byte ptr [EDI],AL
// 0054fc9c: CMP AL,0x0
// 0054fc9e: JZ 0x0054fcb0
//   XREF to: 0054fcb0 (CONDITIONAL_JUMP)
// 0054fca0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x487] (READ)
// 0054fca3: ADD ESI,0x2
// 0054fca6: MOV byte ptr [EDI + 0x1],AL
// 0054fca9: ADD EDI,0x2
// 0054fcac: CMP AL,0x0
// 0054fcae: JNZ 0x0054fc98
//   XREF to: 0054fc98 (CONDITIONAL_JUMP)
// 0054fcb0: POP EDI
//   Label: LAB_0054fcb0
// 0054fcb1: LEA ESI,[ESP + 0x270]
//   XREF to: Stack[-0x434] (DATA)
// 0054fcb8: LEA EDI,[EBX + 0x208]
// 0054fcbe: PUSH EDI
// 0054fcbf: MOV AL,byte ptr [ESI]
//   Label: LAB_0054fcbf
//   XREF to: Stack[-0x434] (DATA)
// 0054fcc1: MOV byte ptr [EDI],AL
// 0054fcc3: CMP AL,0x0
// 0054fcc5: JZ 0x0054fcd7
//   XREF to: 0054fcd7 (CONDITIONAL_JUMP)
// 0054fcc7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x433] (READ)
// 0054fcca: ADD ESI,0x2
// 0054fccd: MOV byte ptr [EDI + 0x1],AL
// 0054fcd0: ADD EDI,0x2
// 0054fcd3: CMP AL,0x0
// 0054fcd5: JNZ 0x0054fcbf
//   XREF to: 0054fcbf (CONDITIONAL_JUMP)
// 0054fcd7: POP EDI
//   Label: LAB_0054fcd7
// 0054fcd8: LEA ESI,[ESP + 0x2c0]
//   XREF to: Stack[-0x3e4] (DATA)
// 0054fcdf: LEA EDI,[EBX + 0x308]
// 0054fce5: PUSH EDI
// 0054fce6: MOV AL,byte ptr [ESI]
//   Label: LAB_0054fce6
//   XREF to: Stack[-0x3e4] (DATA)
// 0054fce8: MOV byte ptr [EDI],AL
// 0054fcea: CMP AL,0x0
// 0054fcec: JZ 0x0054fcfe
//   XREF to: 0054fcfe (CONDITIONAL_JUMP)
// 0054fcee: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x3e3] (READ)
// 0054fcf1: ADD ESI,0x2
// 0054fcf4: MOV byte ptr [EDI + 0x1],AL
// 0054fcf7: ADD EDI,0x2
// 0054fcfa: CMP AL,0x0
// 0054fcfc: JNZ 0x0054fce6
//   XREF to: 0054fce6 (CONDITIONAL_JUMP)
// 0054fcfe: POP EDI
//   Label: LAB_0054fcfe
// 0054fcff: MOV EAX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x394] (READ)
// 0054fd06: MOV dword ptr [EBX + 0x410],EAX
// 0054fd0c: MOV EAX,dword ptr [ESP + 0x32c]
//   XREF to: Stack[-0x378] (READ)
// 0054fd13: MOV dword ptr [EBX + 0x41c],EAX
// 0054fd19: MOV EAX,dword ptr [ESP + 0x324]
//   XREF to: Stack[-0x380] (READ)
// 0054fd20: MOV dword ptr [EBX + 0x424],EAX
// 0054fd26: MOV EAX,dword ptr [ESP + 0x31c]
//   XREF to: Stack[-0x388] (READ)
// 0054fd2d: MOV EDX,dword ptr [EBX + 0x410]
// 0054fd33: MOV dword ptr [EBX + 0x408],EAX
// 0054fd39: LEA EAX,[EDX*0x4 + 0x0]
// 0054fd40: PUSH 0x1ab
// 0054fd45: ADD EAX,EDX
// 0054fd47: PUSH 0x6401fb
//   XREF to: 006401fb (DATA)
// 0054fd4c: SHL EAX,0x2
// 0054fd4f: PUSH EAX
// 0054fd50: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054fd55: ADD ESP,0xc
// 0054fd58: MOV dword ptr [EBX + 0x414],EAX
// 0054fd5e: TEST EAX,EAX
// 0054fd60: JZ 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fd66: PUSH 0x0
// 0054fd68: MOV EDI,dword ptr [ESP + 0x318]
//   XREF to: Stack[-0x390] (READ)
// 0054fd6f: PUSH EDI
// 0054fd70: PUSH EBP
// 0054fd71: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0054fd76: ADD ESP,0xc
// 0054fd79: PUSH EBP
// 0054fd7a: PUSH 0x14
// 0054fd7c: MOV EAX,dword ptr [EBX + 0x410]
// 0054fd82: PUSH EAX
// 0054fd83: MOV EDX,dword ptr [EBX + 0x414]
// 0054fd89: PUSH EDX
// 0054fd8a: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fd8f: MOV DH,byte ptr [EBP + 0xc]
// 0054fd92: ADD ESP,0x10
// 0054fd95: TEST DH,0x20
// 0054fd98: JNZ 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fd9e: MOV EBP,dword ptr [ESP + 0x320]
//   XREF to: Stack[-0x384] (READ)
// 0054fda5: MOV ECX,dword ptr [EBX + 0x410]
// 0054fdab: CMP EBP,ECX
// 0054fdad: JL 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fdb3: MOV EAX,ECX
// 0054fdb5: SHL EAX,0x8
// 0054fdb8: CMP EAX,EBP
// 0054fdba: JL 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fdc0: PUSH 0x1ba
// 0054fdc5: PUSH 0x64020d
//   XREF to: 0064020d (DATA)
// 0054fdca: PUSH EBP
// 0054fdcb: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054fdd0: ADD ESP,0xc
// 0054fdd3: MOV dword ptr [EBX + 0x418],EAX
// 0054fdd9: TEST EAX,EAX
// 0054fddb: JNZ 0x0054fe00
//   XREF to: 0054fe00 (CONDITIONAL_JUMP)
// 0054fddd: MOV EDX,0x64021f
//   XREF to: 0064021f (PARAM)
// 0054fde2: MOV ECX,0x1bb
// 0054fde7: PUSH 0x640231
//   XREF to: 00640231 (DATA)
// 0054fdec: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0054fdf2: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0054fdf8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054fdfd: ADD ESP,0x4
// 0054fe00: MOV ESI,dword ptr [ESP + 0x684]
//   Label: LAB_0054fe00
//   XREF to: Stack[-0x20] (READ)
// 0054fe07: PUSH ESI
// 0054fe08: PUSH 0x1
// 0054fe0a: PUSH EBP
// 0054fe0b: MOV EDI,dword ptr [EBX + 0x418]
// 0054fe11: PUSH EDI
// 0054fe12: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fe17: MOV CL,byte ptr [ESI + 0xc]
// 0054fe1a: ADD ESP,0x10
// 0054fe1d: TEST CL,0x20
// 0054fe20: JNZ 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fe26: PUSH ESI
// 0054fe27: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 0054fe2c: MOV EDX,dword ptr [EBX + 0x424]
// 0054fe32: MOV dword ptr [EBX + 0x428],EAX
// 0054fe38: MOV EAX,EDX
// 0054fe3a: SHL EAX,0x5
// 0054fe3d: ADD EDX,EAX
// 0054fe3f: SHL EDX,0x3
// 0054fe42: MOV EAX,dword ptr [EBX + 0x428]
// 0054fe48: ADD EAX,EDX
// 0054fe4a: ADD ESP,0x4
// 0054fe4d: MOV dword ptr [EBX + 0x420],EAX
// 0054fe53: JMP 0x0054f9a8
//   XREF to: 0054f9a8 (UNCONDITIONAL_JUMP)
// 0054fe58: MOV EDI,dword ptr [ESP + 0x684]
//   Label: LAB_0054fe58
//   XREF to: Stack[-0x20] (READ)
// 0054fe5f: PUSH EDI
// 0054fe60: PUSH 0x54
// 0054fe62: PUSH 0x1
// 0054fe64: LEA EAX,[ESP + 0x5b0]
//   XREF to: Stack[-0x100] (DATA)
// 0054fe6b: PUSH EAX
// 0054fe6c: MOV dword ptr [EBX],0x1
// 0054fe72: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054fe77: ADD ESP,0x10
// 0054fe7a: MOV EBP,dword ptr [ESP + 0x5a4]
//   XREF to: Stack[-0x100] (READ)
// 0054fe81: CMP EBP,0x1
// 0054fe84: JL 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fe8a: CMP EBP,0x1869f
// 0054fe90: JG 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fe96: LEA ESI,[ESP + 0x5a8]
//   XREF to: Stack[-0xfc] (DATA)
// 0054fe9d: LEA EDI,[EBX + 0x108]
// 0054fea3: MOV dword ptr [EBX + 0x410],EBP
// 0054fea9: PUSH EDI
// 0054feaa: MOV AL,byte ptr [ESI]
//   Label: LAB_0054feaa
//   XREF to: Stack[-0xfc] (DATA)
// 0054feac: MOV byte ptr [EDI],AL
// 0054feae: CMP AL,0x0
// 0054feb0: JZ 0x0054fec2
//   XREF to: 0054fec2 (CONDITIONAL_JUMP)
// 0054feb2: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xfb] (READ)
// 0054feb5: ADD ESI,0x2
// 0054feb8: MOV byte ptr [EDI + 0x1],AL
// 0054febb: ADD EDI,0x2
// 0054febe: CMP AL,0x0
// 0054fec0: JNZ 0x0054feaa
//   XREF to: 0054feaa (CONDITIONAL_JUMP)
// 0054fec2: POP EDI
//   Label: LAB_0054fec2
// 0054fec3: MOV EDX,dword ptr [EBX + 0x410]
// 0054fec9: LEA EAX,[EDX*0x4 + 0x0]
// 0054fed0: PUSH 0x20a
// 0054fed5: ADD EAX,EDX
// 0054fed7: PUSH 0x640285
//   XREF to: 00640285 (DATA)
// 0054fedc: SHL EAX,0x2
// 0054fedf: PUSH EAX
// 0054fee0: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054fee5: ADD ESP,0xc
// 0054fee8: MOV dword ptr [EBX + 0x414],EAX
// 0054feee: TEST EAX,EAX
// 0054fef0: JZ 0x0054f6fe
//   XREF to: 0054f6fe (CONDITIONAL_JUMP)
// 0054fef6: XOR EBP,EBP
// 0054fef8: MOV EDI,dword ptr [EBX + 0x410]
// 0054fefe: MOV dword ptr [ESP + 0x688],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0054ff05: MOV dword ptr [ESP + 0x680],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0054ff0c: TEST EDI,EDI
// 0054ff0e: JLE 0x0055007a
//   XREF to: 0055007a (CONDITIONAL_JUMP)
// 0054ff14: MOV dword ptr [ESP + 0x690],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0054ff1b: MOV EAX,dword ptr [ESP + 0x684]
//   Label: LAB_0054ff1b
//   XREF to: Stack[-0x20] (READ)
// 0054ff22: PUSH EAX
// 0054ff23: PUSH 0x28
// 0054ff25: PUSH 0x1
// 0054ff27: LEA EAX,[ESP + 0x654]
//   XREF to: Stack[-0x5c] (DATA)
// 0054ff2e: PUSH EAX
// 0054ff2f: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054ff34: ADD ESP,0x10
// 0054ff37: MOV EAX,dword ptr [EBX + 0x414]
// 0054ff3d: ADD EAX,dword ptr [ESP + 0x690]
//   XREF to: Stack[-0x14] (READ)
// 0054ff44: LEA EDI,[ESP + 0x648]
//   XREF to: Stack[-0x5c] (DATA)
// 0054ff4b: MOV dword ptr [EAX],EBP
// 0054ff4d: SUB ECX,ECX
// 0054ff4f: DEC ECX
// 0054ff50: XOR EAX,EAX
// 0054ff52: SCASB.REPNE ES:EDI
// 0054ff54: NOT ECX
// 0054ff56: DEC ECX
// 0054ff57: INC ECX
// 0054ff58: ADD EBP,ECX
// 0054ff5a: CMP EBP,dword ptr [ESP + 0x688]
//   XREF to: Stack[-0x1c] (READ)
// 0054ff61: JLE 0x0054ffc6
//   XREF to: 0054ffc6 (CONDITIONAL_JUMP)
// 0054ff63: MOV ESI,dword ptr [ESP + 0x680]
//   XREF to: Stack[-0x24] (READ)
// 0054ff6a: MOV EAX,dword ptr [EBX + 0x410]
// 0054ff70: SUB EAX,ESI
// 0054ff72: IMUL EAX,EAX,0x30
// 0054ff75: PUSH 0x219
// 0054ff7a: PUSH 0x640297
//   XREF to: 00640297 (DATA)
// 0054ff7f: LEA EDX,[EAX + EBP*0x1]
// 0054ff82: PUSH EDX
// 0054ff83: MOV EAX,dword ptr [EBX + 0x418]
// 0054ff89: PUSH EAX
// 0054ff8a: MOV dword ptr [ESP + 0x698],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0054ff91: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0054ff96: ADD ESP,0x10
// 0054ff99: MOV dword ptr [EBX + 0x418],EAX
// 0054ff9f: TEST EAX,EAX
// 0054ffa1: JNZ 0x0054ffc6
//   XREF to: 0054ffc6 (CONDITIONAL_JUMP)
// 0054ffa3: MOV ECX,0x6402a9
//   XREF to: 006402a9 (PARAM)
// 0054ffa8: MOV ESI,0x21a
// 0054ffad: PUSH 0x6402bb
//   XREF to: 006402bb (DATA)
// 0054ffb2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054ffb8: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0054ffbe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054ffc3: ADD ESP,0x4
// 0054ffc6: MOV EDX,dword ptr [ESP + 0x690]
//   Label: LAB_0054ffc6
//   XREF to: Stack[-0x14] (READ)
// 0054ffcd: MOV EAX,dword ptr [EBX + 0x414]
// 0054ffd3: ADD EAX,EDX
// 0054ffd5: MOV EDI,dword ptr [EBX + 0x418]
// 0054ffdb: MOV ECX,dword ptr [EAX]
// 0054ffdd: LEA ESI,[ESP + 0x648]
//   XREF to: Stack[-0x5c] (DATA)
// 0054ffe4: ADD EDI,ECX
// 0054ffe6: PUSH EDI
// 0054ffe7: MOV AL,byte ptr [ESI]
//   Label: LAB_0054ffe7
//   XREF to: Stack[-0x5c] (DATA)
// 0054ffe9: MOV byte ptr [EDI],AL
// 0054ffeb: CMP AL,0x0
// 0054ffed: JZ 0x0054ffff
//   XREF to: 0054ffff (CONDITIONAL_JUMP)
// 0054ffef: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x5b] (READ)
// 0054fff2: ADD ESI,0x2
// 0054fff5: MOV byte ptr [EDI + 0x1],AL
// 0054fff8: ADD EDI,0x2
// 0054fffb: CMP AL,0x0
// 0054fffd: JNZ 0x0054ffe7
//   XREF to: 0054ffe7 (CONDITIONAL_JUMP)
// 0054ffff: POP EDI
//   Label: LAB_0054ffff
// 00550000: MOV EAX,dword ptr [EBX + 0x414]
// 00550006: ADD EDX,EAX
// 00550008: MOV EAX,dword ptr [ESP + 0x668]
//   XREF to: Stack[-0x3c] (READ)
// 0055000f: MOV dword ptr [EDX + 0x4],EAX
// 00550012: MOV EDX,dword ptr [ESP + 0x690]
//   XREF to: Stack[-0x14] (READ)
// 00550019: MOV EAX,dword ptr [EBX + 0x414]
// 0055001f: ADD EDX,EAX
// 00550021: MOV EAX,dword ptr [ESP + 0x66c]
//   XREF to: Stack[-0x38] (READ)
// 00550028: MOV dword ptr [EDX + 0x8],EAX
// 0055002b: MOV ESI,dword ptr [ESP + 0x690]
//   XREF to: Stack[-0x14] (READ)
// 00550032: MOV EAX,dword ptr [EBX + 0x414]
// 00550038: ADD EAX,ESI
// 0055003a: MOV dword ptr [EAX + 0x10],0x0
// 00550041: MOV EAX,dword ptr [EBX + 0x414]
// 00550047: LEA EDX,[ESI + EAX*0x1]
// 0055004a: MOV EAX,dword ptr [EBX + 0x104]
// 00550050: LEA EDI,[ESI + 0x14]
// 00550053: MOV dword ptr [EDX + 0xc],EAX
// 00550056: MOV EAX,dword ptr [ESP + 0x680]
//   XREF to: Stack[-0x24] (READ)
// 0055005d: MOV dword ptr [ESP + 0x690],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00550064: INC EAX
// 00550065: MOV EDX,dword ptr [EBX + 0x410]
// 0055006b: MOV dword ptr [ESP + 0x680],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00550072: CMP EAX,EDX
// 00550074: JL 0x0054ff1b
//   XREF to: 0054ff1b (CONDITIONAL_JUMP)
// 0055007a: CMP EBP,dword ptr [ESP + 0x688]
//   Label: LAB_0055007a
//   XREF to: Stack[-0x1c] (READ)
// 00550081: JMP 0x0054f99b
//   XREF to: 0054f99b (UNCONDITIONAL_JUMP)
