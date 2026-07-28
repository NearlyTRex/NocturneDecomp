// Name: engine_pod.cpp_FUN_004f7ae0
// Address: 004f7ae0
// Address Range: [[004f7ae0, 004f80d1]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_004f7ae0(CPodFile *param_1,char *param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_004f7ae0(CPodFile *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  _FILE *file;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong new_size;
  int *piVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  byte bVar16;
  int aiStackY_2004 [1977];
  char local_110;
  char local_10f;
  char local_10e;
  char local_10d;
  char local_108 [80];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  char local_ac [80];
  char local_5c [32];
  uint local_3c;
  uint local_38;
  uint local_34;
  int aiStack_30 [4];
  int local_20;
  _FILE *local_1c;
  int local_18;
  int local_14;
  
  bVar16 = 0;
  engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(param_1);
  pcVar11 = param_1->filename;
  pcVar2 = _fullpath(pcVar11,param_2,0x100);
  if (pcVar2 == (char *)0x0) {
    do {
      cVar1 = *param_2;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
  }
  uVar3 = engine_dosio_cpp_getFileTimestamp_FUN_00456910((char *)0x0,param_1->filename);
  param_1->timestamp = uVar3;
  file = _fopen(param_1->filename,"rb");
  local_1c = file;
  if (file != (_FILE *)0x0) {
    _fread(&local_110,1,0x60,file);
    if ((((local_110 == 'P') && (local_10f == 'O')) && (local_10e == 'D')) && (local_10d == '2')) {
      pcVar11 = local_108;
      pcVar2 = param_1->description;
      param_1->pod_format_version = 2;
      do {
        cVar1 = *pcVar11;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      *(uint *)param_1->author_info = local_b8;
      *(uint *)(param_1->author_info + 0xc) = local_b4;
      pvVar4 = malloc(*(int *)param_1->author_info * 0x14);
      *(void **)(param_1->author_info + 4) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        _fread(pvVar4,*(SIZE_T *)param_1->author_info,0x14,file);
        new_size = *(int *)(*(int *)(param_1->author_info + 4) + 8) + -0x60 +
                   *(int *)param_1->author_info * -0x14;
        if ((*(int *)param_1->author_info <= (int)new_size) &&
           ((int)new_size <= *(int *)param_1->author_info * 0x100)) {
          pvVar4 = malloc(new_size);
          *(void **)(param_1->author_info + 8) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            PTR_01cc4800 = "..\\engine\\pod.cpp";
            INT_01cc4804 = 0xfe;
            core_main_c_FUN_004c8440("Out of memory!");
          }
          _fread(*(void **)(param_1->author_info + 8),new_size,1,local_1c);
          iVar7 = *(int *)(param_1->author_info + 4) + (*(int *)param_1->author_info + -1) * 0x14;
          *(int *)(param_1->author_info + 0x10) = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 4);
          goto LAB_004f7d60;
        }
      }
    }
    else {
      param_1->pod_format_version = 1;
      _fseek(local_1c,0,0);
      _fread(&local_b0,1,0x54,local_1c);
      pcVar11 = local_ac;
      pcVar2 = param_1->description;
      *(uint *)param_1->author_info = local_b0;
      do {
        cVar1 = *pcVar11;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      pvVar4 = malloc(*(int *)param_1->author_info * 0x14);
      *(void **)(param_1->author_info + 4) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        new_size = 0;
        local_18 = 0;
        if (0 < *(int *)param_1->author_info) {
          iVar7 = 0;
          do {
            _fread(local_5c,1,0x28,local_1c);
            *(ulong *)(iVar7 + *(int *)(param_1->author_info + 4)) = new_size;
            uVar3 = 0xffffffff;
            pcVar2 = local_5c;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + (uint)bVar16 * -2 + 1;
            } while (cVar1 != '\0');
            new_size = new_size + ~uVar3;
            pvVar4 = realloc
                               (*(void **)(param_1->author_info + 8),new_size);
            *(void **)(param_1->author_info + 8) = pvVar4;
            if (pvVar4 == (void *)0x0) {
              PTR_01cc4800 = "..\\engine\\pod.cpp";
              INT_01cc4804 = 0x128;
              core_main_c_FUN_004c8440("Out of memory!");
            }
            pcVar11 = (char *)(*(int *)(param_1->author_info + 8) +
                              *(int *)(iVar7 + *(int *)(param_1->author_info + 4)));
            pcVar2 = local_5c;
            do {
              cVar1 = *pcVar2;
              *pcVar11 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar11[1] = cVar1;
              pcVar11 = pcVar11 + 2;
            } while (cVar1 != '\0');
            *(uint *)(*(int *)(param_1->author_info + 4) + 4 + iVar7) = local_3c;
            *(uint *)(*(int *)(param_1->author_info + 4) + iVar7 + 8) = local_38;
            *(uint *)(iVar7 + 0x10 + *(int *)(param_1->author_info + 4)) = 0;
            local_18 = local_18 + 1;
            *(uint *)(*(int *)(param_1->author_info + 4) + iVar7 + 0xc) = param_1->timestamp;
            iVar7 = iVar7 + 0x14;
          } while (local_18 < *(int *)param_1->author_info);
        }
        param_1->author_info[0xc] = '\0';
        param_1->author_info[0xd] = '\0';
        param_1->author_info[0xe] = '\0';
        param_1->author_info[0xf] = '\0';
LAB_004f7d60:
        _fclose(local_1c);
        iVar7 = 0;
        if (0 < *(int *)param_1->author_info) {
          iVar8 = 0;
          do {
            piVar5 = (int *)(*(int *)(param_1->author_info + 4) + iVar8);
            if ((*piVar5 < 0) || ((int)new_size <= *piVar5)) goto LAB_004f7b75;
            *piVar5 = *(int *)(param_1->author_info + 8) + *piVar5;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0x14;
          } while (iVar7 < *(int *)param_1->author_info);
        }
        local_20 = *(int *)param_1->author_info;
        while (local_20 = local_20 + -1, 0 < local_20) {
          if (0 < local_20) {
            local_14 = local_20 * 0x14;
            iVar8 = 0x14;
            iVar7 = 0;
            do {
              iVar6 = _stricmp
                                (*(char **)(iVar7 + *(int *)(param_1->author_info + 4)),
                                 *(char **)(*(int *)(param_1->author_info + 4) + iVar8));
              if (0 < iVar6) {
                iVar6 = *(int *)(param_1->author_info + 4);
                puVar14 = (uint *)(iVar6 + iVar7);
                piVar5 = puVar14 + (uint)bVar16 * -2 + 1;
                local_34 = *puVar14;
                piVar15 = aiStack_30 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1;
                piVar9 = piVar5 + (uint)bVar16 * -2 + 1;
                aiStack_30[(uint)bVar16 * -2] = *piVar5;
                *piVar15 = *piVar9;
                piVar15[(uint)bVar16 * -2 + 1] = piVar9[(uint)bVar16 * -2 + 1];
                (piVar15 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                     (piVar9 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
                puVar13 = (uint *)(iVar6 + iVar8);
                puVar12 = puVar14 + (uint)bVar16 * -2 + 1;
                puVar10 = puVar13 + (uint)bVar16 * -2 + 1;
                *puVar14 = *puVar13;
                puVar13 = puVar12 + (uint)bVar16 * -2 + 1;
                puVar14 = puVar10 + (uint)bVar16 * -2 + 1;
                *puVar12 = *puVar10;
                *puVar13 = *puVar14;
                puVar13[(uint)bVar16 * -2 + 1] = puVar14[(uint)bVar16 * -2 + 1];
                (puVar13 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                     (puVar14 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
                puVar14 = (uint *)(*(int *)(param_1->author_info + 4) + iVar8);
                piVar9 = puVar14 + (uint)bVar16 * -2 + 1;
                *puVar14 = local_34;
                piVar15 = piVar9 + (uint)bVar16 * -2 + 1;
                piVar5 = aiStack_30 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1;
                *piVar9 = aiStack_30[(uint)bVar16 * -2];
                *piVar15 = *piVar5;
                piVar15[(uint)bVar16 * -2 + 1] = piVar5[(uint)bVar16 * -2 + 1];
                (piVar15 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                     (piVar5 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
              }
              iVar7 = iVar7 + 0x14;
              iVar8 = iVar8 + 0x14;
            } while (iVar7 < local_14);
          }
        }
        return 1;
      }
    }
  }
LAB_004f7b75:
  if (local_1c != (_FILE *)0x0) {
    _fclose(local_1c);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(param_1);
  return 0;
}
