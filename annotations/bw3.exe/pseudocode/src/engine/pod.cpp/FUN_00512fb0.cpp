// Name: engine_pod.cpp_FUN_00512fb0
// Address: 00512fb0
// Address Range: [[00512fb0, 00513b89]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_00512fb0(CPodFile *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_pod_cpp_FUN_00512fb0(CPodFile *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  CPodDirectoryEntry *pCVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  bool bVar13;
  byte local_8cc [256];
  char local_7cc [260];
  int local_6c8;
  uint local_6c0;
  char local_6b8 [512];
  byte local_4b8 [8];
  char local_4b0 [80];
  int local_460;
  int local_45c;
  int local_454;
  char local_450 [80];
  char local_400 [80];
  uint local_3b0;
  ulong local_3a8;
  int local_3a4;
  byte local_398 [4];
  char local_394 [256];
  int local_294;
  char local_288 [256];
  byte local_188 [8];
  char local_180 [80];
  int local_130;
  int local_12c;
  int local_128;
  char local_124 [80];
  char local_d4 [64];
  uint local_94;
  uint local_90;
  uint local_88;
  CInStreamFile local_84;
  char local_58 [32];
  int local_38;
  uint local_34;
  char local_30;
  char local_2f;
  char local_2e;
  char local_2d;
  int local_2c;
  ulong local_28;
  ulong local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar12 = 0;
  local_1c = 0;
  pcVar2 = "(Unknown error)";
  pcVar11 = local_6b8;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pcVar11 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar11 = pcVar11 + 4;
  }
  unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_84);
  engine_pod_cpp_CPodFile_cleanup_FUN_00513b90(param_1);
  engine_dosio_cpp_FUN_00465660(local_8cc,0,param_2);
  iVar5 = engine_dosio_cpp_findFileNormally_FUN_00465730(local_8cc);
  if (iVar5 == 0) {
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("File not found");
    _sprintf(local_6b8,pcVar2);
  }
  else {
    pcVar2 = local_7cc;
    pcVar11 = param_1->filename;
    do {
      cVar1 = *pcVar2;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    param_1->timestamp = local_6c0;
    iVar5 = support_trstream_cpp_FUN_00573f50(&local_84,param_1->filename,1);
    if (iVar5 == 0) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Unable to open file '%s'");
      _sprintf(local_6b8,pcVar2);
    }
    else {
      engine_dosio_cpp_splitPath_FUN_00465e50(param_2,(char *)0x0,(char *)0x0,(char *)0x0,local_288)
      ;
      iVar5 = _stricmp(local_288,&DAT_005cc4f2);
      if ((iVar5 == 0) ||
         (iVar5 = _stricmp(local_288,&DAT_005cc4f6), iVar5 == 0)) {
        iVar5 = unkafter_turret_cpp_FUN_00573c00(&local_84,local_398,0x110);
        if (iVar5 == 0x110) {
          pcVar11 = local_394;
          pcVar2 = param_1->description;
          param_1->file_count = local_294;
          do {
            cVar1 = *pcVar11;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          iVar5 = param_1->file_count;
          if ((iVar5 < 0) || (9999999 < iVar5)) goto LAB_0051345e;
          pCVar3 = FUN_005a3650(iVar5 * 0x14);
          param_1->directory_entries = pCVar3;
          if (pCVar3 == (CPodDirectoryEntry *)0x0) goto LAB_00513493;
          uVar8 = 0;
          local_28 = 0;
          local_20 = 0;
          if (0 < param_1->file_count) {
            local_2c = 0;
            do {
              iVar5 = unkafter_turret_cpp_FUN_00573c00(&local_84,local_d4,0x50);
              if (iVar5 != 0x50) goto LAB_0051316b;
              *(ulong *)(param_1->directory_entries + local_2c) = uVar8;
              uVar6 = 0xffffffff;
              pcVar2 = local_d4;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar2;
                pcVar2 = pcVar2 + (uint)bVar12 * -2 + 1;
              } while (cVar1 != '\0');
              uVar8 = uVar8 + ~uVar6;
              if ((int)local_28 < (int)uVar8) {
                local_28 = (param_1->file_count - local_20) * 0x30 + uVar8;
                pcVar2 = (char *)realloc(param_1->file_data_buffer,local_28);
                if (pcVar2 == (char *)0x0) goto LAB_00513493;
                param_1->file_data_buffer = pcVar2;
              }
              pcVar2 = local_d4;
              pcVar11 = param_1->file_data_buffer + *(int *)(param_1->directory_entries + local_2c);
              do {
                cVar1 = *pcVar2;
                *pcVar11 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar2[1];
                pcVar2 = pcVar2 + 2;
                pcVar11[1] = cVar1;
                pcVar11 = pcVar11 + 2;
              } while (cVar1 != '\0');
              *(uint *)(param_1->directory_entries + local_2c + 4) = local_94;
              *(uint *)(param_1->directory_entries + local_2c + 8) = local_90;
              *(uint *)(param_1->directory_entries + local_2c + 0x10) = local_88;
              iVar5 = local_2c + 0x14;
              local_20 = local_20 + 1;
              *(uint *)(param_1->directory_entries + local_2c + 0xc) = param_1->timestamp;
              local_2c = iVar5;
            } while (local_20 < param_1->file_count);
          }
          bVar13 = SBORROW4(uVar8,local_28);
          iVar5 = uVar8 - local_28;
LAB_005133b0:
          if (bVar13 != iVar5 < 0) {
            local_1c = 1;
          }
LAB_005133bd:
          iVar5 = unkafter_turret_cpp_FUN_00573d60(&local_84);
          if (iVar5 != 0) {
            unkafter_turret_cpp_FUN_00573db0(&local_84);
            if (local_1c != 0) {
              pcVar2 = (char *)realloc(param_1->file_data_buffer,uVar8);
              param_1->file_data_buffer = pcVar2;
              if (pcVar2 == (char *)0x0) {
                _DAT_01d71de0 = "..\\engine\\pod.cpp";
                _DAT_01d71de4 = 0x2d5;
                core_main_c_FUN_004e4330("realloc returns NULL shrinking filenameBlockSize to fit.");
              }
            }
            iVar5 = 0;
            if (0 < param_1->file_count) {
              iVar7 = 0;
              do {
                pCVar3 = param_1->directory_entries + iVar7;
                if ((*(int *)pCVar3 < 0) || ((int)uVar8 <= *(int *)pCVar3)) goto LAB_0051345e;
                *(char **)pCVar3 = param_1->file_data_buffer + *(int *)pCVar3;
                iVar5 = iVar5 + 1;
                iVar7 = iVar7 + 0x14;
              } while (iVar5 < param_1->file_count);
            }
            _qsort
                      (param_1->directory_entries,param_1->file_count,0x14,
                       engine_pod_cpp_qsortByFilename_FUN_00512f90);
            uVar9 = 1;
            goto LAB_00513090;
          }
        }
      }
      else {
        iVar5 = unkafter_turret_cpp_FUN_00573c00(&local_84,&local_30,4);
        if (iVar5 == 4) {
          unkafter_turret_cpp_FUN_00573cf0(&local_84,0,0);
          if ((((local_30 == 'P') && (local_2f == 'O')) && (local_2e == 'D')) && (local_2d == '3'))
          {
            iVar5 = unkafter_turret_cpp_FUN_00573c00(&local_84,local_4b8,0x120);
            if (iVar5 == 0x120) {
              pcVar11 = local_4b0;
              pcVar2 = param_1->description;
              param_1->pod_format_version = 300;
              do {
                cVar1 = *pcVar11;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              pcVar11 = local_450;
              pcVar2 = param_1->author_info;
              do {
                cVar1 = *pcVar11;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              pcVar11 = local_400;
              pcVar2 = param_1->copyright_info;
              do {
                cVar1 = *pcVar11;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              param_1->file_count = local_460;
              param_1->audit_count = local_45c;
              param_1->dependency_count = local_3a4;
              iVar5 = param_1->file_count;
              param_1->mount_priority = local_454;
              if ((iVar5 < 0) || (9999999 < iVar5)) goto LAB_0051345e;
              pCVar3 = FUN_005a3650(iVar5 * 0x14);
              param_1->directory_entries = pCVar3;
              if (pCVar3 == (CPodDirectoryEntry *)0x0) {
LAB_00513493:
                pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                                    ("Out of memory");
                pcVar2 = local_6b8;
                do {
                  cVar1 = *pcVar11;
                  *pcVar2 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar11[1];
                  pcVar11 = pcVar11 + 2;
                  pcVar2[1] = cVar1;
                  pcVar2 = pcVar2 + 2;
                } while (cVar1 != '\0');
                goto LAB_0051303e;
              }
              unkafter_turret_cpp_FUN_00573cf0(&local_84,local_3b0,0);
              uVar10 = param_1->file_count * 0x14;
              uVar6 = unkafter_turret_cpp_FUN_00573c00(&local_84,param_1->directory_entries,uVar10);
              if (uVar6 == uVar10) {
                uVar6 = uVar6 ^ uVar10;
                if (0 < param_1->file_count) {
                  do {
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < param_1->file_count);
                }
                if (((int)local_3a8 < param_1->file_count) ||
                   (param_1->file_count * 0x100 < (int)local_3a8)) goto LAB_0051345e;
                pcVar2 = FUN_005a3650(local_3a8);
                param_1->file_data_buffer = pcVar2;
                if (pcVar2 == (char *)0x0) goto LAB_00513493;
                uVar8 = unkafter_turret_cpp_FUN_00573c00(&local_84,pcVar2,local_3a8);
                if (uVar8 == local_3a8) {
                  uVar6 = unkafter_turret_cpp_FUN_00573d40(&local_84);
                  param_1->dependency_records_offset = uVar6;
                  param_1->total_file_size =
                       param_1->dependency_records_offset + param_1->dependency_count * 0x108;
                  uVar8 = local_3a8;
                  goto LAB_005133bd;
                }
              }
            }
          }
          else if ((((local_30 == 'P') && (local_2f == 'O')) && (local_2e == 'D')) &&
                  (local_2d == '2')) {
            iVar5 = unkafter_turret_cpp_FUN_00573c00(&local_84,local_188,0x60);
            if (iVar5 == 0x60) {
              pcVar11 = local_180;
              pcVar2 = param_1->description;
              param_1->pod_format_version = 200;
              do {
                cVar1 = *pcVar11;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              param_1->file_count = local_130;
              iVar5 = param_1->file_count;
              param_1->audit_count = local_12c;
              if ((iVar5 < 0) || (9999999 < iVar5)) goto LAB_0051345e;
              pCVar3 = FUN_005a3650(iVar5 * 0x14);
              param_1->directory_entries = pCVar3;
              if (pCVar3 == (CPodDirectoryEntry *)0x0) goto LAB_00513493;
              uVar10 = param_1->file_count * 0x14;
              uVar6 = unkafter_turret_cpp_FUN_00573c00(&local_84,pCVar3,uVar10);
              if (uVar6 == uVar10) {
                uVar6 = uVar6 ^ uVar10;
                if (0 < param_1->file_count) {
                  do {
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < param_1->file_count);
                }
                iVar5 = param_1->file_count;
                uVar8 = *(int *)(param_1->directory_entries + 8) + -0x60 + iVar5 * -0x14;
                if (((int)uVar8 < iVar5) || (iVar5 * 0x100 < (int)uVar8)) goto LAB_0051345e;
                pcVar2 = FUN_005a3650(uVar8);
                param_1->file_data_buffer = pcVar2;
                if (pcVar2 == (char *)0x0) goto LAB_00513493;
                uVar4 = unkafter_turret_cpp_FUN_00573c00(&local_84,pcVar2,uVar8);
                if (uVar4 == uVar8) {
                  iVar5 = param_1->file_count + -1;
                  param_1->total_file_size =
                       *(int *)(param_1->directory_entries + iVar5 * 0x14 + 8) +
                       *(int *)(param_1->directory_entries + iVar5 * 0x14 + 4);
                  goto LAB_005133bd;
                }
              }
            }
          }
          else {
            param_1->pod_format_version = 1;
            iVar5 = unkafter_turret_cpp_FUN_00573c00(&local_84,&local_128,0x54);
            if (iVar5 == 4) {
              pcVar11 = local_124;
              pcVar2 = param_1->description;
              param_1->file_count = local_128;
              do {
                cVar1 = *pcVar11;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              iVar5 = param_1->file_count;
              if ((-1 < iVar5) && (iVar5 < 10000000)) {
                pCVar3 = FUN_005a3650(iVar5 * 0x14);
                param_1->directory_entries = pCVar3;
                if (pCVar3 != (CPodDirectoryEntry *)0x0) {
                  uVar8 = 0;
                  local_24 = 0;
                  local_18 = 0;
                  if (0 < param_1->file_count) {
                    local_14 = 0;
                    do {
                      iVar5 = unkafter_turret_cpp_FUN_00573c00(&local_84,local_58,0x28);
                      if (iVar5 != 0x28) goto LAB_0051316b;
                      *(ulong *)(param_1->directory_entries + local_14) = uVar8;
                      uVar6 = 0xffffffff;
                      pcVar2 = local_58;
                      do {
                        if (uVar6 == 0) break;
                        uVar6 = uVar6 - 1;
                        cVar1 = *pcVar2;
                        pcVar2 = pcVar2 + (uint)bVar12 * -2 + 1;
                      } while (cVar1 != '\0');
                      uVar8 = uVar8 + ~uVar6;
                      if ((int)local_24 < (int)uVar8) {
                        local_24 = (param_1->file_count - local_18) * 0x30 + uVar8;
                        pcVar2 = (char *)realloc
                                           (param_1->file_data_buffer,local_24);
                        if (pcVar2 == (char *)0x0) goto LAB_00513493;
                        param_1->file_data_buffer = pcVar2;
                      }
                      if (((local_38 < 0) || (999999999 < local_38)) ||
                         ((local_6c8 < local_38 ||
                          ((local_34 < 0x54 || (local_6c8 - local_38 < (int)local_34))))))
                      goto LAB_0051345e;
                      pcVar2 = local_58;
                      pcVar11 = param_1->file_data_buffer +
                                *(int *)(param_1->directory_entries + local_14);
                      do {
                        cVar1 = *pcVar2;
                        *pcVar11 = cVar1;
                        if (cVar1 == '\0') break;
                        cVar1 = pcVar2[1];
                        pcVar2 = pcVar2 + 2;
                        pcVar11[1] = cVar1;
                        pcVar11 = pcVar11 + 2;
                      } while (cVar1 != '\0');
                      *(int *)(param_1->directory_entries + local_14 + 4) = local_38;
                      *(uint *)(param_1->directory_entries + local_14 + 8) = local_34;
                      *(uint *)(param_1->directory_entries + local_14 + 0x10) = 0;
                      iVar5 = local_14 + 0x14;
                      *(uint *)(param_1->directory_entries + local_14 + 0xc) = param_1->timestamp;
                      local_18 = local_18 + 1;
                      local_14 = iVar5;
                    } while (local_18 < param_1->file_count);
                  }
                  bVar13 = SBORROW4(uVar8,local_24);
                  iVar5 = uVar8 - local_24;
                  goto LAB_005133b0;
                }
                goto LAB_00513493;
              }
LAB_0051345e:
              pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                                  ("File is corrupt");
              pcVar2 = local_6b8;
              do {
                cVar1 = *pcVar11;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              goto LAB_0051303e;
            }
          }
        }
      }
LAB_0051316b:
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                          ("I/O Error accessing file, or file is corrupt");
      pcVar2 = local_6b8;
      do {
        cVar1 = *pcVar11;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
    }
  }
LAB_0051303e:
  unkafter_turret_cpp_FUN_00573db0(&local_84);
  engine_pod_cpp_CPodFile_cleanup_FUN_00513b90(param_1);
  if (param_3 != (char *)0x0) {
    pcVar2 = local_6b8;
    do {
      cVar1 = *pcVar2;
      *param_3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  uVar9 = 0;
LAB_00513090:
  unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_84,0);
  return uVar9;
}
